// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_tb.h for the primary calling header

#include "Vcore_tb__pch.h"
#include "Vcore_tb__Syms.h"
#include "Vcore_tb___024root.h"

VlCoroutine Vcore_tb___024root___eval_initial__TOP__Vtiming__1__0(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___eval_initial__TOP__Vtiming__1__0\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation;
    __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation = 0;
    IData/*31:0*/ __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx;
    __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx = 0;
    IData/*31:0*/ __Vtask_core_tb__DOT__write_activation_sram__6__weight_or_activation;
    __Vtask_core_tb__DOT__write_activation_sram__6__weight_or_activation = 0;
    IData/*31:0*/ __Vtask_core_tb__DOT__write_activation_sram__6__kij_idx;
    __Vtask_core_tb__DOT__write_activation_sram__6__kij_idx = 0;
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x655f7462U;
    __Vtemp_1[2U] = 0x636f72U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.core_tb__DOT__start_controller = 0U;
    vlSelfRef.core_tb__DOT__psum_memory_rd_enable = 0U;
    vlSelfRef.core_tb__DOT__activation_weight_mem_load = 0U;
    vlSelfRef.core_tb__DOT__sram_mem_addr = 0U;
    vlSelfRef.core_tb__DOT__reset = 1U;
    co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge core_tb.clk)", 
                                                         "../verilog/core_tb.sv", 
                                                         81);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge core_tb.clk)", 
                                                         "../verilog/core_tb.sv", 
                                                         82);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.core_tb__DOT__reset = 0U;
    co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge core_tb.clk)", 
                                                         "../verilog/core_tb.sv", 
                                                         84);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge core_tb.clk)", 
                                                         "../verilog/core_tb.sv", 
                                                         594);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge core_tb.clk)", 
                                                         "../verilog/core_tb.sv", 
                                                         594);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k = 0U;
    while (VL_GTS_III(32, 9U, vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)) {
        vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0U;
        vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0U;
        vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
            = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
        vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 1U;
        if ((8U >= (0xfU & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k))) {
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 1U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 1U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 2U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 2U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 2U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 3U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 3U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 3U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 4U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 4U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 4U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 5U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 5U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 5U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 6U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 6U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 6U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 7U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 7U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 7U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 8U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__i_ch = 1U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 8U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 8U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 1U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 9U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 9U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 2U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0xaU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xaU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 3U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0xbU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xbU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 4U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0xcU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xcU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 5U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0xdU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xdU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 6U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0xeU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xeU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 7U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0xfU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xfU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 8U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__i_ch = 2U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x10U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 1U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x11U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 1U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 2U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x12U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 2U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 3U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x13U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 3U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 4U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x14U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 4U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 5U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x15U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 5U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 6U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x16U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 6U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 7U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x17U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 7U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 8U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__i_ch = 3U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x18U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 8U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 1U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x19U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 9U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 2U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x1aU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xaU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 3U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x1bU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xbU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 4U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x1cU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xcU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 5U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x1dU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xdU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 6U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x1eU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xeU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 7U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x1fU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xfU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 8U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__i_ch = 4U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x20U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 1U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x21U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 1U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 2U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x22U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 2U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 3U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x23U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 3U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 4U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x24U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 4U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 5U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x25U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 5U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 6U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x26U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 6U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 7U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x27U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 7U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 8U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__i_ch = 5U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x28U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 8U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 1U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x29U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 9U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 2U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x2aU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xaU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 3U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x2bU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xbU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 4U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x2cU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xcU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 5U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x2dU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xdU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 6U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x2eU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xeU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 7U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x2fU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xfU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 8U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__i_ch = 6U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x30U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 1U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x31U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 1U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 2U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x32U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 2U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 3U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x33U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 3U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 4U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x34U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 4U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 5U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x35U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 5U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 6U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x36U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 6U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 7U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x37U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 7U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 8U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__i_ch = 7U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x38U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 8U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 1U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x39U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 9U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 2U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x3aU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xaU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 3U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x3bU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xbU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 4U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x3cU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xcU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 5U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x3dU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xdU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 6U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x3eU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xeU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 7U;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x3fU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xfU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__weights_to_load[(0x3fU 
                                                     & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx)][(0xfU 
                                                                                & vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k)] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0;
        } else {
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 1U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 1U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 2U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 2U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 2U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 3U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 3U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 3U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 4U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 4U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 4U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 5U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 5U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 5U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 6U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 6U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 6U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 7U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 7U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 7U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 8U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__i_ch = 1U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 8U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 8U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 1U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 9U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 9U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 2U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0xaU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xaU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 3U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0xbU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xbU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 4U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0xcU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xcU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 5U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0xdU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xdU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 6U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0xeU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xeU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 7U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0xfU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xfU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 8U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__i_ch = 2U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x10U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 1U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x11U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 1U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 2U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x12U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 2U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 3U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x13U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 3U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 4U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x14U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 4U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 5U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x15U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 5U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 6U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x16U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 6U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 7U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x17U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 7U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 8U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__i_ch = 3U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x18U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 8U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 1U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x19U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 9U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 2U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x1aU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xaU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 3U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x1bU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xbU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 4U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x1cU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xcU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 5U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x1dU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xdU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 6U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x1eU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xeU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 7U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x1fU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xfU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 8U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__i_ch = 4U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x20U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 1U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x21U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 1U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 2U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x22U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 2U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 3U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x23U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 3U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 4U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x24U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 4U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 5U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x25U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 5U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 6U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x26U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 6U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 7U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x27U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 7U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 8U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__i_ch = 5U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x28U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 8U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 1U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x29U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 9U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 2U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x2aU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xaU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 3U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x2bU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xbU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 4U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x2cU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xcU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 5U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x2dU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xdU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 6U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x2eU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xeU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 7U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x2fU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xfU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 8U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__i_ch = 6U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x30U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 1U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x31U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 1U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 2U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x32U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 2U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 3U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x33U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 3U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 4U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x34U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 4U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 5U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x35U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 5U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 6U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x36U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 6U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 7U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x37U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 7U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 8U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__i_ch = 7U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x38U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 8U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 1U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x39U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 9U;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 2U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x3aU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xaU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 3U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x3bU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xbU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 4U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x3cU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xcU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 5U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x3dU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xdU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 6U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x3eU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xeU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 7U;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__idx = 0x3fU;
            vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val = 0xfU;
            vlSelfRef.core_tb__DOT____Vlvbound_hbf23a7b1__0 
                = vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__val;
        }
        vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__o_ch = 8U;
        vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__i_ch = 8U;
        vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__initialize_weights__Vstatic__k);
    }
    VL_WRITEF_NX("INFO | %0t | Initialized weights_to_load for 9 kernel indices\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N = 6U;
    vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx = 0U;
    while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N)) {
        vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx = 0U;
        while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N)) {
            if (((((0U == vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx) 
                   | (0U == vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx)) 
                  | (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx 
                     == (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N 
                         - (IData)(1U)))) | (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx 
                                             == (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N 
                                                 - (IData)(1U))))) {
                vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__0 = 0U;
                if (VL_LIKELY(((0x63U >= (0x7fU & (
                                                   VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                   + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx)))))) {
                    vlSelfRef.core_tb__DOT__activations_to_load[(0x7fU 
                                                                 & (VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                                    + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx))][0U] 
                        = vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__0;
                }
            } else {
                vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__val 
                    = (0xfU & (VL_MULS_III(32, (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx 
                                                - (IData)(1U)), 
                                           (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N 
                                            - (IData)(2U))) 
                               + (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx 
                                  - (IData)(1U))));
                vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__1 
                    = vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__val;
                if (VL_LIKELY(((0x63U >= (0x7fU & (
                                                   VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                   + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx)))))) {
                    vlSelfRef.core_tb__DOT__activations_to_load[(0x7fU 
                                                                 & (VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                                    + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx))][0U] 
                        = vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__1;
                }
            }
            vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx 
                = ((IData)(1U) + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx);
        }
        vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx);
    }
    vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_ic = 1U;
    vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx = 0U;
    while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N)) {
        vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx = 0U;
        while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N)) {
            if (((((0U == vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx) 
                   | (0U == vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx)) 
                  | (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx 
                     == (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N 
                         - (IData)(1U)))) | (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx 
                                             == (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N 
                                                 - (IData)(1U))))) {
                vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__0 = 0U;
                if (VL_LIKELY(((0x63U >= (0x7fU & (
                                                   VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                   + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx)))))) {
                    vlSelfRef.core_tb__DOT__activations_to_load[(0x7fU 
                                                                 & (VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                                    + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx))][1U] 
                        = vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__0;
                }
            } else {
                vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__val 
                    = (0xfU & (VL_MULS_III(32, (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx 
                                                - (IData)(1U)), 
                                           (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N 
                                            - (IData)(2U))) 
                               + (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx 
                                  - (IData)(1U))));
                vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__1 
                    = vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__val;
                if (VL_LIKELY(((0x63U >= (0x7fU & (
                                                   VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                   + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx)))))) {
                    vlSelfRef.core_tb__DOT__activations_to_load[(0x7fU 
                                                                 & (VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                                    + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx))][1U] 
                        = vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__1;
                }
            }
            vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx 
                = ((IData)(1U) + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx);
        }
        vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx);
    }
    vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_ic = 2U;
    vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx = 0U;
    while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N)) {
        vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx = 0U;
        while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N)) {
            if (((((0U == vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx) 
                   | (0U == vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx)) 
                  | (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx 
                     == (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N 
                         - (IData)(1U)))) | (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx 
                                             == (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N 
                                                 - (IData)(1U))))) {
                vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__0 = 0U;
                if (VL_LIKELY(((0x63U >= (0x7fU & (
                                                   VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                   + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx)))))) {
                    vlSelfRef.core_tb__DOT__activations_to_load[(0x7fU 
                                                                 & (VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                                    + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx))][2U] 
                        = vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__0;
                }
            } else {
                vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__val 
                    = (0xfU & (VL_MULS_III(32, (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx 
                                                - (IData)(1U)), 
                                           (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N 
                                            - (IData)(2U))) 
                               + (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx 
                                  - (IData)(1U))));
                vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__1 
                    = vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__val;
                if (VL_LIKELY(((0x63U >= (0x7fU & (
                                                   VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                   + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx)))))) {
                    vlSelfRef.core_tb__DOT__activations_to_load[(0x7fU 
                                                                 & (VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                                    + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx))][2U] 
                        = vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__1;
                }
            }
            vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx 
                = ((IData)(1U) + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx);
        }
        vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx);
    }
    vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_ic = 3U;
    vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx = 0U;
    while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N)) {
        vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx = 0U;
        while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N)) {
            if (((((0U == vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx) 
                   | (0U == vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx)) 
                  | (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx 
                     == (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N 
                         - (IData)(1U)))) | (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx 
                                             == (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N 
                                                 - (IData)(1U))))) {
                vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__0 = 0U;
                if (VL_LIKELY(((0x63U >= (0x7fU & (
                                                   VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                   + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx)))))) {
                    vlSelfRef.core_tb__DOT__activations_to_load[(0x7fU 
                                                                 & (VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                                    + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx))][3U] 
                        = vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__0;
                }
            } else {
                vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__val 
                    = (0xfU & (VL_MULS_III(32, (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx 
                                                - (IData)(1U)), 
                                           (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N 
                                            - (IData)(2U))) 
                               + (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx 
                                  - (IData)(1U))));
                vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__1 
                    = vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__val;
                if (VL_LIKELY(((0x63U >= (0x7fU & (
                                                   VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                   + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx)))))) {
                    vlSelfRef.core_tb__DOT__activations_to_load[(0x7fU 
                                                                 & (VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                                    + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx))][3U] 
                        = vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__1;
                }
            }
            vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx 
                = ((IData)(1U) + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx);
        }
        vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx);
    }
    vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_ic = 4U;
    vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx = 0U;
    while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N)) {
        vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx = 0U;
        while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N)) {
            if (((((0U == vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx) 
                   | (0U == vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx)) 
                  | (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx 
                     == (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N 
                         - (IData)(1U)))) | (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx 
                                             == (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N 
                                                 - (IData)(1U))))) {
                vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__0 = 0U;
                if (VL_LIKELY(((0x63U >= (0x7fU & (
                                                   VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                   + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx)))))) {
                    vlSelfRef.core_tb__DOT__activations_to_load[(0x7fU 
                                                                 & (VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                                    + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx))][4U] 
                        = vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__0;
                }
            } else {
                vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__val 
                    = (0xfU & (VL_MULS_III(32, (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx 
                                                - (IData)(1U)), 
                                           (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N 
                                            - (IData)(2U))) 
                               + (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx 
                                  - (IData)(1U))));
                vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__1 
                    = vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__val;
                if (VL_LIKELY(((0x63U >= (0x7fU & (
                                                   VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                   + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx)))))) {
                    vlSelfRef.core_tb__DOT__activations_to_load[(0x7fU 
                                                                 & (VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                                    + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx))][4U] 
                        = vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__1;
                }
            }
            vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx 
                = ((IData)(1U) + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx);
        }
        vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx);
    }
    vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_ic = 5U;
    vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx = 0U;
    while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N)) {
        vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx = 0U;
        while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N)) {
            if (((((0U == vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx) 
                   | (0U == vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx)) 
                  | (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx 
                     == (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N 
                         - (IData)(1U)))) | (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx 
                                             == (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N 
                                                 - (IData)(1U))))) {
                vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__0 = 0U;
                if (VL_LIKELY(((0x63U >= (0x7fU & (
                                                   VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                   + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx)))))) {
                    vlSelfRef.core_tb__DOT__activations_to_load[(0x7fU 
                                                                 & (VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                                    + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx))][5U] 
                        = vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__0;
                }
            } else {
                vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__val 
                    = (0xfU & (VL_MULS_III(32, (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx 
                                                - (IData)(1U)), 
                                           (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N 
                                            - (IData)(2U))) 
                               + (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx 
                                  - (IData)(1U))));
                vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__1 
                    = vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__val;
                if (VL_LIKELY(((0x63U >= (0x7fU & (
                                                   VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                   + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx)))))) {
                    vlSelfRef.core_tb__DOT__activations_to_load[(0x7fU 
                                                                 & (VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                                    + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx))][5U] 
                        = vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__1;
                }
            }
            vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx 
                = ((IData)(1U) + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx);
        }
        vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx);
    }
    vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_ic = 6U;
    vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx = 0U;
    while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N)) {
        vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx = 0U;
        while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N)) {
            if (((((0U == vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx) 
                   | (0U == vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx)) 
                  | (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx 
                     == (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N 
                         - (IData)(1U)))) | (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx 
                                             == (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N 
                                                 - (IData)(1U))))) {
                vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__0 = 0U;
                if (VL_LIKELY(((0x63U >= (0x7fU & (
                                                   VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                   + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx)))))) {
                    vlSelfRef.core_tb__DOT__activations_to_load[(0x7fU 
                                                                 & (VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                                    + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx))][6U] 
                        = vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__0;
                }
            } else {
                vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__val 
                    = (0xfU & (VL_MULS_III(32, (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx 
                                                - (IData)(1U)), 
                                           (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N 
                                            - (IData)(2U))) 
                               + (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx 
                                  - (IData)(1U))));
                vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__1 
                    = vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__val;
                if (VL_LIKELY(((0x63U >= (0x7fU & (
                                                   VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                   + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx)))))) {
                    vlSelfRef.core_tb__DOT__activations_to_load[(0x7fU 
                                                                 & (VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                                    + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx))][6U] 
                        = vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__1;
                }
            }
            vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx 
                = ((IData)(1U) + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx);
        }
        vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx);
    }
    vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_ic = 7U;
    vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx = 0U;
    while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N)) {
        vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx = 0U;
        while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N)) {
            if (((((0U == vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx) 
                   | (0U == vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx)) 
                  | (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx 
                     == (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N 
                         - (IData)(1U)))) | (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx 
                                             == (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N 
                                                 - (IData)(1U))))) {
                vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__0 = 0U;
                if (VL_LIKELY(((0x63U >= (0x7fU & (
                                                   VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                   + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx)))))) {
                    vlSelfRef.core_tb__DOT__activations_to_load[(0x7fU 
                                                                 & (VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                                    + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx))][7U] 
                        = vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__0;
                }
            } else {
                vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__val 
                    = (0xfU & (VL_MULS_III(32, (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx 
                                                - (IData)(1U)), 
                                           (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N 
                                            - (IData)(2U))) 
                               + (vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx 
                                  - (IData)(1U))));
                vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__1 
                    = vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__val;
                if (VL_LIKELY(((0x63U >= (0x7fU & (
                                                   VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                   + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx)))))) {
                    vlSelfRef.core_tb__DOT__activations_to_load[(0x7fU 
                                                                 & (VL_MULS_III(32, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx, vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__N) 
                                                                    + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx))][7U] 
                        = vlSelfRef.core_tb__DOT____Vlvbound_h6ec3b766__1;
                }
            }
            vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx 
                = ((IData)(1U) + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_col_idx);
        }
        vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_row_idx);
    }
    vlSelfRef.core_tb__DOT__initialize_activations__Vstatic__a_ic = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx = 0U;
    while (VL_GTS_III(32, 0x144U, vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)) {
        vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__0 = 0U;
        vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__o_ch = 1U;
        if ((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))) {
            vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][0U] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__0;
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__0 = 0U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__o_ch = 2U;
            vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][1U] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__0;
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__0 = 0U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__o_ch = 3U;
            vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][2U] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__0;
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__0 = 0U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__o_ch = 4U;
            vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][3U] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__0;
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__0 = 0U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__o_ch = 5U;
            vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][4U] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__0;
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__0 = 0U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__o_ch = 6U;
            vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][5U] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__0;
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__0 = 0U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__o_ch = 7U;
            vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][6U] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__0;
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__0 = 0U;
            vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][7U] 
                = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__0;
        } else {
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__0 = 0U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__o_ch = 2U;
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__0 = 0U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__o_ch = 3U;
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__0 = 0U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__o_ch = 4U;
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__0 = 0U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__o_ch = 5U;
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__0 = 0U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__o_ch = 6U;
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__0 = 0U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__o_ch = 7U;
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__0 = 0U;
        }
        vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__o_ch = 8U;
        vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx);
    }
    vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k = 0U;
    while (VL_GTS_III(32, 9U, vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)) {
        vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n = 0U;
        while (VL_GTS_III(32, 0x24U, vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)) {
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx 
                = (VL_MULS_III(32, (IData)(0x24U), vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k) 
                   + vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n);
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [0U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][0U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 1U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [1U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [8U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][0U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][0U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 2U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [2U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x10U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][0U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][0U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 3U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [3U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x18U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][0U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][0U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 4U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [4U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x20U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][0U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][0U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 5U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [5U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x28U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][0U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][0U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 6U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [6U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x30U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][0U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][0U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 7U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [7U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x38U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][0U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][0U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 8U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__o_ch = 1U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [0U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [1U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][0U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][1U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 1U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [1U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [9U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][1U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][1U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 2U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [2U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x11U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][1U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][1U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 3U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [3U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x19U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][1U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][1U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 4U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [4U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x21U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][1U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][1U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 5U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [5U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x29U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][1U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][1U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 6U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [6U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x31U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][1U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][1U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 7U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [7U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x39U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][1U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][1U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 8U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__o_ch = 2U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [0U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [2U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][1U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][2U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 1U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [1U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0xaU]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][2U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][2U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 2U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [2U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x12U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][2U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][2U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 3U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [3U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x1aU]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][2U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][2U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 4U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [4U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x22U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][2U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][2U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 5U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [5U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x2aU]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][2U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][2U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 6U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [6U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x32U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][2U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][2U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 7U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [7U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x3aU]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][2U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][2U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 8U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__o_ch = 3U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [0U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [3U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][2U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][3U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 1U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [1U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0xbU]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][3U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][3U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 2U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [2U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x13U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][3U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][3U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 3U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [3U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x1bU]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][3U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][3U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 4U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [4U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x23U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][3U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][3U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 5U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [5U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x2bU]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][3U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][3U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 6U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [6U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x33U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][3U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][3U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 7U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [7U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x3bU]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][3U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][3U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 8U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__o_ch = 4U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [0U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [4U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][3U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][4U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 1U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [1U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0xcU]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][4U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][4U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 2U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [2U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x14U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][4U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][4U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 3U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [3U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x1cU]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][4U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][4U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 4U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [4U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x24U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][4U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][4U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 5U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [5U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x2cU]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][4U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][4U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 6U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [6U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x34U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][4U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][4U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 7U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [7U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x3cU]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][4U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][4U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 8U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__o_ch = 5U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [0U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [5U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][4U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][5U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 1U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [1U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0xdU]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][5U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][5U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 2U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [2U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x15U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][5U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][5U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 3U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [3U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x1dU]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][5U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][5U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 4U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [4U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x25U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][5U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][5U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 5U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [5U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x2dU]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][5U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][5U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 6U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [6U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x35U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][5U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][5U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 7U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [7U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x3dU]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][5U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][5U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 8U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__o_ch = 6U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [0U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [6U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][5U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][6U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 1U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [1U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0xeU]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][6U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][6U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 2U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [2U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x16U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][6U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][6U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 3U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [3U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x1eU]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][6U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][6U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 4U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [4U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x26U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][6U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][6U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 5U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [5U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x2eU]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][6U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][6U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 6U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [6U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x36U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][6U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][6U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 7U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [7U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x3eU]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][6U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][6U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 8U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__o_ch = 7U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [0U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [7U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][6U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][7U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 1U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [1U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0xfU]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][7U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][7U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 2U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [2U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x17U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][7U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][7U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 3U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [3U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x1fU]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][7U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][7U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 4U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [4U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x27U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][7U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][7U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 5U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [5U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x2fU]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][7U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][7U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 6U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [6U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x37U]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][7U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][7U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 7U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext 
                = (0xffffU & VL_EXTENDS_II(16,5, vlSelfRef.core_tb__DOT__activations_to_load
                                           [((0x63U 
                                              >= (0x7fU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n))
                                              ? (0x7fU 
                                                 & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n)
                                              : 0U)]
                                           [7U]));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext 
                = (0xffffU & VL_EXTENDS_II(16,4, ((8U 
                                                   >= 
                                                   (0xfU 
                                                    & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k))
                                                   ? 
                                                  vlSelfRef.core_tb__DOT__weights_to_load
                                                  [0x3fU]
                                                  [
                                                  (0xfU 
                                                   & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k)]
                                                   : 0U)));
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult 
                = (0xffffU & VL_MULS_III(16, (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__a_ext), (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__w_ext)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][7U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1 
                = (0xffffU & (vlSelfRef.core_tb__DOT__expected_psums
                              [((0x143U >= (0x1ffU 
                                            & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))
                                 ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)
                                 : 0U)][7U] + (IData)(vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__mult)));
            if (VL_LIKELY(((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx))))) {
                vlSelfRef.core_tb__DOT__expected_psums[(0x1ffU 
                                                        & vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__idx)][7U] 
                    = vlSelfRef.core_tb__DOT____Vlvbound_hf547bbe8__1;
            }
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = 8U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__o_ch = 8U;
            vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n 
                = ((IData)(1U) + vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__n);
        }
        vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__calculate_expected_psums__Vstatic__k);
    }
    VL_WRITEF_NX("INFO | %0t | Calculated expected psums for 324 entries\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ni_dim = 4U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__a_pad_ni_dim = 6U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__ki_dim = 3U;
    vlSelfRef.core_tb__DOT__expected_outputs[0U][0U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    vlSelfRef.core_tb__DOT__expected_outputs[0U][1U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    vlSelfRef.core_tb__DOT__expected_outputs[0U][2U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    vlSelfRef.core_tb__DOT__expected_outputs[0U][3U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    vlSelfRef.core_tb__DOT__expected_outputs[0U][4U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    vlSelfRef.core_tb__DOT__expected_outputs[0U][5U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    vlSelfRef.core_tb__DOT__expected_outputs[0U][6U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    vlSelfRef.core_tb__DOT__expected_outputs[0U][7U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 1U;
    vlSelfRef.core_tb__DOT__expected_outputs[1U][0U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    vlSelfRef.core_tb__DOT__expected_outputs[1U][1U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    vlSelfRef.core_tb__DOT__expected_outputs[1U][2U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    vlSelfRef.core_tb__DOT__expected_outputs[1U][3U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    vlSelfRef.core_tb__DOT__expected_outputs[1U][4U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    vlSelfRef.core_tb__DOT__expected_outputs[1U][5U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    vlSelfRef.core_tb__DOT__expected_outputs[1U][6U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    vlSelfRef.core_tb__DOT__expected_outputs[1U][7U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 2U;
    vlSelfRef.core_tb__DOT__expected_outputs[2U][0U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    vlSelfRef.core_tb__DOT__expected_outputs[2U][1U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    vlSelfRef.core_tb__DOT__expected_outputs[2U][2U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    vlSelfRef.core_tb__DOT__expected_outputs[2U][3U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    vlSelfRef.core_tb__DOT__expected_outputs[2U][4U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    vlSelfRef.core_tb__DOT__expected_outputs[2U][5U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    vlSelfRef.core_tb__DOT__expected_outputs[2U][6U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    vlSelfRef.core_tb__DOT__expected_outputs[2U][7U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 3U;
    vlSelfRef.core_tb__DOT__expected_outputs[3U][0U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    vlSelfRef.core_tb__DOT__expected_outputs[3U][1U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    vlSelfRef.core_tb__DOT__expected_outputs[3U][2U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    vlSelfRef.core_tb__DOT__expected_outputs[3U][3U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    vlSelfRef.core_tb__DOT__expected_outputs[3U][4U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    vlSelfRef.core_tb__DOT__expected_outputs[3U][5U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    vlSelfRef.core_tb__DOT__expected_outputs[3U][6U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    vlSelfRef.core_tb__DOT__expected_outputs[3U][7U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 4U;
    vlSelfRef.core_tb__DOT__expected_outputs[4U][0U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    vlSelfRef.core_tb__DOT__expected_outputs[4U][1U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    vlSelfRef.core_tb__DOT__expected_outputs[4U][2U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    vlSelfRef.core_tb__DOT__expected_outputs[4U][3U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    vlSelfRef.core_tb__DOT__expected_outputs[4U][4U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    vlSelfRef.core_tb__DOT__expected_outputs[4U][5U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    vlSelfRef.core_tb__DOT__expected_outputs[4U][6U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    vlSelfRef.core_tb__DOT__expected_outputs[4U][7U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 5U;
    vlSelfRef.core_tb__DOT__expected_outputs[5U][0U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    vlSelfRef.core_tb__DOT__expected_outputs[5U][1U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    vlSelfRef.core_tb__DOT__expected_outputs[5U][2U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    vlSelfRef.core_tb__DOT__expected_outputs[5U][3U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    vlSelfRef.core_tb__DOT__expected_outputs[5U][4U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    vlSelfRef.core_tb__DOT__expected_outputs[5U][5U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    vlSelfRef.core_tb__DOT__expected_outputs[5U][6U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    vlSelfRef.core_tb__DOT__expected_outputs[5U][7U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 6U;
    vlSelfRef.core_tb__DOT__expected_outputs[6U][0U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    vlSelfRef.core_tb__DOT__expected_outputs[6U][1U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    vlSelfRef.core_tb__DOT__expected_outputs[6U][2U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    vlSelfRef.core_tb__DOT__expected_outputs[6U][3U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    vlSelfRef.core_tb__DOT__expected_outputs[6U][4U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    vlSelfRef.core_tb__DOT__expected_outputs[6U][5U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    vlSelfRef.core_tb__DOT__expected_outputs[6U][6U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    vlSelfRef.core_tb__DOT__expected_outputs[6U][7U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 7U;
    vlSelfRef.core_tb__DOT__expected_outputs[7U][0U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    vlSelfRef.core_tb__DOT__expected_outputs[7U][1U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    vlSelfRef.core_tb__DOT__expected_outputs[7U][2U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    vlSelfRef.core_tb__DOT__expected_outputs[7U][3U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    vlSelfRef.core_tb__DOT__expected_outputs[7U][4U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    vlSelfRef.core_tb__DOT__expected_outputs[7U][5U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    vlSelfRef.core_tb__DOT__expected_outputs[7U][6U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    vlSelfRef.core_tb__DOT__expected_outputs[7U][7U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 8U;
    vlSelfRef.core_tb__DOT__expected_outputs[8U][0U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    vlSelfRef.core_tb__DOT__expected_outputs[8U][1U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    vlSelfRef.core_tb__DOT__expected_outputs[8U][2U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    vlSelfRef.core_tb__DOT__expected_outputs[8U][3U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    vlSelfRef.core_tb__DOT__expected_outputs[8U][4U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    vlSelfRef.core_tb__DOT__expected_outputs[8U][5U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    vlSelfRef.core_tb__DOT__expected_outputs[8U][6U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    vlSelfRef.core_tb__DOT__expected_outputs[8U][7U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 9U;
    vlSelfRef.core_tb__DOT__expected_outputs[9U][0U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    vlSelfRef.core_tb__DOT__expected_outputs[9U][1U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    vlSelfRef.core_tb__DOT__expected_outputs[9U][2U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    vlSelfRef.core_tb__DOT__expected_outputs[9U][3U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    vlSelfRef.core_tb__DOT__expected_outputs[9U][4U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    vlSelfRef.core_tb__DOT__expected_outputs[9U][5U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    vlSelfRef.core_tb__DOT__expected_outputs[9U][6U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    vlSelfRef.core_tb__DOT__expected_outputs[9U][7U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 0xaU;
    vlSelfRef.core_tb__DOT__expected_outputs[0xaU][0U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xaU][1U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xaU][2U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xaU][3U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xaU][4U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xaU][5U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xaU][6U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xaU][7U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 0xbU;
    vlSelfRef.core_tb__DOT__expected_outputs[0xbU][0U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xbU][1U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xbU][2U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xbU][3U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xbU][4U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xbU][5U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xbU][6U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xbU][7U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 0xcU;
    vlSelfRef.core_tb__DOT__expected_outputs[0xcU][0U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xcU][1U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xcU][2U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xcU][3U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xcU][4U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xcU][5U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xcU][6U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xcU][7U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 0xdU;
    vlSelfRef.core_tb__DOT__expected_outputs[0xdU][0U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xdU][1U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xdU][2U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xdU][3U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xdU][4U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xdU][5U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xdU][6U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xdU][7U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 0xeU;
    vlSelfRef.core_tb__DOT__expected_outputs[0xeU][0U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xeU][1U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xeU][2U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xeU][3U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xeU][4U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xeU][5U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xeU][6U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xeU][7U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 0xfU;
    vlSelfRef.core_tb__DOT__expected_outputs[0xfU][0U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xfU][1U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xfU][2U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xfU][3U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xfU][4U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xfU][5U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xfU][6U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    vlSelfRef.core_tb__DOT__expected_outputs[0xfU][7U] = 0U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 0x10U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij = 0U;
    while (VL_GTS_III(32, 0x10U, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)) {
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx 
            = ((VL_MULS_III(32, VL_DIVS_III(32, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ni_dim), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__a_pad_ni_dim) 
                + VL_MODDIVS_III(32, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ni_dim)) 
               + VL_MODDIVS_III(32, (IData)(0U), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__ki_dim));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx 
            = vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx;
        VL_WRITEF_NX("DEBUG | %0t | o_nij=%0d kij=0 maps to idx=%0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij,
                     32,vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx);
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][0U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [0U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][0U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][1U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [1U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][1U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][2U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [2U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][2U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][3U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [3U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][3U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][4U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [4U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][4U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][5U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [5U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][5U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][6U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [6U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][6U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][7U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [7U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][7U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__kij = 1U;
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx 
            = (((VL_MULS_III(32, VL_DIVS_III(32, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ni_dim), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__a_pad_ni_dim) 
                 + VL_MODDIVS_III(32, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ni_dim)) 
                + VL_MULS_III(32, VL_DIVS_III(32, (IData)(1U), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__ki_dim), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__a_pad_ni_dim)) 
               + VL_MODDIVS_III(32, (IData)(1U), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__ki_dim));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx 
            = ((IData)(0x24U) + vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx);
        VL_WRITEF_NX("DEBUG | %0t | o_nij=%0d kij=1 maps to idx=%0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij,
                     32,vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx);
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][0U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [0U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][0U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][1U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [1U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][1U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][2U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [2U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][2U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][3U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [3U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][3U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][4U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [4U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][4U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][5U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [5U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][5U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][6U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [6U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][6U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][7U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [7U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][7U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__kij = 2U;
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx 
            = (((VL_MULS_III(32, VL_DIVS_III(32, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ni_dim), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__a_pad_ni_dim) 
                 + VL_MODDIVS_III(32, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ni_dim)) 
                + VL_MULS_III(32, VL_DIVS_III(32, (IData)(2U), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__ki_dim), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__a_pad_ni_dim)) 
               + VL_MODDIVS_III(32, (IData)(2U), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__ki_dim));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx 
            = ((IData)(0x48U) + vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx);
        VL_WRITEF_NX("DEBUG | %0t | o_nij=%0d kij=2 maps to idx=%0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij,
                     32,vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx);
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][0U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [0U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][0U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][1U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [1U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][1U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][2U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [2U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][2U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][3U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [3U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][3U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][4U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [4U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][4U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][5U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [5U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][5U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][6U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [6U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][6U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][7U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [7U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][7U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__kij = 3U;
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx 
            = (((VL_MULS_III(32, VL_DIVS_III(32, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ni_dim), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__a_pad_ni_dim) 
                 + VL_MODDIVS_III(32, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ni_dim)) 
                + VL_MULS_III(32, VL_DIVS_III(32, (IData)(3U), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__ki_dim), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__a_pad_ni_dim)) 
               + VL_MODDIVS_III(32, (IData)(3U), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__ki_dim));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx 
            = ((IData)(0x6cU) + vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx);
        VL_WRITEF_NX("DEBUG | %0t | o_nij=%0d kij=3 maps to idx=%0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij,
                     32,vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx);
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][0U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [0U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][0U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][1U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [1U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][1U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][2U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [2U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][2U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][3U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [3U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][3U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][4U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [4U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][4U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][5U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [5U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][5U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][6U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [6U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][6U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][7U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [7U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][7U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__kij = 4U;
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx 
            = (((VL_MULS_III(32, VL_DIVS_III(32, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ni_dim), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__a_pad_ni_dim) 
                 + VL_MODDIVS_III(32, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ni_dim)) 
                + VL_MULS_III(32, VL_DIVS_III(32, (IData)(4U), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__ki_dim), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__a_pad_ni_dim)) 
               + VL_MODDIVS_III(32, (IData)(4U), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__ki_dim));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx 
            = ((IData)(0x90U) + vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx);
        VL_WRITEF_NX("DEBUG | %0t | o_nij=%0d kij=4 maps to idx=%0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij,
                     32,vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx);
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][0U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [0U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][0U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][1U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [1U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][1U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][2U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [2U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][2U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][3U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [3U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][3U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][4U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [4U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][4U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][5U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [5U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][5U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][6U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [6U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][6U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][7U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [7U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][7U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__kij = 5U;
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx 
            = (((VL_MULS_III(32, VL_DIVS_III(32, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ni_dim), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__a_pad_ni_dim) 
                 + VL_MODDIVS_III(32, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ni_dim)) 
                + VL_MULS_III(32, VL_DIVS_III(32, (IData)(5U), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__ki_dim), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__a_pad_ni_dim)) 
               + VL_MODDIVS_III(32, (IData)(5U), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__ki_dim));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx 
            = ((IData)(0xb4U) + vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx);
        VL_WRITEF_NX("DEBUG | %0t | o_nij=%0d kij=5 maps to idx=%0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij,
                     32,vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx);
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][0U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [0U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][0U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][1U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [1U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][1U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][2U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [2U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][2U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][3U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [3U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][3U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][4U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [4U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][4U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][5U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [5U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][5U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][6U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [6U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][6U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][7U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [7U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][7U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__kij = 6U;
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx 
            = (((VL_MULS_III(32, VL_DIVS_III(32, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ni_dim), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__a_pad_ni_dim) 
                 + VL_MODDIVS_III(32, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ni_dim)) 
                + VL_MULS_III(32, VL_DIVS_III(32, (IData)(6U), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__ki_dim), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__a_pad_ni_dim)) 
               + VL_MODDIVS_III(32, (IData)(6U), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__ki_dim));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx 
            = ((IData)(0xd8U) + vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx);
        VL_WRITEF_NX("DEBUG | %0t | o_nij=%0d kij=6 maps to idx=%0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij,
                     32,vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx);
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][0U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [0U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][0U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][1U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [1U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][1U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][2U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [2U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][2U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][3U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [3U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][3U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][4U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [4U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][4U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][5U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [5U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][5U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][6U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [6U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][6U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][7U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [7U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][7U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__kij = 7U;
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx 
            = (((VL_MULS_III(32, VL_DIVS_III(32, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ni_dim), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__a_pad_ni_dim) 
                 + VL_MODDIVS_III(32, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ni_dim)) 
                + VL_MULS_III(32, VL_DIVS_III(32, (IData)(7U), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__ki_dim), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__a_pad_ni_dim)) 
               + VL_MODDIVS_III(32, (IData)(7U), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__ki_dim));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx 
            = ((IData)(0xfcU) + vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx);
        VL_WRITEF_NX("DEBUG | %0t | o_nij=%0d kij=7 maps to idx=%0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij,
                     32,vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx);
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][0U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [0U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][0U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][1U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [1U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][1U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][2U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [2U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][2U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][3U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [3U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][3U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][4U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [4U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][4U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][5U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [5U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][5U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][6U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [6U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][6U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][7U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [7U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][7U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__kij = 8U;
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx 
            = (((VL_MULS_III(32, VL_DIVS_III(32, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ni_dim), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__a_pad_ni_dim) 
                 + VL_MODDIVS_III(32, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij, vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ni_dim)) 
                + VL_MULS_III(32, VL_DIVS_III(32, (IData)(8U), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__ki_dim), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__a_pad_ni_dim)) 
               + VL_MODDIVS_III(32, (IData)(8U), vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__ki_dim));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx 
            = ((IData)(0x120U) + vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx);
        VL_WRITEF_NX("DEBUG | %0t | o_nij=%0d kij=8 maps to idx=%0d\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,32,
                     vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij,
                     32,vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx);
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][0U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [0U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][0U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][1U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [1U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][1U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][2U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [2U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][2U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][3U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [3U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][3U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][4U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [4U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][4U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][5U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [5U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][5U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][6U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [6U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][6U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
        vlSelfRef.core_tb__DOT__expected_outputs[(0xfU 
                                                  & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)][7U] 
            = (0xffffU & (vlSelfRef.core_tb__DOT__expected_outputs
                          [(0xfU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij)]
                          [7U] + vlSelfRef.core_tb__DOT__expected_psums
                          [((0x143U >= (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx))
                             ? (0x1ffU & vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__idx)
                             : 0U)][7U]));
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__kij = 9U;
        vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij);
    }
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0U][0U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0U][0U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0U][1U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0U][1U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0U][2U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0U][2U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0U][3U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0U][3U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0U][4U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0U][4U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0U][5U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0U][5U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0U][6U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0U][6U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0U][7U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0U][7U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 1U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [1U][0U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[1U][0U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [1U][1U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[1U][1U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [1U][2U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[1U][2U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [1U][3U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[1U][3U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [1U][4U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[1U][4U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [1U][5U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[1U][5U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [1U][6U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[1U][6U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [1U][7U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[1U][7U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 2U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [2U][0U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[2U][0U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [2U][1U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[2U][1U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [2U][2U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[2U][2U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [2U][3U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[2U][3U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [2U][4U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[2U][4U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [2U][5U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[2U][5U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [2U][6U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[2U][6U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [2U][7U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[2U][7U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 3U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [3U][0U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[3U][0U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [3U][1U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[3U][1U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [3U][2U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[3U][2U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [3U][3U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[3U][3U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [3U][4U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[3U][4U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [3U][5U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[3U][5U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [3U][6U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[3U][6U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [3U][7U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[3U][7U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 4U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [4U][0U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[4U][0U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [4U][1U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[4U][1U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [4U][2U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[4U][2U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [4U][3U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[4U][3U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [4U][4U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[4U][4U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [4U][5U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[4U][5U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [4U][6U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[4U][6U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [4U][7U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[4U][7U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 5U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [5U][0U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[5U][0U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [5U][1U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[5U][1U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [5U][2U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[5U][2U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [5U][3U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[5U][3U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [5U][4U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[5U][4U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [5U][5U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[5U][5U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [5U][6U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[5U][6U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [5U][7U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[5U][7U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 6U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [6U][0U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[6U][0U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [6U][1U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[6U][1U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [6U][2U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[6U][2U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [6U][3U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[6U][3U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [6U][4U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[6U][4U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [6U][5U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[6U][5U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [6U][6U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[6U][6U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [6U][7U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[6U][7U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 7U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [7U][0U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[7U][0U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [7U][1U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[7U][1U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [7U][2U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[7U][2U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [7U][3U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[7U][3U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [7U][4U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[7U][4U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [7U][5U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[7U][5U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [7U][6U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[7U][6U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [7U][7U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[7U][7U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 8U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [8U][0U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[8U][0U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [8U][1U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[8U][1U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [8U][2U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[8U][2U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [8U][3U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[8U][3U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [8U][4U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[8U][4U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [8U][5U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[8U][5U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [8U][6U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[8U][6U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [8U][7U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[8U][7U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 9U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [9U][0U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[9U][0U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [9U][1U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[9U][1U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [9U][2U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[9U][2U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [9U][3U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[9U][3U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [9U][4U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[9U][4U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [9U][5U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[9U][5U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [9U][6U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[9U][6U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [9U][7U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[9U][7U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 0xaU;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xaU][0U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xaU][0U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xaU][1U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xaU][1U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xaU][2U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xaU][2U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xaU][3U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xaU][3U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xaU][4U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xaU][4U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xaU][5U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xaU][5U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xaU][6U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xaU][6U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xaU][7U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xaU][7U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 0xbU;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xbU][0U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xbU][0U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xbU][1U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xbU][1U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xbU][2U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xbU][2U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xbU][3U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xbU][3U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xbU][4U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xbU][4U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xbU][5U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xbU][5U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xbU][6U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xbU][6U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xbU][7U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xbU][7U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 0xcU;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xcU][0U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xcU][0U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xcU][1U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xcU][1U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xcU][2U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xcU][2U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xcU][3U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xcU][3U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xcU][4U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xcU][4U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xcU][5U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xcU][5U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xcU][6U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xcU][6U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xcU][7U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xcU][7U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 0xdU;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xdU][0U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xdU][0U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xdU][1U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xdU][1U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xdU][2U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xdU][2U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xdU][3U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xdU][3U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xdU][4U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xdU][4U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xdU][5U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xdU][5U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xdU][6U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xdU][6U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xdU][7U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xdU][7U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 0xeU;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xeU][0U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xeU][0U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xeU][1U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xeU][1U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xeU][2U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xeU][2U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xeU][3U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xeU][3U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xeU][4U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xeU][4U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xeU][5U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xeU][5U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xeU][6U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xeU][6U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xeU][7U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xeU][7U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 0xfU;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xfU][0U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xfU][0U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 1U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xfU][1U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xfU][1U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 2U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xfU][2U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xfU][2U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 3U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xfU][3U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xfU][3U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 4U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xfU][4U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xfU][4U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 5U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xfU][5U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xfU][5U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 6U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xfU][6U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xfU][6U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 7U;
    if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, vlSelfRef.core_tb__DOT__expected_outputs
                                         [0xfU][7U]))) {
        vlSelfRef.core_tb__DOT__expected_outputs[0xfU][7U] = 0U;
    }
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = 8U;
    vlSelfRef.core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = 0x10U;
    VL_WRITEF_NX("INFO | %0t | Calculated expected outputs after accumulation+RELU for 16 outputs\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx = 0U;
    __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation = 0U;
    vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c_max = 8U;
    vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r = 0U;
    vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r_max 
        = ((0U == __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation)
            ? 8U : 0x24U);
    while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r_max)) {
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row = 0U;
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c = 0U;
        while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c_max)) {
            vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row 
                = (((~ ((IData)(0xfU) << (0x1fU & (
                                                   (VL_SHIFTL_III(5,32,32, 
                                                                  ((IData)(1U) 
                                                                   + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c), 2U) 
                                                    - (IData)(1U)) 
                                                   - (IData)(3U))))) 
                    & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row) 
                   | (0xffffffffULL & (((0U == __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation)
                                         ? ((8U >= 
                                             (0xfU 
                                              & __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx))
                                             ? vlSelfRef.core_tb__DOT__weights_to_load
                                            [(0x3fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c) 
                                                 + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r))]
                                            [(0xfU 
                                              & __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx)]
                                             : 0U) : 
                                        vlSelfRef.core_tb__DOT__activations_to_load
                                        [((0x63U >= 
                                           (0x7fU & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r))
                                           ? (0x7fU 
                                              & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r)
                                           : 0U)][(7U 
                                                   & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c)]) 
                                       << (0x1fU & 
                                           ((VL_SHIFTL_III(5,32,32, 
                                                           ((IData)(1U) 
                                                            + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c), 2U) 
                                             - (IData)(1U)) 
                                            - (IData)(3U))))));
            vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c 
                = ((IData)(1U) + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c);
        }
        vlSelfRef.core_tb__DOT__D_xmem = vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row;
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__addr 
            = (0x7ffU & ((0U == __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation)
                          ? (vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r 
                             + VL_SHIFTL_III(11,32,32, __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx, 3U))
                          : ((IData)(0x48U) + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r)));
        vlSelfRef.core_tb__DOT__sram_mem_addr = vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__addr;
        vlSelfRef.core_tb__DOT__activation_weight_mem_load = 1U;
        co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge core_tb.clk)", 
                                                             "../verilog/core_tb.sv", 
                                                             488);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r);
    }
    vlSelfRef.core_tb__DOT__D_xmem = 0U;
    vlSelfRef.core_tb__DOT__activation_weight_mem_load = 0U;
    vlSelfRef.core_tb__DOT__sram_mem_addr = 0U;
    VL_WRITEF_NX("INFO | %0t | Wrote 8 rows into activation SRAM via D_xmem\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    vlSelfRef.core_tb__DOT__i = 1U;
    __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx = 1U;
    __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation = 0U;
    vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c_max = 8U;
    vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r = 0U;
    vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r_max 
        = ((0U == __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation)
            ? 8U : 0x24U);
    while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r_max)) {
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row = 0U;
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c = 0U;
        while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c_max)) {
            vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row 
                = (((~ ((IData)(0xfU) << (0x1fU & (
                                                   (VL_SHIFTL_III(5,32,32, 
                                                                  ((IData)(1U) 
                                                                   + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c), 2U) 
                                                    - (IData)(1U)) 
                                                   - (IData)(3U))))) 
                    & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row) 
                   | (0xffffffffULL & (((0U == __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation)
                                         ? ((8U >= 
                                             (0xfU 
                                              & __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx))
                                             ? vlSelfRef.core_tb__DOT__weights_to_load
                                            [(0x3fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c) 
                                                 + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r))]
                                            [(0xfU 
                                              & __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx)]
                                             : 0U) : 
                                        vlSelfRef.core_tb__DOT__activations_to_load
                                        [((0x63U >= 
                                           (0x7fU & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r))
                                           ? (0x7fU 
                                              & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r)
                                           : 0U)][(7U 
                                                   & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c)]) 
                                       << (0x1fU & 
                                           ((VL_SHIFTL_III(5,32,32, 
                                                           ((IData)(1U) 
                                                            + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c), 2U) 
                                             - (IData)(1U)) 
                                            - (IData)(3U))))));
            vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c 
                = ((IData)(1U) + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c);
        }
        vlSelfRef.core_tb__DOT__D_xmem = vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row;
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__addr 
            = (0x7ffU & ((0U == __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation)
                          ? (vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r 
                             + VL_SHIFTL_III(11,32,32, __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx, 3U))
                          : ((IData)(0x48U) + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r)));
        vlSelfRef.core_tb__DOT__sram_mem_addr = vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__addr;
        vlSelfRef.core_tb__DOT__activation_weight_mem_load = 1U;
        co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge core_tb.clk)", 
                                                             "../verilog/core_tb.sv", 
                                                             488);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r);
    }
    vlSelfRef.core_tb__DOT__D_xmem = 0U;
    vlSelfRef.core_tb__DOT__activation_weight_mem_load = 0U;
    vlSelfRef.core_tb__DOT__sram_mem_addr = 0U;
    VL_WRITEF_NX("INFO | %0t | Wrote 8 rows into activation SRAM via D_xmem\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    vlSelfRef.core_tb__DOT__i = 2U;
    __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx = 2U;
    __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation = 0U;
    vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c_max = 8U;
    vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r = 0U;
    vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r_max 
        = ((0U == __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation)
            ? 8U : 0x24U);
    while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r_max)) {
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row = 0U;
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c = 0U;
        while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c_max)) {
            vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row 
                = (((~ ((IData)(0xfU) << (0x1fU & (
                                                   (VL_SHIFTL_III(5,32,32, 
                                                                  ((IData)(1U) 
                                                                   + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c), 2U) 
                                                    - (IData)(1U)) 
                                                   - (IData)(3U))))) 
                    & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row) 
                   | (0xffffffffULL & (((0U == __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation)
                                         ? ((8U >= 
                                             (0xfU 
                                              & __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx))
                                             ? vlSelfRef.core_tb__DOT__weights_to_load
                                            [(0x3fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c) 
                                                 + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r))]
                                            [(0xfU 
                                              & __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx)]
                                             : 0U) : 
                                        vlSelfRef.core_tb__DOT__activations_to_load
                                        [((0x63U >= 
                                           (0x7fU & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r))
                                           ? (0x7fU 
                                              & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r)
                                           : 0U)][(7U 
                                                   & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c)]) 
                                       << (0x1fU & 
                                           ((VL_SHIFTL_III(5,32,32, 
                                                           ((IData)(1U) 
                                                            + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c), 2U) 
                                             - (IData)(1U)) 
                                            - (IData)(3U))))));
            vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c 
                = ((IData)(1U) + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c);
        }
        vlSelfRef.core_tb__DOT__D_xmem = vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row;
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__addr 
            = (0x7ffU & ((0U == __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation)
                          ? (vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r 
                             + VL_SHIFTL_III(11,32,32, __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx, 3U))
                          : ((IData)(0x48U) + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r)));
        vlSelfRef.core_tb__DOT__sram_mem_addr = vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__addr;
        vlSelfRef.core_tb__DOT__activation_weight_mem_load = 1U;
        co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge core_tb.clk)", 
                                                             "../verilog/core_tb.sv", 
                                                             488);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r);
    }
    vlSelfRef.core_tb__DOT__D_xmem = 0U;
    vlSelfRef.core_tb__DOT__activation_weight_mem_load = 0U;
    vlSelfRef.core_tb__DOT__sram_mem_addr = 0U;
    VL_WRITEF_NX("INFO | %0t | Wrote 8 rows into activation SRAM via D_xmem\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    vlSelfRef.core_tb__DOT__i = 3U;
    __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx = 3U;
    __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation = 0U;
    vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c_max = 8U;
    vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r = 0U;
    vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r_max 
        = ((0U == __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation)
            ? 8U : 0x24U);
    while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r_max)) {
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row = 0U;
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c = 0U;
        while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c_max)) {
            vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row 
                = (((~ ((IData)(0xfU) << (0x1fU & (
                                                   (VL_SHIFTL_III(5,32,32, 
                                                                  ((IData)(1U) 
                                                                   + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c), 2U) 
                                                    - (IData)(1U)) 
                                                   - (IData)(3U))))) 
                    & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row) 
                   | (0xffffffffULL & (((0U == __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation)
                                         ? ((8U >= 
                                             (0xfU 
                                              & __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx))
                                             ? vlSelfRef.core_tb__DOT__weights_to_load
                                            [(0x3fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c) 
                                                 + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r))]
                                            [(0xfU 
                                              & __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx)]
                                             : 0U) : 
                                        vlSelfRef.core_tb__DOT__activations_to_load
                                        [((0x63U >= 
                                           (0x7fU & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r))
                                           ? (0x7fU 
                                              & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r)
                                           : 0U)][(7U 
                                                   & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c)]) 
                                       << (0x1fU & 
                                           ((VL_SHIFTL_III(5,32,32, 
                                                           ((IData)(1U) 
                                                            + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c), 2U) 
                                             - (IData)(1U)) 
                                            - (IData)(3U))))));
            vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c 
                = ((IData)(1U) + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c);
        }
        vlSelfRef.core_tb__DOT__D_xmem = vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row;
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__addr 
            = (0x7ffU & ((0U == __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation)
                          ? (vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r 
                             + VL_SHIFTL_III(11,32,32, __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx, 3U))
                          : ((IData)(0x48U) + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r)));
        vlSelfRef.core_tb__DOT__sram_mem_addr = vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__addr;
        vlSelfRef.core_tb__DOT__activation_weight_mem_load = 1U;
        co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge core_tb.clk)", 
                                                             "../verilog/core_tb.sv", 
                                                             488);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r);
    }
    vlSelfRef.core_tb__DOT__D_xmem = 0U;
    vlSelfRef.core_tb__DOT__activation_weight_mem_load = 0U;
    vlSelfRef.core_tb__DOT__sram_mem_addr = 0U;
    VL_WRITEF_NX("INFO | %0t | Wrote 8 rows into activation SRAM via D_xmem\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    vlSelfRef.core_tb__DOT__i = 4U;
    __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx = 4U;
    __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation = 0U;
    vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c_max = 8U;
    vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r = 0U;
    vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r_max 
        = ((0U == __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation)
            ? 8U : 0x24U);
    while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r_max)) {
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row = 0U;
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c = 0U;
        while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c_max)) {
            vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row 
                = (((~ ((IData)(0xfU) << (0x1fU & (
                                                   (VL_SHIFTL_III(5,32,32, 
                                                                  ((IData)(1U) 
                                                                   + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c), 2U) 
                                                    - (IData)(1U)) 
                                                   - (IData)(3U))))) 
                    & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row) 
                   | (0xffffffffULL & (((0U == __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation)
                                         ? ((8U >= 
                                             (0xfU 
                                              & __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx))
                                             ? vlSelfRef.core_tb__DOT__weights_to_load
                                            [(0x3fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c) 
                                                 + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r))]
                                            [(0xfU 
                                              & __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx)]
                                             : 0U) : 
                                        vlSelfRef.core_tb__DOT__activations_to_load
                                        [((0x63U >= 
                                           (0x7fU & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r))
                                           ? (0x7fU 
                                              & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r)
                                           : 0U)][(7U 
                                                   & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c)]) 
                                       << (0x1fU & 
                                           ((VL_SHIFTL_III(5,32,32, 
                                                           ((IData)(1U) 
                                                            + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c), 2U) 
                                             - (IData)(1U)) 
                                            - (IData)(3U))))));
            vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c 
                = ((IData)(1U) + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c);
        }
        vlSelfRef.core_tb__DOT__D_xmem = vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row;
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__addr 
            = (0x7ffU & ((0U == __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation)
                          ? (vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r 
                             + VL_SHIFTL_III(11,32,32, __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx, 3U))
                          : ((IData)(0x48U) + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r)));
        vlSelfRef.core_tb__DOT__sram_mem_addr = vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__addr;
        vlSelfRef.core_tb__DOT__activation_weight_mem_load = 1U;
        co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge core_tb.clk)", 
                                                             "../verilog/core_tb.sv", 
                                                             488);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r);
    }
    vlSelfRef.core_tb__DOT__D_xmem = 0U;
    vlSelfRef.core_tb__DOT__activation_weight_mem_load = 0U;
    vlSelfRef.core_tb__DOT__sram_mem_addr = 0U;
    VL_WRITEF_NX("INFO | %0t | Wrote 8 rows into activation SRAM via D_xmem\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    vlSelfRef.core_tb__DOT__i = 5U;
    __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx = 5U;
    __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation = 0U;
    vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c_max = 8U;
    vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r = 0U;
    vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r_max 
        = ((0U == __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation)
            ? 8U : 0x24U);
    while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r_max)) {
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row = 0U;
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c = 0U;
        while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c_max)) {
            vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row 
                = (((~ ((IData)(0xfU) << (0x1fU & (
                                                   (VL_SHIFTL_III(5,32,32, 
                                                                  ((IData)(1U) 
                                                                   + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c), 2U) 
                                                    - (IData)(1U)) 
                                                   - (IData)(3U))))) 
                    & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row) 
                   | (0xffffffffULL & (((0U == __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation)
                                         ? ((8U >= 
                                             (0xfU 
                                              & __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx))
                                             ? vlSelfRef.core_tb__DOT__weights_to_load
                                            [(0x3fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c) 
                                                 + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r))]
                                            [(0xfU 
                                              & __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx)]
                                             : 0U) : 
                                        vlSelfRef.core_tb__DOT__activations_to_load
                                        [((0x63U >= 
                                           (0x7fU & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r))
                                           ? (0x7fU 
                                              & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r)
                                           : 0U)][(7U 
                                                   & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c)]) 
                                       << (0x1fU & 
                                           ((VL_SHIFTL_III(5,32,32, 
                                                           ((IData)(1U) 
                                                            + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c), 2U) 
                                             - (IData)(1U)) 
                                            - (IData)(3U))))));
            vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c 
                = ((IData)(1U) + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c);
        }
        vlSelfRef.core_tb__DOT__D_xmem = vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row;
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__addr 
            = (0x7ffU & ((0U == __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation)
                          ? (vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r 
                             + VL_SHIFTL_III(11,32,32, __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx, 3U))
                          : ((IData)(0x48U) + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r)));
        vlSelfRef.core_tb__DOT__sram_mem_addr = vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__addr;
        vlSelfRef.core_tb__DOT__activation_weight_mem_load = 1U;
        co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge core_tb.clk)", 
                                                             "../verilog/core_tb.sv", 
                                                             488);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r);
    }
    vlSelfRef.core_tb__DOT__D_xmem = 0U;
    vlSelfRef.core_tb__DOT__activation_weight_mem_load = 0U;
    vlSelfRef.core_tb__DOT__sram_mem_addr = 0U;
    VL_WRITEF_NX("INFO | %0t | Wrote 8 rows into activation SRAM via D_xmem\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    vlSelfRef.core_tb__DOT__i = 6U;
    __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx = 6U;
    __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation = 0U;
    vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c_max = 8U;
    vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r = 0U;
    vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r_max 
        = ((0U == __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation)
            ? 8U : 0x24U);
    while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r_max)) {
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row = 0U;
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c = 0U;
        while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c_max)) {
            vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row 
                = (((~ ((IData)(0xfU) << (0x1fU & (
                                                   (VL_SHIFTL_III(5,32,32, 
                                                                  ((IData)(1U) 
                                                                   + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c), 2U) 
                                                    - (IData)(1U)) 
                                                   - (IData)(3U))))) 
                    & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row) 
                   | (0xffffffffULL & (((0U == __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation)
                                         ? ((8U >= 
                                             (0xfU 
                                              & __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx))
                                             ? vlSelfRef.core_tb__DOT__weights_to_load
                                            [(0x3fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c) 
                                                 + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r))]
                                            [(0xfU 
                                              & __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx)]
                                             : 0U) : 
                                        vlSelfRef.core_tb__DOT__activations_to_load
                                        [((0x63U >= 
                                           (0x7fU & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r))
                                           ? (0x7fU 
                                              & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r)
                                           : 0U)][(7U 
                                                   & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c)]) 
                                       << (0x1fU & 
                                           ((VL_SHIFTL_III(5,32,32, 
                                                           ((IData)(1U) 
                                                            + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c), 2U) 
                                             - (IData)(1U)) 
                                            - (IData)(3U))))));
            vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c 
                = ((IData)(1U) + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c);
        }
        vlSelfRef.core_tb__DOT__D_xmem = vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row;
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__addr 
            = (0x7ffU & ((0U == __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation)
                          ? (vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r 
                             + VL_SHIFTL_III(11,32,32, __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx, 3U))
                          : ((IData)(0x48U) + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r)));
        vlSelfRef.core_tb__DOT__sram_mem_addr = vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__addr;
        vlSelfRef.core_tb__DOT__activation_weight_mem_load = 1U;
        co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge core_tb.clk)", 
                                                             "../verilog/core_tb.sv", 
                                                             488);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r);
    }
    vlSelfRef.core_tb__DOT__D_xmem = 0U;
    vlSelfRef.core_tb__DOT__activation_weight_mem_load = 0U;
    vlSelfRef.core_tb__DOT__sram_mem_addr = 0U;
    VL_WRITEF_NX("INFO | %0t | Wrote 8 rows into activation SRAM via D_xmem\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    vlSelfRef.core_tb__DOT__i = 7U;
    __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx = 7U;
    __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation = 0U;
    vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c_max = 8U;
    vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r = 0U;
    vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r_max 
        = ((0U == __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation)
            ? 8U : 0x24U);
    while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r_max)) {
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row = 0U;
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c = 0U;
        while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c_max)) {
            vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row 
                = (((~ ((IData)(0xfU) << (0x1fU & (
                                                   (VL_SHIFTL_III(5,32,32, 
                                                                  ((IData)(1U) 
                                                                   + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c), 2U) 
                                                    - (IData)(1U)) 
                                                   - (IData)(3U))))) 
                    & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row) 
                   | (0xffffffffULL & (((0U == __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation)
                                         ? ((8U >= 
                                             (0xfU 
                                              & __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx))
                                             ? vlSelfRef.core_tb__DOT__weights_to_load
                                            [(0x3fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c) 
                                                 + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r))]
                                            [(0xfU 
                                              & __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx)]
                                             : 0U) : 
                                        vlSelfRef.core_tb__DOT__activations_to_load
                                        [((0x63U >= 
                                           (0x7fU & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r))
                                           ? (0x7fU 
                                              & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r)
                                           : 0U)][(7U 
                                                   & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c)]) 
                                       << (0x1fU & 
                                           ((VL_SHIFTL_III(5,32,32, 
                                                           ((IData)(1U) 
                                                            + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c), 2U) 
                                             - (IData)(1U)) 
                                            - (IData)(3U))))));
            vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c 
                = ((IData)(1U) + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c);
        }
        vlSelfRef.core_tb__DOT__D_xmem = vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row;
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__addr 
            = (0x7ffU & ((0U == __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation)
                          ? (vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r 
                             + VL_SHIFTL_III(11,32,32, __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx, 3U))
                          : ((IData)(0x48U) + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r)));
        vlSelfRef.core_tb__DOT__sram_mem_addr = vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__addr;
        vlSelfRef.core_tb__DOT__activation_weight_mem_load = 1U;
        co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge core_tb.clk)", 
                                                             "../verilog/core_tb.sv", 
                                                             488);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r);
    }
    vlSelfRef.core_tb__DOT__D_xmem = 0U;
    vlSelfRef.core_tb__DOT__activation_weight_mem_load = 0U;
    vlSelfRef.core_tb__DOT__sram_mem_addr = 0U;
    VL_WRITEF_NX("INFO | %0t | Wrote 8 rows into activation SRAM via D_xmem\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    vlSelfRef.core_tb__DOT__i = 8U;
    __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx = 8U;
    __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation = 0U;
    vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r_max 
        = ((0U == __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation)
            ? 8U : 0x24U);
    vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c_max = 8U;
    vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r = 0U;
    while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r_max)) {
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row = 0U;
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c = 0U;
        while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c_max)) {
            vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row 
                = (((~ ((IData)(0xfU) << (0x1fU & (
                                                   (VL_SHIFTL_III(5,32,32, 
                                                                  ((IData)(1U) 
                                                                   + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c), 2U) 
                                                    - (IData)(1U)) 
                                                   - (IData)(3U))))) 
                    & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row) 
                   | (0xffffffffULL & (((0U == __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation)
                                         ? ((8U >= 
                                             (0xfU 
                                              & __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx))
                                             ? vlSelfRef.core_tb__DOT__weights_to_load
                                            [(0x3fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c) 
                                                 + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r))]
                                            [(0xfU 
                                              & __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx)]
                                             : 0U) : 
                                        vlSelfRef.core_tb__DOT__activations_to_load
                                        [((0x63U >= 
                                           (0x7fU & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r))
                                           ? (0x7fU 
                                              & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r)
                                           : 0U)][(7U 
                                                   & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c)]) 
                                       << (0x1fU & 
                                           ((VL_SHIFTL_III(5,32,32, 
                                                           ((IData)(1U) 
                                                            + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c), 2U) 
                                             - (IData)(1U)) 
                                            - (IData)(3U))))));
            vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c 
                = ((IData)(1U) + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c);
        }
        vlSelfRef.core_tb__DOT__D_xmem = vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row;
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__addr 
            = (0x7ffU & ((0U == __Vtask_core_tb__DOT__write_activation_sram__5__weight_or_activation)
                          ? (vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r 
                             + VL_SHIFTL_III(11,32,32, __Vtask_core_tb__DOT__write_activation_sram__5__kij_idx, 3U))
                          : ((IData)(0x48U) + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r)));
        vlSelfRef.core_tb__DOT__sram_mem_addr = vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__addr;
        vlSelfRef.core_tb__DOT__activation_weight_mem_load = 1U;
        co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge core_tb.clk)", 
                                                             "../verilog/core_tb.sv", 
                                                             488);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r);
    }
    vlSelfRef.core_tb__DOT__D_xmem = 0U;
    vlSelfRef.core_tb__DOT__activation_weight_mem_load = 0U;
    vlSelfRef.core_tb__DOT__sram_mem_addr = 0U;
    VL_WRITEF_NX("INFO | %0t | Wrote 8 rows into activation SRAM via D_xmem\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9);
    vlSelfRef.core_tb__DOT__i = 9U;
    __Vtask_core_tb__DOT__write_activation_sram__6__kij_idx = 0U;
    __Vtask_core_tb__DOT__write_activation_sram__6__weight_or_activation = 1U;
    vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r_max 
        = ((0U == __Vtask_core_tb__DOT__write_activation_sram__6__weight_or_activation)
            ? 8U : 0x24U);
    vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c_max = 8U;
    vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r = 0U;
    while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r_max)) {
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row = 0U;
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c = 0U;
        while (VL_LTS_III(32, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c, vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c_max)) {
            vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row 
                = (((~ ((IData)(0xfU) << (0x1fU & (
                                                   (VL_SHIFTL_III(5,32,32, 
                                                                  ((IData)(1U) 
                                                                   + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c), 2U) 
                                                    - (IData)(1U)) 
                                                   - (IData)(3U))))) 
                    & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row) 
                   | (0xffffffffULL & (((0U == __Vtask_core_tb__DOT__write_activation_sram__6__weight_or_activation)
                                         ? ((8U >= 
                                             (0xfU 
                                              & __Vtask_core_tb__DOT__write_activation_sram__6__kij_idx))
                                             ? vlSelfRef.core_tb__DOT__weights_to_load
                                            [(0x3fU 
                                              & (VL_MULS_III(32, (IData)(8U), vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c) 
                                                 + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r))]
                                            [(0xfU 
                                              & __Vtask_core_tb__DOT__write_activation_sram__6__kij_idx)]
                                             : 0U) : 
                                        vlSelfRef.core_tb__DOT__activations_to_load
                                        [((0x63U >= 
                                           (0x7fU & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r))
                                           ? (0x7fU 
                                              & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r)
                                           : 0U)][(7U 
                                                   & vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c)]) 
                                       << (0x1fU & 
                                           ((VL_SHIFTL_III(5,32,32, 
                                                           ((IData)(1U) 
                                                            + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c), 2U) 
                                             - (IData)(1U)) 
                                            - (IData)(3U))))));
            vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c 
                = ((IData)(1U) + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__c);
        }
        vlSelfRef.core_tb__DOT__D_xmem = vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__packed_row;
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__addr 
            = (0x7ffU & ((0U == __Vtask_core_tb__DOT__write_activation_sram__6__weight_or_activation)
                          ? (vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r 
                             + VL_SHIFTL_III(11,32,32, __Vtask_core_tb__DOT__write_activation_sram__6__kij_idx, 3U))
                          : ((IData)(0x48U) + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r)));
        vlSelfRef.core_tb__DOT__sram_mem_addr = vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__addr;
        vlSelfRef.core_tb__DOT__activation_weight_mem_load = 1U;
        co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge core_tb.clk)", 
                                                             "../verilog/core_tb.sv", 
                                                             488);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__write_activation_sram__Vstatic__r);
    }
    vlSelfRef.core_tb__DOT__D_xmem = 0U;
    vlSelfRef.core_tb__DOT__activation_weight_mem_load = 0U;
    vlSelfRef.core_tb__DOT__sram_mem_addr = 0U;
    VL_WRITEF_NX("INFO | %0t | Wrote 8 rows into activation SRAM via D_xmem\nINFO | %0t | Pulsing start_controller to start full controller\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,64,VL_TIME_UNITED_Q(1000),
                 -9);
    vlSelfRef.core_tb__DOT__start_controller = 1U;
    co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge core_tb.clk)", 
                                                         "../verilog/core_tb.sv", 
                                                         502);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge core_tb.clk)", 
                                                         "../verilog/core_tb.sv", 
                                                         503);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.core_tb__DOT__start_controller = 0U;
    co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge core_tb.clk)", 
                                                         "../verilog/core_tb.sv", 
                                                         505);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge core_tb.clk)", 
                                                         "../verilog/core_tb.sv", 
                                                         618);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    while (vlSelfRef.core_tb__DOT__dut__DOT__wsc_controller_active) {
        co_await vlSelfRef.__VtrigSched_had1b8eb2__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( (~ core_tb.dut.wsc_controller_active))", 
                                                             "../verilog/core_tb.sv", 
                                                             620);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge core_tb.clk)", 
                                                         "../verilog/core_tb.sv", 
                                                         622);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge core_tb.clk)", 
                                                         "../verilog/core_tb.sv", 
                                                         622);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.core_tb__DOT__psum_memory_rd_enable = 1U;
    vlSelfRef.core_tb__DOT__sram_mem_addr = 0U;
    co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge core_tb.clk)", 
                                                         "../verilog/core_tb.sv", 
                                                         332);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0U]
        [0U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=0 col=0: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=0 col=0: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0U]
        [1U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=0 col=1: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=0 col=1: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 2U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0U]
        [2U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=0 col=2: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=0 col=2: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 3U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0U]
        [3U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=0 col=3: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=0 col=3: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 4U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0U]
        [4U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=0 col=4: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=0 col=4: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 5U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0U]
        [5U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=0 col=5: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=0 col=5: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 6U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0U]
        [6U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=0 col=6: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=0 col=6: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 7U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0U]
        [7U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=0 col=7: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=0 col=7: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 8U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__p_idx = 1U;
    vlSelfRef.core_tb__DOT__sram_mem_addr = 1U;
    co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge core_tb.clk)", 
                                                         "../verilog/core_tb.sv", 
                                                         332);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[1U]
        [0U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=1 col=0: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=1 col=0: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[1U]
        [1U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=1 col=1: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=1 col=1: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 2U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[1U]
        [2U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=1 col=2: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=1 col=2: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 3U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[1U]
        [3U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=1 col=3: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=1 col=3: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 4U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[1U]
        [4U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=1 col=4: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=1 col=4: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 5U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[1U]
        [5U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=1 col=5: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=1 col=5: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 6U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[1U]
        [6U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=1 col=6: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=1 col=6: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 7U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[1U]
        [7U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=1 col=7: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=1 col=7: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 8U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__p_idx = 2U;
    vlSelfRef.core_tb__DOT__sram_mem_addr = 2U;
    co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge core_tb.clk)", 
                                                         "../verilog/core_tb.sv", 
                                                         332);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[2U]
        [0U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=2 col=0: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=2 col=0: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[2U]
        [1U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=2 col=1: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=2 col=1: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 2U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[2U]
        [2U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=2 col=2: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=2 col=2: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 3U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[2U]
        [3U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=2 col=3: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=2 col=3: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 4U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[2U]
        [4U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=2 col=4: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=2 col=4: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 5U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[2U]
        [5U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=2 col=5: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=2 col=5: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 6U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[2U]
        [6U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=2 col=6: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=2 col=6: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 7U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[2U]
        [7U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=2 col=7: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=2 col=7: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 8U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__p_idx = 3U;
    vlSelfRef.core_tb__DOT__sram_mem_addr = 3U;
    co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge core_tb.clk)", 
                                                         "../verilog/core_tb.sv", 
                                                         332);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[3U]
        [0U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=3 col=0: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=3 col=0: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[3U]
        [1U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=3 col=1: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=3 col=1: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 2U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[3U]
        [2U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=3 col=2: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=3 col=2: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 3U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[3U]
        [3U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=3 col=3: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=3 col=3: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 4U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[3U]
        [4U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=3 col=4: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=3 col=4: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 5U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[3U]
        [5U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=3 col=5: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=3 col=5: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 6U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[3U]
        [6U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=3 col=6: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=3 col=6: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 7U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[3U]
        [7U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=3 col=7: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=3 col=7: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 8U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__p_idx = 4U;
    vlSelfRef.core_tb__DOT__sram_mem_addr = 4U;
    co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge core_tb.clk)", 
                                                         "../verilog/core_tb.sv", 
                                                         332);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[4U]
        [0U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=4 col=0: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=4 col=0: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[4U]
        [1U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=4 col=1: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=4 col=1: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 2U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[4U]
        [2U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=4 col=2: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=4 col=2: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 3U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[4U]
        [3U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=4 col=3: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=4 col=3: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 4U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[4U]
        [4U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=4 col=4: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=4 col=4: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 5U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[4U]
        [5U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=4 col=5: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=4 col=5: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 6U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[4U]
        [6U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=4 col=6: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=4 col=6: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 7U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[4U]
        [7U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=4 col=7: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=4 col=7: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 8U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__p_idx = 5U;
    vlSelfRef.core_tb__DOT__sram_mem_addr = 5U;
    co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge core_tb.clk)", 
                                                         "../verilog/core_tb.sv", 
                                                         332);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[5U]
        [0U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=5 col=0: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=5 col=0: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[5U]
        [1U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=5 col=1: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=5 col=1: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 2U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[5U]
        [2U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=5 col=2: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=5 col=2: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 3U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[5U]
        [3U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=5 col=3: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=5 col=3: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 4U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[5U]
        [4U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=5 col=4: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=5 col=4: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 5U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[5U]
        [5U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=5 col=5: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=5 col=5: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 6U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[5U]
        [6U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=5 col=6: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=5 col=6: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 7U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[5U]
        [7U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=5 col=7: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=5 col=7: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 8U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__p_idx = 6U;
    vlSelfRef.core_tb__DOT__sram_mem_addr = 6U;
    co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge core_tb.clk)", 
                                                         "../verilog/core_tb.sv", 
                                                         332);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[6U]
        [0U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=6 col=0: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=6 col=0: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[6U]
        [1U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=6 col=1: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=6 col=1: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 2U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[6U]
        [2U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=6 col=2: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=6 col=2: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 3U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[6U]
        [3U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=6 col=3: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=6 col=3: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 4U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[6U]
        [4U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=6 col=4: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=6 col=4: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 5U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[6U]
        [5U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=6 col=5: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=6 col=5: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 6U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[6U]
        [6U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=6 col=6: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=6 col=6: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 7U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[6U]
        [7U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=6 col=7: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=6 col=7: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 8U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__p_idx = 7U;
    vlSelfRef.core_tb__DOT__sram_mem_addr = 7U;
    co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge core_tb.clk)", 
                                                         "../verilog/core_tb.sv", 
                                                         332);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[7U]
        [0U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=7 col=0: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=7 col=0: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[7U]
        [1U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=7 col=1: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=7 col=1: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 2U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[7U]
        [2U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=7 col=2: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=7 col=2: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 3U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[7U]
        [3U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=7 col=3: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=7 col=3: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 4U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[7U]
        [4U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=7 col=4: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=7 col=4: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 5U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[7U]
        [5U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=7 col=5: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=7 col=5: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 6U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[7U]
        [6U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=7 col=6: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=7 col=6: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 7U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[7U]
        [7U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=7 col=7: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=7 col=7: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 8U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__p_idx = 8U;
    vlSelfRef.core_tb__DOT__sram_mem_addr = 8U;
    co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge core_tb.clk)", 
                                                         "../verilog/core_tb.sv", 
                                                         332);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[8U]
        [0U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=8 col=0: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=8 col=0: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[8U]
        [1U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=8 col=1: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=8 col=1: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 2U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[8U]
        [2U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=8 col=2: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=8 col=2: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 3U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[8U]
        [3U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=8 col=3: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=8 col=3: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 4U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[8U]
        [4U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=8 col=4: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=8 col=4: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 5U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}
