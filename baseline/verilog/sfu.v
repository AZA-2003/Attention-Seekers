module sfu #(parameter psum_bw = 16)(
    input clk,
    input reset,
    input acc,
    input relu,
    input [psum_bw-1:0] psum_in,
    output reg [psum_bw-1:0] psum_out
);

reg acc_q;

always @ (posedge clk) begin
    if (reset) begin
        psum_out <= 0;
    end
    else begin
	acc_q <= acc;
        if (acc & !acc_q) begin
            psum_out <= psum_in;
        end
	else if (acc & acc_q) begin
	    psum_out <= psum_out + psum_in;
	end
        else if (relu) begin
            psum_out <= psum_out[psum_bw-1]? 0 : psum_out + psum_in;
        end
	else begin
	    psum_out <= 0;
	end
    end
end

endmodule
