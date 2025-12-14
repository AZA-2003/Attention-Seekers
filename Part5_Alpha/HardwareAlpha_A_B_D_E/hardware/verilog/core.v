module core #(
    parameter bw  = 4,       // bit-width of activations
    parameter col = 8,       // PE columns
    parameter row = 8,       // PE rows
    parameter psum_bw = 13,  // Partial sum bit-width
    parameter ADDR_W = 11,   // SRAM Address width
    parameter inst_bw = ADDR_W + 4  // Instruction vector bit-width 
)(
    input                          clk,
    input                          reset,
    input [inst_bw-1:0]            inst,           // instruction packet from testbench
    input [bw*col-1:0]             D_xmem,         // Data written to x-mem by testbench
    input [7:0]                    num_nij_to_compute, // number of nij to compute (from controller/testbench)
    input [7:0]                    num_kij_to_compute, // number of kij to compute (from controller/testbench)
    input [ADDR_W-1:0]             weight_start_sram_addr,
    input [ADDR_W-1:0]             activation_start_sram_addr,
    output                         core_busy,     // Busy signal indicating core is processing
    output [psum_bw*col-1:0]       psum_mem_out     // Output data from psum memory
);

    wire [bw*row-1:0]        l0_in;
    wire [bw*row-1:0]        Q_wt;
    wire [psum_bw*col-1:0]   Q_out;
    
    wire [psum_bw*col-1:0]   ofifo_sram_in;
    wire [psum_bw*col-1:0]   ofifo_out; 

    // Top-Level start signal
    wire controller_debug_mode;
    wire start_controller;
    wire psum_memory_rd_enable;
    wire activation_weight_mem_load;

    // Controller instance: weight_stationary_controller
    wire wsc_execute;
    wire wsc_load;
    wire wsc_l0_rd;
    wire wsc_l0_wr;
    wire wsc_controller_active;
    wire wsc_ofifo_valid;
    wire wsc_ofifo_rd;
    wire [ADDR_W-1:0] wsc_activation_sram_addr;
    wire [ADDR_W-1:0] wsc_psum_sram_addr;
    wire wsc_sfu_start;
    wire wsc_mac_reset;
    wire wsc_ld_mode;
    wire wsc_flush_ptr;

    // Corelet signals
    wire corelet_sfu_active;
    wire corelet_sfu_active_to_mem;
    wire [ADDR_W-1:0] corelet_psum_mem_addr;
    wire corelet_psum_mem_wr;
    wire corelet_psum_mem_rd;
    wire [psum_bw*col-1:0] corelet_sfu_out;

    // SRAM signals for PSUM memory
    wire CEN_pmem;
    wire WEN_pmem;
    wire [ADDR_W-1:0] A_pmem; 
    wire [ADDR_W-1:0] A_xmem; 

    // Delayed signals
    reg ofifo_rd_q;
    reg l0_wr_q;

    // Clock Gating Control signals
    wire weights_sram_clk_en;
    wire psum_sram_clk_en;
    wire mac_array_clk_en;
    wire l0_clk_en;
    wire ofifo_clk_en;
    wire sfu_clk_en;
    wire weights_sram_clk;
    wire psum_sram_clk;
    wire mac_array_clk;
    wire l0_clk;
    wire ofifo_clk;
    wire sfu_clk;

    // Instruction decoding
    assign controller_debug_mode = inst[ADDR_W + 3];
    assign start_controller = inst[ADDR_W + 2];
    assign psum_memory_rd_enable = inst[ADDR_W + 1];
    assign activation_weight_mem_load = inst[ADDR_W];

    assign A_xmem = wsc_controller_active ? wsc_activation_sram_addr :  inst[ADDR_W-1:0];
    assign A_pmem = wsc_controller_active ? (corelet_sfu_active_to_mem ? corelet_psum_mem_addr : wsc_psum_sram_addr) : inst[ADDR_W-1:0];
    assign WEN_pmem = corelet_sfu_active_to_mem ?  (corelet_psum_mem_rd) : ~ofifo_rd_q;
    assign CEN_pmem = corelet_sfu_active_to_mem ? ~(corelet_psum_mem_rd || corelet_psum_mem_wr) : ~(ofifo_rd_q || psum_memory_rd_enable);

    weight_stationary_controller #(
        .col(col),
        .row(row),
        .ADDR_W(ADDR_W)
    ) u_wsc_inst (
        .clk(clk),
        .reset(reset),
        .mac_reset(wsc_mac_reset),
        .debug_mode(controller_debug_mode),
        .ld_mode(wsc_ld_mode),
        .weights_sram_clk_en(weights_sram_clk_en),
        .psum_sram_clk_en(psum_sram_clk_en),
        .mac_array_clk_en(mac_array_clk_en),
        .l0_clk_en(l0_clk_en),
        .ofifo_clk_en(ofifo_clk_en),
        .sfu_clk_en(sfu_clk_en),

        // Configuration inputs
        .num_nij_to_compute(num_nij_to_compute),
        .num_kij_to_compute(num_kij_to_compute),
        .weight_start_sram_addr(weight_start_sram_addr),
        .activation_start_sram_addr(activation_start_sram_addr),

        // Controller start signal
        .start_controller(start_controller),

        // MAC Array control signals
        .execute(wsc_execute),
        .load(wsc_load),
        
        // L0 control signals
        .l0_rd(wsc_l0_rd),
        .l0_wr(wsc_l0_wr),
        .l0_flush_ptr(wsc_flush_ptr),

        // OFIFO control signals
        .ofifo_valid(wsc_ofifo_valid),
        .ofifo_rd(wsc_ofifo_rd),

        // SFU control signals
        .sfu_start(wsc_sfu_start),
        .sfu_active(corelet_sfu_active),
        .sfu_active_to_mem (corelet_sfu_active_to_mem),
        
        // Controller status output
        .controller_active(wsc_controller_active),

        // SRAM address outputs and memory control
        .activation_sram_addr(wsc_activation_sram_addr),
        .psum_sram_addr(wsc_psum_sram_addr)
    );

    ////////// Activation/Weight SRAM Instance //////////

    sram #(
        .ADDR_W  (ADDR_W),
        .DATA_W (bw*col)   
    ) u_activation_sram (
        .CLK (weights_sram_clk),
        .CEN (~(wsc_l0_wr || activation_weight_mem_load)),
        .WEN (~activation_weight_mem_load),
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
        .psum_bw(psum_bw),
        .ADDR_W (ADDR_W)
    ) u_corelet_inst (
        .mac_array_clk     (mac_array_clk),
        .l0_clk            (l0_clk),
        .ofifo_clk         (ofifo_clk),
        .sfu_clk           (sfu_clk),
        
        .reset      (reset),
        .mac_reset  (wsc_mac_reset),

        .l0_in      (l0_in),
        .l0_rd      (wsc_l0_rd),
        .l0_wr      (l0_wr_q),
        .ld_mode    (wsc_ld_mode),
        .l0_flush_ptr (wsc_flush_ptr),

        .load       (wsc_load),
        .execute    (wsc_execute),

        .ofifo_rd    (wsc_ofifo_rd),
        .ofifo_valid (wsc_ofifo_valid),
        .ofifo_out   (ofifo_out),

        .sfu_active        (corelet_sfu_active),
        .sfu_in            (Q_out),
        .sfu_start         (wsc_sfu_start),
        .sfu_out           (corelet_sfu_out),

        .psum_mem_addr     (corelet_psum_mem_addr),
        .psum_mem_wr       (corelet_psum_mem_wr),
        .psum_mem_rd       (corelet_psum_mem_rd)
    );

    assign ofifo_sram_in = corelet_sfu_active_to_mem ? corelet_sfu_out : ofifo_out;

    ////////// Partial Sum SRAM Instance //////////

    sram #(
        .ADDR_W  (ADDR_W),
        .DATA_W (psum_bw*col)   
    ) u_psum_sram (
        .CLK (psum_sram_clk),
        .CEN (CEN_pmem),
        .WEN (WEN_pmem),
        .A   (A_pmem),
        .D   (ofifo_sram_in),
        .Q   (Q_out)
    );

    // Delaying l0_wr and ofifo_rd to align with SRAM timing
    always @(posedge clk) begin
        if (reset) begin
            l0_wr_q <= 1'b0;
            ofifo_rd_q <= 1'b0;
        end
        else begin
            l0_wr_q <= wsc_l0_wr;
            ofifo_rd_q <= wsc_ofifo_rd;
        end
    end

    // Final assignments
    assign psum_mem_out = Q_out;
    assign core_busy = wsc_controller_active;

    // Clock Gating Control
    core_clk_gating_control u_core_clk_gating_controller (
        .clk(clk),
        .reset(reset),

        // Inputs
        .weights_sram_clk_en(weights_sram_clk_en),
        .psum_sram_clk_en(psum_sram_clk_en),
        .mac_array_clk_en(mac_array_clk_en),
        .l0_clk_en(l0_clk_en),
        .ofifo_clk_en(ofifo_clk_en),
        .sfu_clk_en(sfu_clk_en),

        // Outputs
        .weights_sram_clk(weights_sram_clk),
        .psum_sram_clk(psum_sram_clk),
        .mac_array_clk(mac_array_clk),
        .l0_clk(l0_clk),
        .ofifo_clk(ofifo_clk),
        .sfu_clk(sfu_clk)
    );

endmodule
