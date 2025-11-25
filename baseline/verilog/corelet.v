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
    input                       execute,    // Execute instruction for MAC array
    input                       ofifo_rd,   // Read enable for ofifo
    output [psum_bw*col-1:0]    ofifo_out   // Output data from ofifo
);

    wire                       l0_full;  // Full flag from ififo
    wire                       l0_ready; // Ready flag from ififo    
    wire [bw*row-1:0]          l0_out;   // Output data from ififo
    
    wire [psum_bw*col-1:0]     out_s;
    wire [col-1:0]             valid;
    reg  [col-1:0]             valid_q;
    reg  [psum_bw*col-1:0]     out_s_q;

    wire [col-1:0]             sfu_valid_out;
    wire [psum_bw*col-1:0]     sfu_out;

    wire                       ofifo_full;  // Full flag from ofifo
    wire                       ofifo_ready; // Ready flag from ofifo        
    wire                       ofifo_valid; // Valid flag from ofifo

    ////////// L0 IFIFO Instance //////////

    l0 #(
        .row(row),      // connect row parameter from parent
        .bw(bw)         // connect bw parameter from parent
    ) ififo_inst (
        .clk      (clk),
        .reset    (reset),
        .in       (l0_in),
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
        .sfu_valid_in   (valid_q),
        .sfu_in         (out_s_q),
        .sfu_valid_out  (sfu_valid_out),
        .sfu_out        (sfu_out)
    );

    ////////// OFIFO Instance //////////

    ofifo #(
        .col(col),          
        .bw(psum_bw)   
    ) ofifo_inst (
        .clk      (clk),
        .reset    (reset),
        .in       (sfu_out),
        .out      (ofifo_out),
        .rd       (ofifo_rd),
        .wr       (sfu_valid_out),
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