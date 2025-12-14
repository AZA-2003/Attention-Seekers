// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_tb.h for the primary calling header

#include "Vcore_tb__pch.h"
#include "Vcore_tb__Syms.h"
#include "Vcore_tb_fifo_depth64__I1.h"

void Vcore_tb_fifo_depth64__I1___ctor_var_reset(Vcore_tb_fifo_depth64__I1* vlSelf);

Vcore_tb_fifo_depth64__I1::Vcore_tb_fifo_depth64__I1(Vcore_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vcore_tb_fifo_depth64__I1___ctor_var_reset(this);
}

void Vcore_tb_fifo_depth64__I1::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore_tb_fifo_depth64__I1::~Vcore_tb_fifo_depth64__I1() {
}
