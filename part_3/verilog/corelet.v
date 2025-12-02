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

    input                       ld_mode,      // Load mode input

    input  [bw*row-1:0]         l0_in,      // Input data for ififo
    input                       l0_rd,      // Read enable for ififo
    input                       l0_wr,      // Write enable for ififo

    input [bw*row-1:0]          ififo_in,      // IFIFO input data
    input                       ififo_wr,      // IFIFO write enable
    input                       ififo_rd,      // IFIFO read enable

    input                       os_or_ws,   // WS = 0, OS = 1 (WS = Weight Stationary, OS = Output Stationary)
    input                       kflush,     // For WS = Load instruction, For OS = Flush
    input                       execute,    // Execute instruction for MAC array

    input  [col*psum_bw-1:0]    psum_sram_out,   // Output of sram

    input                       ofifo_rd,   // Read enable for ofifo
    output [psum_bw*col-1:0]    ofifo_out,  // Output data from ofifo
    input 			ofifo_wr_ext,
    // OFIFO status forwarded out
    output                      ofifo_valid,

    // SFU interface
    input 			            sfu_acc,    // Accumulate in SFU
    input 			            sfu_relu,   // ReLU in SFU
    output signed [psum_bw*col-1:0]    sfu_out
);
    // L0 signals
    wire                       l0_full;  // Full flag from L0
    wire                       l0_ready; // Ready flag from L0    
    wire [bw*row-1:0]          l0_out;   // Output data from L0
    wire                       l0_ld_mode;            
    
    // MAC signals
    wire [psum_bw*row-1:0]     mac_array_in_n;
    wire [psum_bw*col-1:0]     mac_out_s;
    wire [col-1:0]             mac_valid;
    wire                       mac_ld_mode;

    // OFIFO signals
    wire                       ofifo_full;  // Full flag from ofifo
    wire                       ofifo_ready; // Ready flag from ofifo 
    wire [col-1:0]	       ofifo_wr;
    // IFIFO signals
    wire                       ififo_ld_mode;            
    wire [bw*row-1:0]          ififo_out;  // Output flag from IFIFO
    wire [psum_bw*row-1:0]     ififo_out_sgn_ext;  // Output flag from IFIFO
    wire                       ififo_full; // Full flag from IFIFO
    wire                       ififo_ready; // Ready data from IFIFO

    // SFU input
    wire signed [psum_bw*col-1:0]    sfu_in;

    // Internal registers for OFIFO
    reg  [col-1:0]             valid_q;
    reg  [psum_bw*col-1:0]     out_s_q;
    reg  [col-1:0]             temp_fifo_wr;

    /*
    assign l0_ld_mode = !execute;
    assign ififo_ld_mode = !execute;
    assign mac_ld_mode = !execute;
    */

    assign l0_ld_mode = ld_mode;
    assign ififo_ld_mode = ld_mode;
    assign mac_ld_mode = ld_mode;

    ////////// L0 FIFO Instance //////////

    l0 #(
        .row(row),      // connect row parameter from parent
        .bw(bw)         // connect bw parameter from parent
    ) u_l0 (
        .clk      (clk),
        .reset    (reset),

        .in       (l0_in),
        .out      (l0_out),

        .rd       (l0_rd),
        .wr       (l0_wr),

        .ld_mode  (l0_ld_mode),

        .o_full   (l0_full),
        .o_ready  (l0_ready)
    );

    ////////// North IFIFO Instance //////////

    l0 #(
        .row(row),      // connect row parameter from parent
        .bw(bw)         // connect bw parameter from parent
    ) u_ififo (
        .clk      (clk),
        .reset    (reset),

        .in       (ififo_in),
        .out      (ififo_out),

        .rd       (ififo_rd),
        .wr       (ififo_wr),

        .ld_mode  (ififo_ld_mode),

        .o_full   (ififo_full),
        .o_ready  (ififo_ready)
    );

    genvar ififo_idx;
    generate
        for(ififo_idx = 0; ififo_idx < row; ififo_idx = ififo_idx + 1) begin : ififo_sign_ext_loop
            // Sign-extend each bw-bit segment to psum_bw bits
            assign ififo_out_sgn_ext[(ififo_idx+1)*psum_bw-1:ififo_idx*psum_bw] =
                {{(psum_bw - bw){ififo_out[(ififo_idx+1)*bw-1]}}, ififo_out[(ififo_idx+1)*bw-1:ififo_idx*bw]};
        end
    endgenerate
 
    ////////// MAC Array Instance //////////

    mac_array #(
        .bw(bw),
        .psum_bw(psum_bw),  
        .col(col),  
        .row(row)
    ) u_mac_array (
        .clk      (clk),
        .reset    (reset),
        .in_w     (l0_out),
        .in_n     (mac_array_in_n),
        .ld_mode  (mac_ld_mode),
        .out_s    (mac_out_s),
        .inst_w   ({os_or_ws, execute, kflush}),
        .valid    (mac_valid)
    );

    // In Output Stationary mode, we would like to pass in 0s to the MAC array on a flush.
    // In Output Stationary execute, we would like to pass in the IFIFO output to the MAC array.
    // In Weight Stationary mode, we always pass in 0s to the MAC array.

    assign mac_array_in_n = (!os_or_ws || kflush) ? { (psum_bw*row){1'b0} } : ififo_out_sgn_ext;    // Output Stationary

    ////////// SFU Instance //////////
    sfu_array #(
        .psum_bw(psum_bw)
    ) sfu_inst (
        .clk            (clk),
        .reset          (reset),
        .acc            (sfu_acc),
        .relu           (sfu_relu),
	.os_or_ws       (os_or_ws),
        .sfu_in         (sfu_in),
        .sfu_out        (sfu_out)
    );

    // In Output Stationary mode, SFU input comes from MAC output to perform RELU as we flush immediately after MAC 
    // In Weight Stationary mode, SFU input comes from PSUM SRAM output

    // For Output Stationary mode, make sure to assign sfu_acc to 0 from the top-level and sfu_relu to 1 always.
    // This is because in OS mode, we want to just apply ReLU to the MAC output directly without accumulation.

    assign sfu_in = os_or_ws ? ofifo_out : psum_sram_out;
    assign ofifo_wr = os_or_ws ? temp_fifo_wr: valid_q;
    assign ofifo_rd_en = os_or_ws ? ofifo_valid: ofifo_rd;
    ////////// OFIFO Instance //////////

    ofifo #(
        .col(col),          
        .bw(psum_bw)   
    ) u_ofifo (
        .clk      (clk),
        .reset    (reset),
        .rd       (ofifo_rd),
        .wr       (ofifo_wr),
        .in       (out_s_q),

        .out      (ofifo_out),
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
            valid_q   <= mac_valid;
            out_s_q   <= mac_out_s;
        end
    end

    always @ (posedge clk) begin
	    temp_fifo_wr[0] <= ofifo_wr_ext;
	    temp_fifo_wr[1] <= temp_fifo_wr[0];
	    temp_fifo_wr[2] <= temp_fifo_wr[1]; 
	    temp_fifo_wr[3] <= temp_fifo_wr[2];
	    temp_fifo_wr[4] <= temp_fifo_wr[3];
	    temp_fifo_wr[5] <= temp_fifo_wr[4];
	    temp_fifo_wr[6] <= temp_fifo_wr[5];
	    temp_fifo_wr[7] <= temp_fifo_wr[6];
    end
endmodule
