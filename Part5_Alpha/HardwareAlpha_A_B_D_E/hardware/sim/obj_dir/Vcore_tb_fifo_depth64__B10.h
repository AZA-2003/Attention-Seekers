// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore_tb.h for the primary calling header

#ifndef VERILATED_VCORE_TB_FIFO_DEPTH64__B10_H_
#define VERILATED_VCORE_TB_FIFO_DEPTH64__B10_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vcore_tb_fifo_mux_16_1__B10;


class Vcore_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_tb_fifo_depth64__B10 final : public VerilatedModule {
  public:
    // CELLS
    Vcore_tb_fifo_mux_16_1__B10* __PVT__fifo_mux_16_1a;
    Vcore_tb_fifo_mux_16_1__B10* __PVT__fifo_mux_16_1b;
    Vcore_tb_fifo_mux_16_1__B10* __PVT__fifo_mux_16_1c;
    Vcore_tb_fifo_mux_16_1__B10* __PVT__fifo_mux_16_1d;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(rd_clk,0,0);
        VL_IN8(wr_clk,0,0);
        VL_IN8(flush_ptr,0,0);
        VL_IN8(rd,0,0);
        VL_IN8(wr,0,0);
        VL_OUT8(o_full,0,0);
        VL_OUT8(o_empty,0,0);
        VL_IN8(reset,0,0);
        CData/*0:0*/ __PVT__full;
        CData/*0:0*/ __PVT__empty;
        CData/*6:0*/ __PVT__rd_ptr;
        CData/*6:0*/ __PVT__wr_ptr;
        VL_IN16(in,15,0);
        VL_OUT16(out,15,0);
        SData/*15:0*/ __PVT__q0;
        SData/*15:0*/ __PVT__q1;
        SData/*15:0*/ __PVT__q2;
        SData/*15:0*/ __PVT__q3;
        SData/*15:0*/ __PVT__q4;
        SData/*15:0*/ __PVT__q5;
        SData/*15:0*/ __PVT__q6;
        SData/*15:0*/ __PVT__q7;
        SData/*15:0*/ __PVT__q8;
        SData/*15:0*/ __PVT__q9;
        SData/*15:0*/ __PVT__q10;
        SData/*15:0*/ __PVT__q11;
        SData/*15:0*/ __PVT__q12;
        SData/*15:0*/ __PVT__q13;
        SData/*15:0*/ __PVT__q14;
        SData/*15:0*/ __PVT__q15;
        SData/*15:0*/ __PVT__q16;
        SData/*15:0*/ __PVT__q17;
        SData/*15:0*/ __PVT__q18;
        SData/*15:0*/ __PVT__q19;
        SData/*15:0*/ __PVT__q20;
        SData/*15:0*/ __PVT__q21;
        SData/*15:0*/ __PVT__q22;
        SData/*15:0*/ __PVT__q23;
        SData/*15:0*/ __PVT__q24;
        SData/*15:0*/ __PVT__q25;
        SData/*15:0*/ __PVT__q26;
        SData/*15:0*/ __PVT__q27;
        SData/*15:0*/ __PVT__q28;
        SData/*15:0*/ __PVT__q29;
        SData/*15:0*/ __PVT__q30;
        SData/*15:0*/ __PVT__q31;
        SData/*15:0*/ __PVT__q32;
        SData/*15:0*/ __PVT__q33;
        SData/*15:0*/ __PVT__q34;
        SData/*15:0*/ __PVT__q35;
        SData/*15:0*/ __PVT__q36;
        SData/*15:0*/ __PVT__q37;
        SData/*15:0*/ __PVT__q38;
        SData/*15:0*/ __PVT__q39;
        SData/*15:0*/ __PVT__q40;
        SData/*15:0*/ __PVT__q41;
        SData/*15:0*/ __PVT__q42;
        SData/*15:0*/ __PVT__q43;
        SData/*15:0*/ __PVT__q44;
        SData/*15:0*/ __PVT__q45;
        SData/*15:0*/ __PVT__q46;
        SData/*15:0*/ __PVT__q47;
        SData/*15:0*/ __PVT__q48;
        SData/*15:0*/ __PVT__q49;
    };
    struct {
        SData/*15:0*/ __PVT__q50;
        SData/*15:0*/ __PVT__q51;
        SData/*15:0*/ __PVT__q52;
        SData/*15:0*/ __PVT__q53;
        SData/*15:0*/ __PVT__q54;
        SData/*15:0*/ __PVT__q55;
        SData/*15:0*/ __PVT__q56;
        SData/*15:0*/ __PVT__q57;
        SData/*15:0*/ __PVT__q58;
        SData/*15:0*/ __PVT__q59;
        SData/*15:0*/ __PVT__q60;
        SData/*15:0*/ __PVT__q61;
        SData/*15:0*/ __PVT__q62;
        SData/*15:0*/ __PVT__q63;
    };

    // INTERNAL VARIABLES
    Vcore_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_tb_fifo_depth64__B10(Vcore_tb__Syms* symsp, const char* v__name);
    ~Vcore_tb_fifo_depth64__B10();
    VL_UNCOPYABLE(Vcore_tb_fifo_depth64__B10);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
