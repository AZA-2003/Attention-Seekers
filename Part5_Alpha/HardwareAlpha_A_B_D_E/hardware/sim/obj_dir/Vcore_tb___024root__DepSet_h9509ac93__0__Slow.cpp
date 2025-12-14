// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_tb.h for the primary calling header

#include "Vcore_tb__pch.h"
#include "Vcore_tb___024root.h"

VL_ATTR_COLD void Vcore_tb___024root___eval_final(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___eval_final\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore_tb___024root___dump_triggers__stl(Vcore_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcore_tb___024root___eval_phase__stl(Vcore_tb___024root* vlSelf);

VL_ATTR_COLD void Vcore_tb___024root___eval_settle(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___eval_settle\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vcore_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../verilog/core_tb.sv", 2, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcore_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore_tb___024root___dump_triggers__stl(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___dump_triggers__stl\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<VlWide<10>/*319:0*/, 8> Vcore_tb__ConstPool__TABLE_hfd89642c_0;
extern const VlUnpacked<VlWide<10>/*319:0*/, 8> Vcore_tb__ConstPool__TABLE_h2a86c64f_0;
extern const VlUnpacked<VlWide<10>/*319:0*/, 4> Vcore_tb__ConstPool__TABLE_he6417ab5_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vcore_tb__ConstPool__TABLE_h8a30ad03_0;

VL_ATTR_COLD void Vcore_tb___024root___stl_sequent__TOP__0(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___stl_sequent__TOP__0\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT____VdfgRegularize_h70b67afe_0_5;
    core_tb__DOT__dut__DOT__u_wsc_inst__DOT____VdfgRegularize_h70b67afe_0_5 = 0;
    CData/*0:0*/ core_tb__DOT__dut__DOT__u_wsc_inst__DOT____VdfgRegularize_h70b67afe_0_6;
    core_tb__DOT__dut__DOT__u_wsc_inst__DOT____VdfgRegularize_h70b67afe_0_6 = 0;
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*2:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*1:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_rd_enable = 0U;
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_wr_enable = 0U;
    if ((4U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state))) {
        if ((2U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state))) {
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_rd_enable = 0U;
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_addr 
                = (0x7ffU & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__corelet_psum_mem_addr));
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_sfu_op_state 
                = vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state;
        } else {
            if ((1U & (~ (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state)))) {
                vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_rd_enable = 0U;
            }
            if ((1U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state))) {
                vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_addr 
                    = (0x7ffU & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_idx));
                vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_sfu_op_state 
                    = ((0xfU != (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_idx))
                        ? 1U : 0U);
            } else {
                vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_addr 
                    = (0x7ffU & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__corelet_psum_mem_addr));
                vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_sfu_op_state = 5U;
            }
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
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_sfu_op_state = 4U;
        } else {
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_addr 
                = (0x7ffU & ((0U != (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_col))
                              ? ((IData)(0x25U) + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__corelet_psum_mem_addr))
                              : ((IData)(0x28U) + (IData)(vlSelfRef.core_tb__DOT__dut__DOT__corelet_psum_mem_addr))));
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_sfu_op_state 
                = (((2U != (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_col)) 
                    | (2U != (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_row)))
                    ? 2U : 3U);
        }
    } else {
        vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_rd_enable 
            = (1U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state));
        if ((1U & (~ (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state)))) {
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_wr_enable = 0U;
        }
        if ((1U & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state))) {
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_addr 
                = (0x7ffU & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__start_psum_addr));
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_sfu_op_state = 2U;
        } else {
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_addr 
                = (0x7ffU & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__corelet_psum_mem_addr));
            vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_sfu_op_state 
                = (((IData)(vlSelfRef.core_tb__DOT__dut__DOT__wsc_sfu_start) 
                    | (((IData)(vlSelfRef.core_tb__DOT__dut__DOT__corelet_sfu_active) 
                        & (0U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_row))) 
                       & (0U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_col))))
                    ? 1U : (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state));
        }
    }
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__reset 
        = ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__wsc_mac_reset) 
           | (IData)(vlSelfRef.core_tb__DOT__reset));
    vlSelfRef.core_tb__DOT__dut__DOT____Vcellinp__u_activation_sram__CEN 
        = (1U & (~ ((IData)(vlSelfRef.core_tb__DOT__activation_weight_mem_load) 
                    | (IData)(vlSelfRef.core_tb__DOT__dut__DOT__wsc_l0_wr))));
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__inst_w 
        = (((IData)(vlSelfRef.core_tb__DOT__dut__DOT__wsc_execute) 
            << 1U) | (IData)(vlSelfRef.core_tb__DOT__dut__DOT__wsc_load));
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
    __Vtableidx1 = vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state;
    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state_name_str[0U] 
        = Vcore_tb__ConstPool__TABLE_hfd89642c_0[__Vtableidx1][0U];
    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state_name_str[1U] 
        = Vcore_tb__ConstPool__TABLE_hfd89642c_0[__Vtableidx1][1U];
    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state_name_str[2U] 
        = Vcore_tb__ConstPool__TABLE_hfd89642c_0[__Vtableidx1][2U];
    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state_name_str[3U] 
        = Vcore_tb__ConstPool__TABLE_hfd89642c_0[__Vtableidx1][3U];
    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state_name_str[4U] 
        = Vcore_tb__ConstPool__TABLE_hfd89642c_0[__Vtableidx1][4U];
    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state_name_str[5U] 
        = Vcore_tb__ConstPool__TABLE_hfd89642c_0[__Vtableidx1][5U];
    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state_name_str[6U] 
        = Vcore_tb__ConstPool__TABLE_hfd89642c_0[__Vtableidx1][6U];
    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state_name_str[7U] 
        = Vcore_tb__ConstPool__TABLE_hfd89642c_0[__Vtableidx1][7U];
    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state_name_str[8U] 
        = Vcore_tb__ConstPool__TABLE_hfd89642c_0[__Vtableidx1][8U];
    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state_name_str[9U] 
        = Vcore_tb__ConstPool__TABLE_hfd89642c_0[__Vtableidx1][9U];
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
    __Vtableidx4 = (((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state) 
                     << 1U) | (IData)(vlSelfRef.core_tb__DOT__reset));
    vlSelfRef.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_sfu_op 
        = Vcore_tb__ConstPool__TABLE_h8a30ad03_0[__Vtableidx4];
    vlSelfRef.core_tb__DOT__dut__DOT__corelet_sfu_active_to_mem 
        = ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__corelet_sfu_active) 
           | (6U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state)));
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
    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__act_load_from_mem_done 
        = ((3U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state)) 
           & (0x23U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)));
    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kernel_load_to_mac_done 
        = ((2U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state)) 
           & (0xfU == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)));
    vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kernel_load_from_mem_done 
        = ((1U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state)) 
           & (7U == (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter)));
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
    vlSelfRef.core_tb__DOT__dut__DOT__WEN_pmem = (1U 
                                                  & ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__corelet_sfu_active_to_mem)
                                                      ? (IData)(vlSelfRef.core_tb__DOT__dut__DOT__corelet_psum_mem_rd)
                                                      : 
                                                     (~ (IData)(vlSelfRef.core_tb__DOT__dut__DOT__ofifo_rd_q))));
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
    if ((1U & (~ (IData)(vlSelfRef.core_tb__DOT__clk)))) {
        vlSelfRef.core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__5__KET____DOT__u_clkgate__DOT__en_q 
            = vlSelfRef.core_tb__DOT__dut__DOT__weights_sram_clk_en;
    }
    vlSelfRef.core_tb__DOT__dut__DOT__weights_sram_clk 
        = ((IData)(vlSelfRef.core_tb__DOT__clk) & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__5__KET____DOT__u_clkgate__DOT__en_q));
    if ((1U & (~ (IData)(vlSelfRef.core_tb__DOT__clk)))) {
        vlSelfRef.core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__3__KET____DOT__u_clkgate__DOT__en_q 
            = vlSelfRef.core_tb__DOT__dut__DOT__mac_array_clk_en;
    }
    vlSelfRef.core_tb__DOT__dut__DOT__mac_array_clk 
        = ((IData)(vlSelfRef.core_tb__DOT__clk) & (IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__3__KET____DOT__u_clkgate__DOT__en_q));
    vlSelfRef.core_tb__DOT__dut__DOT__ofifo_clk_en 
        = ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__ofifo_clk_en_pre) 
           | ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__5__KET____DOT__sync_inst__DOT__sync_r) 
              >> 1U));
    vlSelfRef.core_tb__DOT__dut__DOT__psum_sram_clk_en 
        = ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__psum_sram_clk_en_pre) 
           | ((IData)(vlSelfRef.core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__1__KET____DOT__sync_inst__DOT__sync_r) 
              >> 1U));
    if ((1U & (~ (IData)(vlSelfRef.core_tb__DOT__clk)))) {
        vlSelfRef.core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__0__KET____DOT__u_clkgate__DOT__en_q 
            = vlSelfRef.core_tb__DOT__dut__DOT__sfu_clk_en;
        vlSelfRef.core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__2__KET____DOT__u_clkgate__DOT__en_q 
            = vlSelfRef.core_tb__DOT__dut__DOT__l0_clk_en;
        vlSelfRef.core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__1__KET____DOT__u_clkgate__DOT__en_q 
            = vlSelfRef.core_tb__DOT__dut__DOT__ofifo_clk_en;
        vlSelfRef.core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__4__KET____DOT__u_clkgate__DOT__en_q 
            = vlSelfRef.core_tb__DOT__dut__DOT__psum_sram_clk_en;
    }
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

VL_ATTR_COLD void Vcore_tb___024root___eval_triggers__stl(Vcore_tb___024root* vlSelf);
VL_ATTR_COLD void Vcore_tb___024root___eval_stl(Vcore_tb___024root* vlSelf);

VL_ATTR_COLD bool Vcore_tb___024root___eval_phase__stl(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___eval_phase__stl\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcore_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vcore_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore_tb___024root___dump_triggers__act(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___dump_triggers__act\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge core_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge core_tb.dut.weights_sram_clk)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge core_tb.dut.l0_clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(posedge core_tb.dut.mac_array_clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge core_tb.dut.sfu_clk)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @(posedge core_tb.dut.ofifo_clk)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @(posedge core_tb.dut.psum_sram_clk)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @( (~ core_tb.dut.wsc_controller_active))\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore_tb___024root___dump_triggers__nba(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___dump_triggers__nba\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge core_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge core_tb.dut.weights_sram_clk)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge core_tb.dut.l0_clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(posedge core_tb.dut.mac_array_clk)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge core_tb.dut.sfu_clk)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @(posedge core_tb.dut.ofifo_clk)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @(posedge core_tb.dut.psum_sram_clk)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @( (~ core_tb.dut.wsc_controller_active))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcore_tb___024root____Vm_traceActivitySetAll(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root____Vm_traceActivitySetAll\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
    vlSelfRef.__Vm_traceActivity[5U] = 1U;
    vlSelfRef.__Vm_traceActivity[6U] = 1U;
    vlSelfRef.__Vm_traceActivity[7U] = 1U;
    vlSelfRef.__Vm_traceActivity[8U] = 1U;
    vlSelfRef.__Vm_traceActivity[9U] = 1U;
    vlSelfRef.__Vm_traceActivity[0xaU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xbU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xcU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xdU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xeU] = 1U;
    vlSelfRef.__Vm_traceActivity[0xfU] = 1U;
    vlSelfRef.__Vm_traceActivity[0x10U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x11U] = 1U;
    vlSelfRef.__Vm_traceActivity[0x12U] = 1U;
}

VL_ATTR_COLD void Vcore_tb___024root___ctor_var_reset(Vcore_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore_tb___024root___ctor_var_reset\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->core_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__reset = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__D_xmem = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 9; ++__Vi1) {
            vlSelf->core_tb__DOT__weights_to_load[__Vi0][__Vi1] = VL_RAND_RESET_I(4);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->core_tb__DOT__activations_to_load[__Vi0][__Vi1] = VL_RAND_RESET_I(4);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 324; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->core_tb__DOT__expected_psums[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 8; ++__Vi1) {
            vlSelf->core_tb__DOT__expected_outputs[__Vi0][__Vi1] = VL_RAND_RESET_I(16);
        }
    }
    vlSelf->core_tb__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__debug_mode = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__start_controller = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__activation_weight_mem_load = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__psum_memory_rd_enable = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__sram_mem_addr = VL_RAND_RESET_I(11);
    vlSelf->core_tb__DOT__initialize_activations_from_file__Vstatic__fd = 0;
    vlSelf->core_tb__DOT__initialize_activations_from_file__Vstatic__n_idx = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__initialize_activations_from_file__Vstatic__c = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__initialize_activations_from_file__Vstatic__word32 = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__initialize_activations_from_file__Vstatic__nibble = VL_RAND_RESET_I(4);
    vlSelf->core_tb__DOT__initialize_activations_from_file__Vstatic__rc = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__initialize_weights_from_file__Vstatic__fd = 0;
    vlSelf->core_tb__DOT__initialize_weights_from_file__Vstatic__col_idx = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__initialize_weights_from_file__Vstatic__r = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__initialize_weights_from_file__Vstatic__word32 = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__initialize_weights_from_file__Vstatic__nibble = VL_RAND_RESET_I(4);
    vlSelf->core_tb__DOT__initialize_weights_from_file__Vstatic__rc = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__calculate_expected_outputs__Vstatic__o_nij = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__calculate_expected_outputs__Vstatic__kij = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__calculate_expected_outputs__Vstatic__o_ch = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__calculate_expected_outputs__Vstatic__n_idx = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__calculate_expected_outputs__Vstatic__idx = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__calculate_expected_outputs__Vstatic__o_ni_dim = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__calculate_expected_outputs__Vstatic__a_pad_ni_dim = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__calculate_expected_outputs__Vstatic__ki_dim = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__calculate_expected_psums__Vstatic__k = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__calculate_expected_psums__Vstatic__n = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__calculate_expected_psums__Vstatic__o_ch = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__calculate_expected_psums__Vstatic__i_ch = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__calculate_expected_psums__Vstatic__idx = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__calculate_expected_psums__Vstatic__mult = VL_RAND_RESET_I(16);
    vlSelf->core_tb__DOT__calculate_expected_psums__Vstatic__a_ext = VL_RAND_RESET_I(16);
    vlSelf->core_tb__DOT__calculate_expected_psums__Vstatic__w_ext = VL_RAND_RESET_I(16);
    vlSelf->core_tb__DOT__check_expected_psums__Vstatic__p_idx = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__check_expected_psums__Vstatic__col_idx = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__check_expected_psums__Vstatic__num_errors = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__check_expected_psums__Vstatic__actual = VL_RAND_RESET_I(16);
    vlSelf->core_tb__DOT__check_expected_psums__Vstatic__expected = VL_RAND_RESET_I(16);
    vlSelf->core_tb__DOT__check_expected_outputs__Vstatic__p_idx = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__check_expected_outputs__Vstatic__col_idx = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__check_expected_outputs__Vstatic__num_errors = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__check_expected_outputs__Vstatic__actual = VL_RAND_RESET_I(16);
    vlSelf->core_tb__DOT__check_expected_outputs__Vstatic__expected = VL_RAND_RESET_I(16);
    vlSelf->core_tb__DOT__initialize_activations__Vstatic__a_row_idx = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__initialize_activations__Vstatic__a_col_idx = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__initialize_activations__Vstatic__a_ic = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__initialize_activations__Vstatic__N = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__initialize_activations__Vstatic__val = VL_RAND_RESET_I(4);
    vlSelf->core_tb__DOT__check_loaded_weights__Vstatic__row_idx = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__check_loaded_weights__Vstatic__col_idx = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__check_loaded_weights__Vstatic__idx = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__check_loaded_weights__Vstatic__errors = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__check_loaded_weights__Vstatic__expected = VL_RAND_RESET_I(4);
    vlSelf->core_tb__DOT__check_loaded_weights__Vstatic__actual = VL_RAND_RESET_I(4);
    vlSelf->core_tb__DOT__initialize_weights__Vstatic__k = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__initialize_weights__Vstatic__i_ch = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__initialize_weights__Vstatic__o_ch = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__initialize_weights__Vstatic__idx = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__initialize_weights__Vstatic__val = VL_RAND_RESET_I(4);
    vlSelf->core_tb__DOT__write_activation_sram__Vstatic__r = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__write_activation_sram__Vstatic__c = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__write_activation_sram__Vstatic__r_max = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__write_activation_sram__Vstatic__c_max = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__write_activation_sram__Vstatic__packed_row = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__write_activation_sram__Vstatic__addr = VL_RAND_RESET_I(11);
    vlSelf->core_tb__DOT____Vlvbound_hf547bbe8__0 = VL_RAND_RESET_I(16);
    vlSelf->core_tb__DOT____Vlvbound_hf547bbe8__1 = VL_RAND_RESET_I(16);
    vlSelf->core_tb__DOT____Vlvbound_h6ec3b766__0 = VL_RAND_RESET_I(4);
    vlSelf->core_tb__DOT____Vlvbound_h6ec3b766__1 = VL_RAND_RESET_I(4);
    vlSelf->core_tb__DOT____Vlvbound_hbf23a7b1__0 = VL_RAND_RESET_I(4);
    vlSelf->core_tb__DOT__dut__DOT__l0_in = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(128, vlSelf->core_tb__DOT__dut__DOT__Q_out);
    VL_RAND_RESET_W(128, vlSelf->core_tb__DOT__dut__DOT__ofifo_sram_in);
    vlSelf->core_tb__DOT__dut__DOT__wsc_execute = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__wsc_load = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__wsc_l0_rd = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__wsc_l0_wr = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__wsc_controller_active = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__wsc_ofifo_rd = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__wsc_sfu_start = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__wsc_mac_reset = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__wsc_ld_mode = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__wsc_flush_ptr = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__corelet_sfu_active = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__corelet_sfu_active_to_mem = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__corelet_psum_mem_addr = VL_RAND_RESET_I(11);
    vlSelf->core_tb__DOT__dut__DOT__corelet_psum_mem_wr = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__corelet_psum_mem_rd = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__CEN_pmem = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__WEN_pmem = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__A_pmem = VL_RAND_RESET_I(11);
    vlSelf->core_tb__DOT__dut__DOT__A_xmem = VL_RAND_RESET_I(11);
    vlSelf->core_tb__DOT__dut__DOT__ofifo_rd_q = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__l0_wr_q = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__weights_sram_clk_en = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__psum_sram_clk_en = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__mac_array_clk_en = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__l0_clk_en = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__ofifo_clk_en = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__sfu_clk_en = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__weights_sram_clk = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__psum_sram_clk = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__mac_array_clk = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__l0_clk = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__ofifo_clk = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__sfu_clk = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT____Vcellinp__u_activation_sram__CEN = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__gp_counter = VL_RAND_RESET_I(11);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_gp_counter = VL_RAND_RESET_I(11);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kij_counter = VL_RAND_RESET_I(8);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_kij_counter = VL_RAND_RESET_I(8);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__prev_state = VL_RAND_RESET_I(3);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_state = VL_RAND_RESET_I(3);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_prev_state = VL_RAND_RESET_I(3);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_l0_rd = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__next_l0_wr = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kernel_load_from_mem_done = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__kernel_load_to_mac_done = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__act_load_from_mem_done = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__last_weight_load_addr = VL_RAND_RESET_I(8);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__last_psum_address = VL_RAND_RESET_I(11);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__start_psum_gp_counter = VL_RAND_RESET_I(11);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__ofifo_rd_q = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(320, vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__state_name_str);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__weights_sram_clk_en_pre = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__psum_sram_clk_en_pre = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__mac_array_clk_en_pre = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__l0_clk_en_pre = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__sfu_clk_en_pre = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__ofifo_clk_en_pre = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__0__KET____DOT__sync_inst__DOT__sync_r = VL_RAND_RESET_I(2);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__0__KET____DOT__sync_inst__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__1__KET____DOT__sync_inst__DOT__sync_r = VL_RAND_RESET_I(2);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__1__KET____DOT__sync_inst__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__2__KET____DOT__sync_inst__DOT__sync_r = VL_RAND_RESET_I(2);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__2__KET____DOT__sync_inst__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__3__KET____DOT__sync_inst__DOT__sync_r = VL_RAND_RESET_I(2);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__3__KET____DOT__sync_inst__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__4__KET____DOT__sync_inst__DOT__sync_r = VL_RAND_RESET_I(2);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__4__KET____DOT__sync_inst__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__5__KET____DOT__sync_inst__DOT__sync_r = VL_RAND_RESET_I(2);
    vlSelf->core_tb__DOT__dut__DOT__u_wsc_inst__DOT__SYNC_GEN__BRA__5__KET____DOT__sync_inst__DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65536, vlSelf->core_tb__DOT__dut__DOT__u_activation_sram__DOT__memory);
    vlSelf->core_tb__DOT__dut__DOT__u_activation_sram__DOT__add_q = VL_RAND_RESET_I(11);
    vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT__sfu_valid_out = VL_RAND_RESET_I(8);
    vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__inst_w = VL_RAND_RESET_I(2);
    vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT____Vcellinp__u_mac_array__reset = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__rd_en = VL_RAND_RESET_I(8);
    vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__flush_ptr_en = VL_RAND_RESET_I(8);
    vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp = VL_RAND_RESET_I(16);
    vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__valid_temp = VL_RAND_RESET_Q(64);
    vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_state = VL_RAND_RESET_I(3);
    vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_sfu_op_state = VL_RAND_RESET_I(3);
    vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op = VL_RAND_RESET_I(2);
    vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_sfu_op = VL_RAND_RESET_I(2);
    vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_delayed = VL_RAND_RESET_I(2);
    vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_row = VL_RAND_RESET_I(4);
    vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_col = VL_RAND_RESET_I(4);
    vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_row = VL_RAND_RESET_I(4);
    vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_kij_col = VL_RAND_RESET_I(4);
    vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__curr_oij_idx = VL_RAND_RESET_I(8);
    vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_addr = VL_RAND_RESET_I(11);
    vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__start_psum_addr = VL_RAND_RESET_I(11);
    vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_wr_enable = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__next_psum_mem_rd_enable = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(320, vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__state_name_str);
    VL_RAND_RESET_W(320, vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_ctrl_inst__DOT__sfu_op_delyayed_str);
    vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__1__KET____DOT__sfu_inst__DOT__acc = VL_RAND_RESET_I(16);
    vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__2__KET____DOT__sfu_inst__DOT__acc = VL_RAND_RESET_I(16);
    vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__3__KET____DOT__sfu_inst__DOT__acc = VL_RAND_RESET_I(16);
    vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__4__KET____DOT__sfu_inst__DOT__acc = VL_RAND_RESET_I(16);
    vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__5__KET____DOT__sfu_inst__DOT__acc = VL_RAND_RESET_I(16);
    vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__6__KET____DOT__sfu_inst__DOT__acc = VL_RAND_RESET_I(16);
    vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__7__KET____DOT__sfu_inst__DOT__acc = VL_RAND_RESET_I(16);
    vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_sfu_array__DOT__sfu_array__BRA__8__KET____DOT__sfu_inst__DOT__acc = VL_RAND_RESET_I(16);
    vlSelf->core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__rd_en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(262144, vlSelf->core_tb__DOT__dut__DOT__u_psum_sram__DOT__memory);
    vlSelf->core_tb__DOT__dut__DOT__u_psum_sram__DOT__add_q = VL_RAND_RESET_I(11);
    vlSelf->core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__gated_clks = VL_RAND_RESET_I(6);
    vlSelf->core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__0__KET____DOT__u_clkgate__DOT__en_q = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__1__KET____DOT__u_clkgate__DOT__en_q = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__2__KET____DOT__u_clkgate__DOT__en_q = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__3__KET____DOT__u_clkgate__DOT__en_q = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__4__KET____DOT__u_clkgate__DOT__en_q = VL_RAND_RESET_I(1);
    vlSelf->core_tb__DOT__dut__DOT__u_core_clk_gating_controller__DOT__clk_gate_gen__BRA__5__KET____DOT__u_clkgate__DOT__en_q = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__rd_en = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__flush_ptr_en = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__inst_w_temp = VL_RAND_RESET_I(16);
    vlSelf->__Vtrigprevexpr___TOP__core_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__core_tb__DOT__dut__DOT__weights_sram_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__core_tb__DOT__dut__DOT__l0_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__core_tb__DOT__dut__DOT__mac_array_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__core_tb__DOT__dut__DOT__sfu_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__core_tb__DOT__dut__DOT__ofifo_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__core_tb__DOT__dut__DOT__psum_sram_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr_h392c4882__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 19; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
