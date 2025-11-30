`timescale 1ns/1ps

module sfu_array_tb;

  // testbench parameters (small for fast sim)
  localparam COL = 8;
  localparam PSUM_BW = 16;
  localparam ADDR_W = 11;

  // DUT signals
  reg                      clk;
  reg                      reset;
  reg                      start_sfu;

  reg signed [COL*PSUM_BW-1:0] sfu_in;
  wire signed [COL*PSUM_BW-1:0] sfu_out;

  wire [ADDR_W-1:0] psum_mem_addr;
  wire              psum_mem_rd_enable;
  wire              psum_mem_wr_enable;
  wire              sfu_active;

  // Instantiate DUT
  sfu_array #(
    .col(COL),
    .psum_bw(PSUM_BW),
    .ADDR_W(ADDR_W)
  ) dut (
    .clk(clk),
    .reset(reset),
    .start_sfu(start_sfu),
    .sfu_in(sfu_in),
    .sfu_out(sfu_out),
    .psum_mem_addr(psum_mem_addr),
    .psum_mem_rd_enable(psum_mem_rd_enable),
    .psum_mem_wr_enable(psum_mem_wr_enable),
    .sfu_active(sfu_active)
  );

  // Clock driver: 10ns period
  initial begin
    clk = 0;
    forever #5 clk = ~clk;
  end

  // Task: pulse reset (active high)
  task automatic pulse_reset(input integer cycles);
  begin
    reset = 1'b1;
    repeat(cycles) @(posedge clk);
    reset = 1'b0;
  end
  endtask

  // Task: pulse start_sfu for one cycle
  task automatic pulse_start_sfu();
  begin
    @(posedge clk);
    start_sfu = 1'b1;
    @(posedge clk);
    start_sfu = 1'b0;
  end
  endtask

  // Simple stimulus
  initial begin
    // Dump waves
    $dumpfile("sfu_array_tb.vcd");
    $dumpvars(0, sfu_array_tb);

    // init
    clk = 0;
    reset = 0;
    start_sfu = 0;
    sfu_in = '0;

    // pulse reset
    $display("%0t : pulsing reset", $time);
    pulse_reset(2);

    // provide some input data on sfu_in
    // pack signed values for each column lane
    sfu_in = { 16'sd12, -16'sd5, 16'sd7, -16'sd2, 16'sd10, 16'sd280, 16'sd0, -16'sd15};
    $display("%0t : driving sfu_in = %p", $time, sfu_in);

    // pulse start
    $display("%0t : pulsing start_sfu", $time);
    pulse_start_sfu();

    // run for some cycles to observe behavior
    repeat (400) @(posedge clk);

    // finish
    $display("%0t : done", $time);
    $finish;
  end

endmodule
