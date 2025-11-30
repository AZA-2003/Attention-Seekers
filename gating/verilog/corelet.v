module corelet #(
    // Default parameters
    parameter bw = 4,         // Bit-width of activations
    parameter col = 8,        // PE columns
    parameter row = 8,        // PE rows
    parameter psum_bw = 16    // Partial sum bit-width
)
(
    input                       clk,        // Clock input
    input                       reset,      // Reset input
    input  [bw*row-1:0]         l0_in,      // Input data for ififo
    input                       l0_rd,      // Read enable for ififo
    input                       l0_wr,      // Write enable for ififo
    input                       load,       // Load instruction for MAC array
    input                       ld_mode,    // Load mode for ififo  
    input                       execute,    // Execute instruction for MAC array
    input                       ofifo_rd,   // Read enable for ofifo
    input 			sfu_acc,    // Accumulate in SFU
    input 			sfu_relu,   // ReLU in SFU
    input  [col*psum_bw-1:0]    sram_out,   // Output of sram
    output [psum_bw*col-1:0]    ofifo_out,  // Output data from ofifo
    output                      ofifo_valid,// Output valid signal from ofifo
    output [psum_bw*col-1:0]    sfu_out     // Output from SFU
);

    wire                       l0_full;  // Full flag from ififo
    wire                       l0_ready; // Ready flag from ififo    
    wire [bw*row-1:0]          l0_out;   // Output data from ififo
    
    wire [psum_bw*col-1:0]     out_s;
    wire [col-1:0]             valid;
    reg  [col-1:0]             valid_q;
    reg  [psum_bw*col-1:0]     out_s_q;

    wire [col-1:0]             sfu_valid_out;

    wire                       ofifo_full;  // Full flag from ofifo
    wire                       ofifo_ready; // Ready flag from ofifo        

    ////////// L0 IFIFO Instance //////////

    l0 #(
        .row(row),      // connect row parameter from parent
        .bw(bw)         // connect bw parameter from parent
    ) ififo_inst (
        .clk      (clk),
        .reset    (reset),
        .in       (l0_in),
        .ld_mode  (ld_mode),
        .out      (l0_out),
        .rd       (l0_rd),
        .wr       (l0_wr),
        .o_full   (l0_full),
        .o_ready  (l0_ready)
    );

    
    ////////// MAC Array Instance //////////

    mac_array #(
        .bw(bw),
        .psum_bw(psum_bw),  
        .col(col),  
        .row(row)
    ) mac_array_inst (
        .clk      (clk),
        .reset    (reset),
        .in_w     (l0_out),
        .in_n     ({(psum_bw*col){1'b0}}),
        .ld_mode  (ld_mode),
        .out_s    (out_s),
        .inst_w   ({execute, load}),
        .valid    (valid)
    );

    ////////// SFU Instance //////////
    sfu_array #(
        .psum_bw(psum_bw)
    ) sfu_inst (
        .clk            (clk),
        .reset          (reset),
        .acc            (sfu_acc),
        .relu           (sfu_relu),
        .sfu_in         (sram_out),
        .sfu_out        (sfu_out)
    );

    ofifo #(
        .col(col),          
        .bw(psum_bw)   
    ) ofifo_inst (
        .clk      (clk),
        .reset    (reset),
        .in       (out_s_q),
        .out      (ofifo_out),
        .rd       (ofifo_rd),
        .wr       (valid_q),
        .o_full   (ofifo_full),
        .o_ready  (ofifo_ready),
        .o_valid  (ofifo_valid)
    );

    always @ (posedge clk) begin
        if (reset) begin
            valid_q   <= 0;
            out_s_q   <= 0;
        end
        else begin
            valid_q   <= valid;
            out_s_q   <= out_s;
        end
    end

endmodule
