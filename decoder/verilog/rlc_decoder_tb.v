`timescale 1ns/1ps

module rlc_decoder_tb;

    reg clk = 0;
    reg reset = 1;

    reg  [31:0] in_data;
    reg         in_valid;
    wire        in_ready;

    wire [31:0] out;
    wire        out_valid;
    reg         out_ready = 1;

    // dut
    rlc_decoder dut (
        .clk(clk),
        .reset(reset),
        .in_data(in_data),
        .in_valid(in_valid),
        .in_ready(in_ready),
        .out(out),
        .out_valid(out_valid),
        .out_ready(out_ready)
    );

    always #5 clk = ~clk;

    initial begin
        in_data  = 0;
        in_valid = 0;

        #20 reset = 0;

        // dummy data
        in_data  = 32'b0011_000_1111_000_0101_000_1010_000_0000;
        in_valid = 1;

        wait(in_ready); // wait till accepted
        #10 in_valid = 0;

        #300 $finish;
    end

    always @(posedge clk) begin
        if (out_valid && out_ready) begin
            $display("t=%0t  out = %h", $time, out);
        end
    end

endmodule
