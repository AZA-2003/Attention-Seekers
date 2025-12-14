// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_tb.h for the primary calling header

#include "Vcore_tb__pch.h"
#include "Vcore_tb_fifo_depth64__B10.h"

VL_INLINE_OPT void Vcore_tb_fifo_depth64__B10___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__0__KET____DOT__fifo_instance__1(Vcore_tb_fifo_depth64__B10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_tb_fifo_depth64__B10___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__0__KET____DOT__fifo_instance__1\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__PVT__empty = ((IData)(vlSelfRef.__PVT__rd_ptr) 
                              == (IData)(vlSelfRef.__PVT__wr_ptr));
}
