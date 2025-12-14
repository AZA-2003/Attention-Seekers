// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_tb.h for the primary calling header

#include "Vcore_tb__pch.h"
#include "Vcore_tb_fifo_depth64__I1.h"

VL_ATTR_COLD void Vcore_tb_fifo_depth64__I1___eval_static__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__0__KET____DOT__fifo_instance(Vcore_tb_fifo_depth64__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_tb_fifo_depth64__I1___eval_static__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__0__KET____DOT__fifo_instance\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__rd_ptr = 0U;
    vlSelfRef.__PVT__wr_ptr = 0U;
}

VL_ATTR_COLD void Vcore_tb_fifo_depth64__I1___ctor_var_reset(Vcore_tb_fifo_depth64__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_tb_fifo_depth64__I1___ctor_var_reset\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->rd_clk = VL_RAND_RESET_I(1);
    vlSelf->wr_clk = VL_RAND_RESET_I(1);
    vlSelf->flush_ptr = VL_RAND_RESET_I(1);
    vlSelf->in = VL_RAND_RESET_I(4);
    vlSelf->out = VL_RAND_RESET_I(4);
    vlSelf->rd = VL_RAND_RESET_I(1);
    vlSelf->wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__o_full = VL_RAND_RESET_I(1);
    vlSelf->__PVT__o_empty = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rd_ptr = VL_RAND_RESET_I(7);
    vlSelf->__PVT__wr_ptr = VL_RAND_RESET_I(7);
    vlSelf->__PVT__q0 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q1 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q2 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q3 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q4 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q5 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q6 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q7 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q8 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q9 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q10 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q11 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q12 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q13 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q14 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q15 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q16 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q17 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q18 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q19 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q20 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q21 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q22 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q23 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q24 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q25 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q26 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q27 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q28 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q29 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q30 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q31 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q32 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q33 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q34 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q35 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q36 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q37 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q38 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q39 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q40 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q41 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q42 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q43 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q44 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q45 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q46 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q47 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q48 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q49 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q50 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q51 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q52 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q53 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q54 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q55 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q56 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q57 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q58 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q59 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q60 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q61 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q62 = VL_RAND_RESET_I(4);
    vlSelf->__PVT__q63 = VL_RAND_RESET_I(4);
}
