module corelet #(
    // Default parameters
    parameter bw = 4,         // Bit-width of activations
    parameter col = 8,        // PE columns
    parameter row = 8,        // PE rows
    parameter psum_bw = 16,    // Partial sum bit-width
    parameter ADDR_W = 11      // Address width for PSUM SRAM
)
(
    input                       mac_array_clk,        // Clock input
    input                       l0_clk,               // Clock input
    input                       ofifo_clk,            // Clock input
    input                       sfu_clk,              // Clock input

    input                       reset,      // Reset input
    input                       mac_reset,      // Reset input
    input  [bw*row-1:0]         l0_in,      // Input data for ififo
    input                       l0_rd,      // Read enable for ififo
    input                       l0_wr,      // Write enable for ififo

    input                       l0_flush_ptr,  // Flush pointer for ififo

    input                       load,       // Load instruction for MAC array
    input                       execute,    // Execute instruction for MAC array
    input                       ofifo_rd,   // Read enable for ofifo
    input                       ld_mode,   // Load mode for weight stationary controller
    output [psum_bw*col-1:0]    ofifo_out,  // Output data from ofifo

    // OFIFO status forwarded out
    output                      ofifo_valid,

    // SFU interface (optional)
    input  [psum_bw*col-1:0]    sfu_in,
    input                       sfu_start,
    output [psum_bw*col-1:0]    sfu_out,
    output                      sfu_active,

    // PSUM memory interface driven by corelet/SFU
    output [ADDR_W-1:0]         psum_mem_addr,
    output                      psum_mem_wr,
    output                      psum_mem_rd
);

    wire                       l0_full;  // Full flag from ififo
    wire                       l0_ready; // Ready flag from ififo    
    wire [bw*row-1:0]          l0_out;   // Output data from ififo
    
    wire [psum_bw*col-1:0]     mac_out_s;
    wire [col-1:0]             mac_valid;

    // SFU signals (SFU implementation optional)
    wire [col-1:0]             sfu_valid_out;

    wire                       ofifo_full;  // Full flag from ofifo
    wire                       ofifo_ready; // Ready flag from ofifo

    ////////// L0 IFIFO Instance //////////

    l0 #(
        .row(row),      // connect row parameter from parent
        .bw(bw)         // connect bw parameter from parent
    ) u_ififo (
        .clk      (l0_clk),
        .reset    (reset),
        .in       (l0_in),
        .out      (l0_out),
        .rd       (l0_rd),
        .wr       (l0_wr),
        .ld_mode  (ld_mode),
        .flush_ptr  (l0_flush_ptr),
        .o_full   (l0_full),
        .o_ready  (l0_ready)
    );
    
    ////////// MAC Array Instance //////////

    mac_array #(
        .bw(bw),
        .psum_bw(psum_bw),  
        .col(col),  
        .row(row)
    ) u_mac_array (
        .clk      (mac_array_clk),
        .reset    (reset || mac_reset),
        .in_w     (l0_out),
        .in_n     ({(psum_bw*col){1'b0}}),
        .out_s    (mac_out_s),
        .inst_w   ({execute, load}),
        .ld_mode  (ld_mode),
        .valid    (mac_valid)
    );

    ////////// SFU Instance //////////
    sfu_array #(
        .col(col),
        .psum_bw(psum_bw),
        .ADDR_W(ADDR_W)
    ) u_sfu_array (
        .clk(sfu_clk),
        .reset(reset),
        .start_sfu(sfu_start),
        .sfu_in(sfu_in),
        .sfu_out(sfu_out),
        .psum_mem_addr(psum_mem_addr),
        .psum_mem_rd_enable(psum_mem_rd),
        .psum_mem_wr_enable(psum_mem_wr),
        .sfu_active(sfu_active)
    );
    ////////// OFIFO Instance //////////

    ofifo #(
        .col(col),          
        .bw(psum_bw)   
    ) u_ofifo (
        .clk      (ofifo_clk),
        .reset    (reset),
        .rd       (ofifo_rd),
        .wr       (mac_valid),
        .in       (mac_out_s),

        .out      (ofifo_out),
        .o_full   (ofifo_full),
        .o_ready  (ofifo_ready),
        .o_valid  (ofifo_valid)
    );

endmodule
