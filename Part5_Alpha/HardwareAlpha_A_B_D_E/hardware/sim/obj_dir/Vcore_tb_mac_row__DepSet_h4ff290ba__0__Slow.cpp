// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_tb.h for the primary calling header

#include "Vcore_tb__pch.h"
#include "Vcore_tb_mac_row.h"

VL_ATTR_COLD void Vcore_tb_mac_row___ctor_var_reset(Vcore_tb_mac_row* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_tb_mac_row___ctor_var_reset\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->out_s);
    vlSelf->in_w = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, vlSelf->in_n);
    vlSelf->valid = VL_RAND_RESET_I(8);
    vlSelf->inst_w = VL_RAND_RESET_I(2);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q = VL_RAND_RESET_I(4);
    vlSelf->col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__b_q = VL_RAND_RESET_I(4);
    vlSelf->__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__c_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q = VL_RAND_RESET_I(4);
    vlSelf->col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__b_q = VL_RAND_RESET_I(4);
    vlSelf->__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__c_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q = VL_RAND_RESET_I(4);
    vlSelf->col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__b_q = VL_RAND_RESET_I(4);
    vlSelf->__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__c_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q = VL_RAND_RESET_I(4);
    vlSelf->col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__b_q = VL_RAND_RESET_I(4);
    vlSelf->__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__c_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q = VL_RAND_RESET_I(4);
    vlSelf->col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__b_q = VL_RAND_RESET_I(4);
    vlSelf->__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__c_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q = VL_RAND_RESET_I(4);
    vlSelf->col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__b_q = VL_RAND_RESET_I(4);
    vlSelf->__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__c_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q = VL_RAND_RESET_I(4);
    vlSelf->col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__b_q = VL_RAND_RESET_I(4);
    vlSelf->__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__c_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q = VL_RAND_RESET_I(2);
    vlSelf->__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__a_q = VL_RAND_RESET_I(4);
    vlSelf->col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__b_q = VL_RAND_RESET_I(4);
    vlSelf->__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__c_q = VL_RAND_RESET_I(16);
    vlSelf->__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q = VL_RAND_RESET_I(1);
    vlSelf->__PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q = VL_RAND_RESET_I(2);
}
