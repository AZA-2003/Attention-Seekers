// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_tb.h for the primary calling header

#include "Vcore_tb__pch.h"
#include "Vcore_tb_mac_row.h"

VL_INLINE_OPT void Vcore_tb_mac_row___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__1__KET____DOT__mac_row_instance__1(Vcore_tb_mac_row* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_tb_mac_row___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__1__KET____DOT__mac_row_instance__1\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_s[0U] = (((VL_EXTENDS_II(16,9, (0x1ffU 
                                                  & VL_MULS_III(9, 
                                                                (0x1ffU 
                                                                 & VL_EXTENDS_II(9,5, (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q))), 
                                                                (0x1ffU 
                                                                 & VL_EXTENDS_II(9,4, (IData)(vlSelfRef.col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__b_q)))))) 
                             + (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__c_q)) 
                            << 0x10U) | (0xffffU & 
                                         (VL_EXTENDS_II(16,9, 
                                                        (0x1ffU 
                                                         & VL_MULS_III(9, 
                                                                       (0x1ffU 
                                                                        & VL_EXTENDS_II(9,5, (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q))), 
                                                                       (0x1ffU 
                                                                        & VL_EXTENDS_II(9,4, (IData)(vlSelfRef.col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__b_q)))))) 
                                          + (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__c_q))));
    vlSelfRef.out_s[1U] = (((VL_EXTENDS_II(16,9, (0x1ffU 
                                                  & VL_MULS_III(9, 
                                                                (0x1ffU 
                                                                 & VL_EXTENDS_II(9,5, (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q))), 
                                                                (0x1ffU 
                                                                 & VL_EXTENDS_II(9,4, (IData)(vlSelfRef.col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__b_q)))))) 
                             + (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__c_q)) 
                            << 0x10U) | (0xffffU & 
                                         (VL_EXTENDS_II(16,9, 
                                                        (0x1ffU 
                                                         & VL_MULS_III(9, 
                                                                       (0x1ffU 
                                                                        & VL_EXTENDS_II(9,5, (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q))), 
                                                                       (0x1ffU 
                                                                        & VL_EXTENDS_II(9,4, (IData)(vlSelfRef.col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__b_q)))))) 
                                          + (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__c_q))));
    vlSelfRef.out_s[2U] = (((VL_EXTENDS_II(16,9, (0x1ffU 
                                                  & VL_MULS_III(9, 
                                                                (0x1ffU 
                                                                 & VL_EXTENDS_II(9,5, (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q))), 
                                                                (0x1ffU 
                                                                 & VL_EXTENDS_II(9,4, (IData)(vlSelfRef.col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__b_q)))))) 
                             + (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__c_q)) 
                            << 0x10U) | (0xffffU & 
                                         (VL_EXTENDS_II(16,9, 
                                                        (0x1ffU 
                                                         & VL_MULS_III(9, 
                                                                       (0x1ffU 
                                                                        & VL_EXTENDS_II(9,5, (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q))), 
                                                                       (0x1ffU 
                                                                        & VL_EXTENDS_II(9,4, (IData)(vlSelfRef.col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__b_q)))))) 
                                          + (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__c_q))));
    vlSelfRef.out_s[3U] = (((VL_EXTENDS_II(16,9, (0x1ffU 
                                                  & VL_MULS_III(9, 
                                                                (0x1ffU 
                                                                 & VL_EXTENDS_II(9,5, (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__a_q))), 
                                                                (0x1ffU 
                                                                 & VL_EXTENDS_II(9,4, (IData)(vlSelfRef.col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__b_q)))))) 
                             + (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__c_q)) 
                            << 0x10U) | (0xffffU & 
                                         (VL_EXTENDS_II(16,9, 
                                                        (0x1ffU 
                                                         & VL_MULS_III(9, 
                                                                       (0x1ffU 
                                                                        & VL_EXTENDS_II(9,5, (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q))), 
                                                                       (0x1ffU 
                                                                        & VL_EXTENDS_II(9,4, (IData)(vlSelfRef.col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__b_q)))))) 
                                          + (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__c_q))));
}

VL_INLINE_OPT void Vcore_tb_mac_row___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance__1(Vcore_tb_mac_row* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_tb_mac_row___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance__1\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.out_s[0U] = (((VL_EXTENDS_II(16,9, (0x1ffU 
                                                  & VL_MULS_III(9, 
                                                                (0x1ffU 
                                                                 & VL_EXTENDS_II(9,5, (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q))), 
                                                                (0x1ffU 
                                                                 & VL_EXTENDS_II(9,4, (IData)(vlSelfRef.col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__b_q)))))) 
                             + (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__c_q)) 
                            << 0x10U) | (0xffffU & 
                                         (VL_EXTENDS_II(16,9, 
                                                        (0x1ffU 
                                                         & VL_MULS_III(9, 
                                                                       (0x1ffU 
                                                                        & VL_EXTENDS_II(9,5, (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q))), 
                                                                       (0x1ffU 
                                                                        & VL_EXTENDS_II(9,4, (IData)(vlSelfRef.col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__b_q)))))) 
                                          + (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__c_q))));
    vlSelfRef.out_s[1U] = (((VL_EXTENDS_II(16,9, (0x1ffU 
                                                  & VL_MULS_III(9, 
                                                                (0x1ffU 
                                                                 & VL_EXTENDS_II(9,5, (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q))), 
                                                                (0x1ffU 
                                                                 & VL_EXTENDS_II(9,4, (IData)(vlSelfRef.col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__b_q)))))) 
                             + (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__c_q)) 
                            << 0x10U) | (0xffffU & 
                                         (VL_EXTENDS_II(16,9, 
                                                        (0x1ffU 
                                                         & VL_MULS_III(9, 
                                                                       (0x1ffU 
                                                                        & VL_EXTENDS_II(9,5, (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q))), 
                                                                       (0x1ffU 
                                                                        & VL_EXTENDS_II(9,4, (IData)(vlSelfRef.col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__b_q)))))) 
                                          + (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__c_q))));
    vlSelfRef.out_s[2U] = (((VL_EXTENDS_II(16,9, (0x1ffU 
                                                  & VL_MULS_III(9, 
                                                                (0x1ffU 
                                                                 & VL_EXTENDS_II(9,5, (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q))), 
                                                                (0x1ffU 
                                                                 & VL_EXTENDS_II(9,4, (IData)(vlSelfRef.col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__b_q)))))) 
                             + (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__c_q)) 
                            << 0x10U) | (0xffffU & 
                                         (VL_EXTENDS_II(16,9, 
                                                        (0x1ffU 
                                                         & VL_MULS_III(9, 
                                                                       (0x1ffU 
                                                                        & VL_EXTENDS_II(9,5, (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q))), 
                                                                       (0x1ffU 
                                                                        & VL_EXTENDS_II(9,4, (IData)(vlSelfRef.col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__b_q)))))) 
                                          + (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__c_q))));
    vlSelfRef.out_s[3U] = (((VL_EXTENDS_II(16,9, (0x1ffU 
                                                  & VL_MULS_III(9, 
                                                                (0x1ffU 
                                                                 & VL_EXTENDS_II(9,5, (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__a_q))), 
                                                                (0x1ffU 
                                                                 & VL_EXTENDS_II(9,4, (IData)(vlSelfRef.col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__b_q)))))) 
                             + (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__c_q)) 
                            << 0x10U) | (0xffffU & 
                                         (VL_EXTENDS_II(16,9, 
                                                        (0x1ffU 
                                                         & VL_MULS_III(9, 
                                                                       (0x1ffU 
                                                                        & VL_EXTENDS_II(9,5, (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q))), 
                                                                       (0x1ffU 
                                                                        & VL_EXTENDS_II(9,4, (IData)(vlSelfRef.col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__b_q)))))) 
                                          + (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__c_q))));
    vlSelfRef.valid = ((((0x80U & ((IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q) 
                                   << 6U)) | (0x40U 
                                              & ((IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q) 
                                                 << 5U))) 
                        | ((0x20U & ((IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q) 
                                     << 4U)) | (0x10U 
                                                & ((IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q) 
                                                   << 3U)))) 
                       | (((8U & ((IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q) 
                                  << 2U)) | (4U & ((IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q) 
                                                   << 1U))) 
                          | ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                             | (1U & ((IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q) 
                                      >> 1U)))));
}
