// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_tb.h for the primary calling header

#include "Vcore_tb__pch.h"
#include "Vcore_tb___024root.h"

VlCoroutine Vcore_tb___024root___eval_initial__TOP__Vtiming__0(Vcore_tb___024root* vlSelf);
VlCoroutine Vcore_tb___024root___eval_initial__TOP__Vtiming__1(Vcore_tb___024root* vlSelf);

void Vcore_tb___024root___eval_initial(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___eval_initial\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcore_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vcore_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__core_tb__DOT__clk__0 
        = vlSelfRef.core_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__core_tb__DOT__dut__DOT__weights_sram_clk__0 
        = vlSelfRef.core_tb__DOT__dut__DOT__weights_sram_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__core_tb__DOT__dut__DOT__l0_clk__0 
        = vlSelfRef.core_tb__DOT__dut__DOT__l0_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__core_tb__DOT__dut__DOT__mac_array_clk__0 
        = vlSelfRef.core_tb__DOT__dut__DOT__mac_array_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__core_tb__DOT__dut__DOT__sfu_clk__0 
        = vlSelfRef.core_tb__DOT__dut__DOT__sfu_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__core_tb__DOT__dut__DOT__ofifo_clk__0 
        = vlSelfRef.core_tb__DOT__dut__DOT__ofifo_clk;
    vlSelfRef.__Vtrigprevexpr___TOP__core_tb__DOT__dut__DOT__psum_sram_clk__0 
        = vlSelfRef.core_tb__DOT__dut__DOT__psum_sram_clk;
    vlSelfRef.__Vtrigprevexpr_h392c4882__0 = (1U & 
                                              (~ (IData)(vlSelfRef.core_tb__DOT__dut__DOT__wsc_controller_active)));
}

VL_INLINE_OPT VlCoroutine Vcore_tb___024root___eval_initial__TOP__Vtiming__0(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.core_tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "../verilog/core_tb.sv", 
                                             74);
        vlSelfRef.core_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.core_tb__DOT__clk)));
    }
}

VlCoroutine Vcore_tb___024root___eval_initial__TOP__Vtiming__1__0(Vcore_tb___024root* vlSelf);
VlCoroutine Vcore_tb___024root___eval_initial__TOP__Vtiming__1__1(Vcore_tb___024root* vlSelf);

VL_INLINE_OPT VlCoroutine Vcore_tb___024root___eval_initial__TOP__Vtiming__1(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await Vcore_tb___024root___eval_initial__TOP__Vtiming__1__0(vlSelf);
    co_await Vcore_tb___024root___eval_initial__TOP__Vtiming__1__1(vlSelf);
}

VlCoroutine Vcore_tb___024root___eval_initial__TOP__Vtiming__1__1(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___eval_initial__TOP__Vtiming__1__1\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[8U]
        [5U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=8 col=5: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=8 col=5: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 6U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[8U]
        [6U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=8 col=6: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=8 col=6: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 7U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[8U]
        [7U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=8 col=7: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=8 col=7: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 8U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__p_idx = 9U;
    vlSelfRef.core_tb__DOT__sram_mem_addr = 9U;
    co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge core_tb.clk)", 
                                                         "../verilog/core_tb.sv", 
                                                         332);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[9U]
        [0U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=9 col=0: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=9 col=0: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[9U]
        [1U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=9 col=1: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=9 col=1: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 2U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[9U]
        [2U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=9 col=2: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=9 col=2: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 3U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[9U]
        [3U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=9 col=3: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=9 col=3: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 4U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[9U]
        [4U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=9 col=4: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=9 col=4: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 5U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[9U]
        [5U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=9 col=5: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=9 col=5: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 6U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[9U]
        [6U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=9 col=6: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=9 col=6: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 7U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[9U]
        [7U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=9 col=7: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=9 col=7: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 8U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__p_idx = 0xaU;
    vlSelfRef.core_tb__DOT__sram_mem_addr = 0xaU;
    co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge core_tb.clk)", 
                                                         "../verilog/core_tb.sv", 
                                                         332);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xaU]
        [0U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=10 col=0: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=10 col=0: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xaU]
        [1U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=10 col=1: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=10 col=1: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 2U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xaU]
        [2U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=10 col=2: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=10 col=2: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 3U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xaU]
        [3U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=10 col=3: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=10 col=3: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 4U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xaU]
        [4U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=10 col=4: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=10 col=4: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 5U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xaU]
        [5U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=10 col=5: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=10 col=5: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 6U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xaU]
        [6U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=10 col=6: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=10 col=6: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 7U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xaU]
        [7U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=10 col=7: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=10 col=7: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 8U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__p_idx = 0xbU;
    vlSelfRef.core_tb__DOT__sram_mem_addr = 0xbU;
    co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge core_tb.clk)", 
                                                         "../verilog/core_tb.sv", 
                                                         332);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xbU]
        [0U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=11 col=0: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=11 col=0: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xbU]
        [1U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=11 col=1: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=11 col=1: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 2U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xbU]
        [2U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=11 col=2: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=11 col=2: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 3U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xbU]
        [3U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=11 col=3: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=11 col=3: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 4U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xbU]
        [4U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=11 col=4: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=11 col=4: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 5U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xbU]
        [5U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=11 col=5: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=11 col=5: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 6U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xbU]
        [6U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=11 col=6: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=11 col=6: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 7U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xbU]
        [7U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=11 col=7: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=11 col=7: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 8U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__p_idx = 0xcU;
    vlSelfRef.core_tb__DOT__sram_mem_addr = 0xcU;
    co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge core_tb.clk)", 
                                                         "../verilog/core_tb.sv", 
                                                         332);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xcU]
        [0U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=12 col=0: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=12 col=0: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xcU]
        [1U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=12 col=1: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=12 col=1: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 2U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xcU]
        [2U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=12 col=2: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=12 col=2: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 3U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xcU]
        [3U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=12 col=3: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=12 col=3: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 4U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xcU]
        [4U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=12 col=4: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=12 col=4: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 5U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xcU]
        [5U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=12 col=5: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=12 col=5: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 6U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xcU]
        [6U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=12 col=6: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=12 col=6: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 7U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xcU]
        [7U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=12 col=7: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=12 col=7: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 8U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__p_idx = 0xdU;
    vlSelfRef.core_tb__DOT__sram_mem_addr = 0xdU;
    co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge core_tb.clk)", 
                                                         "../verilog/core_tb.sv", 
                                                         332);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xdU]
        [0U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=13 col=0: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=13 col=0: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xdU]
        [1U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=13 col=1: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=13 col=1: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 2U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xdU]
        [2U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=13 col=2: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=13 col=2: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 3U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xdU]
        [3U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=13 col=3: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=13 col=3: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 4U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xdU]
        [4U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=13 col=4: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=13 col=4: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 5U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xdU]
        [5U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=13 col=5: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=13 col=5: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 6U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xdU]
        [6U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=13 col=6: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=13 col=6: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 7U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xdU]
        [7U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=13 col=7: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=13 col=7: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 8U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__p_idx = 0xeU;
    vlSelfRef.core_tb__DOT__sram_mem_addr = 0xeU;
    co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge core_tb.clk)", 
                                                         "../verilog/core_tb.sv", 
                                                         332);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xeU]
        [0U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=14 col=0: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=14 col=0: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xeU]
        [1U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=14 col=1: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=14 col=1: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 2U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xeU]
        [2U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=14 col=2: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=14 col=2: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 3U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xeU]
        [3U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=14 col=3: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=14 col=3: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 4U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xeU]
        [4U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=14 col=4: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=14 col=4: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 5U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xeU]
        [5U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=14 col=5: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=14 col=5: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 6U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xeU]
        [6U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=14 col=6: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=14 col=6: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 7U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xeU]
        [7U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=14 col=7: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=14 col=7: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 8U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__p_idx = 0xfU;
    vlSelfRef.core_tb__DOT__sram_mem_addr = 0xfU;
    co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge core_tb.clk)", 
                                                         "../verilog/core_tb.sv", 
                                                         332);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xfU]
        [0U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=15 col=0: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=15 col=0: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 1U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xfU]
        [1U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=15 col=1: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=15 col=1: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 2U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xfU]
        [2U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=15 col=2: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=15 col=2: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 3U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xfU]
        [3U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=15 col=3: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=15 col=3: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 4U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xfU]
        [4U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=15 col=4: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=15 col=4: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 5U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xfU]
        [5U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=15 col=5: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=15 col=5: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 6U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U]);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xfU]
        [6U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=15 col=6: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=15 col=6: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 7U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual 
        = (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U] 
           >> 0x10U);
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected 
        = vlSelfRef.core_tb__DOT__expected_outputs[0xfU]
        [7U];
    if (((IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual) 
         != (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected))) {
        VL_WRITEF_NX("ERROR | %0t | Output computation not matching for idx=15 col=7: actual=0x%0x expected=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual),
                     16,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__expected);
        vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors 
            = ((IData)(1U) + vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    } else {
        VL_WRITEF_NX("INFO  | %0t | Output computation matching for idx=15 col=7: actual=0x%0x\n",0,
                     64,VL_TIME_UNITED_Q(1000),-9,16,
                     (IData)(vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__actual));
    }
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__col_idx = 8U;
    vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__p_idx = 0x10U;
    VL_WRITEF_NX("INFO  | %0t | Number of output computation errors = %0d out of a total of 128\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,32,vlSelfRef.core_tb__DOT__check_expected_outputs__Vstatic__num_errors);
    vlSelfRef.core_tb__DOT__psum_memory_rd_enable = 0U;
    co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge core_tb.clk)", 
                                                         "../verilog/core_tb.sv", 
                                                         629);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_await vlSelfRef.__VtrigSched_hf5e4f9bb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge core_tb.clk)", 
                                                         "../verilog/core_tb.sv", 
                                                         629);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("Testbench finished at %0t\n",0,64,
                 VL_TIME_UNITED_Q(1000),-9);
    VL_FINISH_MT("../verilog/core_tb.sv", 632, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

void Vcore_tb___024root___act_comb__TOP__0(Vcore_tb___024root* vlSelf);
void Vcore_tb___024root___act_comb__TOP__1(Vcore_tb___024root* vlSelf);

void Vcore_tb___024root___eval_act(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___eval_act\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x101ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcore_tb___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
    if ((0x181ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcore_tb___024root___act_comb__TOP__1(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

extern const VlUnpacked<CData/*1:0*/, 16> Vcore_tb__ConstPool__TABLE_h8a30ad03_0;

VL_INLINE_OPT void Vcore_tb___024root___act_comb__TOP__0(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___act_comb__TOP__0\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT____VdfgRegularize_h70b67afe_0_5;
    core_tb__DOT__dut__DOT__u_wsc_inst__DOT____VdfgRegularize_h70b67afe_0_5 = 0;
    CData/*0:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT____VdfgRegularize_h70b67afe_0_6;
    core_tb__DOT__dut__DOT__u_wsc_inst__DOT____VdfgRegularize_h70b67afe_0_6 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__reset 
        = ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__wsc_mac_reset) 
           | (IData)(vlSelfRef.core_tb__DOT__reset));
    vlSelfRef.core_tb__DOT__dut__DOT____Vcellinp__u_activation_sram__CEN 
        = (1U & (~ ((IData)(vlSelfRef.core_tb__DOT__activation_weight_mem_load) 
                    | (IData)(vlSelfRef.core_tb__DOT__dut__DOT__wsc_l0_wr))));
    if (vlSelfRef.core_tb__DOT__reset) {
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_gp_counter = 0U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_kij_counter = 0U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_prev_state = 0U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state = 0U;
    } else {
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_gp_counter 
            = (0x7ffU & ((1U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))
                          ? ((7U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter))
                              ? 0U : ((IData)(1U) + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)))
                          : ((3U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))
                              ? ((0x23U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter))
                                  ? 0U : ((IData)(1U) 
                                          + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)))
                              : ((2U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))
                                  ? ((0xfU == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter))
                                      ? 0U : ((IData)(1U) 
                                              + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)))
                                  : ((4U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))
                                      ? ((0x36U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter))
                                          ? 0U : ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)))
                                      : 0U)))));
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_kij_counter 
            = (((5U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state)) 
                & (9U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kij_counter)))
                ? 0U : (0xffU & (((4U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state)) 
                                  & (0U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)))
                                  ? ((IData)(1U) + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kij_counter))
                                  : (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kij_counter))));
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_prev_state 
            = vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__prev_state;
        if ((4U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))) {
                    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_prev_state = 0U;
                    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state = 0U;
                } else {
                    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state 
                        = ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__corelet_sfu_active)
                            ? 6U : 0U);
                }
            } else {
                if ((1U & (~ (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state)))) {
                    if (((IData)(vlSelfRef.core_tb__DOT__debug_mode) 
                         & (0x36U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)))) {
                        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_prev_state = 4U;
                    }
                }
                vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state 
                    = ((1U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))
                        ? 6U : (((IData)(vlSelfRef.core_tb__DOT__debug_mode) 
                                 & (0x36U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)))
                                 ? 0U : (((0x36U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)) 
                                          & (9U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kij_counter)))
                                          ? 5U : ((
                                                   (0x36U 
                                                    == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)) 
                                                   & (9U 
                                                      != (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kij_counter)))
                                                   ? 1U
                                                   : 4U))));
            }
        } else if ((2U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))) {
                if (((IData)(vlSelfRef.core_tb__DOT__debug_mode) 
                     & (0x23U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)))) {
                    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_prev_state = 3U;
                    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state = 0U;
                } else {
                    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state 
                        = ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__act_load_from_mem_done)
                            ? 2U : 3U);
                }
            } else if (((IData)(vlSelfRef.core_tb__DOT__debug_mode) 
                        & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kernel_load_to_mac_done))) {
                vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_prev_state = 2U;
                vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state = 0U;
            } else {
                vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state 
                    = ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kernel_load_to_mac_done)
                        ? 4U : 2U);
            }
        } else if ((1U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))) {
            if (((IData)(vlSelfRef.core_tb__DOT__debug_mode) 
                 & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kernel_load_from_mem_done))) {
                vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_prev_state = 1U;
                vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state = 0U;
            } else {
                vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state 
                    = (((0U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kij_counter)) 
                        & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kernel_load_from_mem_done))
                        ? 3U : ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kernel_load_from_mem_done)
                                 ? 2U : 1U));
            }
        } else {
            vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state 
                = ((IData)(vlSelfRef.core_tb__DOT__debug_mode)
                    ? (((0U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__prev_state)) 
                        & (IData)(vlSelfRef.core_tb__DOT__start_controller))
                        ? 1U : (((1U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__prev_state)) 
                                 & (IData)(vlSelfRef.core_tb__DOT__start_controller))
                                 ? 2U : (((2U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__prev_state)) 
                                          & (IData)(vlSelfRef.core_tb__DOT__start_controller))
                                          ? 3U : ((
                                                   (3U 
                                                    == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__prev_state)) 
                                                   & (IData)(vlSelfRef.core_tb__DOT__start_controller))
                                                   ? 4U
                                                   : 
                                                  (((4U 
                                                     == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__prev_state)) 
                                                    & (IData)(vlSelfRef.core_tb__DOT__start_controller))
                                                    ? 6U
                                                    : 0U)))))
                    : ((IData)(vlSelfRef.core_tb__DOT__start_controller)
                        ? 1U : 0U));
        }
    }
    __Vtableidx4 = (((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state) 
                     << 1U) | (IData)(vlSelfRef.core_tb__DOT__reset));
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_sfu_op 
        = Vcore_tb__ConstPool__TABLE_h8a30ad03_0[__Vtableidx4];
    if (vlSelfRef.core_tb__DOT__dut__DOT__wsc_controller_active) {
        vlSelfRef.core_tb__DOT__dut__DOT__A_xmem = 
            (0x7ffU & ((1U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))
                        ? ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter) 
                           + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__last_weight_load_addr))
                        : ((3U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))
                            ? ((IData)(0x48U) + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter))
                            : 0U)));
        vlSelfRef.core_tb__DOT__dut__DOT__A_pmem = 
            (0x7ffU & ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__corelet_sfu_active_to_mem)
                        ? (IData)(vlSelfRef.core_tb__DOT__dut__DOT__corelet_psum_mem_addr)
                        : ((4U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))
                            ? ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__last_psum_address) 
                               + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__start_psum_gp_counter))
                            : 0U)));
    } else {
        vlSelfRef.core_tb__DOT__dut__DOT__A_xmem = 
            (0x7ffU & (IData)(vlSelfRef.core_tb__DOT__sram_mem_addr));
        vlSelfRef.core_tb__DOT__dut__DOT__A_pmem = 
            (0x7ffU & (IData)(vlSelfRef.core_tb__DOT__sram_mem_addr));
    }
    vlSelfRef.core_tb__DOT__dut__DOT__CEN_pmem = (1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__corelet_sfu_active_to_mem)
                                                       ? 
                                                      ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__corelet_psum_mem_rd) 
                                                       | (IData)(vlSelfRef.core_tb__DOT__dut__DOT__corelet_psum_mem_wr))
                                                       : 
                                                      ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__ofifo_rd_q) 
                                                       | (IData)(vlSelfRef.core_tb__DOT__psum_memory_rd_enable)))));
    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_l0_wr 
        = ((1U & (~ (IData)(vlSelfRef.core_tb__DOT__reset))) 
           && ((1U & (~ ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state) 
                         >> 2U))) && (1U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state))));
    vlSelfRef.core_tb__DOT__dut__DOT__wsc_ld_mode = 
        (1U & (~ ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__wsc_execute) 
                  | (4U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state)))));
    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_l0_rd 
        = ((1U & (~ (IData)(vlSelfRef.core_tb__DOT__reset))) 
           && ((4U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state))
                ? ((1U & (~ ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state) 
                             >> 1U))) && ((1U & (~ (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state))) 
                                          && (0x23U 
                                              > (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter))))
                : ((1U & ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state) 
                          >> 1U)) && ((1U & (~ (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state))) 
                                      && (((7U > (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)) 
                                           | (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__act_load_from_mem_done)) 
                                          | (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kernel_load_from_mem_done))))));
    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__weights_sram_clk_en_pre 
        = ((IData)(vlSelfRef.core_tb__DOT__debug_mode) 
           | ((1U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state)) 
              | ((0U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state)) 
                 | (3U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state)))));
    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__mac_array_clk_en_pre 
        = ((IData)(vlSelfRef.core_tb__DOT__debug_mode) 
           | ((4U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state)) 
              | ((2U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state)) 
                 | ((0U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state)) 
                    | ((1U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state)) 
                       & (2U > (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)))))));
    core_tb__DOT__dut__DOT__u_wsc_inst__DOT____VdfgRegularize_h70b67afe_0_5 
        = ((5U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state)) 
           | (6U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state)));
    vlSelfRef.core_tb__DOT__dut__DOT__weights_sram_clk_en 
        = ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__weights_sram_clk_en_pre) 
           | ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__0__KET____DOT__sync_inst__DOT__sync_r) 
              >> 1U));
    vlSelfRef.core_tb__DOT__dut__DOT__mac_array_clk_en 
        = ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__mac_array_clk_en_pre) 
           | ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__2__KET____DOT__sync_inst__DOT__sync_r) 
              >> 1U));
    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__sfu_clk_en_pre 
        = ((IData)(vlSelfRef.core_tb__DOT__debug_mode) 
           | (IData)(core_tb__DOT__dut__DOT__u_wsc_inst__DOT____VdfgRegularize_h70b67afe_0_5));
    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__l0_clk_en_pre 
        = (1U & ((~ ((0U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state)) 
                     | (IData)(core_tb__DOT__dut__DOT__u_wsc_inst__DOT____VdfgRegularize_h70b67afe_0_5))) 
                 | (IData)(vlSelfRef.core_tb__DOT__debug_mode)));
    core_tb__DOT__dut__DOT__u_wsc_inst__DOT____VdfgRegularize_h70b67afe_0_6 
        = ((4U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state)) 
           | (IData)(core_tb__DOT__dut__DOT__u_wsc_inst__DOT____VdfgRegularize_h70b67afe_0_5));
    vlSelfRef.core_tb__DOT__dut__DOT__sfu_clk_en = 
        ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__sfu_clk_en_pre) 
         | ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__4__KET____DOT__sync_inst__DOT__sync_r) 
            >> 1U));
    vlSelfRef.core_tb__DOT__dut__DOT__l0_clk_en = ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__l0_clk_en_pre) 
                                                   | ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__3__KET____DOT__sync_inst__DOT__sync_r) 
                                                      >> 1U));
    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__ofifo_clk_en_pre 
        = ((IData)(vlSelfRef.core_tb__DOT__debug_mode) 
           | (IData)(core_tb__DOT__dut__DOT__u_wsc_inst__DOT____VdfgRegularize_h70b67afe_0_6));
    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__psum_sram_clk_en_pre 
        = ((IData)(vlSelfRef.core_tb__DOT__debug_mode) 
           | ((IData)(core_tb__DOT__dut__DOT__u_wsc_inst__DOT____VdfgRegularize_h70b67afe_0_6) 
              | (0U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))));
    vlSelfRef.core_tb__DOT__dut__DOT__ofifo_clk_en 
        = ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__ofifo_clk_en_pre) 
           | ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__5__KET____DOT__sync_inst__DOT__sync_r) 
              >> 1U));
    vlSelfRef.core_tb__DOT__dut__DOT__psum_sram_clk_en 
        = ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__psum_sram_clk_en_pre) 
           | ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__1__KET____DOT__sync_inst__DOT__sync_r) 
              >> 1U));
}

VL_INLINE_OPT void Vcore_tb___024root___act_comb__TOP__1(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___act_comb__TOP__1\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.core_tb__DOT__clk)))) {
        vlSelfRef.core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__5__KET____DOT__u_clkgate__DOT__en_q 
            = vlSelfRef.core_tb__DOT__dut__DOT__weights_sram_clk_en;
        vlSelfRef.core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__3__KET____DOT__u_clkgate__DOT__en_q 
            = vlSelfRef.core_tb__DOT__dut__DOT__mac_array_clk_en;
        vlSelfRef.core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__0__KET____DOT__u_clkgate__DOT__en_q 
            = vlSelfRef.core_tb__DOT__dut__DOT__sfu_clk_en;
        vlSelfRef.core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__2__KET____DOT__u_clkgate__DOT__en_q 
            = vlSelfRef.core_tb__DOT__dut__DOT__l0_clk_en;
        vlSelfRef.core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__1__KET____DOT__u_clkgate__DOT__en_q 
            = vlSelfRef.core_tb__DOT__dut__DOT__ofifo_clk_en;
        vlSelfRef.core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__4__KET____DOT__u_clkgate__DOT__en_q 
            = vlSelfRef.core_tb__DOT__dut__DOT__psum_sram_clk_en;
    }
    vlSelfRef.core_tb__DOT__dut__DOT__weights_sram_clk 
        = ((IData)(vlSelfRef.core_tb__DOT__clk) & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__5__KET____DOT__u_clkgate__DOT__en_q));
    vlSelfRef.core_tb__DOT__dut__DOT__mac_array_clk 
        = ((IData)(vlSelfRef.core_tb__DOT__clk) & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__3__KET____DOT__u_clkgate__DOT__en_q));
    vlSelfRef.core_tb__DOT__dut__DOT__sfu_clk = ((IData)(vlSelfRef.core_tb__DOT__clk) 
                                                 & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__0__KET____DOT__u_clkgate__DOT__en_q));
    vlSelfRef.core_tb__DOT__dut__DOT__l0_clk = ((IData)(vlSelfRef.core_tb__DOT__clk) 
                                                & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__2__KET____DOT__u_clkgate__DOT__en_q));
    vlSelfRef.core_tb__DOT__dut__DOT__ofifo_clk = ((IData)(vlSelfRef.core_tb__DOT__clk) 
                                                   & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__1__KET____DOT__u_clkgate__DOT__en_q));
    vlSelfRef.core_tb__DOT__dut__DOT__psum_sram_clk 
        = ((IData)(vlSelfRef.core_tb__DOT__clk) & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__4__KET____DOT__u_clkgate__DOT__en_q));
    vlSelfRef.core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__gated_clks 
        = ((((IData)(vlSelfRef.core_tb__DOT__dut__DOT__weights_sram_clk) 
             << 5U) | (((IData)(vlSelfRef.core_tb__DOT__dut__DOT__psum_sram_clk) 
                        << 4U) | ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__mac_array_clk) 
                                  << 3U))) | (((IData)(vlSelfRef.core_tb__DOT__dut__DOT__l0_clk) 
                                               << 2U) 
                                              | (((IData)(vlSelfRef.core_tb__DOT__dut__DOT__ofifo_clk) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.core_tb__DOT__dut__DOT__sfu_clk))));
}

VL_INLINE_OPT void Vcore_tb___024root___nba_sequent__TOP__0(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___nba_sequent__TOP__0\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.core_tb__DOT__reset)))) {
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__0__KET____DOT__sync_inst__DOT__i = 2U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__1__KET____DOT__sync_inst__DOT__i = 2U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__2__KET____DOT__sync_inst__DOT__i = 2U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__3__KET____DOT__sync_inst__DOT__i = 2U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__4__KET____DOT__sync_inst__DOT__i = 2U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__5__KET____DOT__sync_inst__DOT__i = 2U;
    }
    if (vlSelfRef.core_tb__DOT__reset) {
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__4__KET____DOT__sync_inst__DOT__sync_r = 0U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__5__KET____DOT__sync_inst__DOT__sync_r = 0U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__0__KET____DOT__sync_inst__DOT__sync_r = 0U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__1__KET____DOT__sync_inst__DOT__sync_r = 0U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__3__KET____DOT__sync_inst__DOT__sync_r = 0U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__2__KET____DOT__sync_inst__DOT__sync_r = 0U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__last_weight_load_addr = 0U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__last_psum_address = 0U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__start_psum_gp_counter = 0U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kij_counter = 0U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__prev_state = 0U;
    } else {
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__4__KET____DOT__sync_inst__DOT__sync_r 
            = ((2U & ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__4__KET____DOT__sync_inst__DOT__sync_r) 
                      << 1U)) | (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__sfu_clk_en_pre));
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__5__KET____DOT__sync_inst__DOT__sync_r 
            = ((2U & ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__5__KET____DOT__sync_inst__DOT__sync_r) 
                      << 1U)) | (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__ofifo_clk_en_pre));
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__0__KET____DOT__sync_inst__DOT__sync_r 
            = ((2U & ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__0__KET____DOT__sync_inst__DOT__sync_r) 
                      << 1U)) | (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__weights_sram_clk_en_pre));
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__1__KET____DOT__sync_inst__DOT__sync_r 
            = ((2U & ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__1__KET____DOT__sync_inst__DOT__sync_r) 
                      << 1U)) | (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__psum_sram_clk_en_pre));
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__3__KET____DOT__sync_inst__DOT__sync_r 
            = ((2U & ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__3__KET____DOT__sync_inst__DOT__sync_r) 
                      << 1U)) | (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__l0_clk_en_pre));
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__2__KET____DOT__sync_inst__DOT__sync_r 
            = ((2U & ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__2__KET____DOT__sync_inst__DOT__sync_r) 
                      << 1U)) | (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__mac_array_clk_en_pre));
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__last_weight_load_addr 
            = (0xffU & (((2U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state)) 
                         & (0U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)))
                         ? ((IData)(8U) + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__last_weight_load_addr))
                         : (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__last_weight_load_addr)));
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__last_psum_address 
            = (0x7ffU & (((4U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state)) 
                          & (0x36U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)))
                          ? ((IData)(0x24U) + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__last_psum_address))
                          : (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__last_psum_address)));
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__start_psum_gp_counter 
            = (((4U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state)) 
                & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__ofifo_rd_q))
                ? (0x7ffU & ((IData)(1U) + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__start_psum_gp_counter)))
                : 0U);
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kij_counter 
            = vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_kij_counter;
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__prev_state 
            = vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_prev_state;
    }
    vlSelfRef.core_tb__DOT__dut__DOT__wsc_controller_active 
        = ((1U & (~ (IData)(vlSelfRef.core_tb__DOT__reset))) 
           && (0U != (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state)));
    vlSelfRef.core_tb__DOT__dut__DOT__wsc_execute = 
        ((1U & (~ (IData)(vlSelfRef.core_tb__DOT__reset))) 
         && ((2U != (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state)) 
             && ((4U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state)) 
                 && (0x24U > (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)))));
    vlSelfRef.core_tb__DOT__dut__DOT__wsc_load = ((1U 
                                                   & (~ (IData)(vlSelfRef.core_tb__DOT__reset))) 
                                                  && ((2U 
                                                       == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state)) 
                                                      && (((7U 
                                                            > (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)) 
                                                           | (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__act_load_from_mem_done)) 
                                                          | (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kernel_load_from_mem_done))));
    vlSelfRef.core_tb__DOT__dut__DOT__wsc_mac_reset 
        = ((1U & (~ (IData)(vlSelfRef.core_tb__DOT__reset))) 
           && ((1U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state)) 
               & (2U > (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter))));
    vlSelfRef.core_tb__DOT__dut__DOT__ofifo_rd_q = 
        ((1U & (~ (IData)(vlSelfRef.core_tb__DOT__reset))) 
         && (IData)(vlSelfRef.core_tb__DOT__dut__DOT__wsc_ofifo_rd));
    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__ofifo_rd_q 
        = ((1U & (~ (IData)(vlSelfRef.core_tb__DOT__reset))) 
           && (IData)(vlSelfRef.core_tb__DOT__dut__DOT__wsc_ofifo_rd));
}

VL_INLINE_OPT void Vcore_tb___024root___nba_sequent__TOP__1(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___nba_sequent__TOP__1\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__rd_en 
        = vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__rd_en;
    vlSelfRef.__Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__flush_ptr_en 
        = vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__flush_ptr_en;
    vlSelfRef.__Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__rd_en 
        = ((IData)(vlSelfRef.core_tb__DOT__reset) ? 0U
            : ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__wsc_ld_mode)
                ? ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__wsc_l0_rd)
                    ? 0xffU : 0U) : ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__wsc_l0_rd)
                                      ? (1U | (0xfeU 
                                               & ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__rd_en) 
                                                  << 1U)))
                                      : (0xfeU & ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__rd_en) 
                                                  << 1U)))));
    if ((1U & (~ (IData)(vlSelfRef.core_tb__DOT__reset)))) {
        vlSelfRef.__Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__flush_ptr_en 
            = ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__wsc_ld_mode)
                ? ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__wsc_flush_ptr)
                    ? 0xffU : 0U) : ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__wsc_flush_ptr)
                                      ? (1U | (0xfeU 
                                               & ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__flush_ptr_en) 
                                                  << 1U)))
                                      : (0xfeU & ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__flush_ptr_en) 
                                                  << 1U))));
    }
}

VL_INLINE_OPT void Vcore_tb___024root___nba_sequent__TOP__2(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___nba_sequent__TOP__2\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__rd_en 
        = vlSelfRef.__Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__rd_en;
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__flush_ptr_en 
        = vlSelfRef.__Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__flush_ptr_en;
}

VL_INLINE_OPT void Vcore_tb___024root___nba_sequent__TOP__3(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___nba_sequent__TOP__3\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp 
        = vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp;
    if (vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__reset) {
        vlSelfRef.__Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp = 0U;
    } else if (vlSelfRef.core_tb__DOT__dut__DOT__wsc_ld_mode) {
        vlSelfRef.__Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp 
            = (0xffffU & (((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__inst_w) 
                           << 0x1aU) | (((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__inst_w) 
                                         << 0x18U) 
                                        | (((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__inst_w) 
                                            << 0x16U) 
                                           | (((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__inst_w) 
                                               << 0x14U) 
                                              | (((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__inst_w) 
                                                  << 0x12U) 
                                                 | (((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__inst_w) 
                                                     << 0x10U) 
                                                    | (((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__inst_w) 
                                                        << 0xeU) 
                                                       | (((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__inst_w) 
                                                           << 0xcU) 
                                                          | (((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__inst_w) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__inst_w) 
                                                                 << 8U) 
                                                                | (((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__inst_w) 
                                                                    << 6U) 
                                                                   | (((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__inst_w) 
                                                                       << 4U) 
                                                                      | (((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__inst_w) 
                                                                          << 2U) 
                                                                         | (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__inst_w)))))))))))))));
    } else {
        vlSelfRef.__Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp 
            = ((0xffc0U & (IData)(vlSelfRef.__Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp)) 
               | ((0x30U & ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
                            << 2U)) | ((0xcU & ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
                                                << 2U)) 
                                       | (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__inst_w))));
        vlSelfRef.__Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp 
            = ((0x3fU & (IData)(vlSelfRef.__Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp)) 
               | (0xffc0U & ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp) 
                             << 2U)));
    }
}

VL_INLINE_OPT void Vcore_tb___024root___nba_sequent__TOP__4(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___nba_sequent__TOP__4\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp 
        = vlSelfRef.__Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp;
}

extern const VlUnpacked<VlWide<10>/*319:0*/, 4> Vcore_tb__ConstPool__TABLE_he6417ab5_0;
extern const VlUnpacked<VlWide<10>/*319:0*/, 8> Vcore_tb__ConstPool__TABLE_h2a86c64f_0;

VL_INLINE_OPT void Vcore_tb___024root___nba_sequent__TOP__5(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___nba_sequent__TOP__5\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*1:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_row;
    __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_row = 0;
    CData/*3:0*/ __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_col;
    __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_col = 0;
    CData/*3:0*/ __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_row;
    __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_row = 0;
    CData/*3:0*/ __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_col;
    __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_col = 0;
    CData/*7:0*/ __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_idx;
    __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_idx = 0;
    CData/*0:0*/ __Vdly__core_tb__DOT__dut__DOT__corelet_sfu_active;
    __Vdly__core_tb__DOT__dut__DOT__corelet_sfu_active = 0;
    // Body
    __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_row 
        = vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_row;
    __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_col 
        = vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_col;
    __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_row 
        = vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_row;
    __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_col 
        = vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_col;
    __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_idx 
        = vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_idx;
    __Vdly__core_tb__DOT__dut__DOT__corelet_sfu_active 
        = vlSelfRef.core_tb__DOT__dut__DOT__corelet_sfu_active;
    if (vlSelfRef.core_tb__DOT__reset) {
        __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_row = 0U;
        __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_col = 0U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__start_psum_addr = 0U;
        __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_row = 0U;
        __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_col = 0U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__1__KET____DOT__sfu_inst__DOT__acc = 0U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__2__KET____DOT__sfu_inst__DOT__acc = 0U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__3__KET____DOT__sfu_inst__DOT__acc = 0U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__4__KET____DOT__sfu_inst__DOT__acc = 0U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__5__KET____DOT__sfu_inst__DOT__acc = 0U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__6__KET____DOT__sfu_inst__DOT__acc = 0U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__7__KET____DOT__sfu_inst__DOT__acc = 0U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__8__KET____DOT__sfu_inst__DOT__acc = 0U;
        __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_idx = 0U;
        __Vdly__core_tb__DOT__dut__DOT__corelet_sfu_active = 0U;
        vlSelfRef.core_tb__DOT__dut__DOT__corelet_psum_mem_addr = 0U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_delayed = 0U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state = 0U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op = 0U;
    } else {
        if ((5U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state))) {
            __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_col 
                = (((3U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_col)) 
                    & (3U != (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_row)))
                    ? 0U : (0xfU & ((IData)(1U) + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_col))));
            __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_row 
                = (0xfU & ((3U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_col))
                            ? ((IData)(1U) + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_row))
                            : (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_row)));
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__start_psum_addr 
                = (0x7ffU & ((3U != (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_col))
                              ? ((IData)(1U) + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__start_psum_addr))
                              : ((IData)(3U) + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__start_psum_addr))));
            __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_row = 0U;
            __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_col = 0U;
        } else {
            __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_row 
                = vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_row;
            __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_col 
                = vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_col;
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__start_psum_addr 
                = (0x7ffU & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__start_psum_addr));
            if ((2U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state))) {
                __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_col 
                    = (((2U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_col)) 
                        & (2U != (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_row)))
                        ? 0U : (0xfU & (((2U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_col)) 
                                         & (2U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_row)))
                                         ? (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_col)
                                         : ((IData)(1U) 
                                            + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_col)))));
                __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_row 
                    = (0xfU & ((2U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_col))
                                ? ((IData)(1U) + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_row))
                                : (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_row)));
            } else if ((1U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state))) {
                __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_row = 0U;
                __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_col = 1U;
            } else {
                __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_row 
                    = vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_row;
                __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_col 
                    = vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_col;
            }
        }
        if ((2U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_delayed))) {
            if ((1U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_delayed))) {
                vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__1__KET____DOT__sfu_inst__DOT__acc 
                    = (0xffffU & (VL_LTS_III(32, 0U, 
                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__1__KET____DOT__sfu_inst__DOT__acc)))
                                   ? (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__1__KET____DOT__sfu_inst__DOT__acc)
                                   : 0U));
                vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__2__KET____DOT__sfu_inst__DOT__acc 
                    = (0xffffU & (VL_LTS_III(32, 0U, 
                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__2__KET____DOT__sfu_inst__DOT__acc)))
                                   ? (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__2__KET____DOT__sfu_inst__DOT__acc)
                                   : 0U));
                vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__3__KET____DOT__sfu_inst__DOT__acc 
                    = (0xffffU & (VL_LTS_III(32, 0U, 
                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__3__KET____DOT__sfu_inst__DOT__acc)))
                                   ? (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__3__KET____DOT__sfu_inst__DOT__acc)
                                   : 0U));
                vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__4__KET____DOT__sfu_inst__DOT__acc 
                    = (0xffffU & (VL_LTS_III(32, 0U, 
                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__4__KET____DOT__sfu_inst__DOT__acc)))
                                   ? (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__4__KET____DOT__sfu_inst__DOT__acc)
                                   : 0U));
                vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__5__KET____DOT__sfu_inst__DOT__acc 
                    = (0xffffU & (VL_LTS_III(32, 0U, 
                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__5__KET____DOT__sfu_inst__DOT__acc)))
                                   ? (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__5__KET____DOT__sfu_inst__DOT__acc)
                                   : 0U));
                vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__6__KET____DOT__sfu_inst__DOT__acc 
                    = (0xffffU & (VL_LTS_III(32, 0U, 
                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__6__KET____DOT__sfu_inst__DOT__acc)))
                                   ? (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__6__KET____DOT__sfu_inst__DOT__acc)
                                   : 0U));
                vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__7__KET____DOT__sfu_inst__DOT__acc 
                    = (0xffffU & (VL_LTS_III(32, 0U, 
                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__7__KET____DOT__sfu_inst__DOT__acc)))
                                   ? (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__7__KET____DOT__sfu_inst__DOT__acc)
                                   : 0U));
                vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__8__KET____DOT__sfu_inst__DOT__acc 
                    = (0xffffU & (VL_LTS_III(32, 0U, 
                                             VL_EXTENDS_II(32,16, (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__8__KET____DOT__sfu_inst__DOT__acc)))
                                   ? (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__8__KET____DOT__sfu_inst__DOT__acc)
                                   : 0U));
            } else {
                vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__1__KET____DOT__sfu_inst__DOT__acc 
                    = (0xffffU & ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__1__KET____DOT__sfu_inst__DOT__acc) 
                                  + vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U]));
                vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__2__KET____DOT__sfu_inst__DOT__acc 
                    = (0xffffU & ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__2__KET____DOT__sfu_inst__DOT__acc) 
                                  + ((vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U] 
                                      << 0x10U) | (
                                                   vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U] 
                                                   >> 0x10U))));
                vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__3__KET____DOT__sfu_inst__DOT__acc 
                    = (0xffffU & ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__3__KET____DOT__sfu_inst__DOT__acc) 
                                  + vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U]));
                vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__4__KET____DOT__sfu_inst__DOT__acc 
                    = (0xffffU & ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__4__KET____DOT__sfu_inst__DOT__acc) 
                                  + ((vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U] 
                                      << 0x10U) | (
                                                   vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U] 
                                                   >> 0x10U))));
                vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__5__KET____DOT__sfu_inst__DOT__acc 
                    = (0xffffU & ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__5__KET____DOT__sfu_inst__DOT__acc) 
                                  + vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U]));
                vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__6__KET____DOT__sfu_inst__DOT__acc 
                    = (0xffffU & ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__6__KET____DOT__sfu_inst__DOT__acc) 
                                  + ((vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U] 
                                      << 0x10U) | (
                                                   vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U] 
                                                   >> 0x10U))));
                vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__7__KET____DOT__sfu_inst__DOT__acc 
                    = (0xffffU & ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__7__KET____DOT__sfu_inst__DOT__acc) 
                                  + vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U]));
                vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__8__KET____DOT__sfu_inst__DOT__acc 
                    = (0xffffU & ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__8__KET____DOT__sfu_inst__DOT__acc) 
                                  + ((vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U] 
                                      << 0x10U) | (
                                                   vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U] 
                                                   >> 0x10U))));
            }
        } else if ((1U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_delayed))) {
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__1__KET____DOT__sfu_inst__DOT__acc 
                = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U]);
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__2__KET____DOT__sfu_inst__DOT__acc 
                = (0xffffU & ((vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U] 
                               << 0x10U) | (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U] 
                                            >> 0x10U)));
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__3__KET____DOT__sfu_inst__DOT__acc 
                = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U]);
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__4__KET____DOT__sfu_inst__DOT__acc 
                = (0xffffU & ((vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U] 
                               << 0x10U) | (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U] 
                                            >> 0x10U)));
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__5__KET____DOT__sfu_inst__DOT__acc 
                = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U]);
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__6__KET____DOT__sfu_inst__DOT__acc 
                = (0xffffU & ((vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U] 
                               << 0x10U) | (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U] 
                                            >> 0x10U)));
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__7__KET____DOT__sfu_inst__DOT__acc 
                = (0xffffU & vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U]);
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__8__KET____DOT__sfu_inst__DOT__acc 
                = (0xffffU & ((vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U] 
                               << 0x10U) | (vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U] 
                                            >> 0x10U)));
        } else {
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__1__KET____DOT__sfu_inst__DOT__acc 
                = (0xffffU & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__1__KET____DOT__sfu_inst__DOT__acc));
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__2__KET____DOT__sfu_inst__DOT__acc 
                = (0xffffU & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__2__KET____DOT__sfu_inst__DOT__acc));
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__3__KET____DOT__sfu_inst__DOT__acc 
                = (0xffffU & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__3__KET____DOT__sfu_inst__DOT__acc));
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__4__KET____DOT__sfu_inst__DOT__acc 
                = (0xffffU & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__4__KET____DOT__sfu_inst__DOT__acc));
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__5__KET____DOT__sfu_inst__DOT__acc 
                = (0xffffU & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__5__KET____DOT__sfu_inst__DOT__acc));
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__6__KET____DOT__sfu_inst__DOT__acc 
                = (0xffffU & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__6__KET____DOT__sfu_inst__DOT__acc));
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__7__KET____DOT__sfu_inst__DOT__acc 
                = (0xffffU & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__7__KET____DOT__sfu_inst__DOT__acc));
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__8__KET____DOT__sfu_inst__DOT__acc 
                = (0xffffU & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__8__KET____DOT__sfu_inst__DOT__acc));
        }
        __Vdly__core_tb__DOT__dut__DOT__corelet_sfu_active 
            = vlSelfRef.core_tb__DOT__dut__DOT__corelet_sfu_active;
        if (vlSelfRef.core_tb__DOT__dut__DOT__wsc_sfu_start) {
            __Vdly__core_tb__DOT__dut__DOT__corelet_sfu_active = 1U;
        }
        if (((5U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state)) 
             & (0xfU == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_idx)))) {
            __Vdly__core_tb__DOT__dut__DOT__corelet_sfu_active = 0U;
            __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_idx = 0U;
        } else {
            __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_idx 
                = (0xffU & ((5U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state))
                             ? ((IData)(1U) + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_idx))
                             : (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_idx)));
        }
        vlSelfRef.core_tb__DOT__dut__DOT__corelet_psum_mem_addr 
            = vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_addr;
        vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_delayed 
            = vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op;
        vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state 
            = vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_sfu_op_state;
        vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op 
            = vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_sfu_op;
    }
    vlSelfRef.core_tb__DOT__dut__DOT__corelet_psum_mem_wr 
        = ((1U & (~ (IData)(vlSelfRef.core_tb__DOT__reset))) 
           && (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_wr_enable));
    vlSelfRef.core_tb__DOT__dut__DOT__corelet_psum_mem_rd 
        = ((1U & (~ (IData)(vlSelfRef.core_tb__DOT__reset))) 
           && (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_rd_enable));
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_row 
        = __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_row;
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_col 
        = __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_col;
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_row 
        = __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_row;
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_col 
        = __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_col;
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_idx 
        = __Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_idx;
    vlSelfRef.core_tb__DOT__dut__DOT__corelet_sfu_active 
        = __Vdly__core_tb__DOT__dut__DOT__corelet_sfu_active;
    __Vtableidx3 = vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_delayed;
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_delyayed_str[0U] 
        = Vcore_tb__ConstPool__TABLE_he6417ab5_0[__Vtableidx3][0U];
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_delyayed_str[1U] 
        = Vcore_tb__ConstPool__TABLE_he6417ab5_0[__Vtableidx3][1U];
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_delyayed_str[2U] 
        = Vcore_tb__ConstPool__TABLE_he6417ab5_0[__Vtableidx3][2U];
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_delyayed_str[3U] 
        = Vcore_tb__ConstPool__TABLE_he6417ab5_0[__Vtableidx3][3U];
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_delyayed_str[4U] 
        = Vcore_tb__ConstPool__TABLE_he6417ab5_0[__Vtableidx3][4U];
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_delyayed_str[5U] 
        = Vcore_tb__ConstPool__TABLE_he6417ab5_0[__Vtableidx3][5U];
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_delyayed_str[6U] 
        = Vcore_tb__ConstPool__TABLE_he6417ab5_0[__Vtableidx3][6U];
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_delyayed_str[7U] 
        = Vcore_tb__ConstPool__TABLE_he6417ab5_0[__Vtableidx3][7U];
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_delyayed_str[8U] 
        = Vcore_tb__ConstPool__TABLE_he6417ab5_0[__Vtableidx3][8U];
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_delyayed_str[9U] 
        = Vcore_tb__ConstPool__TABLE_he6417ab5_0[__Vtableidx3][9U];
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_rd_enable = 0U;
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_wr_enable = 0U;
    if ((4U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state))) {
        if ((2U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state))) {
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_rd_enable = 0U;
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_addr 
                = (0x7ffU & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__corelet_psum_mem_addr));
        } else {
            if ((1U & (~ (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state)))) {
                vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_rd_enable = 0U;
            }
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_addr 
                = (0x7ffU & ((1U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state))
                              ? (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_idx)
                              : (IData)(vlSelfRef.core_tb__DOT__dut__DOT__corelet_psum_mem_addr)));
        }
        vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_wr_enable 
            = ((1U & (~ ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state) 
                         >> 1U))) && (1U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state)));
    } else if ((2U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state))) {
        vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_rd_enable 
            = (1U & (~ (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state)));
        if ((1U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state))) {
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_wr_enable = 0U;
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_addr 
                = (0x7ffU & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__corelet_psum_mem_addr));
        } else {
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_addr 
                = (0x7ffU & ((0U != (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_col))
                              ? ((IData)(0x25U) + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__corelet_psum_mem_addr))
                              : ((IData)(0x28U) + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__corelet_psum_mem_addr))));
        }
    } else {
        vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_rd_enable 
            = (1U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state));
        if ((1U & (~ (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state)))) {
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_wr_enable = 0U;
        }
        vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_addr 
            = (0x7ffU & ((1U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state))
                          ? (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__start_psum_addr)
                          : (IData)(vlSelfRef.core_tb__DOT__dut__DOT__corelet_psum_mem_addr)));
    }
    __Vtableidx2 = vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state;
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__state_name_str[0U] 
        = Vcore_tb__ConstPool__TABLE_h2a86c64f_0[__Vtableidx2][0U];
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__state_name_str[1U] 
        = Vcore_tb__ConstPool__TABLE_h2a86c64f_0[__Vtableidx2][1U];
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__state_name_str[2U] 
        = Vcore_tb__ConstPool__TABLE_h2a86c64f_0[__Vtableidx2][2U];
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__state_name_str[3U] 
        = Vcore_tb__ConstPool__TABLE_h2a86c64f_0[__Vtableidx2][3U];
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__state_name_str[4U] 
        = Vcore_tb__ConstPool__TABLE_h2a86c64f_0[__Vtableidx2][4U];
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__state_name_str[5U] 
        = Vcore_tb__ConstPool__TABLE_h2a86c64f_0[__Vtableidx2][5U];
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__state_name_str[6U] 
        = Vcore_tb__ConstPool__TABLE_h2a86c64f_0[__Vtableidx2][6U];
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__state_name_str[7U] 
        = Vcore_tb__ConstPool__TABLE_h2a86c64f_0[__Vtableidx2][7U];
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__state_name_str[8U] 
        = Vcore_tb__ConstPool__TABLE_h2a86c64f_0[__Vtableidx2][8U];
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__state_name_str[9U] 
        = Vcore_tb__ConstPool__TABLE_h2a86c64f_0[__Vtableidx2][9U];
}

VL_INLINE_OPT void Vcore_tb___024root___nba_sequent__TOP__6(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___nba_sequent__TOP__6\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__rd_en 
        = ((1U & (~ (IData)(vlSelfRef.core_tb__DOT__reset))) 
           && (IData)(vlSelfRef.core_tb__DOT__dut__DOT__wsc_ofifo_rd));
}

VL_INLINE_OPT void Vcore_tb___024root___nba_sequent__TOP__7(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___nba_sequent__TOP__7\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & ((~ (IData)(vlSelfRef.core_tb__DOT__dut__DOT____Vcellinp__u_activation_sram__CEN)) 
               & (~ (IData)(vlSelfRef.core_tb__DOT__activation_weight_mem_load))))) {
        vlSelfRef.core_tb__DOT__dut__DOT__u_activation_sram__DOT__add_q 
            = vlSelfRef.core_tb__DOT__dut__DOT__A_xmem;
    }
    if (((~ (IData)(vlSelfRef.core_tb__DOT__dut__DOT____Vcellinp__u_activation_sram__CEN)) 
         & (IData)(vlSelfRef.core_tb__DOT__activation_weight_mem_load))) {
        VL_ASSIGNSEL_WI(65536,32,(0xffffU & ((VL_SHIFTL_III(16,32,32, 
                                                            ((IData)(1U) 
                                                             + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__A_xmem)), 5U) 
                                              - (IData)(1U)) 
                                             - (IData)(0x1fU))), vlSelfRef.core_tb__DOT__dut__DOT__u_activation_sram__DOT__memory, vlSelfRef.core_tb__DOT__D_xmem);
    }
    vlSelfRef.core_tb__DOT__dut__DOT__l0_in = (((0U 
                                                 == 
                                                 (0x1fU 
                                                  & ((VL_SHIFTL_III(16,16,32, 
                                                                    ((IData)(1U) 
                                                                     + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_activation_sram__DOT__add_q)), 5U) 
                                                      - (IData)(1U)) 
                                                     - (IData)(0x1fU))))
                                                 ? 0U
                                                 : 
                                                (vlSelfRef.core_tb__DOT__dut__DOT__u_activation_sram__DOT__memory[
                                                 (((IData)(0x1fU) 
                                                   + 
                                                   (0xffffU 
                                                    & ((VL_SHIFTL_III(16,16,32, 
                                                                      ((IData)(1U) 
                                                                       + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_activation_sram__DOT__add_q)), 5U) 
                                                        - (IData)(1U)) 
                                                       - (IData)(0x1fU)))) 
                                                  >> 5U)] 
                                                 << 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((VL_SHIFTL_III(16,16,32, 
                                                                     ((IData)(1U) 
                                                                      + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_activation_sram__DOT__add_q)), 5U) 
                                                       - (IData)(1U)) 
                                                      - (IData)(0x1fU)))))) 
                                               | (vlSelfRef.core_tb__DOT__dut__DOT__u_activation_sram__DOT__memory[
                                                  (0x7ffU 
                                                   & (((VL_SHIFTL_III(16,16,32, 
                                                                      ((IData)(1U) 
                                                                       + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_activation_sram__DOT__add_q)), 5U) 
                                                        - (IData)(1U)) 
                                                       - (IData)(0x1fU)) 
                                                      >> 5U))] 
                                                  >> 
                                                  (0x1fU 
                                                   & ((VL_SHIFTL_III(16,16,32, 
                                                                     ((IData)(1U) 
                                                                      + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_activation_sram__DOT__add_q)), 5U) 
                                                       - (IData)(1U)) 
                                                      - (IData)(0x1fU)))));
}

VL_INLINE_OPT void Vcore_tb___024root___nba_sequent__TOP__8(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___nba_sequent__TOP__8\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((~ (IData)(vlSelfRef.core_tb__DOT__dut__DOT__CEN_pmem)) 
         & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__WEN_pmem))) {
        vlSelfRef.core_tb__DOT__dut__DOT__u_psum_sram__DOT__add_q 
            = vlSelfRef.core_tb__DOT__dut__DOT__A_pmem;
    }
    if ((1U & ((~ (IData)(vlSelfRef.core_tb__DOT__dut__DOT__CEN_pmem)) 
               & (~ (IData)(vlSelfRef.core_tb__DOT__dut__DOT__WEN_pmem))))) {
        VL_ASSIGNSEL_WW(262144,128,(0x3ffffU & ((VL_SHIFTL_III(18,32,32, 
                                                               ((IData)(1U) 
                                                                + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__A_pmem)), 7U) 
                                                 - (IData)(1U)) 
                                                - (IData)(0x7fU))), vlSelfRef.core_tb__DOT__dut__DOT__u_psum_sram__DOT__memory, vlSelfRef.core_tb__DOT__dut__DOT__ofifo_sram_in);
    }
    vlSelfRef.core_tb__DOT__dut__DOT__Q_out[0U] = (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((VL_SHIFTL_III(18,18,32, 
                                                                        ((IData)(1U) 
                                                                         + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_psum_sram__DOT__add_q)), 7U) 
                                                          - (IData)(1U)) 
                                                         - (IData)(0x7fU))))
                                                     ? 0U
                                                     : 
                                                    (vlSelfRef.core_tb__DOT__dut__DOT__u_psum_sram__DOT__memory[
                                                     ((IData)(1U) 
                                                      + 
                                                      (0x1fffU 
                                                       & (((VL_SHIFTL_III(18,18,32, 
                                                                          ((IData)(1U) 
                                                                           + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_psum_sram__DOT__add_q)), 7U) 
                                                            - (IData)(1U)) 
                                                           - (IData)(0x7fU)) 
                                                          >> 5U)))] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((VL_SHIFTL_III(18,18,32, 
                                                                         ((IData)(1U) 
                                                                          + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_psum_sram__DOT__add_q)), 7U) 
                                                           - (IData)(1U)) 
                                                          - (IData)(0x7fU)))))) 
                                                   | (vlSelfRef.core_tb__DOT__dut__DOT__u_psum_sram__DOT__memory[
                                                      (0x1fffU 
                                                       & (((VL_SHIFTL_III(18,18,32, 
                                                                          ((IData)(1U) 
                                                                           + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_psum_sram__DOT__add_q)), 7U) 
                                                            - (IData)(1U)) 
                                                           - (IData)(0x7fU)) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((VL_SHIFTL_III(18,18,32, 
                                                                         ((IData)(1U) 
                                                                          + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_psum_sram__DOT__add_q)), 7U) 
                                                           - (IData)(1U)) 
                                                          - (IData)(0x7fU)))));
    vlSelfRef.core_tb__DOT__dut__DOT__Q_out[1U] = (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((VL_SHIFTL_III(18,18,32, 
                                                                        ((IData)(1U) 
                                                                         + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_psum_sram__DOT__add_q)), 7U) 
                                                          - (IData)(1U)) 
                                                         - (IData)(0x7fU))))
                                                     ? 0U
                                                     : 
                                                    (vlSelfRef.core_tb__DOT__dut__DOT__u_psum_sram__DOT__memory[
                                                     ((IData)(2U) 
                                                      + 
                                                      (0x1fffU 
                                                       & (((VL_SHIFTL_III(18,18,32, 
                                                                          ((IData)(1U) 
                                                                           + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_psum_sram__DOT__add_q)), 7U) 
                                                            - (IData)(1U)) 
                                                           - (IData)(0x7fU)) 
                                                          >> 5U)))] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((VL_SHIFTL_III(18,18,32, 
                                                                         ((IData)(1U) 
                                                                          + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_psum_sram__DOT__add_q)), 7U) 
                                                           - (IData)(1U)) 
                                                          - (IData)(0x7fU)))))) 
                                                   | (vlSelfRef.core_tb__DOT__dut__DOT__u_psum_sram__DOT__memory[
                                                      ((IData)(1U) 
                                                       + 
                                                       (0x1fffU 
                                                        & (((VL_SHIFTL_III(18,18,32, 
                                                                           ((IData)(1U) 
                                                                            + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_psum_sram__DOT__add_q)), 7U) 
                                                             - (IData)(1U)) 
                                                            - (IData)(0x7fU)) 
                                                           >> 5U)))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((VL_SHIFTL_III(18,18,32, 
                                                                         ((IData)(1U) 
                                                                          + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_psum_sram__DOT__add_q)), 7U) 
                                                           - (IData)(1U)) 
                                                          - (IData)(0x7fU)))));
    vlSelfRef.core_tb__DOT__dut__DOT__Q_out[2U] = (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((VL_SHIFTL_III(18,18,32, 
                                                                        ((IData)(1U) 
                                                                         + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_psum_sram__DOT__add_q)), 7U) 
                                                          - (IData)(1U)) 
                                                         - (IData)(0x7fU))))
                                                     ? 0U
                                                     : 
                                                    (vlSelfRef.core_tb__DOT__dut__DOT__u_psum_sram__DOT__memory[
                                                     ((IData)(3U) 
                                                      + 
                                                      (0x1fffU 
                                                       & (((VL_SHIFTL_III(18,18,32, 
                                                                          ((IData)(1U) 
                                                                           + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_psum_sram__DOT__add_q)), 7U) 
                                                            - (IData)(1U)) 
                                                           - (IData)(0x7fU)) 
                                                          >> 5U)))] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((VL_SHIFTL_III(18,18,32, 
                                                                         ((IData)(1U) 
                                                                          + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_psum_sram__DOT__add_q)), 7U) 
                                                           - (IData)(1U)) 
                                                          - (IData)(0x7fU)))))) 
                                                   | (vlSelfRef.core_tb__DOT__dut__DOT__u_psum_sram__DOT__memory[
                                                      ((IData)(2U) 
                                                       + 
                                                       (0x1fffU 
                                                        & (((VL_SHIFTL_III(18,18,32, 
                                                                           ((IData)(1U) 
                                                                            + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_psum_sram__DOT__add_q)), 7U) 
                                                             - (IData)(1U)) 
                                                            - (IData)(0x7fU)) 
                                                           >> 5U)))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((VL_SHIFTL_III(18,18,32, 
                                                                         ((IData)(1U) 
                                                                          + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_psum_sram__DOT__add_q)), 7U) 
                                                           - (IData)(1U)) 
                                                          - (IData)(0x7fU)))));
    vlSelfRef.core_tb__DOT__dut__DOT__Q_out[3U] = (
                                                   ((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((VL_SHIFTL_III(18,18,32, 
                                                                        ((IData)(1U) 
                                                                         + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_psum_sram__DOT__add_q)), 7U) 
                                                          - (IData)(1U)) 
                                                         - (IData)(0x7fU))))
                                                     ? 0U
                                                     : 
                                                    (vlSelfRef.core_tb__DOT__dut__DOT__u_psum_sram__DOT__memory[
                                                     ((IData)(4U) 
                                                      + 
                                                      (0x1fffU 
                                                       & (((VL_SHIFTL_III(18,18,32, 
                                                                          ((IData)(1U) 
                                                                           + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_psum_sram__DOT__add_q)), 7U) 
                                                            - (IData)(1U)) 
                                                           - (IData)(0x7fU)) 
                                                          >> 5U)))] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((VL_SHIFTL_III(18,18,32, 
                                                                         ((IData)(1U) 
                                                                          + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_psum_sram__DOT__add_q)), 7U) 
                                                           - (IData)(1U)) 
                                                          - (IData)(0x7fU)))))) 
                                                   | (vlSelfRef.core_tb__DOT__dut__DOT__u_psum_sram__DOT__memory[
                                                      ((IData)(3U) 
                                                       + 
                                                       (0x1fffU 
                                                        & (((VL_SHIFTL_III(18,18,32, 
                                                                           ((IData)(1U) 
                                                                            + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_psum_sram__DOT__add_q)), 7U) 
                                                             - (IData)(1U)) 
                                                            - (IData)(0x7fU)) 
                                                           >> 5U)))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((VL_SHIFTL_III(18,18,32, 
                                                                         ((IData)(1U) 
                                                                          + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_psum_sram__DOT__add_q)), 7U) 
                                                           - (IData)(1U)) 
                                                          - (IData)(0x7fU)))));
}

VL_INLINE_OPT void Vcore_tb___024root___nba_comb__TOP__0(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___nba_comb__TOP__0\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__reset 
        = ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__wsc_mac_reset) 
           | (IData)(vlSelfRef.core_tb__DOT__reset));
    vlSelfRef.core_tb__DOT__dut__DOT____Vcellinp__u_activation_sram__CEN 
        = (1U & (~ ((IData)(vlSelfRef.core_tb__DOT__activation_weight_mem_load) 
                    | (IData)(vlSelfRef.core_tb__DOT__dut__DOT__wsc_l0_wr))));
    if (vlSelfRef.core_tb__DOT__reset) {
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_gp_counter = 0U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_kij_counter = 0U;
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_prev_state = 0U;
    } else {
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_gp_counter 
            = (0x7ffU & ((1U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))
                          ? ((7U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter))
                              ? 0U : ((IData)(1U) + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)))
                          : ((3U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))
                              ? ((0x23U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter))
                                  ? 0U : ((IData)(1U) 
                                          + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)))
                              : ((2U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))
                                  ? ((0xfU == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter))
                                      ? 0U : ((IData)(1U) 
                                              + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)))
                                  : ((4U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))
                                      ? ((0x36U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter))
                                          ? 0U : ((IData)(1U) 
                                                  + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)))
                                      : 0U)))));
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_kij_counter 
            = (((5U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state)) 
                & (9U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kij_counter)))
                ? 0U : (0xffU & (((4U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state)) 
                                  & (0U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)))
                                  ? ((IData)(1U) + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kij_counter))
                                  : (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kij_counter))));
        vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_prev_state 
            = vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__prev_state;
        if ((4U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))) {
                    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_prev_state = 0U;
                }
            } else if ((1U & (~ (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state)))) {
                if (((IData)(vlSelfRef.core_tb__DOT__debug_mode) 
                     & (0x36U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)))) {
                    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_prev_state = 4U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))) {
                if (((IData)(vlSelfRef.core_tb__DOT__debug_mode) 
                     & (0x23U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)))) {
                    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_prev_state = 3U;
                }
            } else if (((IData)(vlSelfRef.core_tb__DOT__debug_mode) 
                        & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kernel_load_to_mac_done))) {
                vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_prev_state = 2U;
            }
        } else if ((1U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))) {
            if (((IData)(vlSelfRef.core_tb__DOT__debug_mode) 
                 & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kernel_load_from_mem_done))) {
                vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_prev_state = 1U;
            }
        }
    }
    vlSelfRef.core_tb__DOT__dut__DOT__A_xmem = (0x7ffU 
                                                & ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__wsc_controller_active)
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))
                                                     ? 
                                                    ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter) 
                                                     + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__last_weight_load_addr))
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))
                                                      ? 
                                                     ((IData)(0x48U) 
                                                      + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter))
                                                      : 0U))
                                                    : (IData)(vlSelfRef.core_tb__DOT__sram_mem_addr)));
}

VL_INLINE_OPT void Vcore_tb___024root___nba_comb__TOP__1(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___nba_comb__TOP__1\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT____VdfgRegularize_h70b67afe_0_5;
    core_tb__DOT__dut__DOT__u_wsc_inst__DOT____VdfgRegularize_h70b67afe_0_5 = 0;
    CData/*0:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT____VdfgRegularize_h70b67afe_0_6;
    core_tb__DOT__dut__DOT__u_wsc_inst__DOT____VdfgRegularize_h70b67afe_0_6 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    __Vtableidx4 = (((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state) 
                     << 1U) | (IData)(vlSelfRef.core_tb__DOT__reset));
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_sfu_op 
        = Vcore_tb__ConstPool__TABLE_h8a30ad03_0[__Vtableidx4];
    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state 
        = ((IData)(vlSelfRef.core_tb__DOT__reset) ? 0U
            : ((4U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))
                ? ((2U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))
                    ? ((1U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))
                        ? 0U : ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__corelet_sfu_active)
                                 ? 6U : 0U)) : ((1U 
                                                 & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))
                                                 ? 6U
                                                 : 
                                                (((IData)(vlSelfRef.core_tb__DOT__debug_mode) 
                                                  & (0x36U 
                                                     == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)))
                                                  ? 0U
                                                  : 
                                                 (((0x36U 
                                                    == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)) 
                                                   & (9U 
                                                      == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kij_counter)))
                                                   ? 5U
                                                   : 
                                                  (((0x36U 
                                                     == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)) 
                                                    & (9U 
                                                       != (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kij_counter)))
                                                    ? 1U
                                                    : 4U)))))
                : ((2U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))
                    ? ((1U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))
                        ? (((IData)(vlSelfRef.core_tb__DOT__debug_mode) 
                            & (0x23U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)))
                            ? 0U : ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__act_load_from_mem_done)
                                     ? 2U : 3U)) : 
                       (((IData)(vlSelfRef.core_tb__DOT__debug_mode) 
                         & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kernel_load_to_mac_done))
                         ? 0U : ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kernel_load_to_mac_done)
                                  ? 4U : 2U))) : ((1U 
                                                   & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))
                                                   ? 
                                                  (((IData)(vlSelfRef.core_tb__DOT__debug_mode) 
                                                    & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kernel_load_from_mem_done))
                                                    ? 0U
                                                    : 
                                                   (((0U 
                                                      == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kij_counter)) 
                                                     & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kernel_load_from_mem_done))
                                                     ? 3U
                                                     : 
                                                    ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kernel_load_from_mem_done)
                                                      ? 2U
                                                      : 1U)))
                                                   : 
                                                  ((IData)(vlSelfRef.core_tb__DOT__debug_mode)
                                                    ? 
                                                   (((0U 
                                                      == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__prev_state)) 
                                                     & (IData)(vlSelfRef.core_tb__DOT__start_controller))
                                                     ? 1U
                                                     : 
                                                    (((1U 
                                                       == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__prev_state)) 
                                                      & (IData)(vlSelfRef.core_tb__DOT__start_controller))
                                                      ? 2U
                                                      : 
                                                     (((2U 
                                                        == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__prev_state)) 
                                                       & (IData)(vlSelfRef.core_tb__DOT__start_controller))
                                                       ? 3U
                                                       : 
                                                      (((3U 
                                                         == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__prev_state)) 
                                                        & (IData)(vlSelfRef.core_tb__DOT__start_controller))
                                                        ? 4U
                                                        : 
                                                       (((4U 
                                                          == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__prev_state)) 
                                                         & (IData)(vlSelfRef.core_tb__DOT__start_controller))
                                                         ? 6U
                                                         : 0U)))))
                                                    : 
                                                   ((IData)(vlSelfRef.core_tb__DOT__start_controller)
                                                     ? 1U
                                                     : 0U))))));
    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_l0_wr 
        = ((1U & (~ (IData)(vlSelfRef.core_tb__DOT__reset))) 
           && ((1U & (~ ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state) 
                         >> 2U))) && (1U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state))));
    vlSelfRef.core_tb__DOT__dut__DOT__wsc_ld_mode = 
        (1U & (~ ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__wsc_execute) 
                  | (4U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state)))));
    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_l0_rd 
        = ((1U & (~ (IData)(vlSelfRef.core_tb__DOT__reset))) 
           && ((4U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state))
                ? ((1U & (~ ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state) 
                             >> 1U))) && ((1U & (~ (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state))) 
                                          && (0x23U 
                                              > (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter))))
                : ((1U & ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state) 
                          >> 1U)) && ((1U & (~ (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state))) 
                                      && (((7U > (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)) 
                                           | (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__act_load_from_mem_done)) 
                                          | (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kernel_load_from_mem_done))))));
    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__weights_sram_clk_en_pre 
        = ((IData)(vlSelfRef.core_tb__DOT__debug_mode) 
           | ((1U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state)) 
              | ((0U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state)) 
                 | (3U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state)))));
    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__mac_array_clk_en_pre 
        = ((IData)(vlSelfRef.core_tb__DOT__debug_mode) 
           | ((4U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state)) 
              | ((2U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state)) 
                 | ((0U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state)) 
                    | ((1U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state)) 
                       & (2U > (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)))))));
    core_tb__DOT__dut__DOT__u_wsc_inst__DOT____VdfgRegularize_h70b67afe_0_5 
        = ((5U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state)) 
           | (6U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state)));
    vlSelfRef.core_tb__DOT__dut__DOT__weights_sram_clk_en 
        = ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__weights_sram_clk_en_pre) 
           | ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__0__KET____DOT__sync_inst__DOT__sync_r) 
              >> 1U));
    vlSelfRef.core_tb__DOT__dut__DOT__mac_array_clk_en 
        = ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__mac_array_clk_en_pre) 
           | ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__2__KET____DOT__sync_inst__DOT__sync_r) 
              >> 1U));
    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__sfu_clk_en_pre 
        = ((IData)(vlSelfRef.core_tb__DOT__debug_mode) 
           | (IData)(core_tb__DOT__dut__DOT__u_wsc_inst__DOT____VdfgRegularize_h70b67afe_0_5));
    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__l0_clk_en_pre 
        = (1U & ((~ ((0U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state)) 
                     | (IData)(core_tb__DOT__dut__DOT__u_wsc_inst__DOT____VdfgRegularize_h70b67afe_0_5))) 
                 | (IData)(vlSelfRef.core_tb__DOT__debug_mode)));
    core_tb__DOT__dut__DOT__u_wsc_inst__DOT____VdfgRegularize_h70b67afe_0_6 
        = ((4U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state)) 
           | (IData)(core_tb__DOT__dut__DOT__u_wsc_inst__DOT____VdfgRegularize_h70b67afe_0_5));
    vlSelfRef.core_tb__DOT__dut__DOT__sfu_clk_en = 
        ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__sfu_clk_en_pre) 
         | ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__4__KET____DOT__sync_inst__DOT__sync_r) 
            >> 1U));
    vlSelfRef.core_tb__DOT__dut__DOT__l0_clk_en = ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__l0_clk_en_pre) 
                                                   | ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__3__KET____DOT__sync_inst__DOT__sync_r) 
                                                      >> 1U));
    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__ofifo_clk_en_pre 
        = ((IData)(vlSelfRef.core_tb__DOT__debug_mode) 
           | (IData)(core_tb__DOT__dut__DOT__u_wsc_inst__DOT____VdfgRegularize_h70b67afe_0_6));
    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__psum_sram_clk_en_pre 
        = ((IData)(vlSelfRef.core_tb__DOT__debug_mode) 
           | ((IData)(core_tb__DOT__dut__DOT__u_wsc_inst__DOT____VdfgRegularize_h70b67afe_0_6) 
              | (0U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))));
    vlSelfRef.core_tb__DOT__dut__DOT__ofifo_clk_en 
        = ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__ofifo_clk_en_pre) 
           | ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__5__KET____DOT__sync_inst__DOT__sync_r) 
              >> 1U));
    vlSelfRef.core_tb__DOT__dut__DOT__psum_sram_clk_en 
        = ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__psum_sram_clk_en_pre) 
           | ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__1__KET____DOT__sync_inst__DOT__sync_r) 
              >> 1U));
}

VL_INLINE_OPT void Vcore_tb___024root___nba_comb__TOP__2(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___nba_comb__TOP__2\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_sfu_op_state 
        = ((4U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state))
            ? ((2U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state))
                ? (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state)
                : ((1U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state))
                    ? ((0xfU != (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_idx))
                        ? 1U : 0U) : 5U)) : ((2U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state))
                                                  ? 4U
                                                  : 
                                                 (((2U 
                                                    != (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_col)) 
                                                   | (2U 
                                                      != (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_row)))
                                                   ? 2U
                                                   : 3U))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state))
                                                  ? 2U
                                                  : 
                                                 (((IData)(vlSelfRef.core_tb__DOT__dut__DOT__wsc_sfu_start) 
                                                   | (((IData)(vlSelfRef.core_tb__DOT__dut__DOT__corelet_sfu_active) 
                                                       & (0U 
                                                          == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_row))) 
                                                      & (0U 
                                                         == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_col))))
                                                   ? 1U
                                                   : (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state)))));
    vlSelfRef.core_tb__DOT__dut__DOT__corelet_sfu_active_to_mem 
        = ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__corelet_sfu_active) 
           | (6U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state)));
    vlSelfRef.core_tb__DOT__dut__DOT__WEN_pmem = (1U 
                                                  & ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__corelet_sfu_active_to_mem)
                                                      ? (IData)(vlSelfRef.core_tb__DOT__dut__DOT__corelet_psum_mem_rd)
                                                      : 
                                                     (~ (IData)(vlSelfRef.core_tb__DOT__dut__DOT__ofifo_rd_q))));
}

VL_INLINE_OPT void Vcore_tb___024root___nba_comb__TOP__4(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___nba_comb__TOP__4\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.core_tb__DOT__dut__DOT__CEN_pmem = (1U 
                                                  & (~ 
                                                     ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__corelet_sfu_active_to_mem)
                                                       ? 
                                                      ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__corelet_psum_mem_rd) 
                                                       | (IData)(vlSelfRef.core_tb__DOT__dut__DOT__corelet_psum_mem_wr))
                                                       : 
                                                      ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__ofifo_rd_q) 
                                                       | (IData)(vlSelfRef.core_tb__DOT__psum_memory_rd_enable)))));
    vlSelfRef.core_tb__DOT__dut__DOT__A_pmem = (0x7ffU 
                                                & ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__wsc_controller_active)
                                                    ? 
                                                   ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__corelet_sfu_active_to_mem)
                                                     ? (IData)(vlSelfRef.core_tb__DOT__dut__DOT__corelet_psum_mem_addr)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state))
                                                      ? 
                                                     ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__last_psum_address) 
                                                      + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__start_psum_gp_counter))
                                                      : 0U))
                                                    : (IData)(vlSelfRef.core_tb__DOT__sram_mem_addr)));
}

void Vcore_tb___024root___timing_resume(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___timing_resume\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hf5e4f9bb__0.resume(
                                                   "@(posedge core_tb.clk)");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_had1b8eb2__0.resume(
                                                   "@( (~ core_tb.dut.wsc_controller_active))");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vcore_tb___024root___timing_commit(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___timing_commit\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hf5e4f9bb__0.commit(
                                                   "@(posedge core_tb.clk)");
    }
    if ((! (0x100ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_had1b8eb2__0.commit(
                                                   "@( (~ core_tb.dut.wsc_controller_active))");
    }
}

void Vcore_tb___024root___eval_triggers__act(Vcore_tb___024root* vlSelf);

bool Vcore_tb___024root___eval_phase__act(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___eval_phase__act\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<9> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcore_tb___024root___eval_triggers__act(vlSelf);
    Vcore_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcore_tb___024root___timing_resume(vlSelf);
        Vcore_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vcore_tb___024root___eval_nba(Vcore_tb___024root* vlSelf);

bool Vcore_tb___024root___eval_phase__nba(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___eval_phase__nba\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcore_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore_tb___024root___dump_triggers__nba(Vcore_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore_tb___024root___dump_triggers__act(Vcore_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcore_tb___024root___eval(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___eval\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcore_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("../verilog/core_tb.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcore_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("../verilog/core_tb.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcore_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcore_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcore_tb___024root___eval_debug_assertions(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___eval_debug_assertions\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
