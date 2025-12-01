module sfu #(parameter psum_bw = 16)(
    input  wire                     clk,
    input  wire                     reset,
    input  wire [1:0]               OP,
    input  wire signed [psum_bw-1:0] psum_in,
    output wire signed [psum_bw-1:0]  psum_out
);

    // Accumulator holds signed partial-sum/accumulation
    reg signed [psum_bw-1:0] acc;

    // OP codes
    localparam OP_NOP  = 2'b00;
    localparam OP_SET  = 2'b01;
    localparam OP_ACC  = 2'b10;
    localparam OP_RELU = 2'b11;

    // Sequential behavior: update accumulator based on OP on posedge clk
    always @(posedge clk) begin
        if (reset) begin
            acc <= {psum_bw{1'b0}};
        end
        else begin
            case (OP)
                OP_NOP: begin
                    // do nothing: keep acc
                    acc <= acc;
                end
                OP_SET: begin
                    // load acc with psum_in
                    acc <= psum_in;
                end
                OP_ACC: begin
                    // accumulate
                    acc <= acc + psum_in;
                end
                OP_RELU: begin
                    // RELU on acc: if acc > 0 keep, else zero
                    acc <= (acc > 0) ? acc : {psum_bw{1'b0}};
                end
                default: acc <= acc;
            endcase

        end
    end

    assign psum_out = acc;

endmodule
