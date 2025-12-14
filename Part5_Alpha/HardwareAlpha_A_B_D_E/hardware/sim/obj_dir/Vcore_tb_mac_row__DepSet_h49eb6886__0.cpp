// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_tb.h for the primary calling header

#include "Vcore_tb__pch.h"
#include "Vcore_tb__Syms.h"
#include "Vcore_tb_mac_row.h"

VL_INLINE_OPT void Vcore_tb_mac_row___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__1__KET____DOT__mac_row_instance__0(Vcore_tb_mac_row* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_tb_mac_row___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__1__KET____DOT__mac_row_instance__0\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    // Body
    __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    if (vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__reset) {
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
    } else {
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
            vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
            vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
            vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
            vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
            vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
            vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
            vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (3U & (IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp)))) {
            vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
            vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__0__KET____DOT__fifo_instance.out;
        }
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp)));
        if (((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__0__KET____DOT__fifo_instance.out;
            __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp)));
        }
    }
    vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q;
}

VL_INLINE_OPT void Vcore_tb_mac_row___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__2__KET____DOT__mac_row_instance__0(Vcore_tb_mac_row* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_tb_mac_row___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__2__KET____DOT__mac_row_instance__0\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    // Body
    __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    if (vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__reset) {
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
    } else {
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__c_q 
                = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__1__KET____DOT__mac_row_instance.out_s[3U] 
                   >> 0x10U);
            vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__c_q 
                = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__1__KET____DOT__mac_row_instance.out_s[3U]);
            vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__c_q 
                = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__1__KET____DOT__mac_row_instance.out_s[2U] 
                   >> 0x10U);
            vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__c_q 
                = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__1__KET____DOT__mac_row_instance.out_s[2U]);
            vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__c_q 
                = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__1__KET____DOT__mac_row_instance.out_s[1U] 
                   >> 0x10U);
            vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__c_q 
                = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__1__KET____DOT__mac_row_instance.out_s[1U]);
            vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__c_q 
                = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__1__KET____DOT__mac_row_instance.out_s[0U] 
                   >> 0x10U);
            vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (3U & ((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
                          >> 2U)))) {
            vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__c_q 
                = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__1__KET____DOT__mac_row_instance.out_s[0U]);
            vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__1__KET____DOT__fifo_instance.out;
        }
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & ((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
                        >> 2U)));
        if ((((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
              >> 2U) & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__1__KET____DOT__fifo_instance.out;
            __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & ((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
                            >> 2U)));
        }
    }
    vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q;
}

VL_INLINE_OPT void Vcore_tb_mac_row___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__3__KET____DOT__mac_row_instance__0(Vcore_tb_mac_row* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_tb_mac_row___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__3__KET____DOT__mac_row_instance__0\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    // Body
    __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    if (vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__reset) {
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
    } else {
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__c_q 
                = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__2__KET____DOT__mac_row_instance.out_s[3U] 
                   >> 0x10U);
            vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__c_q 
                = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__2__KET____DOT__mac_row_instance.out_s[3U]);
            vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__c_q 
                = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__2__KET____DOT__mac_row_instance.out_s[2U] 
                   >> 0x10U);
            vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__c_q 
                = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__2__KET____DOT__mac_row_instance.out_s[2U]);
            vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__c_q 
                = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__2__KET____DOT__mac_row_instance.out_s[1U] 
                   >> 0x10U);
            vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__c_q 
                = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__2__KET____DOT__mac_row_instance.out_s[1U]);
            vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__c_q 
                = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__2__KET____DOT__mac_row_instance.out_s[0U] 
                   >> 0x10U);
            vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (3U & ((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
                          >> 4U)))) {
            vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__c_q 
                = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__2__KET____DOT__mac_row_instance.out_s[0U]);
            vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__2__KET____DOT__fifo_instance.out;
        }
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & ((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
                        >> 4U)));
        if ((((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
              >> 4U) & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__2__KET____DOT__fifo_instance.out;
            __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & ((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
                            >> 4U)));
        }
    }
    vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q;
}

VL_INLINE_OPT void Vcore_tb_mac_row___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__4__KET____DOT__mac_row_instance__0(Vcore_tb_mac_row* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_tb_mac_row___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__4__KET____DOT__mac_row_instance__0\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    // Body
    __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    if (vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__reset) {
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
    } else {
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__c_q 
                = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__3__KET____DOT__mac_row_instance.out_s[3U] 
                   >> 0x10U);
            vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__c_q 
                = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__3__KET____DOT__mac_row_instance.out_s[3U]);
            vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__c_q 
                = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__3__KET____DOT__mac_row_instance.out_s[2U] 
                   >> 0x10U);
            vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__c_q 
                = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__3__KET____DOT__mac_row_instance.out_s[2U]);
            vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__c_q 
                = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__3__KET____DOT__mac_row_instance.out_s[1U] 
                   >> 0x10U);
            vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__c_q 
                = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__3__KET____DOT__mac_row_instance.out_s[1U]);
            vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__c_q 
                = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__3__KET____DOT__mac_row_instance.out_s[0U] 
                   >> 0x10U);
            vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (3U & ((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
                          >> 6U)))) {
            vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__c_q 
                = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__3__KET____DOT__mac_row_instance.out_s[0U]);
            vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__3__KET____DOT__fifo_instance.out;
        }
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & ((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
                        >> 6U)));
        if ((((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
              >> 6U) & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__3__KET____DOT__fifo_instance.out;
            __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & ((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
                            >> 6U)));
        }
    }
    vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q;
}

VL_INLINE_OPT void Vcore_tb_mac_row___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__5__KET____DOT__mac_row_instance__0(Vcore_tb_mac_row* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_tb_mac_row___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__5__KET____DOT__mac_row_instance__0\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    // Body
    __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    if (vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__reset) {
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
    } else {
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__c_q 
                = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__4__KET____DOT__mac_row_instance.out_s[3U] 
                   >> 0x10U);
            vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__c_q 
                = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__4__KET____DOT__mac_row_instance.out_s[3U]);
            vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__c_q 
                = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__4__KET____DOT__mac_row_instance.out_s[2U] 
                   >> 0x10U);
            vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__c_q 
                = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__4__KET____DOT__mac_row_instance.out_s[2U]);
            vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__c_q 
                = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__4__KET____DOT__mac_row_instance.out_s[1U] 
                   >> 0x10U);
            vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__c_q 
                = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__4__KET____DOT__mac_row_instance.out_s[1U]);
            vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__c_q 
                = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__4__KET____DOT__mac_row_instance.out_s[0U] 
                   >> 0x10U);
            vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (3U & ((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
                          >> 8U)))) {
            vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__c_q 
                = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__4__KET____DOT__mac_row_instance.out_s[0U]);
            vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__4__KET____DOT__fifo_instance.out;
        }
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & ((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
                        >> 8U)));
        if ((((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
              >> 8U) & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__4__KET____DOT__fifo_instance.out;
            __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & ((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
                            >> 8U)));
        }
    }
    vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q;
}

VL_INLINE_OPT void Vcore_tb_mac_row___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__6__KET____DOT__mac_row_instance__0(Vcore_tb_mac_row* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_tb_mac_row___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__6__KET____DOT__mac_row_instance__0\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    // Body
    __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    if (vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__reset) {
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
    } else {
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__c_q 
                = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__5__KET____DOT__mac_row_instance.out_s[3U] 
                   >> 0x10U);
            vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__c_q 
                = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__5__KET____DOT__mac_row_instance.out_s[3U]);
            vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__c_q 
                = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__5__KET____DOT__mac_row_instance.out_s[2U] 
                   >> 0x10U);
            vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__c_q 
                = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__5__KET____DOT__mac_row_instance.out_s[2U]);
            vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__c_q 
                = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__5__KET____DOT__mac_row_instance.out_s[1U] 
                   >> 0x10U);
            vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__c_q 
                = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__5__KET____DOT__mac_row_instance.out_s[1U]);
            vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__c_q 
                = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__5__KET____DOT__mac_row_instance.out_s[0U] 
                   >> 0x10U);
            vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (3U & ((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
                          >> 0xaU)))) {
            vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__c_q 
                = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__5__KET____DOT__mac_row_instance.out_s[0U]);
            vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__5__KET____DOT__fifo_instance.out;
        }
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & ((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
                        >> 0xaU)));
        if ((((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
              >> 0xaU) & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__5__KET____DOT__fifo_instance.out;
            __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & ((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
                            >> 0xaU)));
        }
    }
    vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q;
}

VL_INLINE_OPT void Vcore_tb_mac_row___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__7__KET____DOT__mac_row_instance__0(Vcore_tb_mac_row* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_tb_mac_row___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__7__KET____DOT__mac_row_instance__0\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    // Body
    __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    if (vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__reset) {
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
    } else {
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__c_q 
                = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__6__KET____DOT__mac_row_instance.out_s[3U] 
                   >> 0x10U);
            vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__c_q 
                = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__6__KET____DOT__mac_row_instance.out_s[3U]);
            vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__c_q 
                = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__6__KET____DOT__mac_row_instance.out_s[2U] 
                   >> 0x10U);
            vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__c_q 
                = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__6__KET____DOT__mac_row_instance.out_s[2U]);
            vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__c_q 
                = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__6__KET____DOT__mac_row_instance.out_s[1U] 
                   >> 0x10U);
            vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__c_q 
                = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__6__KET____DOT__mac_row_instance.out_s[1U]);
            vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__c_q 
                = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__6__KET____DOT__mac_row_instance.out_s[0U] 
                   >> 0x10U);
            vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (3U & ((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
                          >> 0xcU)))) {
            vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__c_q 
                = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__6__KET____DOT__mac_row_instance.out_s[0U]);
            vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__6__KET____DOT__fifo_instance.out;
        }
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & ((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
                        >> 0xcU)));
        if ((((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
              >> 0xcU) & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__6__KET____DOT__fifo_instance.out;
            __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & ((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
                            >> 0xcU)));
        }
    }
    vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q;
}

VL_INLINE_OPT void Vcore_tb_mac_row___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance__0(Vcore_tb_mac_row* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_tb_mac_row___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance__0\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    CData/*0:0*/ __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0;
    // Body
    __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    if (vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__reset) {
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__c_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q = 0U;
        vlSelfRef.col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__b_q = 0U;
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q = 0U;
        __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q = 1U;
    } else {
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__c_q 
                = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__7__KET____DOT__mac_row_instance.out_s[3U] 
                   >> 0x10U);
            vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__c_q 
                = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__7__KET____DOT__mac_row_instance.out_s[3U]);
            vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__c_q 
                = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__7__KET____DOT__mac_row_instance.out_s[2U] 
                   >> 0x10U);
            vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__c_q 
                = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__7__KET____DOT__mac_row_instance.out_s[2U]);
            vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__c_q 
                = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__7__KET____DOT__mac_row_instance.out_s[1U] 
                   >> 0x10U);
            vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__c_q 
                = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__7__KET____DOT__mac_row_instance.out_s[1U]);
            vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q))) {
            vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__c_q 
                = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__7__KET____DOT__mac_row_instance.out_s[0U] 
                   >> 0x10U);
            vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q;
        }
        vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)));
        if (((IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q) 
             & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q;
            __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)));
        }
        if ((0U != (3U & ((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
                          >> 0xeU)))) {
            vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__c_q 
                = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__7__KET____DOT__mac_row_instance.out_s[0U]);
            vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q 
                = vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__7__KET____DOT__fifo_instance.out;
        }
        vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q 
            = ((1U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)) 
               | (2U & ((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
                        >> 0xeU)));
        if ((((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
              >> 0xeU) & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q))) {
            vlSelfRef.col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__b_q 
                = vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__7__KET____DOT__fifo_instance.out;
            __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q = 0U;
        } else if ((1U & (~ (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q)))) {
            vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q 
                = ((2U & (IData)(vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q)) 
                   | (1U & ((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
                            >> 0xeU)));
        }
    }
    vlSelfRef.__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    vlSelfRef.__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q 
        = __Vdly__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q;
}
