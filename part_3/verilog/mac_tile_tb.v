`timescale 1ns / 1ps

module mac_tile_tb;

  parameter bw = 4;
  parameter psum_bw = 16;

  reg clk, reset;
  reg [bw-1:0] in_w;
  reg [psum_bw-1:0] in_n;
  reg [2:0] inst_w;

  wire [psum_bw-1:0] out_s;
  wire [bw-1:0] out_e;
  wire [2:0] inst_e;

  // DUT
  // verilog_format: off
mac_tile #(.bw(bw), .psum_bw(psum_bw)) dut (
    .clk(clk), .reset(reset),
    .in_w(in_w),
    .out_e(out_e),
    .in_n(in_n),
    .inst_w(inst_w),
    .inst_e(inst_e),
    .out_s(out_s)
);
// verilog_format: on

  // ==== CLOCK ====
  always #5 clk = ~clk;

  // ==== TEST SEQUENCE ====
  initial begin

    $dumpfile("mac_tile_tb.vcd");
    $dumpvars(0, mac_tile_tb);

    clk = 0;
    reset = 1;
    in_w = 0;
    in_n = 0;
    inst_w = 0;

    // apply reset
    #20 reset = 0;
    inst_w[2] = 0;

    // -----------------------------------------
    // 1) FIRST LOAD (non-SIMD)
    // inst = 3'b001
    // Should load weight into b0 & b1, BUT nothing should appear at inst_e yet
    // -----------------------------------------
    $display("NON-SIMD mode");
    $display("\n--- LOAD WEIGHT #1 (non-SIMD) ---");
    in_w = 4'd3;
    inst_w[1:0] = 2'b01;  // non simd, ex=0, load weight = 1
    // #10 inst_w = 0;

    #10;
    // $display("inst_e = %b (expected 000)", inst_e);


    // -----------------------------------------
    // 2) SECOND LOAD (non-SIMD)
    // inst=001 again → now weights already loaded
    // Should push instruction to inst_e
    // out_e should forward previous in_w (3)
    // -----------------------------------------
    $display("\n--- LOAD WEIGHT #2 (non-SIMD) ---");
    in_w = 4'd5;
    inst_w[1:0] = 2'b01;
    // #10 inst_w[1:0] = 0;

    #10;
    $display("inst_e = %b (expected 001)", inst_e);
    $display("out_e  = %0d (expected 3)");


    // -----------------------------------------
    // 3) EXECUTE (inst = 010)
    // out_s = weight * in_w + in_n
    // weight = previously loaded = 5
    // -----------------------------------------
    $display("\n--- EXECUTE ---");
    in_w        = 4'd2;  // activation
    in_n        = 16'd10;  // psum input
    inst_w[1:0] = 2'b10;
    // #10 inst_w[1:0] = 0;

    #10;
    $display("out_s = %0d (expected 3*2 + 10 = 16)");

    $display("\n--- EXECUTE ---");
    in_w        = 4'd3;  // activation
    in_n        = 16'd5;  // psum input
    inst_w[1:0] = 2'b10;
    // #10 inst_w = 0;

    #10;

    $display("\n--- TEST COMPLETE ---");

    /// OS
    $display("\n Output stationary");
    reset  = 1;
    in_n   = 0;
    in_w   = 0;
    inst_w = 0;

    #20 reset = 0;
    inst_w[2] = 1;
    // execute, w = 2, a = 4, psum 8
    inst_w[1] = 1;
    in_n = 2;
    in_w = 4;

    #10
    // execute w = 4, a = 1, psum = 12, out_s = 2
    in_n = 4;
    in_w = 1;

    #10
    //execute w = -2, a = 1, psum = 10, out_s = 4
    in_n = 5'b01110;
    in_w = 1;

    #10
    //execute with 0 weight
    in_n = 0;

    #10
    //execute with 0 weight
    in_n = 0;

    #10
    // Wait
    inst_w[1] = 0;  // empty

    //wait
    #10
    //wait
    #10
    //wait
    #10

    #10
    //flush, in_n 511, out_s = 8
    // inst_w[1] = 0;
    inst_w[0] = 1;
    in_n = 511;

    #10
    // flush out_s = 511, in_n = -200
    in_n = -200;

    #20;
    $finish;
  end

endmodule
