module sfu_array #(
    parameter col = 8,
    parameter psum_bw = 16
)(
    input                       clk,
    input                       reset,
    input  [col-1:0]            sfu_valid_in,
    input  [col*psum_bw-1:0]    sfu_in,
    output [col-1:0]            sfu_valid_out,
    output [col*psum_bw-1:0]    sfu_out
);

genvar i;

for (i = 1; i < col + 1; i = i + 1) begin : sfu_array
    sfu #(
        .psum_bw(psum_bw)
    ) sfu_inst (
        .clk            (clk),
        .reset          (reset),
        .valid_in       (sfu_valid_in[i-1]),
        .psum_in        (sfu_in[(i*psum_bw)-1:(i-1)*psum_bw]),
        .psum_out       (sfu_out[(i*psum_bw)-1:(i-1)*psum_bw]),
        .valid_out      (sfu_valid_out[i-1])
    );
end

endmodule