`timescale 1ns/1ps

// Testbench for SFU module
module sfu_tb;

  parameter psum_bw = 16;

  reg                  clk;
  reg                  rstn;
  reg                  valid_in;
  reg  [psum_bw-1:0]   psum_in;
  wire [psum_bw-1:0]   psum_out;
  wire                 valid_out;

  // DUT instantiation
  sfu #(.psum_bw(psum_bw)) dut (
    .psum_in   (psum_in),
    .psum_out  (psum_out),
    .clk       (clk),
    .rstn      (rstn),
    .valid_in  (valid_in),
    .valid_out (valid_out)
  );

  // 10 ns period clock (100 MHz)
  initial clk = 1'b0;
  always #5 clk = ~clk;

  // For waveform and console monitoring
  initial begin
    $dumpfile("sfu_tb.vcd");
    $dumpvars(0, sfu_tb);
  end

  // Stimulus
  initial begin
    // Initialize signals
    rstn     = 1'b0;
    valid_in = 1'b0;
    psum_in  = {psum_bw{1'b0}};

    // Hold reset low for a bit
    #20;
    rstn = 1'b1;

    //----------------------------------------------------------------
    // TEST 1:
    // Inputs: 1, 2, 3, 4, 5 with valid_in = 1
    // Accumulated sum = 15, ReLU(15) = 15
    //----------------------------------------------------------------
    @(negedge clk);
    valid_in = 1'b1;
    psum_in  = 16'sd1;

    @(negedge clk);
    psum_in  = 16'sd2;

    @(negedge clk);
    psum_in  = 16'sd3;

    @(negedge clk);
    psum_in  = 16'sd4;

    @(negedge clk);
    psum_in  = 16'sd5;

    // End of valid stream
    @(negedge clk);
    valid_in = 1'b0;
    psum_in  = 16'sd0;

    // Wait for SFU to assert its output valid_out
    wait (valid_out == 1'b1);
    if ($signed(psum_out) !== 16'sd15)
      $display("TEST 1 FAILED: expected 15, got %0d", $signed(psum_out));
    else
      $display("TEST 1 PASSED: ReLU(sum) = %0d", $signed(psum_out));

    @(negedge clk); // let valid_out deassert

    //----------------------------------------------------------------
    // TEST 2:
    // Inputs: -3, +1 with valid_in = 1
    // Accumulated sum = -2, ReLU(-2) = 0
    //----------------------------------------------------------------

    // Reset accumulator via rstn
    @(negedge clk);
    rstn = 1'b0;
    @(negedge clk);
    rstn = 1'b1;

    @(negedge clk);
    valid_in = 1'b1;
    psum_in  = -16'sd3;   // negative value (two's complement)

    @(negedge clk);
    psum_in  = 16'sd1;    // accumulated sum = -2

    // End of valid stream
    @(negedge clk);
    valid_in = 1'b0;
    psum_in  = 16'sd0;

    // Wait for valid_out and check ReLU behavior
    wait (valid_out == 1'b1);
    if ($signed(psum_out) !== 16'sd0)
      $display("TEST 2 FAILED: expected 0, got %0d", $signed(psum_out));
    else
      $display("TEST 2 PASSED: ReLU(negative sum) = %0d", $signed(psum_out));

    //----------------------------------------------------------------
    // Finish
    //----------------------------------------------------------------
    #20;
    $display("All tests completed.");
    $finish;
  end

endmodule

