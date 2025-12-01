`timescale 1ns/1ps
// Simple testbench for l0_and_mac_array

module l0_and_mac_array_tb;

  // parameters must match the wrapper defaults
  localparam row = 8;
  localparam bw  = 4;
  localparam psum_bw = 16;
  localparam col = 8;

  localparam num_oij = 16;
  localparam num_nij = ($clog2(num_oij) + 2*padding)**2;
  localparam num_kij = 9;
  localparam padding = 1;
  localparam ic = 8;
  localparam oc = 8;
  localparam num_psums = num_nij * num_kij;

  reg clk;
  reg reset;

  reg [row*bw-1:0] l0_in;
  reg l0_wr;
  reg start_kernel_load;
  // ofifo interface signals (added to match wrapper)
  reg ofifo_rd;
  wire [psum_bw*col-1:0] ofifo_out;
  reg start_mac_compute;

  // Expected weights array (flattened: index = row_idx*col + col_idx)
  reg signed [bw-1:0] weights_to_load [row*col-1:0][num_kij-1:0];
  reg [bw-1:0] activations_to_load [((row + (2*padding))**2)-1:0][ic-1:0];
  reg signed [psum_bw-1:0] expected_psums [num_psums-1:0][oc];
  reg [bw-1:0] actual_weights_loaded [row*col-1:0];

  wire [psum_bw*col-1:0] mac_out_s;
  wire [col-1:0] mac_valid;
  wire l0_o_full;
  wire l0_o_ready;

  integer i;

  // Instantiate DUT
  l0_and_mac_array #(.row(row), .bw(bw), .psum_bw(psum_bw), .col(col)) dut (
    .clk(clk),
    .reset(reset),
    .l0_in(l0_in),
    .l0_wr(l0_wr),
    .start_kernel_load(start_kernel_load),
    .start_mac_compute(start_mac_compute),
    .num_nij_to_compute(num_nij),
    .mac_out_s(mac_out_s),
    .mac_valid(mac_valid),
    .ofifo_rd(ofifo_rd),
    .ofifo_out(ofifo_out),
    .l0_o_full(l0_o_full),
    .l0_o_ready(l0_o_ready)
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
    input integer kij_idx;
    integer n, o_ch, i_ch;
    integer idx;
    reg signed [psum_bw-1:0] mult;
    reg signed [psum_bw-1:0] a_ext;
    reg signed [psum_bw-1:0] w_ext;
  begin
    // zero expected psums
    for (idx = kij_idx * num_nij; idx < ((kij_idx+1) * num_nij); idx = idx + 1) begin
      for (o_ch = 0; o_ch < oc; o_ch = o_ch + 1) begin
        expected_psums[idx][o_ch] = 0;
      end
    end

    // compute
    //for (k = 0; k < num_kij; k = k + 1) begin
      for (n = 0; n < num_nij; n = n + 1) begin
        idx = kij_idx * num_nij + n;
        for (o_ch = 0; o_ch < oc; o_ch = o_ch + 1) begin
          for (i_ch = 0; i_ch < ic; i_ch = i_ch + 1) begin
            // sign-extend operands into psum width before multiply
            a_ext = $signed({1'b0, activations_to_load[n][i_ch]});
            w_ext = weights_to_load[i_ch*row + o_ch][kij_idx];
            mult = a_ext * w_ext;
            expected_psums[idx][o_ch] = expected_psums[idx][o_ch] + mult;
          end
        end
      end
    //end
    $display("INFO | %0t | Calculated expected psums for %0d entries", $time, num_nij);
  end
  endtask

  // Task: read OFIFO and check outputs against expected_psums
  task check_expected_psums;
    input integer kij_idx;
    integer p_idx;
    integer col_idx;
    integer num_errors;
    reg signed [psum_bw-1:0] actual;
    reg signed [psum_bw-1:0] expected;
  begin
    // start read
    ofifo_rd = 1;

    for (p_idx = kij_idx * num_nij; p_idx < ((kij_idx+1) * num_nij); p_idx = p_idx + 1) begin
      // wait for next psum available on OFIFO (synchronous check per posedge)
      @(posedge clk);
      for (col_idx = 0; col_idx < col; col_idx = col_idx + 1) begin
        actual = ofifo_out[(col_idx+1)*psum_bw-1 -: psum_bw];
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
    ofifo_rd = 0;
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
        assign actual_weights_loaded[row_idx_ii*col + col_idx_ii] = dut.u_mac_array.row_num[row_idx_ii+1].mac_row_instance.col_num[col_idx_ii+1].mac_tile_instance.b_q;
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

  // Task: write the numbers 0-7 then 8-15 in alternating fashion across the 8 rows
  task write_fifo_values;
    input bit is_activation;
    input integer kij_idx;
    integer load_idx;
    integer row_idx;
    integer load_idx_max;
    integer row_idx_max;
    reg [bw-1:0] val;
  begin
    // Initialize and assert write
    l0_in = {row*bw{1'b0}};
    l0_wr = 1;

    load_idx_max = !is_activation ? row : num_nij;
    row_idx_max = !is_activation ? row : row;

    for (load_idx = 0; load_idx < load_idx_max; load_idx = load_idx + 1) begin
      for (row_idx = 0; row_idx < row; row_idx_max = row_idx + 1) begin
        if(is_activation == 0) begin
          if (row_idx % 2 == 0) begin
            val = load_idx[bw-1:0];
            weights_to_load[row_idx*col + load_idx][kij_idx] = val;
          end 
          else begin
            val = (load_idx + row);
            weights_to_load[row_idx*col + load_idx][kij_idx] = val;
          end
        end
        else begin
          val = activations_to_load[load_idx][row_idx];
        end
        l0_in[(row_idx+1)*bw-1 -: bw] = val;
        $display("INFO | %0t | Writing value %0d into row %0d of FIFO", $time, val, row_idx);
      end
      // wait one clock for values to be accepted
      @(posedge clk);
    end

    // release write
    l0_in = {row*bw{1'b0}};
    l0_wr = 0;
  end
  endtask

  integer kij_idx = 0;
  initial begin
    // dump waves
    $dumpfile("l0_and_mac_array_tb.vcd");
    $dumpvars(0, l0_and_mac_array_tb);

    // init
    l0_in = 0;
    l0_wr = 0;
    start_kernel_load = 0;
    ofifo_rd = 0;
    reset = 0;

    // start
    drive_reset();

    // small settle
    repeat (2) @(posedge clk);

    // Write patterns into the FIFOs using the write_fifo_values task (alternating 0..7 and 8..15)
    for(kij_idx = 0; kij_idx < num_kij; kij_idx = kij_idx + 1) begin
      $display("INFO | %0t | Starting FIFO writes of weights for kernel index %0d", $time, kij_idx);
      write_fifo_values(1'b0, kij_idx); // Write weights

      // After write is complete, pulse start_kernel_load for one cycle to trigger kernel loading
      start_kernel_load = 1;
      @(posedge clk);
      start_kernel_load = 0; 
      $display("INFO | %0t | Pulsed start_kernel_load", $time);

      // Wait 24 cycles for processing
      // Why 24 cycles?
      // 2 cycles per weight load * 8 weights = 16 cycles
      // + 8 extra cycles to ensure all loads are done as we stagger weights across MAC rows
      repeat (3 * col) @(posedge clk);

      // Check loaded weights in mac tiles against expected array
      check_loaded_weights(kij_idx);

      $display("INFO | %0t | Completed weight stationary loading, now moving onto MAC computation", $time);
      $display("INFO | %0t | Loading activations into IFIFO", $time);

      // Next Steps:
      // 1. Load input activations into L0
      initialize_activations();
      // 2. Trigger MAC operations
      write_fifo_values(1'b1, kij_idx); // Write activations
      // After write is complete, pulse start_mac_compute for one cycle to trigger mac computation 
      $display("INFO | %0t | MAC computation starting now", $time);

      start_mac_compute = 1;
      @(posedge clk);
      start_mac_compute = 0; 

      repeat (num_nij + 2*col - 1) @(posedge clk);

      // 3. Check MAC outputs
      $display("INFO | %0t | Reading OFIFO to verify psum values", $time);
      calculate_expected_psums(kij_idx);
      check_expected_psums(kij_idx);
    end

    // TB Drain time
    repeat (2) @(posedge clk);

    $display("Testbench finished at %0t", $time);
    $finish;
  end

endmodule
