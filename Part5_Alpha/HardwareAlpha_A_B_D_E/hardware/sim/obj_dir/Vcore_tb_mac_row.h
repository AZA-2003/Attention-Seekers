// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore_tb.h for the primary calling header

#ifndef VERILATED_VCORE_TB_MAC_ROW_H_
#define VERILATED_VCORE_TB_MAC_ROW_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcore_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_tb_mac_row final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(in_w,3,0);
    VL_OUT8(valid,7,0);
    VL_IN8(inst_w,1,0);
    VL_IN8(reset,0,0);
    CData/*3:0*/ __PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__a_q;
    CData/*3:0*/ col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__b_q;
    CData/*0:0*/ __PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    CData/*1:0*/ __PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__inst_q;
    CData/*3:0*/ __PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__a_q;
    CData/*3:0*/ col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__b_q;
    CData/*0:0*/ __PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    CData/*1:0*/ __PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__inst_q;
    CData/*3:0*/ __PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__a_q;
    CData/*3:0*/ col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__b_q;
    CData/*0:0*/ __PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    CData/*1:0*/ __PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__inst_q;
    CData/*3:0*/ __PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__a_q;
    CData/*3:0*/ col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__b_q;
    CData/*0:0*/ __PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    CData/*1:0*/ __PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__inst_q;
    CData/*3:0*/ __PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__a_q;
    CData/*3:0*/ col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__b_q;
    CData/*0:0*/ __PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    CData/*1:0*/ __PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__inst_q;
    CData/*3:0*/ __PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__a_q;
    CData/*3:0*/ col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__b_q;
    CData/*0:0*/ __PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    CData/*1:0*/ __PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__inst_q;
    CData/*3:0*/ __PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__a_q;
    CData/*3:0*/ col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__b_q;
    CData/*0:0*/ __PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    CData/*1:0*/ __PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__inst_q;
    CData/*3:0*/ __PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__a_q;
    CData/*3:0*/ col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__b_q;
    CData/*0:0*/ __PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__load_ready_q;
    CData/*1:0*/ __PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__inst_q;
    SData/*15:0*/ __PVT__col_num__BRA__1__KET____DOT__mac_tile_instance__DOT__c_q;
    SData/*15:0*/ __PVT__col_num__BRA__2__KET____DOT__mac_tile_instance__DOT__c_q;
    SData/*15:0*/ __PVT__col_num__BRA__3__KET____DOT__mac_tile_instance__DOT__c_q;
    SData/*15:0*/ __PVT__col_num__BRA__4__KET____DOT__mac_tile_instance__DOT__c_q;
    SData/*15:0*/ __PVT__col_num__BRA__5__KET____DOT__mac_tile_instance__DOT__c_q;
    SData/*15:0*/ __PVT__col_num__BRA__6__KET____DOT__mac_tile_instance__DOT__c_q;
    SData/*15:0*/ __PVT__col_num__BRA__7__KET____DOT__mac_tile_instance__DOT__c_q;
    SData/*15:0*/ __PVT__col_num__BRA__8__KET____DOT__mac_tile_instance__DOT__c_q;
    VL_OUTW(out_s,127,0,4);
    VL_INW(in_n,127,0,4);

    // INTERNAL VARIABLES
    Vcore_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_tb_mac_row(Vcore_tb__Syms* symsp, const char* v__name);
    ~Vcore_tb_mac_row();
    VL_UNCOPYABLE(Vcore_tb_mac_row);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
