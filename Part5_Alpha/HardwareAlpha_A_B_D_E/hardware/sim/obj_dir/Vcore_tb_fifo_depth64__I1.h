// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore_tb.h for the primary calling header

#ifndef VERILATED_VCORE_TB_FIFO_DEPTH64__I1_H_
#define VERILATED_VCORE_TB_FIFO_DEPTH64__I1_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vcore_tb_fifo_mux_16_1;


class Vcore_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_tb_fifo_depth64__I1 final : public VerilatedModule {
  public:
    // CELLS
    Vcore_tb_fifo_mux_16_1* __PVT__fifo_mux_16_1a;
    Vcore_tb_fifo_mux_16_1* __PVT__fifo_mux_16_1b;
    Vcore_tb_fifo_mux_16_1* __PVT__fifo_mux_16_1c;
    Vcore_tb_fifo_mux_16_1* __PVT__fifo_mux_16_1d;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(rd_clk,0,0);
        VL_IN8(wr_clk,0,0);
        VL_IN8(flush_ptr,0,0);
        VL_IN8(in,3,0);
        VL_OUT8(out,3,0);
        VL_IN8(rd,0,0);
        VL_IN8(wr,0,0);
        VL_OUT8(__PVT__o_full,0,0);
        VL_OUT8(__PVT__o_empty,0,0);
        VL_IN8(reset,0,0);
        CData/*6:0*/ __PVT__rd_ptr;
        CData/*6:0*/ __PVT__wr_ptr;
        CData/*3:0*/ __PVT__q0;
        CData/*3:0*/ __PVT__q1;
        CData/*3:0*/ __PVT__q2;
        CData/*3:0*/ __PVT__q3;
        CData/*3:0*/ __PVT__q4;
        CData/*3:0*/ __PVT__q5;
        CData/*3:0*/ __PVT__q6;
        CData/*3:0*/ __PVT__q7;
        CData/*3:0*/ __PVT__q8;
        CData/*3:0*/ __PVT__q9;
        CData/*3:0*/ __PVT__q10;
        CData/*3:0*/ __PVT__q11;
        CData/*3:0*/ __PVT__q12;
        CData/*3:0*/ __PVT__q13;
        CData/*3:0*/ __PVT__q14;
        CData/*3:0*/ __PVT__q15;
        CData/*3:0*/ __PVT__q16;
        CData/*3:0*/ __PVT__q17;
        CData/*3:0*/ __PVT__q18;
        CData/*3:0*/ __PVT__q19;
        CData/*3:0*/ __PVT__q20;
        CData/*3:0*/ __PVT__q21;
        CData/*3:0*/ __PVT__q22;
        CData/*3:0*/ __PVT__q23;
        CData/*3:0*/ __PVT__q24;
        CData/*3:0*/ __PVT__q25;
        CData/*3:0*/ __PVT__q26;
        CData/*3:0*/ __PVT__q27;
        CData/*3:0*/ __PVT__q28;
        CData/*3:0*/ __PVT__q29;
        CData/*3:0*/ __PVT__q30;
        CData/*3:0*/ __PVT__q31;
        CData/*3:0*/ __PVT__q32;
        CData/*3:0*/ __PVT__q33;
        CData/*3:0*/ __PVT__q34;
        CData/*3:0*/ __PVT__q35;
        CData/*3:0*/ __PVT__q36;
        CData/*3:0*/ __PVT__q37;
        CData/*3:0*/ __PVT__q38;
        CData/*3:0*/ __PVT__q39;
        CData/*3:0*/ __PVT__q40;
        CData/*3:0*/ __PVT__q41;
        CData/*3:0*/ __PVT__q42;
        CData/*3:0*/ __PVT__q43;
        CData/*3:0*/ __PVT__q44;
        CData/*3:0*/ __PVT__q45;
        CData/*3:0*/ __PVT__q46;
        CData/*3:0*/ __PVT__q47;
        CData/*3:0*/ __PVT__q48;
        CData/*3:0*/ __PVT__q49;
        CData/*3:0*/ __PVT__q50;
        CData/*3:0*/ __PVT__q51;
    };
    struct {
        CData/*3:0*/ __PVT__q52;
        CData/*3:0*/ __PVT__q53;
        CData/*3:0*/ __PVT__q54;
        CData/*3:0*/ __PVT__q55;
        CData/*3:0*/ __PVT__q56;
        CData/*3:0*/ __PVT__q57;
        CData/*3:0*/ __PVT__q58;
        CData/*3:0*/ __PVT__q59;
        CData/*3:0*/ __PVT__q60;
        CData/*3:0*/ __PVT__q61;
        CData/*3:0*/ __PVT__q62;
        CData/*3:0*/ __PVT__q63;
    };

    // INTERNAL VARIABLES
    Vcore_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_tb_fifo_depth64__I1(Vcore_tb__Syms* symsp, const char* v__name);
    ~Vcore_tb_fifo_depth64__I1();
    VL_UNCOPYABLE(Vcore_tb_fifo_depth64__I1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
