module sfu #(parameter psum_bw_in = 18, 
            parameter psum_bw = 16
)(
    input clk,
    input reset,
    input valid_in,
    input simd,
    input [psum_bw_in-1:0] psum_in,
    output reg valid_out,
    output reg [psum_bw-1:0] psum_out
);

localparam simd_bw = psum_bw_in/2;

reg [psum_bw-1:0] acc;
wire [psum_bw-1:0] relu;
reg valid_in_q;
wire valid_negedge;
wire signed [simd_bw-1:0] psum0, psum1;
wire signed [psum_bw-1:0] combined_psum;

assign valid_negedge = !valid_in && valid_in_q;
// reset to make accumulator 0.
// Valid_q negedge detector to assert out_valid

assign psum0 = psum_in[simd_bw-1:0];
assign psum1 = psum_in[2*simd_bw-1:simd_bw];
assign combined_psum = simd? psum0 + psum1 : psum_in; // Add psum0 and psum1 for simd mode

always @ (posedge clk) begin
    if (reset) begin
        valid_in_q <= 0;
        valid_out <= 0;
    end
    else begin
        valid_in_q <= valid_in; 
        valid_out <= valid_negedge; // negedge detect

    end
end

always @ (posedge clk)  begin
    if (reset) begin
        acc <= 0;
    end
    else begin
        if (valid_in) begin
            acc <= acc + combined_psum;
        end
        else begin
            acc <= 0;
        end
    end
end

always @ (posedge clk) begin
    if (reset)
        psum_out <= 0;
    else begin
        if (!valid_negedge)
            psum_out <= 0;
        else 
            psum_out <= relu;
    end 
end

assign relu = (acc[psum_bw-1])? 0 : acc; // relu

endmodule