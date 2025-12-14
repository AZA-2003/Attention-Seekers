// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore_tb.h for the primary calling header

#ifndef VERILATED_VCORE_TB_FIFO_MUX_16_1_H_
#define VERILATED_VCORE_TB_FIFO_MUX_16_1_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcore_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore_tb_fifo_mux_16_1 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(__PVT__out,3,0);
    VL_IN8(__PVT__sel,3,0);
    VL_IN8(__PVT__in0,3,0);
    VL_IN8(__PVT__in1,3,0);
    VL_IN8(__PVT__in2,3,0);
    VL_IN8(__PVT__in3,3,0);
    VL_IN8(__PVT__in4,3,0);
    VL_IN8(__PVT__in5,3,0);
    VL_IN8(__PVT__in6,3,0);
    VL_IN8(__PVT__in7,3,0);
    VL_IN8(__PVT__in8,3,0);
    VL_IN8(__PVT__in9,3,0);
    VL_IN8(__PVT__in10,3,0);
    VL_IN8(__PVT__in11,3,0);
    VL_IN8(__PVT__in12,3,0);
    VL_IN8(__PVT__in13,3,0);
    VL_IN8(__PVT__in14,3,0);
    VL_IN8(__PVT__in15,3,0);

    // INTERNAL VARIABLES
    Vcore_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcore_tb_fifo_mux_16_1(Vcore_tb__Syms* symsp, const char* v__name);
    ~Vcore_tb_fifo_mux_16_1();
    VL_UNCOPYABLE(Vcore_tb_fifo_mux_16_1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
