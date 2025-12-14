module core #(
    parameter bw  = 4,       // bit-width of activations
    parameter col = 8,       // PE columns
    parameter row = 8,       // PE rows
    parameter psum_bw = 16,  // Partial sum bit-width
    parameter inst_bw = 39,  // Instruction vector bit-width 
    parameter len_nij = 36,
    parameter ADDR_W = 11,   // SRAM Address width
    parameter DATA_W = 32    // SRAM Data Width
)(
    input                               clk,
    input                               reset,
    input [inst_bw-1:0]                 inst,           // 34-bit instruction packet from testbench
    input [DATA_W-1:0]                  D_xmem,         // Data written to x-mem by testbench
    input [len_nij*bw-1:0]		D_xmem_outstat,
    input [6*row-1:0]			input_index,
    output                              ofifo_valid,    // Write enable for FIFO output
    output [col*psum_bw-1:0]		pmem_out,  // Output of PSUM SRAM
    output signed [col*psum_bw-1:0]     sfu_out         // Output feature map
);

    //wire acc;
    wire CEN_pmem;
    wire WEN_pmem;
    wire CEN_xmem;
    wire WEN_xmem;
    wire ofifo_rd;
    wire ififo_wr;
    wire ififo_rd;
    wire l0_rd;
    wire l0_wr;
    wire execute;
    wire kflush;
    wire os_or_ws;
    wire sfu_relu;
    wire sfu_acc;
    wire ld_mode;

    wire [ADDR_W-1:0] A_pmem;   // bits [30:20]
    wire [ADDR_W-1:0] A_xmem;   // bits [17:7]
    
    assign os_or_ws  = inst[38]; // WS = 0, OS = 1

    assign sfu_relu  = inst[37];
    assign sfu_acc   = inst[36]; 
    assign ld_mode   = inst[35];
    //assign op_mode   = inst[34];
    //assign acc       = inst[33];
    assign CEN_pmem  = inst[32];
    assign WEN_pmem  = inst[31];
    assign A_pmem    = inst[30:20];
    assign CEN_xmem  = inst[19];
    assign WEN_xmem  = inst[18];
    assign A_xmem    = inst[17:7];
    assign ofifo_rd  = inst[6];
    assign ififo_wr  = inst[5];
    assign ififo_rd  = inst[4];
    assign l0_rd     = inst[3];
    assign l0_wr     = inst[2];
    assign execute   = inst[1];
    assign kflush    = inst[0];

    wire [bw*row-1:0]        l0_in;
    wire [DATA_W-1:0]        Q_wt;
    wire [DATA_W-1:0]        Q_wt1;
    
    wire [bw*row-1:0]        ififo_in;
    wire [psum_bw*col-1:0]   ofifo_out;

    wire [col*psum_bw-1:0]   psum_sram_in; 
    wire [col*psum_bw-1:0]   psum_sram_out;

    wire [row*bw-1:0]	     D_xmem_sel; 
    
    input_selector inputmap (
  	.in(D_xmem_outstat),
  	.add(input_index),
  	.out(D_xmem_sel)
    );

    ////////// Activation/Weight SRAM Instance //////////

    sram #(
        .ADDR_W  (ADDR_W),
        .DATA_W (DATA_W)   
    ) activation_sram (
        .CLK (clk),
        .CEN (CEN_xmem),
        .WEN (WEN_xmem),
        .A   (A_xmem),
        .D   (os_or_ws? D_xmem_sel: D_xmem),
        .Q   (Q_wt)
    );

    // Weight SRAM for OS
    sram #(
        .ADDR_W  (ADDR_W),
        .DATA_W (DATA_W)   
    ) activation_os_sram (
        .CLK (clk),
        .CEN (inst[40]),
        .WEN (inst[39]),
        .A   (inst[51:41]),
        .D   (D_xmem),
        .Q   (Q_wt1)
    );

    // For both OS and WS modes, L0 input comes from weight SRAM output
    // IFIFO input comes from activation/weight SRAM output as well

    assign l0_in = Q_wt;
    assign ififo_in = Q_wt1;

    ////////// Corelet Instance //////////

    corelet #(
        .bw     (bw),
        .col    (col),
        .row    (row),
        .psum_bw(psum_bw)
    ) corelet_inst (
        .clk         (clk),
        .reset       (reset),

        .ld_mode     (ld_mode),
        .l0_in       (l0_in),
        .l0_rd       (l0_rd),
        .l0_wr       (l0_wr),

        .ififo_in    (ififo_in),
        .ififo_wr    (inst[53]),
        .ififo_rd    (inst[52]),

        .kflush      (kflush),
        .execute     (execute),

        .os_or_ws    (os_or_ws),

	    .sfu_acc     (sfu_acc),
	    .sfu_relu    (sfu_relu),

        .ofifo_rd    (ofifo_rd),
        .ofifo_out   (ofifo_out),
        .ofifo_valid (ofifo_valid),
	.ofifo_wr_ext (inst[56]),
	    .psum_sram_out (psum_sram_out),
	    .sfu_out       (sfu_out)
    );

    ////////// Partial Sum SRAM Instance //////////

    // In Output Stationary mode, PSUM SRAM input comes from SFU output
    // In Weight Stationary mode, PSUM SRAM input comes from OFIFO output
    assign psum_sram_in = os_or_ws ? sfu_out : ofifo_out;

    sram #(
        .ADDR_W  (ADDR_W),
        .DATA_W (psum_bw*col)   
    ) psum_sram (
        .CLK (clk),
        .CEN (CEN_pmem),
        .WEN (WEN_pmem),
        .A   (A_pmem),
        .D   (psum_sram_in),
        .Q   (psum_sram_out)
    );
  
    assign pmem_out = psum_sram_out;

endmodule
