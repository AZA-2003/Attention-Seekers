// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore_tb.h for the primary calling header

#include "Vcore_tb__pch.h"
#include "Vcore_tb__Syms.h"
#include "Vcore_tb_fifo_depth64__I1.h"

VL_INLINE_OPT void Vcore_tb_fifo_depth64__I1___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__0__KET____DOT__fifo_instance__0(Vcore_tb_fifo_depth64__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_tb_fifo_depth64__I1___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__0__KET____DOT__fifo_instance__0\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    CData/*6:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    // Body
    __Vdly__rd_ptr = vlSelfRef.__PVT__rd_ptr;
    __Vdly__wr_ptr = vlSelfRef.__PVT__wr_ptr;
    if (vlSymsp->TOP.core_tb__DOT__reset) {
        __Vdly__rd_ptr = 0U;
        __Vdly__wr_ptr = 0U;
    } else {
        if ((1U & (IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__flush_ptr_en))) {
            __Vdly__rd_ptr = 0U;
            __Vdly__wr_ptr = 0U;
        } else {
            if ((1U & (IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__rd_en))) {
                __Vdly__rd_ptr = (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__rd_ptr)));
            }
            if (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_wr_q) {
                __Vdly__wr_ptr = (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__wr_ptr)));
            }
        }
        if (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_wr_q) {
            if ((0x20U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                    vlSelfRef.__PVT__q63 
                                        = (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                                } else {
                                    vlSelfRef.__PVT__q62 
                                        = (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                                }
                            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q61 
                                    = (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                            } else {
                                vlSelfRef.__PVT__q60 
                                    = (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                            }
                        } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q59 
                                    = (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                            } else {
                                vlSelfRef.__PVT__q58 
                                    = (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q57 = 
                                (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                        } else {
                            vlSelfRef.__PVT__q56 = 
                                (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q55 
                                    = (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                            } else {
                                vlSelfRef.__PVT__q54 
                                    = (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q53 = 
                                (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                        } else {
                            vlSelfRef.__PVT__q52 = 
                                (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q51 = 
                                (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                        } else {
                            vlSelfRef.__PVT__q50 = 
                                (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q49 = (0xfU 
                                                & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                    } else {
                        vlSelfRef.__PVT__q48 = (0xfU 
                                                & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q47 
                                    = (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                            } else {
                                vlSelfRef.__PVT__q46 
                                    = (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q45 = 
                                (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                        } else {
                            vlSelfRef.__PVT__q44 = 
                                (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q43 = 
                                (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                        } else {
                            vlSelfRef.__PVT__q42 = 
                                (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q41 = (0xfU 
                                                & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                    } else {
                        vlSelfRef.__PVT__q40 = (0xfU 
                                                & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q39 = 
                                (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                        } else {
                            vlSelfRef.__PVT__q38 = 
                                (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q37 = (0xfU 
                                                & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                    } else {
                        vlSelfRef.__PVT__q36 = (0xfU 
                                                & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q35 = (0xfU 
                                                & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                    } else {
                        vlSelfRef.__PVT__q34 = (0xfU 
                                                & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q33 = (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                } else {
                    vlSelfRef.__PVT__q32 = (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                }
            } else if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q31 
                                    = (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                            } else {
                                vlSelfRef.__PVT__q30 
                                    = (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q29 = 
                                (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                        } else {
                            vlSelfRef.__PVT__q28 = 
                                (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q27 = 
                                (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                        } else {
                            vlSelfRef.__PVT__q26 = 
                                (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q25 = (0xfU 
                                                & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                    } else {
                        vlSelfRef.__PVT__q24 = (0xfU 
                                                & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q23 = 
                                (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                        } else {
                            vlSelfRef.__PVT__q22 = 
                                (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q21 = (0xfU 
                                                & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                    } else {
                        vlSelfRef.__PVT__q20 = (0xfU 
                                                & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q19 = (0xfU 
                                                & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                    } else {
                        vlSelfRef.__PVT__q18 = (0xfU 
                                                & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q17 = (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                } else {
                    vlSelfRef.__PVT__q16 = (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q15 = 
                                (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                        } else {
                            vlSelfRef.__PVT__q14 = 
                                (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q13 = (0xfU 
                                                & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                    } else {
                        vlSelfRef.__PVT__q12 = (0xfU 
                                                & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q11 = (0xfU 
                                                & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                    } else {
                        vlSelfRef.__PVT__q10 = (0xfU 
                                                & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q9 = (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                } else {
                    vlSelfRef.__PVT__q8 = (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q7 = (0xfU 
                                               & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                    } else {
                        vlSelfRef.__PVT__q6 = (0xfU 
                                               & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q5 = (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                } else {
                    vlSelfRef.__PVT__q4 = (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q3 = (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                } else {
                    vlSelfRef.__PVT__q2 = (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                vlSelfRef.__PVT__q1 = (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
            } else {
                vlSelfRef.__PVT__q0 = (0xfU & vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in);
            }
        }
    }
    vlSelfRef.__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelfRef.__PVT__wr_ptr = __Vdly__wr_ptr;
}

VL_INLINE_OPT void Vcore_tb_fifo_depth64__I1___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__1__KET____DOT__fifo_instance__0(Vcore_tb_fifo_depth64__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_tb_fifo_depth64__I1___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__1__KET____DOT__fifo_instance__0\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    CData/*6:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    // Body
    __Vdly__rd_ptr = vlSelfRef.__PVT__rd_ptr;
    __Vdly__wr_ptr = vlSelfRef.__PVT__wr_ptr;
    if (vlSymsp->TOP.core_tb__DOT__reset) {
        __Vdly__rd_ptr = 0U;
        __Vdly__wr_ptr = 0U;
    } else {
        if ((2U & (IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__flush_ptr_en))) {
            __Vdly__rd_ptr = 0U;
            __Vdly__wr_ptr = 0U;
        } else {
            if ((2U & (IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__rd_en))) {
                __Vdly__rd_ptr = (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__rd_ptr)));
            }
            if (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_wr_q) {
                __Vdly__wr_ptr = (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__wr_ptr)));
            }
        }
        if (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_wr_q) {
            if ((0x20U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                    vlSelfRef.__PVT__q63 
                                        = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 4U));
                                } else {
                                    vlSelfRef.__PVT__q62 
                                        = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 4U));
                                }
                            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q61 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 4U));
                            } else {
                                vlSelfRef.__PVT__q60 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 4U));
                            }
                        } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q59 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 4U));
                            } else {
                                vlSelfRef.__PVT__q58 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 4U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q57 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 4U));
                        } else {
                            vlSelfRef.__PVT__q56 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 4U));
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q55 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 4U));
                            } else {
                                vlSelfRef.__PVT__q54 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 4U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q53 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 4U));
                        } else {
                            vlSelfRef.__PVT__q52 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 4U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q51 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 4U));
                        } else {
                            vlSelfRef.__PVT__q50 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 4U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q49 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 4U));
                    } else {
                        vlSelfRef.__PVT__q48 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 4U));
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q47 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 4U));
                            } else {
                                vlSelfRef.__PVT__q46 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 4U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q45 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 4U));
                        } else {
                            vlSelfRef.__PVT__q44 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 4U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q43 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 4U));
                        } else {
                            vlSelfRef.__PVT__q42 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 4U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q41 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 4U));
                    } else {
                        vlSelfRef.__PVT__q40 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 4U));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q39 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 4U));
                        } else {
                            vlSelfRef.__PVT__q38 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 4U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q37 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 4U));
                    } else {
                        vlSelfRef.__PVT__q36 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 4U));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q35 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 4U));
                    } else {
                        vlSelfRef.__PVT__q34 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 4U));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q33 = (0xfU & 
                                            (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                             >> 4U));
                } else {
                    vlSelfRef.__PVT__q32 = (0xfU & 
                                            (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                             >> 4U));
                }
            } else if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q31 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 4U));
                            } else {
                                vlSelfRef.__PVT__q30 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 4U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q29 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 4U));
                        } else {
                            vlSelfRef.__PVT__q28 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 4U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q27 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 4U));
                        } else {
                            vlSelfRef.__PVT__q26 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 4U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q25 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 4U));
                    } else {
                        vlSelfRef.__PVT__q24 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 4U));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q23 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 4U));
                        } else {
                            vlSelfRef.__PVT__q22 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 4U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q21 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 4U));
                    } else {
                        vlSelfRef.__PVT__q20 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 4U));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q19 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 4U));
                    } else {
                        vlSelfRef.__PVT__q18 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 4U));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q17 = (0xfU & 
                                            (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                             >> 4U));
                } else {
                    vlSelfRef.__PVT__q16 = (0xfU & 
                                            (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                             >> 4U));
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q15 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 4U));
                        } else {
                            vlSelfRef.__PVT__q14 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 4U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q13 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 4U));
                    } else {
                        vlSelfRef.__PVT__q12 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 4U));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q11 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 4U));
                    } else {
                        vlSelfRef.__PVT__q10 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 4U));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q9 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 4U));
                } else {
                    vlSelfRef.__PVT__q8 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 4U));
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q7 = (0xfU 
                                               & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                  >> 4U));
                    } else {
                        vlSelfRef.__PVT__q6 = (0xfU 
                                               & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                  >> 4U));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q5 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 4U));
                } else {
                    vlSelfRef.__PVT__q4 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 4U));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q3 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 4U));
                } else {
                    vlSelfRef.__PVT__q2 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 4U));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                vlSelfRef.__PVT__q1 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 4U));
            } else {
                vlSelfRef.__PVT__q0 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 4U));
            }
        }
    }
    vlSelfRef.__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelfRef.__PVT__wr_ptr = __Vdly__wr_ptr;
}

VL_INLINE_OPT void Vcore_tb_fifo_depth64__I1___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__2__KET____DOT__fifo_instance__0(Vcore_tb_fifo_depth64__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_tb_fifo_depth64__I1___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__2__KET____DOT__fifo_instance__0\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    CData/*6:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    // Body
    __Vdly__rd_ptr = vlSelfRef.__PVT__rd_ptr;
    __Vdly__wr_ptr = vlSelfRef.__PVT__wr_ptr;
    if (vlSymsp->TOP.core_tb__DOT__reset) {
        __Vdly__rd_ptr = 0U;
        __Vdly__wr_ptr = 0U;
    } else {
        if ((4U & (IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__flush_ptr_en))) {
            __Vdly__rd_ptr = 0U;
            __Vdly__wr_ptr = 0U;
        } else {
            if ((4U & (IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__rd_en))) {
                __Vdly__rd_ptr = (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__rd_ptr)));
            }
            if (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_wr_q) {
                __Vdly__wr_ptr = (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__wr_ptr)));
            }
        }
        if (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_wr_q) {
            if ((0x20U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                    vlSelfRef.__PVT__q63 
                                        = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 8U));
                                } else {
                                    vlSelfRef.__PVT__q62 
                                        = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 8U));
                                }
                            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q61 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 8U));
                            } else {
                                vlSelfRef.__PVT__q60 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 8U));
                            }
                        } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q59 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 8U));
                            } else {
                                vlSelfRef.__PVT__q58 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 8U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q57 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 8U));
                        } else {
                            vlSelfRef.__PVT__q56 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 8U));
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q55 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 8U));
                            } else {
                                vlSelfRef.__PVT__q54 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 8U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q53 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 8U));
                        } else {
                            vlSelfRef.__PVT__q52 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 8U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q51 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 8U));
                        } else {
                            vlSelfRef.__PVT__q50 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 8U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q49 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 8U));
                    } else {
                        vlSelfRef.__PVT__q48 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 8U));
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q47 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 8U));
                            } else {
                                vlSelfRef.__PVT__q46 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 8U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q45 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 8U));
                        } else {
                            vlSelfRef.__PVT__q44 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 8U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q43 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 8U));
                        } else {
                            vlSelfRef.__PVT__q42 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 8U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q41 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 8U));
                    } else {
                        vlSelfRef.__PVT__q40 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 8U));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q39 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 8U));
                        } else {
                            vlSelfRef.__PVT__q38 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 8U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q37 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 8U));
                    } else {
                        vlSelfRef.__PVT__q36 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 8U));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q35 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 8U));
                    } else {
                        vlSelfRef.__PVT__q34 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 8U));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q33 = (0xfU & 
                                            (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                             >> 8U));
                } else {
                    vlSelfRef.__PVT__q32 = (0xfU & 
                                            (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                             >> 8U));
                }
            } else if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q31 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 8U));
                            } else {
                                vlSelfRef.__PVT__q30 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 8U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q29 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 8U));
                        } else {
                            vlSelfRef.__PVT__q28 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 8U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q27 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 8U));
                        } else {
                            vlSelfRef.__PVT__q26 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 8U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q25 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 8U));
                    } else {
                        vlSelfRef.__PVT__q24 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 8U));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q23 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 8U));
                        } else {
                            vlSelfRef.__PVT__q22 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 8U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q21 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 8U));
                    } else {
                        vlSelfRef.__PVT__q20 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 8U));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q19 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 8U));
                    } else {
                        vlSelfRef.__PVT__q18 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 8U));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q17 = (0xfU & 
                                            (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                             >> 8U));
                } else {
                    vlSelfRef.__PVT__q16 = (0xfU & 
                                            (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                             >> 8U));
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q15 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 8U));
                        } else {
                            vlSelfRef.__PVT__q14 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 8U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q13 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 8U));
                    } else {
                        vlSelfRef.__PVT__q12 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 8U));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q11 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 8U));
                    } else {
                        vlSelfRef.__PVT__q10 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 8U));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q9 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 8U));
                } else {
                    vlSelfRef.__PVT__q8 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 8U));
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q7 = (0xfU 
                                               & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                  >> 8U));
                    } else {
                        vlSelfRef.__PVT__q6 = (0xfU 
                                               & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                  >> 8U));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q5 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 8U));
                } else {
                    vlSelfRef.__PVT__q4 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 8U));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q3 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 8U));
                } else {
                    vlSelfRef.__PVT__q2 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 8U));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                vlSelfRef.__PVT__q1 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 8U));
            } else {
                vlSelfRef.__PVT__q0 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 8U));
            }
        }
    }
    vlSelfRef.__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelfRef.__PVT__wr_ptr = __Vdly__wr_ptr;
}

VL_INLINE_OPT void Vcore_tb_fifo_depth64__I1___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__3__KET____DOT__fifo_instance__0(Vcore_tb_fifo_depth64__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_tb_fifo_depth64__I1___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__3__KET____DOT__fifo_instance__0\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    CData/*6:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    // Body
    __Vdly__rd_ptr = vlSelfRef.__PVT__rd_ptr;
    __Vdly__wr_ptr = vlSelfRef.__PVT__wr_ptr;
    if (vlSymsp->TOP.core_tb__DOT__reset) {
        __Vdly__rd_ptr = 0U;
        __Vdly__wr_ptr = 0U;
    } else {
        if ((8U & (IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__flush_ptr_en))) {
            __Vdly__rd_ptr = 0U;
            __Vdly__wr_ptr = 0U;
        } else {
            if ((8U & (IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__rd_en))) {
                __Vdly__rd_ptr = (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__rd_ptr)));
            }
            if (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_wr_q) {
                __Vdly__wr_ptr = (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__wr_ptr)));
            }
        }
        if (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_wr_q) {
            if ((0x20U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                    vlSelfRef.__PVT__q63 
                                        = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0xcU));
                                } else {
                                    vlSelfRef.__PVT__q62 
                                        = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0xcU));
                                }
                            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q61 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0xcU));
                            } else {
                                vlSelfRef.__PVT__q60 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0xcU));
                            }
                        } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q59 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0xcU));
                            } else {
                                vlSelfRef.__PVT__q58 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0xcU));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q57 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0xcU));
                        } else {
                            vlSelfRef.__PVT__q56 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0xcU));
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q55 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0xcU));
                            } else {
                                vlSelfRef.__PVT__q54 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0xcU));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q53 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0xcU));
                        } else {
                            vlSelfRef.__PVT__q52 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0xcU));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q51 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0xcU));
                        } else {
                            vlSelfRef.__PVT__q50 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0xcU));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q49 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0xcU));
                    } else {
                        vlSelfRef.__PVT__q48 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0xcU));
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q47 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0xcU));
                            } else {
                                vlSelfRef.__PVT__q46 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0xcU));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q45 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0xcU));
                        } else {
                            vlSelfRef.__PVT__q44 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0xcU));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q43 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0xcU));
                        } else {
                            vlSelfRef.__PVT__q42 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0xcU));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q41 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0xcU));
                    } else {
                        vlSelfRef.__PVT__q40 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0xcU));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q39 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0xcU));
                        } else {
                            vlSelfRef.__PVT__q38 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0xcU));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q37 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0xcU));
                    } else {
                        vlSelfRef.__PVT__q36 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0xcU));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q35 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0xcU));
                    } else {
                        vlSelfRef.__PVT__q34 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0xcU));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q33 = (0xfU & 
                                            (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                             >> 0xcU));
                } else {
                    vlSelfRef.__PVT__q32 = (0xfU & 
                                            (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                             >> 0xcU));
                }
            } else if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q31 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0xcU));
                            } else {
                                vlSelfRef.__PVT__q30 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0xcU));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q29 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0xcU));
                        } else {
                            vlSelfRef.__PVT__q28 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0xcU));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q27 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0xcU));
                        } else {
                            vlSelfRef.__PVT__q26 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0xcU));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q25 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0xcU));
                    } else {
                        vlSelfRef.__PVT__q24 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0xcU));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q23 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0xcU));
                        } else {
                            vlSelfRef.__PVT__q22 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0xcU));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q21 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0xcU));
                    } else {
                        vlSelfRef.__PVT__q20 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0xcU));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q19 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0xcU));
                    } else {
                        vlSelfRef.__PVT__q18 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0xcU));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q17 = (0xfU & 
                                            (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                             >> 0xcU));
                } else {
                    vlSelfRef.__PVT__q16 = (0xfU & 
                                            (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                             >> 0xcU));
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q15 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0xcU));
                        } else {
                            vlSelfRef.__PVT__q14 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0xcU));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q13 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0xcU));
                    } else {
                        vlSelfRef.__PVT__q12 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0xcU));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q11 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0xcU));
                    } else {
                        vlSelfRef.__PVT__q10 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0xcU));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q9 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0xcU));
                } else {
                    vlSelfRef.__PVT__q8 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0xcU));
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q7 = (0xfU 
                                               & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                  >> 0xcU));
                    } else {
                        vlSelfRef.__PVT__q6 = (0xfU 
                                               & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                  >> 0xcU));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q5 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0xcU));
                } else {
                    vlSelfRef.__PVT__q4 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0xcU));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q3 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0xcU));
                } else {
                    vlSelfRef.__PVT__q2 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0xcU));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                vlSelfRef.__PVT__q1 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0xcU));
            } else {
                vlSelfRef.__PVT__q0 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0xcU));
            }
        }
    }
    vlSelfRef.__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelfRef.__PVT__wr_ptr = __Vdly__wr_ptr;
}

VL_INLINE_OPT void Vcore_tb_fifo_depth64__I1___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__4__KET____DOT__fifo_instance__0(Vcore_tb_fifo_depth64__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_tb_fifo_depth64__I1___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__4__KET____DOT__fifo_instance__0\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    CData/*6:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    // Body
    __Vdly__rd_ptr = vlSelfRef.__PVT__rd_ptr;
    __Vdly__wr_ptr = vlSelfRef.__PVT__wr_ptr;
    if (vlSymsp->TOP.core_tb__DOT__reset) {
        __Vdly__rd_ptr = 0U;
        __Vdly__wr_ptr = 0U;
    } else {
        if ((0x10U & (IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__flush_ptr_en))) {
            __Vdly__rd_ptr = 0U;
            __Vdly__wr_ptr = 0U;
        } else {
            if ((0x10U & (IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__rd_en))) {
                __Vdly__rd_ptr = (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__rd_ptr)));
            }
            if (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_wr_q) {
                __Vdly__wr_ptr = (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__wr_ptr)));
            }
        }
        if (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_wr_q) {
            if ((0x20U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                    vlSelfRef.__PVT__q63 
                                        = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x10U));
                                } else {
                                    vlSelfRef.__PVT__q62 
                                        = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x10U));
                                }
                            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q61 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x10U));
                            } else {
                                vlSelfRef.__PVT__q60 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x10U));
                            }
                        } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q59 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x10U));
                            } else {
                                vlSelfRef.__PVT__q58 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x10U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q57 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x10U));
                        } else {
                            vlSelfRef.__PVT__q56 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x10U));
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q55 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x10U));
                            } else {
                                vlSelfRef.__PVT__q54 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x10U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q53 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x10U));
                        } else {
                            vlSelfRef.__PVT__q52 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x10U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q51 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x10U));
                        } else {
                            vlSelfRef.__PVT__q50 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x10U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q49 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x10U));
                    } else {
                        vlSelfRef.__PVT__q48 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x10U));
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q47 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x10U));
                            } else {
                                vlSelfRef.__PVT__q46 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x10U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q45 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x10U));
                        } else {
                            vlSelfRef.__PVT__q44 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x10U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q43 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x10U));
                        } else {
                            vlSelfRef.__PVT__q42 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x10U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q41 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x10U));
                    } else {
                        vlSelfRef.__PVT__q40 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x10U));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q39 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x10U));
                        } else {
                            vlSelfRef.__PVT__q38 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x10U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q37 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x10U));
                    } else {
                        vlSelfRef.__PVT__q36 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x10U));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q35 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x10U));
                    } else {
                        vlSelfRef.__PVT__q34 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x10U));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q33 = (0xfU & 
                                            (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                             >> 0x10U));
                } else {
                    vlSelfRef.__PVT__q32 = (0xfU & 
                                            (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                             >> 0x10U));
                }
            } else if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q31 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x10U));
                            } else {
                                vlSelfRef.__PVT__q30 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x10U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q29 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x10U));
                        } else {
                            vlSelfRef.__PVT__q28 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x10U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q27 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x10U));
                        } else {
                            vlSelfRef.__PVT__q26 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x10U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q25 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x10U));
                    } else {
                        vlSelfRef.__PVT__q24 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x10U));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q23 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x10U));
                        } else {
                            vlSelfRef.__PVT__q22 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x10U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q21 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x10U));
                    } else {
                        vlSelfRef.__PVT__q20 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x10U));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q19 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x10U));
                    } else {
                        vlSelfRef.__PVT__q18 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x10U));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q17 = (0xfU & 
                                            (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                             >> 0x10U));
                } else {
                    vlSelfRef.__PVT__q16 = (0xfU & 
                                            (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                             >> 0x10U));
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q15 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x10U));
                        } else {
                            vlSelfRef.__PVT__q14 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x10U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q13 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x10U));
                    } else {
                        vlSelfRef.__PVT__q12 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x10U));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q11 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x10U));
                    } else {
                        vlSelfRef.__PVT__q10 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x10U));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q9 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x10U));
                } else {
                    vlSelfRef.__PVT__q8 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x10U));
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q7 = (0xfU 
                                               & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                  >> 0x10U));
                    } else {
                        vlSelfRef.__PVT__q6 = (0xfU 
                                               & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                  >> 0x10U));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q5 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x10U));
                } else {
                    vlSelfRef.__PVT__q4 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x10U));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q3 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x10U));
                } else {
                    vlSelfRef.__PVT__q2 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x10U));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                vlSelfRef.__PVT__q1 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x10U));
            } else {
                vlSelfRef.__PVT__q0 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x10U));
            }
        }
    }
    vlSelfRef.__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelfRef.__PVT__wr_ptr = __Vdly__wr_ptr;
}

VL_INLINE_OPT void Vcore_tb_fifo_depth64__I1___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__5__KET____DOT__fifo_instance__0(Vcore_tb_fifo_depth64__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_tb_fifo_depth64__I1___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__5__KET____DOT__fifo_instance__0\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    CData/*6:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    // Body
    __Vdly__rd_ptr = vlSelfRef.__PVT__rd_ptr;
    __Vdly__wr_ptr = vlSelfRef.__PVT__wr_ptr;
    if (vlSymsp->TOP.core_tb__DOT__reset) {
        __Vdly__rd_ptr = 0U;
        __Vdly__wr_ptr = 0U;
    } else {
        if ((0x20U & (IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__flush_ptr_en))) {
            __Vdly__rd_ptr = 0U;
            __Vdly__wr_ptr = 0U;
        } else {
            if ((0x20U & (IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__rd_en))) {
                __Vdly__rd_ptr = (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__rd_ptr)));
            }
            if (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_wr_q) {
                __Vdly__wr_ptr = (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__wr_ptr)));
            }
        }
        if (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_wr_q) {
            if ((0x20U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                    vlSelfRef.__PVT__q63 
                                        = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x14U));
                                } else {
                                    vlSelfRef.__PVT__q62 
                                        = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x14U));
                                }
                            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q61 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x14U));
                            } else {
                                vlSelfRef.__PVT__q60 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x14U));
                            }
                        } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q59 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x14U));
                            } else {
                                vlSelfRef.__PVT__q58 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x14U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q57 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x14U));
                        } else {
                            vlSelfRef.__PVT__q56 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x14U));
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q55 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x14U));
                            } else {
                                vlSelfRef.__PVT__q54 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x14U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q53 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x14U));
                        } else {
                            vlSelfRef.__PVT__q52 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x14U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q51 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x14U));
                        } else {
                            vlSelfRef.__PVT__q50 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x14U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q49 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x14U));
                    } else {
                        vlSelfRef.__PVT__q48 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x14U));
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q47 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x14U));
                            } else {
                                vlSelfRef.__PVT__q46 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x14U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q45 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x14U));
                        } else {
                            vlSelfRef.__PVT__q44 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x14U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q43 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x14U));
                        } else {
                            vlSelfRef.__PVT__q42 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x14U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q41 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x14U));
                    } else {
                        vlSelfRef.__PVT__q40 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x14U));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q39 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x14U));
                        } else {
                            vlSelfRef.__PVT__q38 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x14U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q37 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x14U));
                    } else {
                        vlSelfRef.__PVT__q36 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x14U));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q35 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x14U));
                    } else {
                        vlSelfRef.__PVT__q34 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x14U));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q33 = (0xfU & 
                                            (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                             >> 0x14U));
                } else {
                    vlSelfRef.__PVT__q32 = (0xfU & 
                                            (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                             >> 0x14U));
                }
            } else if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q31 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x14U));
                            } else {
                                vlSelfRef.__PVT__q30 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x14U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q29 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x14U));
                        } else {
                            vlSelfRef.__PVT__q28 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x14U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q27 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x14U));
                        } else {
                            vlSelfRef.__PVT__q26 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x14U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q25 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x14U));
                    } else {
                        vlSelfRef.__PVT__q24 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x14U));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q23 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x14U));
                        } else {
                            vlSelfRef.__PVT__q22 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x14U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q21 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x14U));
                    } else {
                        vlSelfRef.__PVT__q20 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x14U));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q19 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x14U));
                    } else {
                        vlSelfRef.__PVT__q18 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x14U));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q17 = (0xfU & 
                                            (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                             >> 0x14U));
                } else {
                    vlSelfRef.__PVT__q16 = (0xfU & 
                                            (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                             >> 0x14U));
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q15 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x14U));
                        } else {
                            vlSelfRef.__PVT__q14 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x14U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q13 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x14U));
                    } else {
                        vlSelfRef.__PVT__q12 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x14U));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q11 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x14U));
                    } else {
                        vlSelfRef.__PVT__q10 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x14U));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q9 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x14U));
                } else {
                    vlSelfRef.__PVT__q8 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x14U));
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q7 = (0xfU 
                                               & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                  >> 0x14U));
                    } else {
                        vlSelfRef.__PVT__q6 = (0xfU 
                                               & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                  >> 0x14U));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q5 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x14U));
                } else {
                    vlSelfRef.__PVT__q4 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x14U));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q3 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x14U));
                } else {
                    vlSelfRef.__PVT__q2 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x14U));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                vlSelfRef.__PVT__q1 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x14U));
            } else {
                vlSelfRef.__PVT__q0 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x14U));
            }
        }
    }
    vlSelfRef.__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelfRef.__PVT__wr_ptr = __Vdly__wr_ptr;
}

VL_INLINE_OPT void Vcore_tb_fifo_depth64__I1___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__6__KET____DOT__fifo_instance__0(Vcore_tb_fifo_depth64__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_tb_fifo_depth64__I1___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__6__KET____DOT__fifo_instance__0\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    CData/*6:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    // Body
    __Vdly__rd_ptr = vlSelfRef.__PVT__rd_ptr;
    __Vdly__wr_ptr = vlSelfRef.__PVT__wr_ptr;
    if (vlSymsp->TOP.core_tb__DOT__reset) {
        __Vdly__rd_ptr = 0U;
        __Vdly__wr_ptr = 0U;
    } else {
        if ((0x40U & (IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__flush_ptr_en))) {
            __Vdly__rd_ptr = 0U;
            __Vdly__wr_ptr = 0U;
        } else {
            if ((0x40U & (IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__rd_en))) {
                __Vdly__rd_ptr = (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__rd_ptr)));
            }
            if (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_wr_q) {
                __Vdly__wr_ptr = (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__wr_ptr)));
            }
        }
        if (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_wr_q) {
            if ((0x20U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                    vlSelfRef.__PVT__q63 
                                        = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x18U));
                                } else {
                                    vlSelfRef.__PVT__q62 
                                        = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x18U));
                                }
                            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q61 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x18U));
                            } else {
                                vlSelfRef.__PVT__q60 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x18U));
                            }
                        } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q59 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x18U));
                            } else {
                                vlSelfRef.__PVT__q58 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x18U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q57 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x18U));
                        } else {
                            vlSelfRef.__PVT__q56 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x18U));
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q55 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x18U));
                            } else {
                                vlSelfRef.__PVT__q54 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x18U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q53 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x18U));
                        } else {
                            vlSelfRef.__PVT__q52 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x18U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q51 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x18U));
                        } else {
                            vlSelfRef.__PVT__q50 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x18U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q49 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x18U));
                    } else {
                        vlSelfRef.__PVT__q48 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x18U));
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q47 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x18U));
                            } else {
                                vlSelfRef.__PVT__q46 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x18U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q45 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x18U));
                        } else {
                            vlSelfRef.__PVT__q44 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x18U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q43 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x18U));
                        } else {
                            vlSelfRef.__PVT__q42 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x18U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q41 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x18U));
                    } else {
                        vlSelfRef.__PVT__q40 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x18U));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q39 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x18U));
                        } else {
                            vlSelfRef.__PVT__q38 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x18U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q37 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x18U));
                    } else {
                        vlSelfRef.__PVT__q36 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x18U));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q35 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x18U));
                    } else {
                        vlSelfRef.__PVT__q34 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x18U));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q33 = (0xfU & 
                                            (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                             >> 0x18U));
                } else {
                    vlSelfRef.__PVT__q32 = (0xfU & 
                                            (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                             >> 0x18U));
                }
            } else if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q31 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x18U));
                            } else {
                                vlSelfRef.__PVT__q30 
                                    = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x18U));
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q29 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x18U));
                        } else {
                            vlSelfRef.__PVT__q28 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x18U));
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q27 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x18U));
                        } else {
                            vlSelfRef.__PVT__q26 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x18U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q25 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x18U));
                    } else {
                        vlSelfRef.__PVT__q24 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x18U));
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q23 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x18U));
                        } else {
                            vlSelfRef.__PVT__q22 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x18U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q21 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x18U));
                    } else {
                        vlSelfRef.__PVT__q20 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x18U));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q19 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x18U));
                    } else {
                        vlSelfRef.__PVT__q18 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x18U));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q17 = (0xfU & 
                                            (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                             >> 0x18U));
                } else {
                    vlSelfRef.__PVT__q16 = (0xfU & 
                                            (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                             >> 0x18U));
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q15 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x18U));
                        } else {
                            vlSelfRef.__PVT__q14 = 
                                (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                         >> 0x18U));
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q13 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x18U));
                    } else {
                        vlSelfRef.__PVT__q12 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x18U));
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q11 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x18U));
                    } else {
                        vlSelfRef.__PVT__q10 = (0xfU 
                                                & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x18U));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q9 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x18U));
                } else {
                    vlSelfRef.__PVT__q8 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x18U));
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q7 = (0xfU 
                                               & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                  >> 0x18U));
                    } else {
                        vlSelfRef.__PVT__q6 = (0xfU 
                                               & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                  >> 0x18U));
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q5 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x18U));
                } else {
                    vlSelfRef.__PVT__q4 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x18U));
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q3 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x18U));
                } else {
                    vlSelfRef.__PVT__q2 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                   >> 0x18U));
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                vlSelfRef.__PVT__q1 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x18U));
            } else {
                vlSelfRef.__PVT__q0 = (0xfU & (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x18U));
            }
        }
    }
    vlSelfRef.__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelfRef.__PVT__wr_ptr = __Vdly__wr_ptr;
}

VL_INLINE_OPT void Vcore_tb_fifo_depth64__I1___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__7__KET____DOT__fifo_instance__0(Vcore_tb_fifo_depth64__I1* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcore_tb_fifo_depth64__I1___nba_sequent__TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__7__KET____DOT__fifo_instance__0\n"); );
    Vcore_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vdly__rd_ptr;
    __Vdly__rd_ptr = 0;
    CData/*6:0*/ __Vdly__wr_ptr;
    __Vdly__wr_ptr = 0;
    // Body
    __Vdly__rd_ptr = vlSelfRef.__PVT__rd_ptr;
    __Vdly__wr_ptr = vlSelfRef.__PVT__wr_ptr;
    if (vlSymsp->TOP.core_tb__DOT__reset) {
        __Vdly__rd_ptr = 0U;
        __Vdly__wr_ptr = 0U;
    } else {
        if ((0x80U & (IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__flush_ptr_en))) {
            __Vdly__rd_ptr = 0U;
            __Vdly__wr_ptr = 0U;
        } else {
            if ((0x80U & (IData)(vlSymsp->TOP.core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__rd_en))) {
                __Vdly__rd_ptr = (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__rd_ptr)));
            }
            if (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_wr_q) {
                __Vdly__wr_ptr = (0x7fU & ((IData)(1U) 
                                           + (IData)(vlSelfRef.__PVT__wr_ptr)));
            }
        }
        if (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_wr_q) {
            if ((0x20U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                    vlSelfRef.__PVT__q63 
                                        = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                           >> 0x1cU);
                                } else {
                                    vlSelfRef.__PVT__q62 
                                        = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                           >> 0x1cU);
                                }
                            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q61 
                                    = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                       >> 0x1cU);
                            } else {
                                vlSelfRef.__PVT__q60 
                                    = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                       >> 0x1cU);
                            }
                        } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q59 
                                    = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                       >> 0x1cU);
                            } else {
                                vlSelfRef.__PVT__q58 
                                    = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                       >> 0x1cU);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q57 = 
                                (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                 >> 0x1cU);
                        } else {
                            vlSelfRef.__PVT__q56 = 
                                (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                 >> 0x1cU);
                        }
                    } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q55 
                                    = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                       >> 0x1cU);
                            } else {
                                vlSelfRef.__PVT__q54 
                                    = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                       >> 0x1cU);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q53 = 
                                (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                 >> 0x1cU);
                        } else {
                            vlSelfRef.__PVT__q52 = 
                                (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                 >> 0x1cU);
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q51 = 
                                (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                 >> 0x1cU);
                        } else {
                            vlSelfRef.__PVT__q50 = 
                                (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                 >> 0x1cU);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q49 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                >> 0x1cU);
                    } else {
                        vlSelfRef.__PVT__q48 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                >> 0x1cU);
                    }
                } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q47 
                                    = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                       >> 0x1cU);
                            } else {
                                vlSelfRef.__PVT__q46 
                                    = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                       >> 0x1cU);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q45 = 
                                (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                 >> 0x1cU);
                        } else {
                            vlSelfRef.__PVT__q44 = 
                                (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                 >> 0x1cU);
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q43 = 
                                (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                 >> 0x1cU);
                        } else {
                            vlSelfRef.__PVT__q42 = 
                                (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                 >> 0x1cU);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q41 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                >> 0x1cU);
                    } else {
                        vlSelfRef.__PVT__q40 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                >> 0x1cU);
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q39 = 
                                (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                 >> 0x1cU);
                        } else {
                            vlSelfRef.__PVT__q38 = 
                                (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                 >> 0x1cU);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q37 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                >> 0x1cU);
                    } else {
                        vlSelfRef.__PVT__q36 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                >> 0x1cU);
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q35 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                >> 0x1cU);
                    } else {
                        vlSelfRef.__PVT__q34 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                >> 0x1cU);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q33 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                            >> 0x1cU);
                } else {
                    vlSelfRef.__PVT__q32 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                            >> 0x1cU);
                }
            } else if ((0x10U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                                vlSelfRef.__PVT__q31 
                                    = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                       >> 0x1cU);
                            } else {
                                vlSelfRef.__PVT__q30 
                                    = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                       >> 0x1cU);
                            }
                        } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q29 = 
                                (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                 >> 0x1cU);
                        } else {
                            vlSelfRef.__PVT__q28 = 
                                (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                 >> 0x1cU);
                        }
                    } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q27 = 
                                (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                 >> 0x1cU);
                        } else {
                            vlSelfRef.__PVT__q26 = 
                                (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                 >> 0x1cU);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q25 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                >> 0x1cU);
                    } else {
                        vlSelfRef.__PVT__q24 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                >> 0x1cU);
                    }
                } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q23 = 
                                (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                 >> 0x1cU);
                        } else {
                            vlSelfRef.__PVT__q22 = 
                                (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                 >> 0x1cU);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q21 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                >> 0x1cU);
                    } else {
                        vlSelfRef.__PVT__q20 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                >> 0x1cU);
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q19 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                >> 0x1cU);
                    } else {
                        vlSelfRef.__PVT__q18 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                >> 0x1cU);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q17 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                            >> 0x1cU);
                } else {
                    vlSelfRef.__PVT__q16 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                            >> 0x1cU);
                }
            } else if ((8U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                            vlSelfRef.__PVT__q15 = 
                                (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                 >> 0x1cU);
                        } else {
                            vlSelfRef.__PVT__q14 = 
                                (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                 >> 0x1cU);
                        }
                    } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q13 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                >> 0x1cU);
                    } else {
                        vlSelfRef.__PVT__q12 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                >> 0x1cU);
                    }
                } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q11 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                >> 0x1cU);
                    } else {
                        vlSelfRef.__PVT__q10 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                                >> 0x1cU);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q9 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                           >> 0x1cU);
                } else {
                    vlSelfRef.__PVT__q8 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                           >> 0x1cU);
                }
            } else if ((4U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                        vlSelfRef.__PVT__q7 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x1cU);
                    } else {
                        vlSelfRef.__PVT__q6 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                               >> 0x1cU);
                    }
                } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q5 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                           >> 0x1cU);
                } else {
                    vlSelfRef.__PVT__q4 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                           >> 0x1cU);
                }
            } else if ((2U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                    vlSelfRef.__PVT__q3 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                           >> 0x1cU);
                } else {
                    vlSelfRef.__PVT__q2 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                           >> 0x1cU);
                }
            } else if ((1U & (IData)(vlSelfRef.__PVT__wr_ptr))) {
                vlSelfRef.__PVT__q1 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                       >> 0x1cU);
            } else {
                vlSelfRef.__PVT__q0 = (vlSymsp->TOP.core_tb__DOT__dut__DOT__l0_in 
                                       >> 0x1cU);
            }
        }
    }
    vlSelfRef.__PVT__rd_ptr = __Vdly__rd_ptr;
    vlSelfRef.__PVT__wr_ptr = __Vdly__wr_ptr;
}
