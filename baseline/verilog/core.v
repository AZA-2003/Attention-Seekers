module core #(
    parameter bw  = 4,      // bit-width of activations
    parameter col = 8,      // PE columns
    parameter row = 8,      // PE rows
    parameter psum_bw = 16  // Partial sum bit-width 
)(
    input                     clk,
    input                     reset,

    // 34-bit instruction packet from testbench
    input [33:0]              inst,

    // Data written to x-mem by testbench
    input [bw*row-1:0]        D_xmem,

    // Write enable for FIFO output
    output                    ofifo_valid,

    // Output feature map
    output [col*psum_bw-1:0]       sfp_out
);

endmodule
