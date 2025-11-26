module sfu #(parameter psum_bw = 16)(
    input clk,
    input reset,
    input valid_in,
    input [psum_bw-1:0] psum_in,
    output reg valid_out,
    output reg [psum_bw-1:0] psum_out
);

reg [psum_bw-1:0] acc;
wire [psum_bw-1:0] relu;
reg valid_in_q;
wire valid_negedge;

assign valid_negedge = !valid_in && valid_in_q;
// reset to make accumulator 0.
// Valid_q negedge detector to assert out_valid

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
            acc <= acc + psum_in;
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