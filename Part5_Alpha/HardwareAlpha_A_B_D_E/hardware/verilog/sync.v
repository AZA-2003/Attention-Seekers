// 1-bit N-stage synchronizer
// Simple two-or-more flop synchronizer for sampling an asynchronous single-bit domain
// into a clocked domain. Uses synchronous, active-high reset.
//
// Parameters:
//  STAGES - number of flip-flop stages (>=1). Default 2.
//  RESET_VALUE - value of each stage after reset (default 0).
//
// Ports:
//  clk       - destination (clock) domain
//  reset     - active-high synchronous reset
//  async_in  - asynchronous input signal to synchronize
//  sync_out  - synchronized output (stable in clk domain)

module sync #(
  parameter integer STAGES = 2,
  parameter RESET_VALUE = 1'b0
) (
  input  wire clk,
  input  wire reset,
  input  wire async_in,
  output wire sync_out
);

  // shift register of stages; stage 0 samples the async input
  reg [STAGES-1:0] sync_r;
  integer i;

  always @(posedge clk) begin
    if (reset) begin
      sync_r <= {STAGES{RESET_VALUE}};
    end else begin
      sync_r[0] <= async_in;
      for (i = 1; i < STAGES; i = i + 1) begin
        sync_r[i] <= sync_r[i-1];
      end
    end
  end

  assign sync_out = sync_r[STAGES-1];

endmodule
