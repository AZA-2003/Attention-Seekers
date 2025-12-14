# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vcore_tb.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vcore_tb \
	Vcore_tb___024root__DepSet_h03008cef__0 \
	Vcore_tb___024root__DepSet_h03008cef__1 \
	Vcore_tb___024root__DepSet_h9509ac93__0 \
	Vcore_tb_mac_row__DepSet_h49eb6886__0 \
	Vcore_tb_mac_row__DepSet_h4ff290ba__0 \
	Vcore_tb_fifo_depth64__I1__DepSet_h87bef6c1__0 \
	Vcore_tb_fifo_depth64__I1__DepSet_hb622ae38__0 \
	Vcore_tb_fifo_depth64__B10__DepSet_h5d3777e4__0 \
	Vcore_tb_fifo_depth64__B10__DepSet_h431ea39c__0 \
	Vcore_tb_fifo_mux_16_1__DepSet_h590eb53f__0 \
	Vcore_tb_fifo_mux_16_1__DepSet_h590eb53f__1 \
	Vcore_tb_fifo_mux_16_1__B10__DepSet_hd6abce1a__0 \
	Vcore_tb_fifo_mux_16_1__B10__DepSet_hd6abce1a__1 \
	Vcore_tb_fifo_mux_16_1__B10__DepSet_hd6abce1a__2 \
	Vcore_tb_fifo_mux_16_1__B10__DepSet_hd6abce1a__3 \
	Vcore_tb_fifo_mux_16_1__B10__DepSet_hd6abce1a__4 \
	Vcore_tb_fifo_mux_16_1__B10__DepSet_hd6abce1a__5 \
	Vcore_tb__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vcore_tb__ConstPool_0 \
	Vcore_tb___024root__Slow \
	Vcore_tb___024root__DepSet_h03008cef__0__Slow \
	Vcore_tb___024root__DepSet_h9509ac93__0__Slow \
	Vcore_tb_mac_row__Slow \
	Vcore_tb_mac_row__DepSet_h4ff290ba__0__Slow \
	Vcore_tb_fifo_depth64__I1__Slow \
	Vcore_tb_fifo_depth64__I1__DepSet_h19a82279__0__Slow \
	Vcore_tb_fifo_depth64__B10__Slow \
	Vcore_tb_fifo_depth64__B10__DepSet_h431ea39c__0__Slow \
	Vcore_tb_fifo_mux_16_1__Slow \
	Vcore_tb_fifo_mux_16_1__DepSet_h3f17e563__0__Slow \
	Vcore_tb_fifo_mux_16_1__B10__Slow \
	Vcore_tb_fifo_mux_16_1__B10__DepSet_hcab2ea3e__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vcore_tb__Trace__0 \
	Vcore_tb__Trace__1 \
	Vcore_tb__Trace__2 \
	Vcore_tb__Trace__3 \
	Vcore_tb__Trace__4 \
	Vcore_tb__Trace__5 \
	Vcore_tb__Trace__6 \
	Vcore_tb__Trace__7 \
	Vcore_tb__Trace__8 \
	Vcore_tb__Trace__9 \
	Vcore_tb__Trace__10 \
	Vcore_tb__Trace__11 \
	Vcore_tb__Trace__12 \
	Vcore_tb__Trace__13 \
	Vcore_tb__Trace__14 \
	Vcore_tb__Trace__15 \
	Vcore_tb__Trace__16 \
	Vcore_tb__Trace__17 \
	Vcore_tb__Trace__18 \
	Vcore_tb__Trace__19 \
	Vcore_tb__Trace__20 \
	Vcore_tb__Trace__21 \
	Vcore_tb__Trace__22 \
	Vcore_tb__Trace__23 \
	Vcore_tb__Trace__24 \
	Vcore_tb__Trace__25 \
	Vcore_tb__Trace__26 \
	Vcore_tb__Trace__27 \
	Vcore_tb__Trace__28 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vcore_tb__Syms \
	Vcore_tb__Trace__0__Slow \
	Vcore_tb__TraceDecls__0__Slow \
	Vcore_tb__Trace__1__Slow \
	Vcore_tb__Trace__2__Slow \
	Vcore_tb__Trace__3__Slow \
	Vcore_tb__Trace__4__Slow \
	Vcore_tb__Trace__5__Slow \
	Vcore_tb__Trace__6__Slow \
	Vcore_tb__Trace__7__Slow \
	Vcore_tb__Trace__8__Slow \
	Vcore_tb__Trace__9__Slow \
	Vcore_tb__Trace__10__Slow \
	Vcore_tb__Trace__11__Slow \
	Vcore_tb__Trace__12__Slow \
	Vcore_tb__Trace__13__Slow \
	Vcore_tb__Trace__14__Slow \
	Vcore_tb__Trace__15__Slow \
	Vcore_tb__Trace__16__Slow \
	Vcore_tb__Trace__17__Slow \
	Vcore_tb__Trace__18__Slow \
	Vcore_tb__Trace__19__Slow \
	Vcore_tb__Trace__20__Slow \
	Vcore_tb__Trace__21__Slow \
	Vcore_tb__Trace__22__Slow \
	Vcore_tb__Trace__23__Slow \
	Vcore_tb__Trace__24__Slow \
	Vcore_tb__Trace__25__Slow \
	Vcore_tb__Trace__26__Slow \
	Vcore_tb__Trace__27__Slow \
	Vcore_tb__Trace__28__Slow \
	Vcore_tb__Trace__29__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
