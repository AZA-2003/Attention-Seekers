module sfu #(parameter psum_bw = 16)(
    input clk,
    input reset,
    input acc,
    input relu,
    input os_or_ws,
    input [psum_bw-1:0] psum_in,
    output reg [psum_bw-1:0] psum_out
);

reg acc_q;
wire [psum_bw-1:0] psum;
wire [psum_bw-1:0] psum_acc;

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
            psum_out <= psum ? 0 : psum_acc;
        end
	else begin
	    psum_out <= 0;
	end
    end
end

assign psum = os_or_ws ? psum_in[psum_bw-1]: psum_out[psum_bw-1];
assign psum_acc = os_or_ws ? psum_in :psum_out + psum_in;

endmodule
