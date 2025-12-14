`timescale 1ns/1ps

module mac_tb;

  // Parameters must match DUT
  localparam bw       = 4;
  localparam aw = 2;
  localparam psum_bw  = 16;
  localparam simd_bw = 8;

  // DUT signals
  reg  signed  [bw-1:0]     a;
  reg  signed  [bw-1:0]     b0, b1;
  reg  signed  [psum_bw-1:0] c;
  reg                       simd;
  wire signed [psum_bw-1:0] out;

  // DUT instance
  mac dut (
    .out(out),
    .a(a),
    .b0(b0),
    .b1(b1),
    .c(c),
    .simd(simd)
  );

  // Task for one test
  task run_test;
    input signed [bw-1:0]      a_in;
    input signed [bw-1:0]      b_in;
    input signed [psum_bw-1:0] c_in;
    reg   signed [psum_bw-1:0] expected;
    reg signed [bw:0] a_pad;
    begin
      a   = a_in;
      b0  = b_in;
      b1  = b_in;   // must match in non-SIMD mode
      c   = c_in;
      simd = 0;

      #1; // allow settle

      a_pad = {1'b0, a_in};
      expected = (a_pad * b_in) + c_in;

      $display("a=%0d  b=%0d  c=%0d  out=%0d  expected=%0d %s",
                $unsigned(a_in),    b_in,    c_in,     out,      expected,
                (out === expected) ? "PASS" : "FAIL");
    end
  endtask

  // Task for one test
  task run_simd;
    input  signed [aw-1:0]      a0_in;
    input  signed [aw-1:0]      a1_in;
    input signed [bw-1:0]      b0_in;
    input signed [bw-1:0]      b1_in;
    input signed [psum_bw-1:0] c_in;
    // input signed [simd_bw-1:0] c1_in;
    reg   signed [psum_bw-1:0] expected;
    reg signed [bw:0] a0_pad, a1_pad;
    begin
      a[1:0]   = a0_in;
      a[3:2]   = a1_in;
      b0  = b0_in;
      b1  = b1_in;   // must match in non-SIMD mode
      c   = c_in;
      // c[2*simd_bw-1:simd_bw]   = c1_in;
      simd = 1;

      #1; // allow settle

      a0_pad = {1'b0, a0_in};
      a1_pad = {1'b0, a1_in};

      expected = (a0_pad * b0_in) + (a1_pad * b1_in) + c_in;

      $display("a0=%0d a1=%0d b0=%0d b1=%0d c=%0d |  psum=%0d  | expected=%0d %s",
                $unsigned(a0_in), $unsigned(a1_in), b0_in, b1_in, c_in, 
                $signed(out), 
                expected,
                ((out === expected)) ? "PASS" : "FAIL");
    end
  endtask

  initial begin
    $display("=== NON-SIMD MODE TESTS ===");

    $dumpfile("mac_tb.vcd");
    $dumpvars(0,mac_tb);

    run_test(4'd3, 4'sd2, 16'sd5);     // 3*2 + 5 = 11
    run_test(4'd5, -4'sd3, 16'sd0);   // 5*(-3)  = -15
    run_test(4'd2, -4'sd1, 16'sd10);   // 2*(-1) + 10 = 8
    run_test(4'd15, 4'sd7, 16'sd0);    // max a, pos b 105
    run_test(4'd15, -4'sd8, 16'sd0);    // max a neg b -120
    run_test(4'd15, 4'sd7, 16'sd300);    // max a, pos b 405
    run_test(4'd15, -4'sd8, -16'sd300);    // max a neg b -420

    $display("********************************");
    $display("");
    $display("=== NON-SIMD MODE TESTS ===");

    run_simd(2'd0, 2'd1, 4'sd2, -4'sd1, 16'sd5);  //0*2+5 = 5, 1*-1+10 = 9
    run_simd(2'd1, 2'd2, 4'sd3, 4'sd1, 16'sd0); //1*3+0=3, 2*1+7=9
    run_simd(2'd2, 2'd3, -4'sd8, 4'sd7, 16'sd300); // 2*-8+3 = -13, 3*7+4=25
    run_simd(2'd3, 2'd3, -4'sd7, -4'sd8, -16'sd200); // 3*7+2 = 23, 3*-8-300=

    // random stress
    // repeat (10) begin
    //   run_test($urandom_range(0,15),
    //            $urandom_range(-8,7),
    //            $urandom_range(-100,100));
    // end

    $finish;
  end

endmodule