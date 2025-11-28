`timescale 1ns/1ps
module core_tb;

  // parameters must match the wrapper defaults
  localparam row = 8;
  localparam bw  = 4;
  localparam psum_bw = 16;
  localparam col = 8;
  localparam ADDR_W = 11;
  localparam inst_bw = ADDR_W + 4;

  localparam num_oij = 16;
  localparam num_nij = ($clog2(num_oij) + 2*padding)**2;
  localparam num_kij = 9;
  localparam padding = 1;
  localparam ic = 8;
  localparam oc = 8;
  localparam num_psums = num_nij * num_kij;

  reg clk;
  reg reset;
  reg [inst_bw-1:0] inst;
  reg [bw*col-1:0] D_xmem;
  wire [psum_bw*col-1:0] psum_mem_out;

  // Expected weights array (flattened: index = i_ch*row + o_ch)
  // second dimension indexes kernel index (kij)
  reg signed [bw-1:0] weights_to_load [row*col-1:0][num_kij-1:0];
  reg [bw-1:0] activations_to_load [((row + (2*padding))**2)-1:0][ic-1:0];
  reg signed [psum_bw-1:0] expected_psums [num_psums-1:0][oc];
  reg [bw-1:0] actual_weights_loaded [row*col-1:0];

  integer i;

  reg debug_mode;
  reg start_controller;
  reg activation_weight_mem_load;
  reg psum_memory_rd_enable;
  reg [ADDR_W-1:0] sram_mem_addr;
  wire [ADDR_W-1:0] weight_start_sram_addr;
  wire [ADDR_W-1:0] activation_start_sram_addr;

  assign weight_start_sram_addr = '0;
  assign activation_start_sram_addr = 8 * row; // after weights

  wire core_busy;

  assign inst[ADDR_W + 3] =  debug_mode; 
  assign inst[ADDR_W + 2] =  start_controller; 
  assign inst[ADDR_W + 1] =  psum_memory_rd_enable;
  assign inst[ADDR_W]     =  activation_weight_mem_load;
  assign inst[ADDR_W-1:0] =  sram_mem_addr;

  // Instantiate DUT
  core #(.bw(bw), .col(col), .row(row), .psum_bw(psum_bw)) dut (
    .clk(clk),
    .reset(reset),
    .inst(inst),
    .D_xmem(D_xmem),
    .num_nij_to_compute(num_nij),
    .num_kij_to_compute(num_kij),
    .weight_start_sram_addr(weight_start_sram_addr),
    .activation_start_sram_addr(activation_start_sram_addr),
    .core_busy(core_busy),
    .psum_mem_out(psum_mem_out)
  );

  // Clock driver
  initial begin
    clk = 0;
    forever #5 clk = ~clk; // 10 ns period
  end

  // Reset pulse
  task drive_reset;
  begin
    reset = 1;
    @(posedge clk);
    @(posedge clk);
    reset = 0;
    @(posedge clk);
  end
  endtask

  // Task: calculate expected psums
  // expected_psums[index][o_ch] where index = k * num_nij + n
  task calculate_expected_psums;
    integer k, n, o_ch, i_ch;
    integer idx;
    reg signed [psum_bw-1:0] mult;
    reg signed [psum_bw-1:0] a_ext;
    reg signed [psum_bw-1:0] w_ext;
  begin
    // zero expected psums
    for (idx = 0; idx < num_psums; idx = idx + 1) begin
      for (o_ch = 0; o_ch < oc; o_ch = o_ch + 1) begin
        expected_psums[idx][o_ch] = 0;
      end
    end

    // compute
    for (k = 0; k < num_kij; k = k + 1) begin
      for (n = 0; n < num_nij; n = n + 1) begin
        idx = k * num_nij + n;
        for (o_ch = 0; o_ch < oc; o_ch = o_ch + 1) begin
          for (i_ch = 0; i_ch < ic; i_ch = i_ch + 1) begin
            // sign-extend operands into psum width before multiply
            a_ext = $signed({1'b0, activations_to_load[n][i_ch]});
            w_ext = weights_to_load[i_ch*row + o_ch][k];
            mult = a_ext * w_ext;
            expected_psums[idx][o_ch] = expected_psums[idx][o_ch] + mult;
          end
        end
      end
    end
    $display("INFO | %0t | Calculated expected psums for %0d entries", $time, num_psums);
  end
  endtask

  // Task: read OFIFO and check outputs against expected_psums
  task check_expected_psums;
    integer p_idx;
    integer col_idx;
    integer num_errors;
    reg signed [psum_bw-1:0] actual;
    reg signed [psum_bw-1:0] expected;
  begin
    psum_memory_rd_enable = 1;

    for (p_idx = 0; p_idx < num_psums; p_idx = p_idx + 1) begin
      // wait for next psum available on OFIFO (synchronous check per posedge)
      sram_mem_addr = p_idx[ADDR_W-1:0];
      @(posedge clk);
      for (col_idx = 0; col_idx < col; col_idx = col_idx + 1) begin
        actual = psum_mem_out[(col_idx+1)*psum_bw-1 -: psum_bw];
        expected = expected_psums[p_idx][col_idx];
        if (actual !== expected) begin
          $display("ERROR | %0t | PSUM computation not matching for idx=%0d col=%0d: actual=0x%0h expected=0x%0h", $time, p_idx, col_idx, actual, expected);
          num_errors = num_errors + 1;
        end
        else begin
          $display("INFO  | %0t | PSUM computation matching for idx=%0d col=%0d: actual=0x%0h", $time, p_idx, col_idx, actual);
        end
      end
    end

    // stop read
    $display("INFO  | %0t | Number of psum computation errors = %0d out of a total of %0d", $time, num_errors, num_psums*col);
    psum_memory_rd_enable = 0;
  end
  endtask

  // Task: $signed({1'b0, vations_to_load
  // - sets padded indices (row 0, col 0, row N-1, col N-1) to 0
  // - sets interior (middle) indices to values 0..F (wrapped to bw bits)
  // - repeats for all input channels (ic)
  task initialize_activations;
    integer a_row_idx, a_col_idx, a_ic;
    integer N;
    reg [bw-1:0] val;
  begin
    N = $clog2(num_nij);
    // For each input channel
    for (a_ic = 0; a_ic < ic; a_ic = a_ic + 1) begin
      // Walk the N x N grid (including padding)
      for (a_row_idx = 0; a_row_idx < N; a_row_idx = a_row_idx + 1) begin
        for (a_col_idx = 0; a_col_idx < N; a_col_idx = a_col_idx + 1) begin
          if (a_row_idx == 0 || a_col_idx == 0 || a_row_idx == (N-1) || a_col_idx == (N-1)) begin
            // padded edge -> zero
            activations_to_load[a_row_idx*N + a_col_idx][a_ic] = {bw{1'b0}};
          end
          else begin
            // interior: generate 0..F pattern (wrap to bw bits)
            // map (r-1,c-1) into a linear index and mask to bw bits
            val = (((a_row_idx-1)*(N-2) + (a_col_idx-1)) & ((1<<bw)-1));
            activations_to_load[a_row_idx*N + a_col_idx][a_ic] = val;
          end
        end
      end
    end
  end
  endtask

  // Loaded Weights Checker
  genvar row_idx_ii, col_idx_ii;
  generate
    for (row_idx_ii = 0 ; row_idx_ii < row ; row_idx_ii++) begin
      for (col_idx_ii = 0 ; col_idx_ii < col ; col_idx_ii++) begin
        assign actual_weights_loaded[row_idx_ii*col + col_idx_ii] = dut.u_corelet_inst.u_mac_array.row_num[row_idx_ii+1].mac_row_instance.col_num[col_idx_ii+1].mac_tile_instance.b_q;
      end
    end
  endgenerate

  // Task: check that loaded weights in mac tiles match expected values
  task check_loaded_weights;
    input integer kij_idx;
    integer row_idx;
    integer col_idx;
    integer idx;
    integer errors;
    reg [bw-1:0] expected;
    reg [bw-1:0] actual;
  begin
    errors = 0;
    for (row_idx = 1; row_idx <= row; row_idx = row_idx + 1) begin
      for (col_idx = 1; col_idx <= col; col_idx = col_idx + 1) begin
        idx = (row_idx-1) * col + (col_idx-1);
        expected = weights_to_load[idx][kij_idx];
        // Hierarchical reference into the instantiated design under test
        actual = actual_weights_loaded[idx];
        if (actual !== expected) begin
          $display("ERROR | %0t | Mismatch at row %0d col %0d: actual=0x%0h expected=0x%0h", $time, row_idx-1, col_idx-1, actual, expected);
          errors = errors + 1;
        end
        else begin
          $display("INFO | %0t | Match at row %0d col %0d: value=0x%0h", $time, row_idx-1, col_idx-1, actual);
        end
      end
    end
    if (errors == 0) begin
      $display("INFO | %0t | All %0d weights match expected values", $time, row*col);
    end
    else begin
      $display("ERROR | %0t | %0d weight mismatches detected", $time, errors);
    end
  end
  endtask

  // Initialize weights_to_load array similarly to write_fifo_values in the other TB.
  // For each kij index we keep the same pattern across the second dimension.
  task initialize_weights;
    integer k, i_ch, o_ch;
    integer idx;
    reg [bw-1:0] val;
  begin
    for (k = 0; k < num_kij; k = k + 1) begin
      for (i_ch = 0; i_ch < ic; i_ch = i_ch + 1) begin
        for (o_ch = 0; o_ch < oc; o_ch = o_ch + 1) begin
          idx = i_ch * row + o_ch;
          if (i_ch % 2 == 0) begin
            val = o_ch[bw-1:0];
          end
          else begin
            val = (o_ch + row);
          end
          weights_to_load[idx][k] = val;
        end
      end
    end
    $display("INFO | %0t | Initialized weights_to_load for %0d kernel indices", $time, num_kij);
  end
  endtask

  // Task: write activation SRAM rows using the weights_to_load array
  // Packs one row of weights into D_xmem (bw*col wide) and pulses the activation write bit in `inst`.
  task write_activation_sram;
    input integer weight_or_activation; // 0 = weights, 1 = activations
    input integer kij_idx;
    integer r, c, r_max, c_max;
    reg [bw*col-1:0] packed_row;
    reg [ADDR_W-1:0] addr;
  begin
    // For each row, pack the col weights into D_xmem and pulse the activation write control
    r_max = (weight_or_activation == 0) ? row : num_nij;
    c_max = (weight_or_activation == 0) ? col : ic;

    for (r = 0; r < r_max; r = r + 1) begin
      packed_row = {bw*col{1'b0}};
      for (c = 0; c < c_max; c = c + 1) begin
        if(weight_or_activation == 0) begin
          // weights
          packed_row[(c+1)*bw-1 -: bw] = weights_to_load[c*col + r][kij_idx];
        end
        else begin
          // activations
          packed_row[(c+1)*bw-1 -: bw] = activations_to_load[r][c];
        end
      end
      D_xmem = packed_row;
      if(weight_or_activation == 0) begin
        addr = weight_start_sram_addr + r[ADDR_W-1:0];
      end
      else begin
        addr = r[ADDR_W-1:0] + activation_start_sram_addr;
      end
      sram_mem_addr = addr;
      // Set activation_weight_mem_load (inst[ADDR_W]) and address bits in inst[ADDR_W-1:0]
      activation_weight_mem_load = 1;
      @(posedge clk);
    end
    // clear D_xmem after writes
    D_xmem = {bw*col{1'b0}};
    activation_weight_mem_load = 0;
    sram_mem_addr = 0;
    $display("INFO | %0t | Wrote %0d rows into activation SRAM via D_xmem", $time, row);
  end
  endtask

  // Small helper: pulse the controller start bit (inst[ADDR_W+2]) for one clock
  task pulse_start_controller;
  begin
    start_controller = 1'b1;
    @(posedge clk);
    @(posedge clk);
    start_controller = 1'b0;
    @(posedge clk);
  end
  endtask

  /*
  initial begin
    // dump waves
    $dumpfile("core_tb.vcd");
    $dumpvars(0, core_tb);

    // init
    start_controller = 0;
    reset = 0;
    psum_memory_rd_enable = 0;
    activation_weight_mem_load = 0;
    sram_mem_addr = 0;                 
    
    drive_reset();

    // small settle
    repeat (2) @(posedge clk);

    // Initialize weights array and write weight rows into activation SRAM
    initialize_weights();
    initialize_activations();
    calculate_expected_psums();

    write_activation_sram(0, 0);
    write_activation_sram(1, 0);

    // Setting debug_mode
    debug_mode = 1;
    @(posedge clk);
    $display("INFO | %0t | Pulsing start_controller to SRAM Load into L0", $time);

    pulse_start_controller();

    @(posedge clk);

    wait(core_busy == 0);

    $display("INFO | %0t | Pulsing start_controller to start L0 load to MAC array", $time);

    pulse_start_controller();

    // Check loaded weights in mac tiles against expected array
    @(posedge clk);
    wait(core_busy == 0);

    // Verify loaded weights for each kij index
    check_loaded_weights(0);

    $display("INFO | %0t | Moving onto weight stationary activation loading", $time);

    pulse_start_controller();
    
    @(posedge clk);
    wait(core_busy == 0);
    
    $display("INFO | %0t | Moving Onto MAC computation", $time);
    pulse_start_controller();

    @(posedge clk);
    wait(core_busy == 0);
 
    // Read and check expected psums
    check_expected_psums();
    
    // TB Drain time
    repeat (2) @(posedge clk);

    $display("Testbench finished at %0t", $time);
    $finish;
  end
*/ 
 initial begin
    // dump waves
    $dumpfile("core_tb.vcd");
    $dumpvars(0, core_tb);

    // init
    start_controller = 0;
    reset = 0;
    psum_memory_rd_enable = 0;
    activation_weight_mem_load = 0;
    sram_mem_addr = 0;                 
    
    drive_reset();

    // small settle
    repeat (2) @(posedge clk);

    // Initialize weights array and write weight rows into activation SRAM
    initialize_weights();
    initialize_activations();
    calculate_expected_psums();

    // Writing all weights
    for(i = 0; i < num_kij; i = i + 1) begin
      write_activation_sram(0, i);
    end

    write_activation_sram(1, 0);

    $display("INFO | %0t | Pulsing start_controller to start full controller", $time);

    pulse_start_controller();

    @(posedge clk);

    wait(core_busy == 0);

    // Read and check expected psums
    check_expected_psums();
    
    // TB Drain time
    repeat (2) @(posedge clk);

    $display("Testbench finished at %0t", $time);
    $finish;
  end


endmodule
