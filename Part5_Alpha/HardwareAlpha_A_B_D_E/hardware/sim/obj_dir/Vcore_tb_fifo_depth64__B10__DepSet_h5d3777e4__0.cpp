// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_tb.h for the primary calling header

#include "Vcore_tb__pch.h"
#include "Vcore_tb__Syms.h"
#include "Vcore_tb_fifo_depth64__B10.h"

VL_INLINE_OPT void Vcore_tb_fifo_depth64__B10___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__0__KET____DOT__fifo_instance__0(Vcore_tb_fifo_depth64__B10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_tb_fifo_depth64__B10___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__0__KET____DOT__fifo_instance__0\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    CData/*6:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    // Body
    __Vdly__wr_ptr = vlSelfRef.__PVT__wr_ptr;
    __Vdly__rd_ptr = vlSelfRef.__PVT__rd_ptr;
    if (vlSymsp->TOP.core_tb__DOT__reset) {
        __Vdly__rd_ptr = 0U;
        __Vdly__wr_ptr = 0U;
    } else {
        if (((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.__PVT__empty)))) {
            __Vdly__rd_ptr = (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__rd_ptr)));
        }
        if ((1U & ((IData)(vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.valid) 
                   & (~ (IData)(vlSelfRef.__PVT__full))))) {
            __Vdly__wr_ptr = (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__wr_ptr)));
        }
        if ((1U & (IData)(vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.valid))) {
            if ((0x20U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                    vlSelfRef.__PVT__q63 
                                        = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                                } else {
                                    vlSelfRef.__PVT__q62 
                                        = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                                }
                            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q61 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                            } else {
                                vlSelfRef.__PVT__q60 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                            }
                        } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q59 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                            } else {
                                vlSelfRef.__PVT__q58 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q57 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                        } else {
                            vlSelfRef.__PVT__q56 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q55 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                            } else {
                                vlSelfRef.__PVT__q54 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q53 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                        } else {
                            vlSelfRef.__PVT__q52 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q51 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                        } else {
                            vlSelfRef.__PVT__q50 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q49 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                    } else {
                        vlSelfRef.__PVT__q48 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q47 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                            } else {
                                vlSelfRef.__PVT__q46 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q45 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                        } else {
                            vlSelfRef.__PVT__q44 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q43 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                        } else {
                            vlSelfRef.__PVT__q42 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q41 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                    } else {
                        vlSelfRef.__PVT__q40 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q39 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                        } else {
                            vlSelfRef.__PVT__q38 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q37 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                    } else {
                        vlSelfRef.__PVT__q36 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q35 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                    } else {
                        vlSelfRef.__PVT__q34 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q33 = (0xffffU 
                                            & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                } else {
                    vlSelfRef.__PVT__q32 = (0xffffU 
                                            & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                }
            } else if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q31 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                            } else {
                                vlSelfRef.__PVT__q30 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q29 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                        } else {
                            vlSelfRef.__PVT__q28 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q27 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                        } else {
                            vlSelfRef.__PVT__q26 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q25 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                    } else {
                        vlSelfRef.__PVT__q24 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q23 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                        } else {
                            vlSelfRef.__PVT__q22 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q21 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                    } else {
                        vlSelfRef.__PVT__q20 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q19 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                    } else {
                        vlSelfRef.__PVT__q18 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q17 = (0xffffU 
                                            & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                } else {
                    vlSelfRef.__PVT__q16 = (0xffffU 
                                            & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q15 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                        } else {
                            vlSelfRef.__PVT__q14 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q13 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                    } else {
                        vlSelfRef.__PVT__q12 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q11 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                    } else {
                        vlSelfRef.__PVT__q10 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q9 = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                } else {
                    vlSelfRef.__PVT__q8 = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q7 = (0xffffU 
                                               & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                    } else {
                        vlSelfRef.__PVT__q6 = (0xffffU 
                                               & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q5 = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                } else {
                    vlSelfRef.__PVT__q4 = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q3 = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                } else {
                    vlSelfRef.__PVT__q2 = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                vlSelfRef.__PVT__q1 = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
            } else {
                vlSelfRef.__PVT__q0 = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U]);
            }
        }
    }
    vlSelfRef.__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelfRef.__PVT__wr_ptr = __Vdly__wr_ptr;
    vlSelfRef.__PVT__full = (((0x3fU & (IData)(vlSelfRef.__PVT__wr_ptr)) 
                              == (0x3fU & (IData)(vlSelfRef.__PVT__rd_ptr))) 
                             & ((1U & ((IData)(vlSelfRef.__PVT__wr_ptr) 
                                       >> 6U)) != (1U 
                                                   & ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                                      >> 6U))));
}

VL_INLINE_OPT void Vcore_tb_fifo_depth64__B10___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__1__KET____DOT__fifo_instance__0(Vcore_tb_fifo_depth64__B10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_tb_fifo_depth64__B10___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__1__KET____DOT__fifo_instance__0\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    CData/*6:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    // Body
    __Vdly__wr_ptr = vlSelfRef.__PVT__wr_ptr;
    __Vdly__rd_ptr = vlSelfRef.__PVT__rd_ptr;
    if (vlSymsp->TOP.core_tb__DOT__reset) {
        __Vdly__rd_ptr = 0U;
        __Vdly__wr_ptr = 0U;
    } else {
        if (((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.__PVT__empty)))) {
            __Vdly__rd_ptr = (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__rd_ptr)));
        }
        if ((1U & (((IData)(vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.valid) 
                    >> 1U) & (~ (IData)(vlSelfRef.__PVT__full))))) {
            __Vdly__wr_ptr = (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__wr_ptr)));
        }
        if ((2U & (IData)(vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.valid))) {
            if ((0x20U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                    vlSelfRef.__PVT__q63 
                                        = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                           >> 0x10U);
                                } else {
                                    vlSelfRef.__PVT__q62 
                                        = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                           >> 0x10U);
                                }
                            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q61 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                       >> 0x10U);
                            } else {
                                vlSelfRef.__PVT__q60 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                       >> 0x10U);
                            }
                        } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q59 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                       >> 0x10U);
                            } else {
                                vlSelfRef.__PVT__q58 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                       >> 0x10U);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q57 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q56 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                 >> 0x10U);
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q55 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                       >> 0x10U);
                            } else {
                                vlSelfRef.__PVT__q54 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                       >> 0x10U);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q53 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q52 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                 >> 0x10U);
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q51 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q50 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                 >> 0x10U);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q49 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q48 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                                >> 0x10U);
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q47 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                       >> 0x10U);
                            } else {
                                vlSelfRef.__PVT__q46 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                       >> 0x10U);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q45 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q44 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                 >> 0x10U);
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q43 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q42 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                 >> 0x10U);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q41 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q40 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                                >> 0x10U);
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q39 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q38 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                 >> 0x10U);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q37 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q36 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                                >> 0x10U);
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q35 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q34 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                                >> 0x10U);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q33 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                            >> 0x10U);
                } else {
                    vlSelfRef.__PVT__q32 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                            >> 0x10U);
                }
            } else if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q31 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                       >> 0x10U);
                            } else {
                                vlSelfRef.__PVT__q30 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                       >> 0x10U);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q29 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q28 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                 >> 0x10U);
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q27 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q26 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                 >> 0x10U);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q25 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q24 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                                >> 0x10U);
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q23 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q22 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                 >> 0x10U);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q21 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q20 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                                >> 0x10U);
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q19 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q18 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                                >> 0x10U);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q17 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                            >> 0x10U);
                } else {
                    vlSelfRef.__PVT__q16 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                            >> 0x10U);
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q15 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q14 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                 >> 0x10U);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q13 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q12 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                                >> 0x10U);
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q11 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q10 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                                >> 0x10U);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q9 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                           >> 0x10U);
                } else {
                    vlSelfRef.__PVT__q8 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                           >> 0x10U);
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q7 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                               >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q6 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                               >> 0x10U);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q5 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                           >> 0x10U);
                } else {
                    vlSelfRef.__PVT__q4 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                           >> 0x10U);
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q3 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                           >> 0x10U);
                } else {
                    vlSelfRef.__PVT__q2 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                           >> 0x10U);
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                vlSelfRef.__PVT__q1 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                       >> 0x10U);
            } else {
                vlSelfRef.__PVT__q0 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[0U] 
                                       >> 0x10U);
            }
        }
    }
    vlSelfRef.__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelfRef.__PVT__wr_ptr = __Vdly__wr_ptr;
    vlSelfRef.__PVT__full = (((0x3fU & (IData)(vlSelfRef.__PVT__wr_ptr)) 
                              == (0x3fU & (IData)(vlSelfRef.__PVT__rd_ptr))) 
                             & ((1U & ((IData)(vlSelfRef.__PVT__wr_ptr) 
                                       >> 6U)) != (1U 
                                                   & ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                                      >> 6U))));
}

VL_INLINE_OPT void Vcore_tb_fifo_depth64__B10___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__2__KET____DOT__fifo_instance__0(Vcore_tb_fifo_depth64__B10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_tb_fifo_depth64__B10___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__2__KET____DOT__fifo_instance__0\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    CData/*6:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    // Body
    __Vdly__wr_ptr = vlSelfRef.__PVT__wr_ptr;
    __Vdly__rd_ptr = vlSelfRef.__PVT__rd_ptr;
    if (vlSymsp->TOP.core_tb__DOT__reset) {
        __Vdly__rd_ptr = 0U;
        __Vdly__wr_ptr = 0U;
    } else {
        if (((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.__PVT__empty)))) {
            __Vdly__rd_ptr = (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__rd_ptr)));
        }
        if ((1U & (((IData)(vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.valid) 
                    >> 2U) & (~ (IData)(vlSelfRef.__PVT__full))))) {
            __Vdly__wr_ptr = (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__wr_ptr)));
        }
        if ((4U & (IData)(vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.valid))) {
            if ((0x20U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                    vlSelfRef.__PVT__q63 
                                        = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                                } else {
                                    vlSelfRef.__PVT__q62 
                                        = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                                }
                            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q61 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                            } else {
                                vlSelfRef.__PVT__q60 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                            }
                        } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q59 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                            } else {
                                vlSelfRef.__PVT__q58 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q57 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                        } else {
                            vlSelfRef.__PVT__q56 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q55 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                            } else {
                                vlSelfRef.__PVT__q54 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q53 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                        } else {
                            vlSelfRef.__PVT__q52 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q51 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                        } else {
                            vlSelfRef.__PVT__q50 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q49 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                    } else {
                        vlSelfRef.__PVT__q48 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q47 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                            } else {
                                vlSelfRef.__PVT__q46 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q45 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                        } else {
                            vlSelfRef.__PVT__q44 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q43 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                        } else {
                            vlSelfRef.__PVT__q42 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q41 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                    } else {
                        vlSelfRef.__PVT__q40 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q39 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                        } else {
                            vlSelfRef.__PVT__q38 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q37 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                    } else {
                        vlSelfRef.__PVT__q36 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q35 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                    } else {
                        vlSelfRef.__PVT__q34 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q33 = (0xffffU 
                                            & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                } else {
                    vlSelfRef.__PVT__q32 = (0xffffU 
                                            & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                }
            } else if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q31 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                            } else {
                                vlSelfRef.__PVT__q30 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q29 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                        } else {
                            vlSelfRef.__PVT__q28 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q27 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                        } else {
                            vlSelfRef.__PVT__q26 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q25 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                    } else {
                        vlSelfRef.__PVT__q24 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q23 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                        } else {
                            vlSelfRef.__PVT__q22 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q21 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                    } else {
                        vlSelfRef.__PVT__q20 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q19 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                    } else {
                        vlSelfRef.__PVT__q18 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q17 = (0xffffU 
                                            & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                } else {
                    vlSelfRef.__PVT__q16 = (0xffffU 
                                            & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q15 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                        } else {
                            vlSelfRef.__PVT__q14 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q13 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                    } else {
                        vlSelfRef.__PVT__q12 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q11 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                    } else {
                        vlSelfRef.__PVT__q10 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q9 = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                } else {
                    vlSelfRef.__PVT__q8 = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q7 = (0xffffU 
                                               & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                    } else {
                        vlSelfRef.__PVT__q6 = (0xffffU 
                                               & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q5 = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                } else {
                    vlSelfRef.__PVT__q4 = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q3 = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                } else {
                    vlSelfRef.__PVT__q2 = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                vlSelfRef.__PVT__q1 = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
            } else {
                vlSelfRef.__PVT__q0 = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U]);
            }
        }
    }
    vlSelfRef.__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelfRef.__PVT__wr_ptr = __Vdly__wr_ptr;
    vlSelfRef.__PVT__full = (((0x3fU & (IData)(vlSelfRef.__PVT__wr_ptr)) 
                              == (0x3fU & (IData)(vlSelfRef.__PVT__rd_ptr))) 
                             & ((1U & ((IData)(vlSelfRef.__PVT__wr_ptr) 
                                       >> 6U)) != (1U 
                                                   & ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                                      >> 6U))));
}

VL_INLINE_OPT void Vcore_tb_fifo_depth64__B10___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__3__KET____DOT__fifo_instance__0(Vcore_tb_fifo_depth64__B10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_tb_fifo_depth64__B10___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__3__KET____DOT__fifo_instance__0\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    CData/*6:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    // Body
    __Vdly__wr_ptr = vlSelfRef.__PVT__wr_ptr;
    __Vdly__rd_ptr = vlSelfRef.__PVT__rd_ptr;
    if (vlSymsp->TOP.core_tb__DOT__reset) {
        __Vdly__rd_ptr = 0U;
        __Vdly__wr_ptr = 0U;
    } else {
        if (((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.__PVT__empty)))) {
            __Vdly__rd_ptr = (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__rd_ptr)));
        }
        if ((1U & (((IData)(vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.valid) 
                    >> 3U) & (~ (IData)(vlSelfRef.__PVT__full))))) {
            __Vdly__wr_ptr = (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__wr_ptr)));
        }
        if ((8U & (IData)(vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.valid))) {
            if ((0x20U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                    vlSelfRef.__PVT__q63 
                                        = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                           >> 0x10U);
                                } else {
                                    vlSelfRef.__PVT__q62 
                                        = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                           >> 0x10U);
                                }
                            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q61 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                       >> 0x10U);
                            } else {
                                vlSelfRef.__PVT__q60 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                       >> 0x10U);
                            }
                        } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q59 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                       >> 0x10U);
                            } else {
                                vlSelfRef.__PVT__q58 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                       >> 0x10U);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q57 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q56 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                 >> 0x10U);
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q55 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                       >> 0x10U);
                            } else {
                                vlSelfRef.__PVT__q54 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                       >> 0x10U);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q53 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q52 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                 >> 0x10U);
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q51 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q50 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                 >> 0x10U);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q49 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q48 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                                >> 0x10U);
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q47 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                       >> 0x10U);
                            } else {
                                vlSelfRef.__PVT__q46 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                       >> 0x10U);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q45 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q44 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                 >> 0x10U);
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q43 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q42 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                 >> 0x10U);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q41 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q40 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                                >> 0x10U);
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q39 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q38 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                 >> 0x10U);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q37 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q36 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                                >> 0x10U);
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q35 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q34 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                                >> 0x10U);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q33 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                            >> 0x10U);
                } else {
                    vlSelfRef.__PVT__q32 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                            >> 0x10U);
                }
            } else if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q31 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                       >> 0x10U);
                            } else {
                                vlSelfRef.__PVT__q30 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                       >> 0x10U);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q29 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q28 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                 >> 0x10U);
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q27 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q26 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                 >> 0x10U);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q25 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q24 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                                >> 0x10U);
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q23 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q22 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                 >> 0x10U);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q21 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q20 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                                >> 0x10U);
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q19 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q18 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                                >> 0x10U);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q17 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                            >> 0x10U);
                } else {
                    vlSelfRef.__PVT__q16 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                            >> 0x10U);
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q15 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q14 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                 >> 0x10U);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q13 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q12 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                                >> 0x10U);
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q11 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q10 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                                >> 0x10U);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q9 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                           >> 0x10U);
                } else {
                    vlSelfRef.__PVT__q8 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                           >> 0x10U);
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q7 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                               >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q6 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                               >> 0x10U);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q5 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                           >> 0x10U);
                } else {
                    vlSelfRef.__PVT__q4 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                           >> 0x10U);
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q3 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                           >> 0x10U);
                } else {
                    vlSelfRef.__PVT__q2 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                           >> 0x10U);
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                vlSelfRef.__PVT__q1 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                       >> 0x10U);
            } else {
                vlSelfRef.__PVT__q0 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[1U] 
                                       >> 0x10U);
            }
        }
    }
    vlSelfRef.__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelfRef.__PVT__wr_ptr = __Vdly__wr_ptr;
    vlSelfRef.__PVT__full = (((0x3fU & (IData)(vlSelfRef.__PVT__wr_ptr)) 
                              == (0x3fU & (IData)(vlSelfRef.__PVT__rd_ptr))) 
                             & ((1U & ((IData)(vlSelfRef.__PVT__wr_ptr) 
                                       >> 6U)) != (1U 
                                                   & ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                                      >> 6U))));
}

VL_INLINE_OPT void Vcore_tb_fifo_depth64__B10___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__4__KET____DOT__fifo_instance__0(Vcore_tb_fifo_depth64__B10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_tb_fifo_depth64__B10___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__4__KET____DOT__fifo_instance__0\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    CData/*6:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    // Body
    __Vdly__wr_ptr = vlSelfRef.__PVT__wr_ptr;
    __Vdly__rd_ptr = vlSelfRef.__PVT__rd_ptr;
    if (vlSymsp->TOP.core_tb__DOT__reset) {
        __Vdly__rd_ptr = 0U;
        __Vdly__wr_ptr = 0U;
    } else {
        if (((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.__PVT__empty)))) {
            __Vdly__rd_ptr = (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__rd_ptr)));
        }
        if ((1U & (((IData)(vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.valid) 
                    >> 4U) & (~ (IData)(vlSelfRef.__PVT__full))))) {
            __Vdly__wr_ptr = (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__wr_ptr)));
        }
        if ((0x10U & (IData)(vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.valid))) {
            if ((0x20U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                    vlSelfRef.__PVT__q63 
                                        = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                                } else {
                                    vlSelfRef.__PVT__q62 
                                        = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                                }
                            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q61 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                            } else {
                                vlSelfRef.__PVT__q60 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                            }
                        } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q59 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                            } else {
                                vlSelfRef.__PVT__q58 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q57 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                        } else {
                            vlSelfRef.__PVT__q56 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q55 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                            } else {
                                vlSelfRef.__PVT__q54 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q53 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                        } else {
                            vlSelfRef.__PVT__q52 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q51 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                        } else {
                            vlSelfRef.__PVT__q50 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q49 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                    } else {
                        vlSelfRef.__PVT__q48 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q47 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                            } else {
                                vlSelfRef.__PVT__q46 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q45 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                        } else {
                            vlSelfRef.__PVT__q44 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q43 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                        } else {
                            vlSelfRef.__PVT__q42 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q41 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                    } else {
                        vlSelfRef.__PVT__q40 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q39 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                        } else {
                            vlSelfRef.__PVT__q38 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q37 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                    } else {
                        vlSelfRef.__PVT__q36 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q35 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                    } else {
                        vlSelfRef.__PVT__q34 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q33 = (0xffffU 
                                            & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                } else {
                    vlSelfRef.__PVT__q32 = (0xffffU 
                                            & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                }
            } else if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q31 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                            } else {
                                vlSelfRef.__PVT__q30 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q29 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                        } else {
                            vlSelfRef.__PVT__q28 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q27 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                        } else {
                            vlSelfRef.__PVT__q26 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q25 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                    } else {
                        vlSelfRef.__PVT__q24 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q23 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                        } else {
                            vlSelfRef.__PVT__q22 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q21 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                    } else {
                        vlSelfRef.__PVT__q20 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q19 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                    } else {
                        vlSelfRef.__PVT__q18 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q17 = (0xffffU 
                                            & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                } else {
                    vlSelfRef.__PVT__q16 = (0xffffU 
                                            & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q15 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                        } else {
                            vlSelfRef.__PVT__q14 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q13 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                    } else {
                        vlSelfRef.__PVT__q12 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q11 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                    } else {
                        vlSelfRef.__PVT__q10 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q9 = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                } else {
                    vlSelfRef.__PVT__q8 = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q7 = (0xffffU 
                                               & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                    } else {
                        vlSelfRef.__PVT__q6 = (0xffffU 
                                               & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q5 = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                } else {
                    vlSelfRef.__PVT__q4 = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q3 = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                } else {
                    vlSelfRef.__PVT__q2 = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                vlSelfRef.__PVT__q1 = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
            } else {
                vlSelfRef.__PVT__q0 = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U]);
            }
        }
    }
    vlSelfRef.__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelfRef.__PVT__wr_ptr = __Vdly__wr_ptr;
    vlSelfRef.__PVT__full = (((0x3fU & (IData)(vlSelfRef.__PVT__wr_ptr)) 
                              == (0x3fU & (IData)(vlSelfRef.__PVT__rd_ptr))) 
                             & ((1U & ((IData)(vlSelfRef.__PVT__wr_ptr) 
                                       >> 6U)) != (1U 
                                                   & ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                                      >> 6U))));
}

VL_INLINE_OPT void Vcore_tb_fifo_depth64__B10___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__5__KET____DOT__fifo_instance__0(Vcore_tb_fifo_depth64__B10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_tb_fifo_depth64__B10___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__5__KET____DOT__fifo_instance__0\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    CData/*6:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    // Body
    __Vdly__wr_ptr = vlSelfRef.__PVT__wr_ptr;
    __Vdly__rd_ptr = vlSelfRef.__PVT__rd_ptr;
    if (vlSymsp->TOP.core_tb__DOT__reset) {
        __Vdly__rd_ptr = 0U;
        __Vdly__wr_ptr = 0U;
    } else {
        if (((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.__PVT__empty)))) {
            __Vdly__rd_ptr = (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__rd_ptr)));
        }
        if ((1U & (((IData)(vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.valid) 
                    >> 5U) & (~ (IData)(vlSelfRef.__PVT__full))))) {
            __Vdly__wr_ptr = (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__wr_ptr)));
        }
        if ((0x20U & (IData)(vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.valid))) {
            if ((0x20U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                    vlSelfRef.__PVT__q63 
                                        = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                           >> 0x10U);
                                } else {
                                    vlSelfRef.__PVT__q62 
                                        = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                           >> 0x10U);
                                }
                            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q61 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                       >> 0x10U);
                            } else {
                                vlSelfRef.__PVT__q60 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                       >> 0x10U);
                            }
                        } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q59 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                       >> 0x10U);
                            } else {
                                vlSelfRef.__PVT__q58 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                       >> 0x10U);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q57 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q56 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                 >> 0x10U);
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q55 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                       >> 0x10U);
                            } else {
                                vlSelfRef.__PVT__q54 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                       >> 0x10U);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q53 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q52 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                 >> 0x10U);
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q51 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q50 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                 >> 0x10U);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q49 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q48 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                                >> 0x10U);
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q47 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                       >> 0x10U);
                            } else {
                                vlSelfRef.__PVT__q46 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                       >> 0x10U);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q45 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q44 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                 >> 0x10U);
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q43 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q42 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                 >> 0x10U);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q41 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q40 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                                >> 0x10U);
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q39 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q38 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                 >> 0x10U);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q37 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q36 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                                >> 0x10U);
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q35 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q34 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                                >> 0x10U);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q33 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                            >> 0x10U);
                } else {
                    vlSelfRef.__PVT__q32 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                            >> 0x10U);
                }
            } else if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q31 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                       >> 0x10U);
                            } else {
                                vlSelfRef.__PVT__q30 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                       >> 0x10U);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q29 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q28 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                 >> 0x10U);
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q27 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q26 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                 >> 0x10U);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q25 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q24 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                                >> 0x10U);
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q23 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q22 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                 >> 0x10U);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q21 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q20 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                                >> 0x10U);
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q19 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q18 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                                >> 0x10U);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q17 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                            >> 0x10U);
                } else {
                    vlSelfRef.__PVT__q16 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                            >> 0x10U);
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q15 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q14 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                 >> 0x10U);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q13 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q12 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                                >> 0x10U);
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q11 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q10 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                                >> 0x10U);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q9 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                           >> 0x10U);
                } else {
                    vlSelfRef.__PVT__q8 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                           >> 0x10U);
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q7 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                               >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q6 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                               >> 0x10U);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q5 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                           >> 0x10U);
                } else {
                    vlSelfRef.__PVT__q4 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                           >> 0x10U);
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q3 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                           >> 0x10U);
                } else {
                    vlSelfRef.__PVT__q2 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                           >> 0x10U);
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                vlSelfRef.__PVT__q1 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                       >> 0x10U);
            } else {
                vlSelfRef.__PVT__q0 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[2U] 
                                       >> 0x10U);
            }
        }
    }
    vlSelfRef.__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelfRef.__PVT__wr_ptr = __Vdly__wr_ptr;
    vlSelfRef.__PVT__full = (((0x3fU & (IData)(vlSelfRef.__PVT__wr_ptr)) 
                              == (0x3fU & (IData)(vlSelfRef.__PVT__rd_ptr))) 
                             & ((1U & ((IData)(vlSelfRef.__PVT__wr_ptr) 
                                       >> 6U)) != (1U 
                                                   & ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                                      >> 6U))));
}

VL_INLINE_OPT void Vcore_tb_fifo_depth64__B10___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__6__KET____DOT__fifo_instance__0(Vcore_tb_fifo_depth64__B10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_tb_fifo_depth64__B10___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__6__KET____DOT__fifo_instance__0\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    CData/*6:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    // Body
    __Vdly__wr_ptr = vlSelfRef.__PVT__wr_ptr;
    __Vdly__rd_ptr = vlSelfRef.__PVT__rd_ptr;
    if (vlSymsp->TOP.core_tb__DOT__reset) {
        __Vdly__rd_ptr = 0U;
        __Vdly__wr_ptr = 0U;
    } else {
        if (((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.__PVT__empty)))) {
            __Vdly__rd_ptr = (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__rd_ptr)));
        }
        if ((1U & (((IData)(vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.valid) 
                    >> 6U) & (~ (IData)(vlSelfRef.__PVT__full))))) {
            __Vdly__wr_ptr = (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__wr_ptr)));
        }
        if ((0x40U & (IData)(vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.valid))) {
            if ((0x20U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                    vlSelfRef.__PVT__q63 
                                        = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                                } else {
                                    vlSelfRef.__PVT__q62 
                                        = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                                }
                            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q61 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                            } else {
                                vlSelfRef.__PVT__q60 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                            }
                        } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q59 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                            } else {
                                vlSelfRef.__PVT__q58 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q57 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                        } else {
                            vlSelfRef.__PVT__q56 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q55 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                            } else {
                                vlSelfRef.__PVT__q54 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q53 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                        } else {
                            vlSelfRef.__PVT__q52 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q51 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                        } else {
                            vlSelfRef.__PVT__q50 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q49 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                    } else {
                        vlSelfRef.__PVT__q48 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q47 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                            } else {
                                vlSelfRef.__PVT__q46 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q45 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                        } else {
                            vlSelfRef.__PVT__q44 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q43 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                        } else {
                            vlSelfRef.__PVT__q42 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q41 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                    } else {
                        vlSelfRef.__PVT__q40 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q39 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                        } else {
                            vlSelfRef.__PVT__q38 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q37 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                    } else {
                        vlSelfRef.__PVT__q36 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q35 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                    } else {
                        vlSelfRef.__PVT__q34 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q33 = (0xffffU 
                                            & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                } else {
                    vlSelfRef.__PVT__q32 = (0xffffU 
                                            & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                }
            } else if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q31 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                            } else {
                                vlSelfRef.__PVT__q30 
                                    = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q29 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                        } else {
                            vlSelfRef.__PVT__q28 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q27 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                        } else {
                            vlSelfRef.__PVT__q26 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q25 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                    } else {
                        vlSelfRef.__PVT__q24 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q23 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                        } else {
                            vlSelfRef.__PVT__q22 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q21 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                    } else {
                        vlSelfRef.__PVT__q20 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q19 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                    } else {
                        vlSelfRef.__PVT__q18 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q17 = (0xffffU 
                                            & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                } else {
                    vlSelfRef.__PVT__q16 = (0xffffU 
                                            & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q15 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                        } else {
                            vlSelfRef.__PVT__q14 = 
                                (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q13 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                    } else {
                        vlSelfRef.__PVT__q12 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q11 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                    } else {
                        vlSelfRef.__PVT__q10 = (0xffffU 
                                                & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q9 = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                } else {
                    vlSelfRef.__PVT__q8 = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q7 = (0xffffU 
                                               & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                    } else {
                        vlSelfRef.__PVT__q6 = (0xffffU 
                                               & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q5 = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                } else {
                    vlSelfRef.__PVT__q4 = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q3 = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                } else {
                    vlSelfRef.__PVT__q2 = (0xffffU 
                                           & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                vlSelfRef.__PVT__q1 = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
            } else {
                vlSelfRef.__PVT__q0 = (0xffffU & vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U]);
            }
        }
    }
    vlSelfRef.__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelfRef.__PVT__wr_ptr = __Vdly__wr_ptr;
    vlSelfRef.__PVT__full = (((0x3fU & (IData)(vlSelfRef.__PVT__wr_ptr)) 
                              == (0x3fU & (IData)(vlSelfRef.__PVT__rd_ptr))) 
                             & ((1U & ((IData)(vlSelfRef.__PVT__wr_ptr) 
                                       >> 6U)) != (1U 
                                                   & ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                                      >> 6U))));
}

VL_INLINE_OPT void Vcore_tb_fifo_depth64__B10___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__7__KET____DOT__fifo_instance__0(Vcore_tb_fifo_depth64__B10* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_tb_fifo_depth64__B10___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__7__KET____DOT__fifo_instance__0\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    CData/*6:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    // Body
    __Vdly__wr_ptr = vlSelfRef.__PVT__wr_ptr;
    __Vdly__rd_ptr = vlSelfRef.__PVT__rd_ptr;
    if (vlSymsp->TOP.core_tb__DOT__reset) {
        __Vdly__rd_ptr = 0U;
        __Vdly__wr_ptr = 0U;
    } else {
        if (((IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__rd_en) 
             & (~ (IData)(vlSelfRef.__PVT__empty)))) {
            __Vdly__rd_ptr = (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__rd_ptr)));
        }
        if ((IData)((((IData)(vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.valid) 
                      >> 7U) & (~ (IData)(vlSelfRef.__PVT__full))))) {
            __Vdly__wr_ptr = (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.__PVT__wr_ptr)));
        }
        if ((0x80U & (IData)(vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.valid))) {
            if ((0x20U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                    vlSelfRef.__PVT__q63 
                                        = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                           >> 0x10U);
                                } else {
                                    vlSelfRef.__PVT__q62 
                                        = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                           >> 0x10U);
                                }
                            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q61 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                       >> 0x10U);
                            } else {
                                vlSelfRef.__PVT__q60 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                       >> 0x10U);
                            }
                        } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q59 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                       >> 0x10U);
                            } else {
                                vlSelfRef.__PVT__q58 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                       >> 0x10U);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q57 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q56 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                 >> 0x10U);
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q55 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                       >> 0x10U);
                            } else {
                                vlSelfRef.__PVT__q54 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                       >> 0x10U);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q53 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q52 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                 >> 0x10U);
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q51 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q50 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                 >> 0x10U);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q49 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q48 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                                >> 0x10U);
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q47 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                       >> 0x10U);
                            } else {
                                vlSelfRef.__PVT__q46 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                       >> 0x10U);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q45 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q44 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                 >> 0x10U);
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q43 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q42 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                 >> 0x10U);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q41 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q40 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                                >> 0x10U);
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q39 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q38 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                 >> 0x10U);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q37 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q36 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                                >> 0x10U);
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q35 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q34 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                                >> 0x10U);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q33 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                            >> 0x10U);
                } else {
                    vlSelfRef.__PVT__q32 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                            >> 0x10U);
                }
            } else if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q31 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                       >> 0x10U);
                            } else {
                                vlSelfRef.__PVT__q30 
                                    = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                       >> 0x10U);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q29 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q28 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                 >> 0x10U);
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q27 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q26 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                 >> 0x10U);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q25 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q24 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                                >> 0x10U);
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q23 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q22 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                 >> 0x10U);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q21 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q20 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                                >> 0x10U);
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q19 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q18 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                                >> 0x10U);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q17 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                            >> 0x10U);
                } else {
                    vlSelfRef.__PVT__q16 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                            >> 0x10U);
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q15 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                 >> 0x10U);
                        } else {
                            vlSelfRef.__PVT__q14 = 
                                (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                 >> 0x10U);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q13 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q12 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                                >> 0x10U);
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q11 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                                >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q10 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                                >> 0x10U);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q9 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                           >> 0x10U);
                } else {
                    vlSelfRef.__PVT__q8 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                           >> 0x10U);
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q7 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                               >> 0x10U);
                    } else {
                        vlSelfRef.__PVT__q6 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                               >> 0x10U);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q5 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                           >> 0x10U);
                } else {
                    vlSelfRef.__PVT__q4 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                           >> 0x10U);
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q3 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                           >> 0x10U);
                } else {
                    vlSelfRef.__PVT__q2 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                           >> 0x10U);
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                vlSelfRef.__PVT__q1 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                       >> 0x10U);
            } else {
                vlSelfRef.__PVT__q0 = (vlSymsp->TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance.out_s[3U] 
                                       >> 0x10U);
            }
        }
    }
    vlSelfRef.__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelfRef.__PVT__wr_ptr = __Vdly__wr_ptr;
    vlSelfRef.__PVT__full = (((0x3fU & (IData)(vlSelfRef.__PVT__wr_ptr)) 
                              == (0x3fU & (IData)(vlSelfRef.__PVT__rd_ptr))) 
                             & ((1U & ((IData)(vlSelfRef.__PVT__wr_ptr) 
                                       >> 6U)) != (1U 
                                                   & ((IData)(vlSelfRef.__PVT__rd_ptr) 
                                                      >> 6U))));
}
