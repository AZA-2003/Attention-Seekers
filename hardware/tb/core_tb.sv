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

  // Expected outputs after SFU accumulation and RELU: indexed by output o_nij and output channel
  reg signed [psum_bw-1:0] expected_outputs [num_oij-1:0][oc];
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
  assign activation_start_sram_addr = 9 * row; // after weights

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

  // Task: initialize activations_to_load from a file
  // File format: lines with 32-bit binary strings (e.g. 00110011...), one line per spatial index (n).
  // Each 32-bit line packs eight 4-bit entries: timeNrow7[msb] ... timeNrow0[lsb]
  task initialize_activations_from_file(input string filename);
    integer fd;
    string line;
    integer n_idx;
    integer c;
    reg [31:0] word32;
    reg [3:0] nibble;
    integer rc;
  begin
    fd = $fopen(filename, "r");
    if (fd == 0) begin
      $display("ERROR | %0t | Cannot open activation file %s", $time, filename);
      $finish;
    end

    n_idx = 0;
    // read until we've filled `num_nij` spatial entries or EOF
    while (!$feof(fd) && n_idx < num_nij) begin
      line = "";
      rc = $fgets(line, fd);
      if (rc <= 0) begin
        // nothing read
        continue;
      end
      // try to parse a binary token from the line; skip comment/empty lines
      if ($sscanf(line, "%b", word32) != 1) begin
        // not a binary line (probably a comment) -> skip
        continue;
      end

      // word32 now contains 32-bit string MSB..LSB; extract 4-bit nibbles
      // and map them into activations_to_load[n_idx][channel]
      for (c = 0; c < ic; c = c + 1) begin
        // follow same ordering as other loaders: MSB nibble maps to channel 0
        nibble = (word32 >> ((row - 1 - c) * 4)) & 4'hF;
        activations_to_load[n_idx][c] = nibble[bw-1:0];
      end

      n_idx = n_idx + 1;
    end

    $fclose(fd);
    $display("INFO | %0t | Loaded activations from %s into %0d spatial entries (lines read=%0d)", $time, filename, n_idx, n_idx);
  end
  endtask

  // Task: initialize weights_to_load from a file for one kij index
  // File format: lines with 32-bit binary strings (e.g. 00110011...), one line per column.
  // Each 32-bit line packs eight 4-bit entries: colXrow7[msb] ... colXrow0[lsb]
  task initialize_weights_from_file(input integer kij_idx);
    integer fd;
    string line;
    integer col_idx;
    integer r;
    reg [31:0] word32;
    reg [3:0] nibble;
    integer rc;
  begin
    string filename;

    case(kij_idx)
      0: filename = "./test_vectors/VGG16_quant_4bit_base_0_weight.txt";
      1: filename = "./test_vectors/VGG16_quant_4bit_base_1_weight.txt";
      2: filename = "./test_vectors/VGG16_quant_4bit_base_2_weight.txt";
      3: filename = "./test_vectors/VGG16_quant_4bit_base_3_weight.txt";
      4: filename = "./test_vectors/VGG16_quant_4bit_base_4_weight.txt";
      5: filename = "./test_vectors/VGG16_quant_4bit_base_5_weight.txt";
      6: filename = "./test_vectors/VGG16_quant_4bit_base_6_weight.txt";
      7: filename = "./test_vectors/VGG16_quant_4bit_base_7_weight.txt";
      8: filename = "./test_vectors/VGG16_quant_4bit_base_8_weight.txt";
    endcase

    fd = $fopen(filename, "r");
    if (fd == 0) begin
      $display("ERROR | %0t | Cannot open weight file for kij=%0d", $time, kij_idx);
      $finish;
    end

    col_idx = 0;
    // read until we've filled `col` columns or EOF
    while (!$feof(fd) && col_idx < col) begin
      line = "";
      rc = $fgets(line, fd);
      if (rc <= 0) begin
        // nothing read
        continue;
      end
      // try to parse a binary token from the line; skip comment/empty lines
      if ($sscanf(line, "%b", word32) != 1) begin
        // not a binary line (probably a comment) -> skip
        continue;
      end

      // word32 now contains 32-bit string MSB..LSB; extract 4-bit nibbles
      for (r = 0; r < row; r = r + 1) begin
        // map nibble: top-most nibble corresponds to row = row-1
        nibble = (word32 >> ((row - 1 - r) * 4)) & 4'hF;
        // place into weights_to_load using same linearization used elsewhere (col-major then row)
        weights_to_load[col_idx * col + r][kij_idx] = nibble[bw-1:0];
      end

      col_idx = col_idx + 1;
    end

    $fclose(fd);
    $display("INFO | %0t | Loaded weights from %s into kij=%0d (columns read=%0d)", $time, filename, kij_idx, col_idx);
  end
  endtask

  // Task: calculate expected outputs after SFU accumulation and RELU
  // Accumulation mapping follows the pattern in the design: accumulate selected psum entries
  // then apply RELU (zero negative values).
  task calculate_expected_outputs;
    integer o_nij, kij, o_ch;
    integer n_idx;
    integer idx;
    // mapping dims (representative constants used in the design)
    integer o_ni_dim;
    integer a_pad_ni_dim;
    integer ki_dim;
  begin
    // set mapping dims (these match the values used elsewhere: o_ni_dim=4, a_pad_ni_dim=6, ki_dim=3)
    o_ni_dim = 4;
    a_pad_ni_dim = 6;
    ki_dim = 3;

    // zero outputs
    for (n_idx = 0; n_idx < num_oij; n_idx = n_idx + 1) begin
      for (o_ch = 0; o_ch < oc; o_ch = o_ch + 1) begin
        expected_outputs[n_idx][o_ch] = 0;
      end
    end

    // Accumulation: for each output nij and each kernel kij, add the corresponding psum
    for (o_nij = 0; o_nij < num_oij; o_nij = o_nij + 1) begin
      for (kij = 0; kij < num_kij; kij = kij + 1) begin
        // compute source spatial index n according to mapping in the design
        n_idx = (o_nij / o_ni_dim) * a_pad_ni_dim + (o_nij % o_ni_dim) + (kij / ki_dim) * a_pad_ni_dim + (kij % ki_dim);
        // compose psum index: psum entries are stored as [kij * num_nij + n]
        idx = kij * num_nij + n_idx;

        $display("DEBUG | %0t | o_nij=%0d kij=%0d maps to idx=%0d", $time, o_nij, kij, idx);
        // accumulate across output channels
        for (o_ch = 0; o_ch < oc; o_ch = o_ch + 1) begin
          expected_outputs[o_nij][o_ch] = expected_outputs[o_nij][o_ch] + expected_psums[idx][o_ch];
        end
      end
    end

    // RELU: clamp negatives to zero
    for (n_idx = 0; n_idx < num_oij; n_idx = n_idx + 1) begin
      for (o_ch = 0; o_ch < oc; o_ch = o_ch + 1) begin
        if (expected_outputs[n_idx][o_ch] < 0) expected_outputs[n_idx][o_ch] = {psum_bw{1'b0}};
      end
    end

    $display("INFO | %0t | Calculated expected outputs after accumulation+RELU for %0d outputs", $time, num_oij);
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

  // Task: read PSUM memory and check outputs against expected_psums
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

  // Task: read PSUM memory and check outputs against expected_psums
  task check_expected_outputs;
    integer p_idx;
    integer col_idx;
    integer num_errors;
    reg signed [psum_bw-1:0] actual;
    reg signed [psum_bw-1:0] expected;
  begin
    psum_memory_rd_enable = 1;

    for (p_idx = 0; p_idx < num_oij; p_idx = p_idx + 1) begin
      // wait for next psum available on OFIFO (synchronous check per posedge)
      sram_mem_addr = p_idx[ADDR_W-1:0];
      @(posedge clk);
      for (col_idx = 0; col_idx < col; col_idx = col_idx + 1) begin
        actual = psum_mem_out[(col_idx+1)*psum_bw-1 -: psum_bw];
        expected = expected_outputs[p_idx][col_idx];
        if (actual !== expected) begin
          $display("ERROR | %0t | Output computation not matching for idx=%0d col=%0d: actual=0x%0h expected=0x%0h", $time, p_idx, col_idx, actual, expected);
          num_errors = num_errors + 1;
        end
        else begin
          $display("INFO  | %0t | Output computation matching for idx=%0d col=%0d: actual=0x%0h", $time, p_idx, col_idx, actual);
        end
      end
    end

    // stop read
    $display("INFO  | %0t | Number of output computation errors = %0d out of a total of %0d", $time, num_errors, num_oij*col);
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
        addr = weight_start_sram_addr + r[ADDR_W-1:0] + kij_idx * row;
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
    //initialize_weights();
    //initialize_activations();
    for(i = 0; i < num_kij; i = i + 1) begin
      initialize_weights_from_file(i);
    end

    initialize_activations_from_file("./test_vectors/VGG16_quant_4bit_base_0_activation.txt");
    calculate_expected_psums();
    calculate_expected_outputs();

    // Writing all weights
    for(i = 0; i < num_kij; i = i + 1) begin
      write_activation_sram(0, i);
    end

    write_activation_sram(1, 0);

    $display("INFO | %0t | Pulsing start_controller to start full controller", $time);

    pulse_start_controller();

    @(posedge clk);

    wait(core_busy == 0);

    repeat (2) @(posedge clk);

    // Read and check expected psums
    //check_expected_psums();
    check_expected_outputs();
    
    // TB Drain time
    repeat (2) @(posedge clk);

    $display("Testbench finished at %0t", $time);
    $finish;
  end
endmodule
