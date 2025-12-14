// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_tb.h for the primary calling header

#include "Vcore_tb__pch.h"
#include "Vcore_tb_fifo_mux_16_1__B10.h"

VL_ATTR_COLD void Vcore_tb_fifo_mux_16_1__B10___ctor_var_reset(Vcore_tb_fifo_mux_16_1__B10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vcore_tb_fifo_mux_16_1__B10___ctor_var_reset\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->__PVT__out = VL_RAND_RESET_I(16);
    vlSelf->__PVT__sel = VL_RAND_RESET_I(4);
    vlSelf->__PVT__in0 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__in1 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__in2 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__in3 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__in4 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__in5 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__in6 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__in7 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__in8 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__in9 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__in10 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__in11 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__in12 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__in13 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__in14 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__in15 = VL_RAND_RESET_I(16);
}
