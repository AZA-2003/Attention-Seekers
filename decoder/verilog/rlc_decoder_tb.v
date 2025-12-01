`timescale 1ns/1ps

module rlc_decoder_tb;

  reg clk;
  reg reset;
  reg start;

  reg [15:0] sram_din;
  reg sram_valid;

  wire sram_req;
  wire [31:0] out;
  wire done;

  // instantiate decoder
  rlc_decoder dut (
    .clk(clk),
    .reset(reset),
    .start(start),
    .sram_din(sram_din),
    .sram_valid(sram_valid),
    .sram_req(sram_req),
    .out(out),
    .done(done)
  );

  // clock gen
  initial begin
    clk = 0;
    forever #5 clk = ~clk;     // 100 mhz roughly
  end

  // small task to feed a 16 bit word
  task feed_word(input [15:0] w);
  begin
    @(posedge clk);
    sram_din = w;
    sram_valid = 1;
    @(posedge clk);
    sram_valid = 0;
  end
  endtask

  initial begin
    reset = 1;
    start = 0;
    sram_din = 0;
    sram_valid = 0;

    repeat(5) @(posedge clk);
    reset = 0;

    // encoded example
    // for example encode: 2,3,0,0,0,0,1
    // value then runlen
    // 0010 00 0011 11 0000 00 0001 0...
    // pack it loosely into 16b chunks
    // this is just for demo. not strict packing

    @(posedge clk);
    start = 1;
    @(posedge clk);
    start = 0;

    // wait until decoder wants data
    @(posedge clk);
    while (!sram_req) @(posedge clk);

    // first chunk
    feed_word(16'b0010_0000_1100_0000);

    // wait until needs more
    while (!sram_req) @(posedge clk);

    // second chunk holding rest of bits
    feed_word(16'b0001_0000_0000_0000);

    // wait for finish
    wait(done);

    // show result
    $display("decoded out = %h", out);

    repeat(10) @(posedge clk);
    $finish;
  end

endmodule
