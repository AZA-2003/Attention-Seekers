// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_tb.h for the primary calling header

#include "Vcore_tb__pch.h"
#include "Vcore_tb_fifo_depth64__I1.h"
#include "Vcore_tb_fifo_mux_16_1.h"

VL_INLINE_OPT void Vcore_tb_fifo_depth64__I1___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__0__KET____DOT__fifo_instance__1(Vcore_tb_fifo_depth64__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_tb_fifo_depth64__I1___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__0__KET____DOT__fifo_instance__1\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out = (((8U & ((((~ ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                   >> 5U)) << 3U) & 
                              ((0xfffffff8U & (((~ 
                                                 ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                                  >> 4U)) 
                                                << 3U) 
                                               & (IData)(vlSelf->__PVT__fifo_mux_16_1a->__PVT__out))) 
                               | (0x7ffffff8U & ((IData)(vlSelf->__PVT__fifo_mux_16_1b->__PVT__out) 
                                                 & ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                                    >> 1U))))) 
                             | (0x3ffffff8U & (((0xfffffff8U 
                                                 & (((~ 
                                                      ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                                       >> 4U)) 
                                                     << 3U) 
                                                    & (IData)(vlSelf->__PVT__fifo_mux_16_1c->__PVT__out))) 
                                                | (0x7ffffff8U 
                                                   & ((IData)(vlSelf->__PVT__fifo_mux_16_1d->__PVT__out) 
                                                      & ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                                         >> 1U)))) 
                                               & ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                                  >> 2U))))) 
                      | (4U & ((((~ ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                     >> 5U)) << 2U) 
                                & ((0xfffffffcU & (
                                                   ((~ 
                                                     ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                                      >> 4U)) 
                                                    << 2U) 
                                                   & (IData)(vlSelf->__PVT__fifo_mux_16_1a->__PVT__out))) 
                                   | (0x3ffffffcU & 
                                      ((IData)(vlSelf->__PVT__fifo_mux_16_1b->__PVT__out) 
                                       & ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                          >> 2U))))) 
                               | (0x1ffffffcU & (((0xfffffffcU 
                                                   & (((~ 
                                                        ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                                         >> 4U)) 
                                                       << 2U) 
                                                      & (IData)(vlSelf->__PVT__fifo_mux_16_1c->__PVT__out))) 
                                                  | (0x3ffffffcU 
                                                     & ((IData)(vlSelf->__PVT__fifo_mux_16_1d->__PVT__out) 
                                                        & ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                                           >> 2U)))) 
                                                 & ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                                    >> 3U)))))) 
                     | ((2U & ((((~ ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                     >> 5U)) << 1U) 
                                & ((0xfffffffeU & (
                                                   ((~ 
                                                     ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                                      >> 4U)) 
                                                    << 1U) 
                                                   & (IData)(vlSelf->__PVT__fifo_mux_16_1a->__PVT__out))) 
                                   | (0x1ffffffeU & 
                                      ((IData)(vlSelf->__PVT__fifo_mux_16_1b->__PVT__out) 
                                       & ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                          >> 3U))))) 
                               | (0xffffffeU & (((0xfffffffeU 
                                                  & (((~ 
                                                       ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                                        >> 4U)) 
                                                      << 1U) 
                                                     & (IData)(vlSelf->__PVT__fifo_mux_16_1c->__PVT__out))) 
                                                 | (0x1ffffffeU 
                                                    & ((IData)(vlSelf->__PVT__fifo_mux_16_1d->__PVT__out) 
                                                       & ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                                          >> 3U)))) 
                                                & ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                                   >> 4U))))) 
                        | (1U & (((~ ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                      >> 5U)) & (((~ 
                                                   ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                                    >> 4U)) 
                                                  & (IData)(vlSelf->__PVT__fifo_mux_16_1a->__PVT__out)) 
                                                 | ((IData)(vlSelf->__PVT__fifo_mux_16_1b->__PVT__out) 
                                                    & ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                                       >> 4U)))) 
                                 | ((((~ ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                          >> 4U)) & (IData)(vlSelf->__PVT__fifo_mux_16_1c->__PVT__out)) 
                                     | ((IData)(vlSelf->__PVT__fifo_mux_16_1d->__PVT__out) 
                                        & ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                           >> 4U))) 
                                    & ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                       >> 5U))))));
}
