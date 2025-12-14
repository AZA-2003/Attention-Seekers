// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCORE_TB__SYMS_H_
#define VERILATED_VCORE_TB__SYMS_H_  // guard

#include "verilated.h"
#include "verilated_vcd_c.h"

// INCLUDE MODEL CLASS

#include "Vcore_tb.h"

// INCLUDE MODULE CLASSES
#include "Vcore_tb___024root.h"
#include "Vcore_tb_mac_row.h"
#include "Vcore_tb_fifo_depth64__I1.h"
#include "Vcore_tb_fifo_depth64__B10.h"
#include "Vcore_tb_fifo_mux_16_1.h"
#include "Vcore_tb_fifo_mux_16_1__B10.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vcore_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcore_tb* const __Vm_modelp;
    bool __Vm_dumping = false;  // Dumping is active
    VerilatedMutex __Vm_dumperMutex;  // Protect __Vm_dumperp
    VerilatedVcdC* __Vm_dumperp VL_GUARDED_BY(__Vm_dumperMutex) = nullptr;  /// Trace class for $dump*
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcore_tb___024root             TOP;
    Vcore_tb_fifo_depth64__I1      TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__0__KET____DOT__fifo_instance;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__0__KET____DOT__fifo_instance__fifo_mux_16_1a;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__0__KET____DOT__fifo_instance__fifo_mux_16_1b;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__0__KET____DOT__fifo_instance__fifo_mux_16_1c;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__0__KET____DOT__fifo_instance__fifo_mux_16_1d;
    Vcore_tb_fifo_depth64__I1      TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__1__KET____DOT__fifo_instance;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__1__KET____DOT__fifo_instance__fifo_mux_16_1a;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__1__KET____DOT__fifo_instance__fifo_mux_16_1b;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__1__KET____DOT__fifo_instance__fifo_mux_16_1c;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__1__KET____DOT__fifo_instance__fifo_mux_16_1d;
    Vcore_tb_fifo_depth64__I1      TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__2__KET____DOT__fifo_instance;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__2__KET____DOT__fifo_instance__fifo_mux_16_1a;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__2__KET____DOT__fifo_instance__fifo_mux_16_1b;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__2__KET____DOT__fifo_instance__fifo_mux_16_1c;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__2__KET____DOT__fifo_instance__fifo_mux_16_1d;
    Vcore_tb_fifo_depth64__I1      TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__3__KET____DOT__fifo_instance;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__3__KET____DOT__fifo_instance__fifo_mux_16_1a;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__3__KET____DOT__fifo_instance__fifo_mux_16_1b;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__3__KET____DOT__fifo_instance__fifo_mux_16_1c;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__3__KET____DOT__fifo_instance__fifo_mux_16_1d;
    Vcore_tb_fifo_depth64__I1      TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__4__KET____DOT__fifo_instance;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__4__KET____DOT__fifo_instance__fifo_mux_16_1a;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__4__KET____DOT__fifo_instance__fifo_mux_16_1b;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__4__KET____DOT__fifo_instance__fifo_mux_16_1c;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__4__KET____DOT__fifo_instance__fifo_mux_16_1d;
    Vcore_tb_fifo_depth64__I1      TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__5__KET____DOT__fifo_instance;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__5__KET____DOT__fifo_instance__fifo_mux_16_1a;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__5__KET____DOT__fifo_instance__fifo_mux_16_1b;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__5__KET____DOT__fifo_instance__fifo_mux_16_1c;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__5__KET____DOT__fifo_instance__fifo_mux_16_1d;
    Vcore_tb_fifo_depth64__I1      TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__6__KET____DOT__fifo_instance;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__6__KET____DOT__fifo_instance__fifo_mux_16_1a;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__6__KET____DOT__fifo_instance__fifo_mux_16_1b;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__6__KET____DOT__fifo_instance__fifo_mux_16_1c;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__6__KET____DOT__fifo_instance__fifo_mux_16_1d;
    Vcore_tb_fifo_depth64__I1      TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__7__KET____DOT__fifo_instance;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__7__KET____DOT__fifo_instance__fifo_mux_16_1a;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__7__KET____DOT__fifo_instance__fifo_mux_16_1b;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__7__KET____DOT__fifo_instance__fifo_mux_16_1c;
    Vcore_tb_fifo_mux_16_1         TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ififo__DOT__row_num__BRA__7__KET____DOT__fifo_instance__fifo_mux_16_1d;
    Vcore_tb_mac_row               TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__1__KET____DOT__mac_row_instance;
    Vcore_tb_mac_row               TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__2__KET____DOT__mac_row_instance;
    Vcore_tb_mac_row               TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__3__KET____DOT__mac_row_instance;
    Vcore_tb_mac_row               TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__4__KET____DOT__mac_row_instance;
    Vcore_tb_mac_row               TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__5__KET____DOT__mac_row_instance;
    Vcore_tb_mac_row               TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__6__KET____DOT__mac_row_instance;
    Vcore_tb_mac_row               TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__7__KET____DOT__mac_row_instance;
    Vcore_tb_mac_row               TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_mac_array__DOT__row_num__BRA__8__KET____DOT__mac_row_instance;
    Vcore_tb_fifo_depth64__B10     TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__0__KET____DOT__fifo_instance;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__0__KET____DOT__fifo_instance__fifo_mux_16_1a;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__0__KET____DOT__fifo_instance__fifo_mux_16_1b;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__0__KET____DOT__fifo_instance__fifo_mux_16_1c;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__0__KET____DOT__fifo_instance__fifo_mux_16_1d;
    Vcore_tb_fifo_depth64__B10     TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__1__KET____DOT__fifo_instance;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__1__KET____DOT__fifo_instance__fifo_mux_16_1a;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__1__KET____DOT__fifo_instance__fifo_mux_16_1b;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__1__KET____DOT__fifo_instance__fifo_mux_16_1c;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__1__KET____DOT__fifo_instance__fifo_mux_16_1d;
    Vcore_tb_fifo_depth64__B10     TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__2__KET____DOT__fifo_instance;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__2__KET____DOT__fifo_instance__fifo_mux_16_1a;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__2__KET____DOT__fifo_instance__fifo_mux_16_1b;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__2__KET____DOT__fifo_instance__fifo_mux_16_1c;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__2__KET____DOT__fifo_instance__fifo_mux_16_1d;
    Vcore_tb_fifo_depth64__B10     TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__3__KET____DOT__fifo_instance;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__3__KET____DOT__fifo_instance__fifo_mux_16_1a;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__3__KET____DOT__fifo_instance__fifo_mux_16_1b;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__3__KET____DOT__fifo_instance__fifo_mux_16_1c;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__3__KET____DOT__fifo_instance__fifo_mux_16_1d;
    Vcore_tb_fifo_depth64__B10     TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__4__KET____DOT__fifo_instance;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__4__KET____DOT__fifo_instance__fifo_mux_16_1a;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__4__KET____DOT__fifo_instance__fifo_mux_16_1b;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__4__KET____DOT__fifo_instance__fifo_mux_16_1c;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__4__KET____DOT__fifo_instance__fifo_mux_16_1d;
    Vcore_tb_fifo_depth64__B10     TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__5__KET____DOT__fifo_instance;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__5__KET____DOT__fifo_instance__fifo_mux_16_1a;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__5__KET____DOT__fifo_instance__fifo_mux_16_1b;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__5__KET____DOT__fifo_instance__fifo_mux_16_1c;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__5__KET____DOT__fifo_instance__fifo_mux_16_1d;
    Vcore_tb_fifo_depth64__B10     TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__6__KET____DOT__fifo_instance;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__6__KET____DOT__fifo_instance__fifo_mux_16_1a;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__6__KET____DOT__fifo_instance__fifo_mux_16_1b;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__6__KET____DOT__fifo_instance__fifo_mux_16_1c;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__6__KET____DOT__fifo_instance__fifo_mux_16_1d;
    Vcore_tb_fifo_depth64__B10     TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__7__KET____DOT__fifo_instance;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__7__KET____DOT__fifo_instance__fifo_mux_16_1a;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__7__KET____DOT__fifo_instance__fifo_mux_16_1b;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__7__KET____DOT__fifo_instance__fifo_mux_16_1c;
    Vcore_tb_fifo_mux_16_1__B10    TOP__core_tb__DOT__dut__DOT__u_corelet_inst__DOT__u_ofifo__DOT__col_num__BRA__7__KET____DOT__fifo_instance__fifo_mux_16_1d;

    // CONSTRUCTORS
    Vcore_tb__Syms(VerilatedContext* contextp, const char* namep, Vcore_tb* modelp);
    ~Vcore_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void _traceDump();
    void _traceDumpOpen();
    void _traceDumpClose();
};

#endif  // guard
