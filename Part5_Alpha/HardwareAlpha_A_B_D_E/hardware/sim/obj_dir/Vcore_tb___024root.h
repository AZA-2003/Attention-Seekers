// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore_tb.h for the primary calling header

#ifndef VERILATED_VCORE_TB___024ROOT_H_
#define VERILATED_VCORE_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vcore_tb_fifo_depth64__B10;
class Vcore_tb_fifo_depth64__I1;
class Vcore_tb_mac_row;


class Vcore_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vcore_tb_fifo_depth64__I1* __PVT__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__0__KET____DOT__fifo_instance;
    Vcore_tb_fifo_depth64__I1* __PVT__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__1__KET____DOT__fifo_instance;
    Vcore_tb_fifo_depth64__I1* __PVT__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__2__KET____DOT__fifo_instance;
    Vcore_tb_fifo_depth64__I1* __PVT__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__3__KET____DOT__fifo_instance;
    Vcore_tb_fifo_depth64__I1* __PVT__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__4__KET____DOT__fifo_instance;
    Vcore_tb_fifo_depth64__I1* __PVT__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__5__KET____DOT__fifo_instance;
    Vcore_tb_fifo_depth64__I1* __PVT__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__6__KET____DOT__fifo_instance;
    Vcore_tb_fifo_depth64__I1* __PVT__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__7__KET____DOT__fifo_instance;
    Vcore_tb_mac_row* __PVT__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__1__KET____DOT__mac_row_instance;
    Vcore_tb_mac_row* __PVT__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__2__KET____DOT__mac_row_instance;
    Vcore_tb_mac_row* __PVT__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__3__KET____DOT__mac_row_instance;
    Vcore_tb_mac_row* __PVT__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__4__KET____DOT__mac_row_instance;
    Vcore_tb_mac_row* __PVT__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__5__KET____DOT__mac_row_instance;
    Vcore_tb_mac_row* __PVT__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__6__KET____DOT__mac_row_instance;
    Vcore_tb_mac_row* __PVT__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__7__KET____DOT__mac_row_instance;
    Vcore_tb_mac_row* __PVT__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance;
    Vcore_tb_fifo_depth64__B10* __PVT__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__0__KET____DOT__fifo_instance;
    Vcore_tb_fifo_depth64__B10* __PVT__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__1__KET____DOT__fifo_instance;
    Vcore_tb_fifo_depth64__B10* __PVT__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__2__KET____DOT__fifo_instance;
    Vcore_tb_fifo_depth64__B10* __PVT__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__3__KET____DOT__fifo_instance;
    Vcore_tb_fifo_depth64__B10* __PVT__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__4__KET____DOT__fifo_instance;
    Vcore_tb_fifo_depth64__B10* __PVT__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__5__KET____DOT__fifo_instance;
    Vcore_tb_fifo_depth64__B10* __PVT__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__6__KET____DOT__fifo_instance;
    Vcore_tb_fifo_depth64__B10* __PVT__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__7__KET____DOT__fifo_instance;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ core_tb__DOT__clk;
        CData/*0:0*/ core_tb__DOT__dut__DOT__weights_sram_clk;
        CData/*0:0*/ core_tb__DOT__dut__DOT__psum_sram_clk;
        CData/*0:0*/ core_tb__DOT__dut__DOT__mac_array_clk;
        CData/*0:0*/ core_tb__DOT__dut__DOT__l0_clk;
        CData/*0:0*/ core_tb__DOT__dut__DOT__ofifo_clk;
        CData/*0:0*/ core_tb__DOT__dut__DOT__sfu_clk;
        CData/*0:0*/ core_tb__DOT__reset;
        CData/*0:0*/ core_tb__DOT__debug_mode;
        CData/*0:0*/ core_tb__DOT__start_controller;
        CData/*0:0*/ core_tb__DOT__activation_weight_mem_load;
        CData/*0:0*/ core_tb__DOT__psum_memory_rd_enable;
        CData/*3:0*/ core_tb__DOT__initialize_activations_from_file__Vstatic__nibble;
        CData/*3:0*/ core_tb__DOT__initialize_weights_from_file__Vstatic__nibble;
        CData/*3:0*/ core_tb__DOT__initialize_activations__Vstatic__val;
        CData/*3:0*/ core_tb__DOT__check_loaded_weights__Vstatic__expected;
        CData/*3:0*/ core_tb__DOT__check_loaded_weights__Vstatic__actual;
        CData/*3:0*/ core_tb__DOT__initialize_weights__Vstatic__val;
        CData/*3:0*/ core_tb__DOT____Vlvbound_h6ec3b766__0;
        CData/*3:0*/ core_tb__DOT____Vlvbound_h6ec3b766__1;
        CData/*3:0*/ core_tb__DOT____Vlvbound_hbf23a7b1__0;
        CData/*0:0*/ core_tb__DOT__dut__DOT__wsc_execute;
        CData/*0:0*/ core_tb__DOT__dut__DOT__wsc_load;
        CData/*0:0*/ core_tb__DOT__dut__DOT__wsc_l0_rd;
        CData/*0:0*/ core_tb__DOT__dut__DOT__wsc_l0_wr;
        CData/*0:0*/ core_tb__DOT__dut__DOT__wsc_controller_active;
        CData/*0:0*/ core_tb__DOT__dut__DOT__wsc_ofifo_rd;
        CData/*0:0*/ core_tb__DOT__dut__DOT__wsc_sfu_start;
        CData/*0:0*/ core_tb__DOT__dut__DOT__wsc_mac_reset;
        CData/*0:0*/ core_tb__DOT__dut__DOT__wsc_ld_mode;
        CData/*0:0*/ core_tb__DOT__dut__DOT__wsc_flush_ptr;
        CData/*0:0*/ core_tb__DOT__dut__DOT__corelet_sfu_active;
        CData/*0:0*/ core_tb__DOT__dut__DOT__corelet_sfu_active_to_mem;
        CData/*0:0*/ core_tb__DOT__dut__DOT__corelet_psum_mem_wr;
        CData/*0:0*/ core_tb__DOT__dut__DOT__corelet_psum_mem_rd;
        CData/*0:0*/ core_tb__DOT__dut__DOT__CEN_pmem;
        CData/*0:0*/ core_tb__DOT__dut__DOT__WEN_pmem;
        CData/*0:0*/ core_tb__DOT__dut__DOT__ofifo_rd_q;
        CData/*0:0*/ core_tb__DOT__dut__DOT__l0_wr_q;
        CData/*0:0*/ core_tb__DOT__dut__DOT__weights_sram_clk_en;
        CData/*0:0*/ core_tb__DOT__dut__DOT__psum_sram_clk_en;
        CData/*0:0*/ core_tb__DOT__dut__DOT__mac_array_clk_en;
        CData/*0:0*/ core_tb__DOT__dut__DOT__l0_clk_en;
        CData/*0:0*/ core_tb__DOT__dut__DOT__ofifo_clk_en;
        CData/*0:0*/ core_tb__DOT__dut__DOT__sfu_clk_en;
        CData/*0:0*/ core_tb__DOT__dut__DOT____Vcellinp__u_activation_sram__CEN;
        CData/*7:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kij_counter;
        CData/*7:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_kij_counter;
        CData/*2:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state;
        CData/*2:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__prev_state;
        CData/*2:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state;
        CData/*2:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_prev_state;
        CData/*0:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_l0_rd;
        CData/*0:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_l0_wr;
        CData/*0:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kernel_load_from_mem_done;
        CData/*0:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kernel_load_to_mac_done;
        CData/*0:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__act_load_from_mem_done;
        CData/*7:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__last_weight_load_addr;
        CData/*0:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__ofifo_rd_q;
        CData/*0:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__weights_sram_clk_en_pre;
        CData/*0:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__psum_sram_clk_en_pre;
        CData/*0:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__mac_array_clk_en_pre;
        CData/*0:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__l0_clk_en_pre;
        CData/*0:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__sfu_clk_en_pre;
    };
    struct {
        CData/*0:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__ofifo_clk_en_pre;
        CData/*1:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__0__KET____DOT__sync_inst__DOT__sync_r;
        CData/*1:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__1__KET____DOT__sync_inst__DOT__sync_r;
        CData/*1:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__2__KET____DOT__sync_inst__DOT__sync_r;
        CData/*1:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__3__KET____DOT__sync_inst__DOT__sync_r;
        CData/*1:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__4__KET____DOT__sync_inst__DOT__sync_r;
        CData/*1:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__5__KET____DOT__sync_inst__DOT__sync_r;
        CData/*7:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT__sfu_valid_out;
        CData/*1:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__inst_w;
        CData/*0:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__reset;
        CData/*7:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__rd_en;
        CData/*7:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__flush_ptr_en;
        CData/*2:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state;
        CData/*2:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_sfu_op_state;
        CData/*1:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op;
        CData/*1:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_sfu_op;
        CData/*1:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_delayed;
        CData/*3:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_row;
        CData/*3:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_col;
        CData/*3:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_row;
        CData/*3:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_col;
        CData/*7:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_idx;
        CData/*0:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_wr_enable;
        CData/*0:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_rd_enable;
        CData/*0:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__rd_en;
        CData/*5:0*/ core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__gated_clks;
        CData/*0:0*/ core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__0__KET____DOT__u_clkgate__DOT__en_q;
        CData/*0:0*/ core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__1__KET____DOT__u_clkgate__DOT__en_q;
        CData/*0:0*/ core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__2__KET____DOT__u_clkgate__DOT__en_q;
        CData/*0:0*/ core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__3__KET____DOT__u_clkgate__DOT__en_q;
        CData/*0:0*/ core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__4__KET____DOT__u_clkgate__DOT__en_q;
        CData/*0:0*/ core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__5__KET____DOT__u_clkgate__DOT__en_q;
        CData/*7:0*/ __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__rd_en;
        CData/*7:0*/ __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__flush_ptr_en;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__core_tb__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__core_tb__DOT__dut__DOT__weights_sram_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__core_tb__DOT__dut__DOT__l0_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__core_tb__DOT__dut__DOT__mac_array_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__core_tb__DOT__dut__DOT__sfu_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__core_tb__DOT__dut__DOT__ofifo_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__core_tb__DOT__dut__DOT__psum_sram_clk__0;
        CData/*0:0*/ __Vtrigprevexpr_h392c4882__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*10:0*/ core_tb__DOT__sram_mem_addr;
        SData/*15:0*/ core_tb__DOT__calculate_expected_psums__Vstatic__mult;
        SData/*15:0*/ core_tb__DOT__calculate_expected_psums__Vstatic__a_ext;
        SData/*15:0*/ core_tb__DOT__calculate_expected_psums__Vstatic__w_ext;
        SData/*15:0*/ core_tb__DOT__check_expected_psums__Vstatic__actual;
        SData/*15:0*/ core_tb__DOT__check_expected_psums__Vstatic__expected;
        SData/*15:0*/ core_tb__DOT__check_expected_outputs__Vstatic__actual;
        SData/*15:0*/ core_tb__DOT__check_expected_outputs__Vstatic__expected;
        SData/*10:0*/ core_tb__DOT__write_activation_sram__Vstatic__addr;
        SData/*15:0*/ core_tb__DOT____Vlvbound_hf547bbe8__0;
        SData/*15:0*/ core_tb__DOT____Vlvbound_hf547bbe8__1;
        SData/*10:0*/ core_tb__DOT__dut__DOT__corelet_psum_mem_addr;
        SData/*10:0*/ core_tb__DOT__dut__DOT__A_pmem;
        SData/*10:0*/ core_tb__DOT__dut__DOT__A_xmem;
        SData/*10:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter;
        SData/*10:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_gp_counter;
        SData/*10:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__last_psum_address;
        SData/*10:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__start_psum_gp_counter;
        SData/*10:0*/ core_tb__DOT__dut__DOT__u_activation_sram__DOT__add_q;
    };
    struct {
        SData/*15:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp;
        SData/*10:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_addr;
        SData/*10:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__start_psum_addr;
        SData/*15:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__1__KET____DOT__sfu_inst__DOT__acc;
        SData/*15:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__2__KET____DOT__sfu_inst__DOT__acc;
        SData/*15:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__3__KET____DOT__sfu_inst__DOT__acc;
        SData/*15:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__4__KET____DOT__sfu_inst__DOT__acc;
        SData/*15:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__5__KET____DOT__sfu_inst__DOT__acc;
        SData/*15:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__6__KET____DOT__sfu_inst__DOT__acc;
        SData/*15:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__7__KET____DOT__sfu_inst__DOT__acc;
        SData/*15:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__8__KET____DOT__sfu_inst__DOT__acc;
        SData/*10:0*/ core_tb__DOT__dut__DOT__u_psum_sram__DOT__add_q;
        SData/*15:0*/ __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp;
        IData/*31:0*/ core_tb__DOT__D_xmem;
        IData/*31:0*/ core_tb__DOT__i;
        IData/*31:0*/ core_tb__DOT__initialize_activations_from_file__Vstatic__fd;
        IData/*31:0*/ core_tb__DOT__initialize_activations_from_file__Vstatic__n_idx;
        IData/*31:0*/ core_tb__DOT__initialize_activations_from_file__Vstatic__c;
        IData/*31:0*/ core_tb__DOT__initialize_activations_from_file__Vstatic__word32;
        IData/*31:0*/ core_tb__DOT__initialize_activations_from_file__Vstatic__rc;
        IData/*31:0*/ core_tb__DOT__initialize_weights_from_file__Vstatic__fd;
        IData/*31:0*/ core_tb__DOT__initialize_weights_from_file__Vstatic__col_idx;
        IData/*31:0*/ core_tb__DOT__initialize_weights_from_file__Vstatic__r;
        IData/*31:0*/ core_tb__DOT__initialize_weights_from_file__Vstatic__word32;
        IData/*31:0*/ core_tb__DOT__initialize_weights_from_file__Vstatic__rc;
        IData/*31:0*/ core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij;
        IData/*31:0*/ core_tb__DOT__calculate_expected_outputs__Vstatic__kij;
        IData/*31:0*/ core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch;
        IData/*31:0*/ core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx;
        IData/*31:0*/ core_tb__DOT__calculate_expected_outputs__Vstatic__idx;
        IData/*31:0*/ core_tb__DOT__calculate_expected_outputs__Vstatic__o_ni_dim;
        IData/*31:0*/ core_tb__DOT__calculate_expected_outputs__Vstatic__a_pad_ni_dim;
        IData/*31:0*/ core_tb__DOT__calculate_expected_outputs__Vstatic__ki_dim;
        IData/*31:0*/ core_tb__DOT__calculate_expected_psums__Vstatic__k;
        IData/*31:0*/ core_tb__DOT__calculate_expected_psums__Vstatic__n;
        IData/*31:0*/ core_tb__DOT__calculate_expected_psums__Vstatic__o_ch;
        IData/*31:0*/ core_tb__DOT__calculate_expected_psums__Vstatic__i_ch;
        IData/*31:0*/ core_tb__DOT__calculate_expected_psums__Vstatic__idx;
        IData/*31:0*/ core_tb__DOT__check_expected_psums__Vstatic__p_idx;
        IData/*31:0*/ core_tb__DOT__check_expected_psums__Vstatic__col_idx;
        IData/*31:0*/ core_tb__DOT__check_expected_psums__Vstatic__num_errors;
        IData/*31:0*/ core_tb__DOT__check_expected_outputs__Vstatic__p_idx;
        IData/*31:0*/ core_tb__DOT__check_expected_outputs__Vstatic__col_idx;
        IData/*31:0*/ core_tb__DOT__check_expected_outputs__Vstatic__num_errors;
        IData/*31:0*/ core_tb__DOT__initialize_activations__Vstatic__a_row_idx;
        IData/*31:0*/ core_tb__DOT__initialize_activations__Vstatic__a_col_idx;
        IData/*31:0*/ core_tb__DOT__initialize_activations__Vstatic__a_ic;
        IData/*31:0*/ core_tb__DOT__initialize_activations__Vstatic__N;
        IData/*31:0*/ core_tb__DOT__check_loaded_weights__Vstatic__row_idx;
        IData/*31:0*/ core_tb__DOT__check_loaded_weights__Vstatic__col_idx;
        IData/*31:0*/ core_tb__DOT__check_loaded_weights__Vstatic__idx;
        IData/*31:0*/ core_tb__DOT__check_loaded_weights__Vstatic__errors;
        IData/*31:0*/ core_tb__DOT__initialize_weights__Vstatic__k;
        IData/*31:0*/ core_tb__DOT__initialize_weights__Vstatic__i_ch;
        IData/*31:0*/ core_tb__DOT__initialize_weights__Vstatic__o_ch;
        IData/*31:0*/ core_tb__DOT__initialize_weights__Vstatic__idx;
        IData/*31:0*/ core_tb__DOT__write_activation_sram__Vstatic__r;
        IData/*31:0*/ core_tb__DOT__write_activation_sram__Vstatic__c;
        IData/*31:0*/ core_tb__DOT__write_activation_sram__Vstatic__r_max;
        IData/*31:0*/ core_tb__DOT__write_activation_sram__Vstatic__c_max;
        IData/*31:0*/ core_tb__DOT__write_activation_sram__Vstatic__packed_row;
        IData/*31:0*/ core_tb__DOT__dut__DOT__l0_in;
        VlWide<4>/*127:0*/ core_tb__DOT__dut__DOT__Q_out;
        VlWide<4>/*127:0*/ core_tb__DOT__dut__DOT__ofifo_sram_in;
    };
    struct {
        VlWide<10>/*319:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state_name_str;
        IData/*31:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__0__KET____DOT__sync_inst__DOT__i;
        IData/*31:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__1__KET____DOT__sync_inst__DOT__i;
        IData/*31:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__2__KET____DOT__sync_inst__DOT__i;
        IData/*31:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__3__KET____DOT__sync_inst__DOT__i;
        IData/*31:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__4__KET____DOT__sync_inst__DOT__i;
        IData/*31:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__5__KET____DOT__sync_inst__DOT__i;
        VlWide<2048>/*65535:0*/ core_tb__DOT__dut__DOT__u_activation_sram__DOT__memory;
        VlWide<10>/*319:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__state_name_str;
        VlWide<10>/*319:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_delyayed_str;
        VlWide<8192>/*262143:0*/ core_tb__DOT__dut__DOT__u_psum_sram__DOT__memory;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__valid_temp;
        VlUnpacked<VlUnpacked<CData/*3:0*/, 9>, 64> core_tb__DOT__weights_to_load;
        VlUnpacked<VlUnpacked<CData/*3:0*/, 8>, 100> core_tb__DOT__activations_to_load;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 8>, 324> core_tb__DOT__expected_psums;
        VlUnpacked<VlUnpacked<SData/*15:0*/, 8>, 16> core_tb__DOT__expected_outputs;
        VlUnpacked<CData/*0:0*/, 19> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hf5e4f9bb__0;
    VlTriggerScheduler __VtrigSched_had1b8eb2__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<9> __VactTriggered;
    VlTriggerVec<9> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcore_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_tb___024root(Vcore_tb__Syms* symsp, const char* v__name);
    ~Vcore_tb___024root();
    VL_UNCOPYABLE(Vcore_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
