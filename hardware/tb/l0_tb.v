`timescale 1ns/1ps
// Testbench for l0
// Instantiates l0, drives clk/reset, and writes alternating vectors 0-7 and 8-15

module l0_tb;

  // parameters matched to l0 defaults
  localparam row = 8;
  localparam bw  = 4;

  reg clk;
  reg reset;
  reg rd;
  reg wr;
  reg [row*bw-1:0] in;
  wire [row*bw-1:0] out;
  wire o_full;
  wire o_ready;

  integer i, j;

  // Instantiate device under test
  l0 dut (
    // Inputs
    .clk(clk),
    .reset(reset),
    .in(in),
    .rd(rd),
    .wr(wr),

    // Outputs 
    .out(out),
    .o_full(o_full),
    .o_ready(o_ready)
  );

  // Task: print an info message with simulation time
  // Accepts a packed ASCII string up to 128 characters
  task info_message;
    input [8*128-1:0] message;
  begin
    $display("INFO | %0t | %s", $time, message);
  end
  endtask


  // Task: drive the clock. Call in a fork (non-blocking) since it contains a forever loop.
  task drive_clk;
  begin
    clk = 0;
    forever #5 clk = ~clk; // 10ns period
  end
  endtask

  // Task: pulse/reset synchronous to clock
  task drive_reset;
  begin
    // assert reset for a couple of cycles
    reset = 1;
    @(posedge clk);
    @(posedge clk);
    reset = 0;
    @(posedge clk);
  end
  endtask

  // Task: write the numbers 0-7 then 8-15 in alternating fashion across the 8 rows
  // Assumption: a single write ('wr' high for one clock) will present 8 4-bit values
  // where row 0 uses the least-significant 4 bits, row 1 the next 4 bits, etc.
  task write_fifo_values;
    integer rep;
    integer load_idx;
    integer row_idx;
    reg [bw-1:0] vec [0:row-1];
    reg [3:0] sum;
  begin
    // Initialize input vectors - assuming posedge clk
    // Assert wr to 1
    in = {row*bw{1'b0}};
    wr = 1;

    for (load_idx = 0; load_idx < row; load_idx = load_idx + 1) begin

      for (row_idx = 0; row_idx < row; row_idx = row_idx + 1) begin
        if(row_idx % 2 == 0) begin // Write 0..7
          in[(row_idx+1)*bw-1 -: bw] = load_idx[bw-1:0];
          $display("INFO | %0t | Writing value %0d into row %0d of FIFO", $time, load_idx, row_idx);
        end
        else begin // Write 8..15
          sum = load_idx + row;
          in[(row_idx+1)*bw-1 -: bw] = sum;
          $display("INFO | %0t | Writing value %0d into row %0d of FIFO", $time, sum, row_idx);
        end
      end
      // Wait one clock cycle for value to propagate
      @(posedge clk);
    end
    in = {row*bw{1'b0}};
    wr = 0;
  end
  endtask

  // Simple monitor to show per-row outputs as 4-bit fields
  task dump_out;
    integer r;
    reg [bw-1:0] out_row;
  begin
    $write("%0t: out =", $time);
    for (r = row-1; r >= 0; r = r - 1) begin
      out_row = out[(r*bw+bw-1) -: bw];
      $write(" %0d", out_row);
    end
    $write("  o_full=%b o_ready=%b\n", o_full, o_ready);
  end
  endtask

  initial begin
    // initialize signals
    rd = 0;
    wr = 0;
    in = 0;
    reset = 0;

    // Dump waves to a VCD file for waveform viewing
    $dumpfile("l0_tb.vcd");
    $dumpvars(0, l0_tb);

    // start clock in background
    fork
      drive_clk();
    join_none

    // apply reset
    drive_reset();

    // small delay
    repeat (2) @(posedge clk);

    // write the alternating patterns 3 times (will perform 6 writes total)
    $display("INFO | %0t | Starting FIFO writes of alternating patterns", $time);

    write_fifo_values();

  // optionally pulse rd to read out
  $display("INFO | %0t | Reading of FIFO contents", $time);

  rd = 1;
    repeat (row) begin 
      @(posedge clk);
      for (i = 0; i < row; i = i + 1) begin
        $display("INFO | %0t | Reading a value of %0d from row %0d of FIFO", $time, out[(i+1)*bw-1 -: bw], i);
      end
    end 
    rd = 0;

    // Wait for reset of rows to propagate
    repeat (row) begin
      @(posedge clk);
      for (i = 0; i < row; i = i + 1) begin
        $display("INFO | %0t | Reading a value of %0d from row %0d of FIFO", $time, out[(i+1)*bw-1 -: bw], i);
      end
    end

    // finish simulation after a couple cycles
    repeat (5) @(posedge clk);
    $display("Testbench finished at %0t", $time);
    $finish;
  end

endmodule
