module sfu_array #(
    parameter col = 8,
    parameter psum_bw = 16,
    parameter ADDR_W = 11
) (
    input                       clk,
    input                       reset,
    input                       start_sfu,

    // signed PSUM inputs/outputs: col lanes packed
    input  signed [col*psum_bw-1:0]    sfu_in,
    output signed [col*psum_bw-1:0]    sfu_out,

    // PSUM SRAM control outputs from internal SFU controller
    output [ADDR_W-1:0]               psum_mem_addr,
    output                            psum_mem_rd_enable,
    output                            psum_mem_wr_enable,
    output                            sfu_active
);

genvar i;

  // Wire vector of OP codes produced by the sfu_controller (2 bits per column)
  wire [col*2-1:0] sfu_op_out;

  // Instantiate SFU controller that produces per-column OP codes and PSUM memory controls
  sfu_controller #(
    .ADDR_W(ADDR_W),
    .num_oc(col)
  ) sfu_ctrl_inst (
    .clk(clk),
    .reset(reset),
    .start_sfu(start_sfu),
    .psum_mem_addr(psum_mem_addr),
    .psum_mem_rd_enable(psum_mem_rd_enable),
    .psum_mem_wr_enable(psum_mem_wr_enable),
    .sfu_active(sfu_active),
    .sfu_op_array(sfu_op_out)
  );

for (i = 1; i < col + 1; i = i + 1) begin : sfu_array
    sfu #(
        .psum_bw(psum_bw)
    ) sfu_inst (
        .clk            (clk),
        .reset          (reset),
        .OP             (sfu_op_out[(i*2)-1:(i-1)*2]),
        .psum_in        (sfu_in[(i*psum_bw)-1:(i-1)*psum_bw]),
        .psum_out       (sfu_out[(i*psum_bw)-1:(i-1)*psum_bw])
    );
end

endmodule
