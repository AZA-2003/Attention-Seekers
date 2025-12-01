module core_clk_gating_control (
    input  wire                     clk,
    input  wire                     reset,
      // Inputs
    input wire                     weights_sram_clk_en,
    input wire                     psum_sram_clk_en,
    input wire                     mac_array_clk_en,
    input wire                     l0_clk_en,
    input wire                     ofifo_clk_en,
    input wire                     sfu_clk_en,
        // Outputs
    output wire                     weights_sram_clk,
    output wire                     psum_sram_clk,
    output wire                     mac_array_clk,
    output wire                     l0_clk,
    output wire                     ofifo_clk,
    output wire                     sfu_clk

);

  wire [5:0] clk_en_signals;
  wire [5:0] gated_clks;
  assign clk_en_signals = {weights_sram_clk_en, psum_sram_clk_en, mac_array_clk_en, l0_clk_en, ofifo_clk_en, sfu_clk_en};
  assign {weights_sram_clk, psum_sram_clk, mac_array_clk, l0_clk, ofifo_clk, sfu_clk} = gated_clks;
  genvar i;
  generate
    for (i = 0; i < 6; i = i + 1) begin : clk_gate_gen
      clkgate u_clkgate (
        .clk(clk),
        .reset(reset),
        .en(clk_en_signals[i]),
        .gclk(gated_clks[i])
      );
    end
  endgenerate

endmodule
