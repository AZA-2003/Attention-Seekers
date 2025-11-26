module core #(
    parameter bw  = 4,       // bit-width of activations
    parameter col = 8,       // PE columns
    parameter row = 8,       // PE rows
    parameter psum_bw = 16,  // Partial sum bit-width
    parameter inst_bw = 34,  // Instruction vector bit-width 
    parameter ADDR_W = 11   // SRAM Address width
)(
    input                          clk,
    input                          reset,
    input [inst_bw-1:0]            inst,           // 34-bit instruction packet from testbench
    input [bw*row-1:0]             D_xmem,         // Data written to x-mem by testbench
    output                         ofifo_valid,    // Write enable for FIFO output
    output [col*psum_bw-1:0]       sfp_out         // Output feature map
);

    wire acc;
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
    wire load;

    wire [10:0] A_pmem;   // bits [30:20]
    wire [10:0] A_xmem;   // bits [17:7]

    assign op_mode   = inst[34];
    assign acc       = inst[33];
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
    assign load      = inst[0];

    wire [bw*row-1:0]        l0_in;
    wire [bw*row-1:0]        Q_wt;
    wire [psum_bw*col-1:0]   Q_out;
    
    wire [psum_bw*col-1:0]   sfp_out;
    
    wire [bw*row-1:0]        ififo_in;
    wire [psum_bw*col-1:0]   ofifo_sram_in;
    wire [psum_bw*col-1:0]   ofifo_out; 

    ////////// Activation/Weight SRAM Instance //////////

    sram #(
        .ADDR_W  (ADDR_W),
        .DATA_W (bw*row)   
    ) activation_sram (
        .CLK (clk),
        .CEN (CEN_xmem),
        .WEN (WEN_xmem),
        .A   (A_xmem),
        .D   (D_xmem),
        .Q   (Q_wt)
    );

    assign l0_in = Q_wt;

    ////////// Corelet Instance //////////

    corelet #(
        .bw     (bw),
        .col    (col),
        .row    (row),
        .psum_bw(psum_bw)
    ) corelet_inst (
        .clk        (clk),
        .reset      (reset),
        .l0_in      (l0_in),
        .l0_rd      (l0_rd),
        .l0_wr      (l0_wr),
        .load       (load),
        .execute    (execute),
        .ofifo_rd   (ofifo_rd),
        .ofifo_out  (ofifo_out)
    );

    assign ofifo_sram_in = op_mode ? sfp_out : ofifo_out;

    ////////// Partial Sum SRAM Instance //////////

    sram #(
        .ADDR_W  (ADDR_W),
        .DATA_W (psum_bw*col)   
    ) psum_sram (
        .CLK (clk),
        .CEN (CEN_pmem),
        .WEN (WEN_pmem),
        .A   (A_pmem),
        .D   (ofifo_sram_in),
        .Q   (Q_out)
    );

endmodule
