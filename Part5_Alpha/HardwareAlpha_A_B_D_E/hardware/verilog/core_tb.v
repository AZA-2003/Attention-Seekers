`timescale 1ns/1ps
module core_tb;

  // parameters must match the wrapper defaults
  parameter row = 8;
  parameter bw  = 4;
  parameter psum_bw = 16;
  parameter col = 8;
  parameter ADDR_W = 11;
  parameter inst_bw = ADDR_W + 4;

  parameter num_oij = 16;
  parameter padding = 1;
  // computed constants (replace SystemVerilog $clog2 and ** usage)
  // original intent: num_nij = ( $clog2(num_oij) + 2*padding ) ** 2
  // for the default parameters this equals 36, so make it explicit to keep Verilog-2001 compatible
  parameter num_nij = 36;
  parameter num_kij = 9;
  parameter ic = 8;
  parameter oc = 8;
  parameter num_psums = num_nij * num_kij;

  reg clk;
  reg reset;
  wire [inst_bw-1:0] inst;
  reg [bw*col-1:0] D_xmem;
  wire [psum_bw*col-1:0] psum_mem_out;

  // Flattened storage to emulate 2-D arrays in Verilog-2001
  // weights_to_load[pos][k]  -> weights_flat[ pos * num_kij + k ]
  reg [bw-1:0] weights_flat [0: (row*col)*num_kij - 1];

  // activations_to_load[n][ic] -> activ_flat[ n * ic + ch ]
  reg [bw-1:0] activ_flat [0: num_nij*ic - 1];

  // expected_psums[index][oc] -> psums_flat[ index * oc + och ]
  reg signed [psum_bw-1:0] psums_flat [0: num_psums*oc - 1];

  // expected_outputs[o_nij][oc] -> outputs_flat[ o_nij * oc + och ]
  reg signed [psum_bw-1:0] outputs_flat [0: num_oij*oc - 1];

  // Expected outputs after SFU accumulation and RELU: indexed by output o_nij and output channel
  wire [bw-1:0] actual_weights_loaded [0: row*col - 1];

  integer i;

  reg debug_mode;
  reg start_controller;
  reg activation_weight_mem_load;
  reg psum_memory_rd_enable;
  reg [ADDR_W-1:0] sram_mem_addr;
  wire [ADDR_W-1:0] weight_start_sram_addr;
  wire [ADDR_W-1:0] activation_start_sram_addr;

  assign weight_start_sram_addr = {ADDR_W{1'b0}};
  assign activation_start_sram_addr = 9 * row; // after weights

  wire core_busy;

  // Narrow parameter widths to match DUT port sizes (avoid implicit pruning warnings)
  wire [7:0] num_nij8 = num_nij;
  wire [7:0] num_kij8 = num_kij;

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
    .num_nij_to_compute(num_nij8),
    .num_kij_to_compute(num_kij8),
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

  // Helper functions to access flattened arrays
  function [bw-1:0] weight_get;
    input integer pos;
    input integer k;
    begin
      weight_get = weights_flat[pos * num_kij + k];
    end
  endfunction

  task weight_set;
    input integer pos;
    input integer k;
    input [bw-1:0] val;
    begin
      weights_flat[pos * num_kij + k] = val;
    end
  endtask

  function [bw-1:0] activ_get;
    input integer n;
    input integer ch;
    begin
      activ_get = activ_flat[n * ic + ch];
    end
  endfunction

  task activ_set;
    input integer n;
    input integer ch;
    input [bw-1:0] val;
    begin
      activ_flat[n * ic + ch] = val;
    end
  endtask

  function signed [psum_bw-1:0] psum_get;
    input integer idx;
    input integer och;
    begin
      psum_get = psums_flat[idx * oc + och];
    end
  endfunction

  task psum_set;
    input integer idx;
    input integer och;
    input signed [psum_bw-1:0] val;
    begin
      psums_flat[idx * oc + och] = val;
    end
  endtask

  function signed [psum_bw-1:0] output_get;
    input integer on;
    input integer och;
    begin
      output_get = outputs_flat[on * oc + och];
    end
  endfunction

  task output_set;
    input integer on;
    input integer och;
    input signed [psum_bw-1:0] val;
    begin
      outputs_flat[on * oc + och] = val;
    end
  endtask

  // Task: initialize activations_to_load from a file
  // File format: lines with 32-bit binary strings (e.g. 00110011...), one line per spatial index (n).
  // Each 32-bit line packs eight 4-bit entries: timeNrow7[msb] ... timeNrow0[lsb]
  task initialize_activations_from_file;
    input [8*128-1:0] filename; // up to 128 chars
    integer fd;
    reg [8*256-1:0] line;
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
      line = 0;
      rc = $fgets(line, fd);
      if (rc > 0) begin
        // try to parse a binary token from the line; skip comment/empty lines
        if ($sscanf(line, "%b", word32) == 1) begin
          // extract 4-bit nibbles and map into activ_flat[n_idx][channel]
          for (c = 0; c < ic; c = c + 1) begin
            nibble = (word32 >> ((row - 1 - c) * 4)) & 4'hF;
            activ_set(n_idx, c, nibble[bw-1:0]);
          end
          n_idx = n_idx + 1;
        end
      end
    end

    $fclose(fd);
    $display("INFO | %0t | Loaded activations from %s into %0d spatial entries (lines read=%0d)", $time, filename, n_idx, n_idx);
  end
  endtask

  // Task: initialize weights_to_load from a file for one kij index
  // File format: lines with 32-bit binary strings (e.g. 00110011...), one line per column.
  // Each 32-bit line packs eight 4-bit entries: colXrow7[msb] ... colXrow0[lsb]
  task initialize_weights_from_file;
    input integer kij_idx;
    integer fd;
    reg [8*128-1:0] filename;
    reg [8*256-1:0] line;
    integer col_idx;
    integer r;
    reg [31:0] word32;
    reg [3:0] nibble;
    integer rc;
  begin
    case(kij_idx)
      0: filename = "../datafiles/weight_0.txt";
      1: filename = "../datafiles/weight_1.txt";
      2: filename = "../datafiles/weight_2.txt";
      3: filename = "../datafiles/weight_3.txt";
      4: filename = "../datafiles/weight_4.txt";
      5: filename = "../datafiles/weight_5.txt";
      6: filename = "../datafiles/weight_6.txt";
      7: filename = "../datafiles/weight_7.txt";
      8: filename = "../datafiles/weight_8.txt";
      default: filename = "";
    endcase

    fd = $fopen(filename, "r");
    if (fd == 0) begin
      $display("ERROR | %0t | Cannot open weight file for kij=%0d", $time, kij_idx);
      $finish;
    end

    col_idx = 0;
    // read until we've filled `col` columns or EOF
    while (!$feof(fd) && col_idx < col) begin
      line = 0;
      rc = $fgets(line, fd);
      if (rc > 0) begin
        // try to parse a binary token from the line; skip comment/empty lines
        if ($sscanf(line, "%b", word32) == 1) begin
          // word32 now contains 32-bit string MSB..LSB; extract 4-bit nibbles
          for (r = 0; r < row; r = r + 1) begin
            // map nibble: top-most nibble corresponds to row = row-1
            nibble = (word32 >> ((row - 1 - r) * 4)) & 4'hF;
            // place into weights_flat using col-major then row ordering
            weight_set(col_idx * col + r, kij_idx, nibble[bw-1:0]);
          end
          col_idx = col_idx + 1;
        end
      end
    end

    $fclose(fd);
    $display("INFO | %0t | Loaded weights from %s into kij=%0d (columns read=%0d)", $time, filename, kij_idx, col_idx);
  end
  endtask

  // Task: calculate expected outputs after SFU accumulation and RELU
  task calculate_expected_outputs;
    integer o_nij, kij, o_ch;
    integer n_idx;
    integer idx;
    integer o_ni_dim;
    integer a_pad_ni_dim;
    integer ki_dim;
  begin
    o_ni_dim = 4;
    a_pad_ni_dim = 6;
    ki_dim = 3;

    // zero outputs
    for (n_idx = 0; n_idx < num_oij; n_idx = n_idx + 1) begin
      for (o_ch = 0; o_ch < oc; o_ch = o_ch + 1) begin
        output_set(n_idx, o_ch, 0);
      end
    end

    // Accumulation
    for (o_nij = 0; o_nij < num_oij; o_nij = o_nij + 1) begin
      for (kij = 0; kij < num_kij; kij = kij + 1) begin
        n_idx = (o_nij / o_ni_dim) * a_pad_ni_dim + (o_nij % o_ni_dim) + (kij / ki_dim) * a_pad_ni_dim + (kij % ki_dim);
        idx = kij * num_nij + n_idx;
        for (o_ch = 0; o_ch < oc; o_ch = o_ch + 1) begin
          output_set(o_nij, o_ch, output_get(o_nij, o_ch) + psum_get(idx, o_ch));
        end
      end
    end

    // RELU: clamp negatives to zero
    for (n_idx = 0; n_idx < num_oij; n_idx = n_idx + 1) begin
      for (o_ch = 0; o_ch < oc; o_ch = o_ch + 1) begin
        if (output_get(n_idx, o_ch) < 0) output_set(n_idx, o_ch, {psum_bw{1'b0}});
      end
    end

    $display("INFO | %0t | Calculated expected outputs after accumulation+RELU for %0d outputs", $time, num_oij);
  end
  endtask

  // Task: calculate expected psums
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
        psum_set(idx, o_ch, 0);
      end
    end

    // compute
    for (k = 0; k < num_kij; k = k + 1) begin
      for (n = 0; n < num_nij; n = n + 1) begin
        idx = k * num_nij + n;
        for (o_ch = 0; o_ch < oc; o_ch = o_ch + 1) begin
          for (i_ch = 0; i_ch < ic; i_ch = i_ch + 1) begin
            a_ext = $signed({1'b0, activ_get(n, i_ch)});
            w_ext = weight_get(i_ch*row + o_ch, k);
            mult = a_ext * w_ext;
            psum_set(idx, o_ch, psum_get(idx, o_ch) + mult);
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
    integer b;
  begin
    psum_memory_rd_enable = 1;
    num_errors = 0;

    for (p_idx = 0; p_idx < num_psums; p_idx = p_idx + 1) begin
      sram_mem_addr = p_idx[ADDR_W-1:0];
      @(posedge clk);
      for (col_idx = 0; col_idx < col; col_idx = col_idx + 1) begin
        // extract variable-width slice (Verilog-2001 doesn't allow dynamic part-selects)
        for (b = 0; b < psum_bw; b = b + 1) begin
          actual[psum_bw-1 - b] = psum_mem_out[(col_idx+1)*psum_bw-1 - b];
        end
        expected = psum_get(p_idx, col_idx);
        if (actual !== expected) begin
          $display("ERROR | %0t | PSUM computation not matching for idx=%0d col=%0d: actual=0x%0h expected=0x%0h", $time, p_idx, col_idx, actual, expected);
          num_errors = num_errors + 1;
        end else begin
          $display("INFO  | %0t | PSUM computation matching for idx=%0d col=%0d: actual=0x%0h", $time, p_idx, col_idx, actual);
        end
      end
    end

    $display("INFO  | %0t | Number of psum computation errors = %0d out of a total of %0d", $time, num_errors, num_psums*col);
    psum_memory_rd_enable = 0;
  end
  endtask

  // Task: read PSUM memory and check outputs against expected_outputs
  task check_expected_outputs;
    integer p_idx;
    integer col_idx;
    integer num_errors;
    reg signed [psum_bw-1:0] actual;
    reg signed [psum_bw-1:0] expected;
    integer b;
  begin
    psum_memory_rd_enable = 1;
    num_errors = 0;

    for (p_idx = 0; p_idx < num_oij; p_idx = p_idx + 1) begin
      sram_mem_addr = p_idx[ADDR_W-1:0];
      @(posedge clk);
      for (col_idx = 0; col_idx < col; col_idx = col_idx + 1) begin
        for (b = 0; b < psum_bw; b = b + 1) begin
          actual[psum_bw-1 - b] = psum_mem_out[(col_idx+1)*psum_bw-1 - b];
        end
        expected = output_get(p_idx, col_idx);
        if (actual !== expected) begin
          $display("ERROR | %0t | Output computation not matching for idx=%0d col=%0d: actual=0x%0h expected=0x%0h", $time, p_idx, col_idx, actual, expected);
          num_errors = num_errors + 1;
        end else begin
          $display("INFO  | %0t | Output computation matching for idx=%0d col=%0d: actual=0x%0h", $time, p_idx, col_idx, actual);
        end
      end
    end

    $display("INFO  | %0t | Number of output computation errors = %0d out of a total of %0d", $time, num_errors, num_oij*col);
    psum_memory_rd_enable = 0;
  end
  endtask

  // Task: initialize_activations (pad + interior pattern)
  task initialize_activations;
    integer a_row_idx, a_col_idx, a_ic;
    integer N;
    reg [bw-1:0] val;
  begin
    // N is sqrt(num_nij). For our default parameters it's 6.
    N = 6;
    for (a_ic = 0; a_ic < ic; a_ic = a_ic + 1) begin
      for (a_row_idx = 0; a_row_idx < N; a_row_idx = a_row_idx + 1) begin
        for (a_col_idx = 0; a_col_idx < N; a_col_idx = a_col_idx + 1) begin
          if (a_row_idx == 0 || a_col_idx == 0 || a_row_idx == (N-1) || a_col_idx == (N-1)) begin
            activ_set(a_row_idx*N + a_col_idx, a_ic, {bw{1'b0}});
          end else begin
            val = (((a_row_idx-1)*(N-2) + (a_col_idx-1)) & ((1<<bw)-1));
            activ_set(a_row_idx*N + a_col_idx, a_ic, val);
          end
        end
      end
    end
  end
  endtask

  // Loaded Weights Checker - generate block uses hierarchical reference into DUT
  genvar row_idx_ii, col_idx_ii;
  generate
    for (row_idx_ii = 0 ; row_idx_ii < row ; row_idx_ii = row_idx_ii + 1) begin : gen_row
      for (col_idx_ii = 0 ; col_idx_ii < col ; col_idx_ii = col_idx_ii + 1) begin : gen_col
        // map to 0-based linear index
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
        expected = weight_get(idx, kij_idx);
        actual = actual_weights_loaded[idx];
        if (actual !== expected) begin
          $display("ERROR | %0t | Mismatch at row %0d col %0d: actual=0x%0h expected=0x%0h", $time, row_idx-1, col_idx-1, actual, expected);
          errors = errors + 1;
        end else begin
          $display("INFO | %0t | Match at row %0d col %0d: value=0x%0h", $time, row_idx-1, col_idx-1, actual);
        end
      end
    end
    if (errors == 0) begin
      $display("INFO | %0t | All %0d weights match expected values", $time, row*col);
    end else begin
      $display("ERROR | %0t | %0d weight mismatches detected", $time, errors);
    end
  end
  endtask

  // Initialize weights_to_load array (pattern)
  task initialize_weights;
    integer k, i_ch, o_ch;
    integer idx;
    reg [bw-1:0] val;
  begin
    for (k = 0; k < num_kij; k = k + 1) begin
      for (i_ch = 0; i_ch < ic; i_ch = i_ch + 1) begin
        for (o_ch = 0; o_ch < oc; o_ch = o_ch + 1) begin
          idx = i_ch * row + o_ch;
          if ((i_ch % 2) == 0) begin
            val = o_ch[bw-1:0];
          end else begin
            val = (o_ch + row);
          end
          weight_set(idx, k, val);
        end
      end
    end
    $display("INFO | %0t | Initialized weights_to_load for %0d kernel indices", $time, num_kij);
  end
  endtask

  // Task: write activation SRAM rows using the weights_to_load array
  task write_activation_sram;
    input integer weight_or_activation; // 0 = weights, 1 = activations
    input integer kij_idx;
    integer r, c, r_max, c_max;
    integer b;
    reg [bw*col-1:0] packed_row;
    reg [bw-1:0] tmp_val;
    reg [ADDR_W-1:0] addr;
  begin
    r_max = (weight_or_activation == 0) ? row : num_nij;
    c_max = (weight_or_activation == 0) ? col : ic;

    for (r = 0; r < r_max; r = r + 1) begin
      packed_row = {bw*col{1'b0}};
      for (c = 0; c < c_max; c = c + 1) begin
        if (weight_or_activation == 0) begin
          tmp_val = weight_get(c*col + r, kij_idx);
        end else begin
          tmp_val = activ_get(r, c);
        end
        // pack tmp_val into packed_row at bit offset c*bw (LSB-first)
        for (b = 0; b < bw; b = b + 1) begin
          packed_row[c*bw + b] = tmp_val[b];
        end
      end
      D_xmem = packed_row;
      if (weight_or_activation == 0) begin
        addr = weight_start_sram_addr + r[ADDR_W-1:0] + kij_idx * row;
      end else begin
        addr = r[ADDR_W-1:0] + activation_start_sram_addr;
      end
      sram_mem_addr = addr;
      activation_weight_mem_load = 1;
      @(posedge clk);
    end
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
    debug_mode = 0;

    drive_reset();

    // small settle
    @(posedge clk);
    @(posedge clk);

    // load weights from files
    for (i = 0; i < num_kij; i = i + 1) begin
      initialize_weights_from_file(i);
    end

    // load activations
    initialize_activations_from_file("../datafiles/activation.txt");
    calculate_expected_psums();
    calculate_expected_outputs();

    // Writing all weights
    for (i = 0; i < num_kij; i = i + 1) begin
      write_activation_sram(0, i);
    end

    write_activation_sram(1, 0);

    $display("INFO | %0t | Pulsing start_controller to start full controller", $time);

    pulse_start_controller();

    @(posedge clk);

    wait(core_busy == 0);

    @(posedge clk);
    @(posedge clk);

    // Read and check expected outputs
    check_expected_outputs();

    @(posedge clk);
    @(posedge clk);

    $display("Testbench finished at %0t", $time);
    $finish;
  end

endmodule
