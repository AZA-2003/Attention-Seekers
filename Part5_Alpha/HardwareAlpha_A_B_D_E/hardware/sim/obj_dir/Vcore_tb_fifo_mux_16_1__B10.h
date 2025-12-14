// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore_tb.h for the primary calling header

#ifndef VERILATED_VCORE_TB_FIFO_MUX_16_1__B10_H_
#define VERILATED_VCORE_TB_FIFO_MUX_16_1__B10_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcore_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_tb_fifo_mux_16_1__B10 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__sel,3,0);
    VL_OUT16(__PVT__out,15,0);
    VL_IN16(__PVT__in0,15,0);
    VL_IN16(__PVT__in1,15,0);
    VL_IN16(__PVT__in2,15,0);
    VL_IN16(__PVT__in3,15,0);
    VL_IN16(__PVT__in4,15,0);
    VL_IN16(__PVT__in5,15,0);
    VL_IN16(__PVT__in6,15,0);
    VL_IN16(__PVT__in7,15,0);
    VL_IN16(__PVT__in8,15,0);
    VL_IN16(__PVT__in9,15,0);
    VL_IN16(__PVT__in10,15,0);
    VL_IN16(__PVT__in11,15,0);
    VL_IN16(__PVT__in12,15,0);
    VL_IN16(__PVT__in13,15,0);
    VL_IN16(__PVT__in14,15,0);
    VL_IN16(__PVT__in15,15,0);

    // INTERNAL VARIABLES
    Vcore_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_tb_fifo_mux_16_1__B10(Vcore_tb__Syms* symsp, const char* v__name);
    ~Vcore_tb_fifo_mux_16_1__B10();
    VL_UNCOPYABLE(Vcore_tb_fifo_mux_16_1__B10);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
