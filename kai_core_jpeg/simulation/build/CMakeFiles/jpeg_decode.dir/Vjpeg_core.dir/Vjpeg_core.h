// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VJPEG_CORE_H_
#define _VJPEG_CORE_H_  // guard

#include "verilated.h"
#include "Vjpeg_core__Dpi.h"

//==========

class Vjpeg_core__Syms;
class Vjpeg_core_VerilatedVcd;
class Vjpeg_core_jpeg_core;


//----------

VL_MODULE(Vjpeg_core) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    Vjpeg_core_jpeg_core* jpeg_core;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_i,0,0);
    VL_IN8(inport_valid_i,0,0);
    VL_IN8(inport_strb_i,3,0);
    VL_IN8(inport_last_i,0,0);
    VL_IN8(outport_accept_i,0,0);
    VL_OUT8(inport_accept_o,0,0);
    VL_OUT8(outport_valid_o,0,0);
    VL_OUT8(outport_pixel_r_o,7,0);
    VL_OUT8(outport_pixel_g_o,7,0);
    VL_OUT8(outport_pixel_b_o,7,0);
    VL_OUT8(idle_o,0,0);
    VL_OUT16(outport_width_o,15,0);
    VL_OUT16(outport_height_o,15,0);
    VL_OUT16(outport_pixel_x_o,15,0);
    VL_OUT16(outport_pixel_y_o,15,0);
    VL_IN(inport_data_i,31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    CData/*0:0*/ __Vclklast__TOP__rst_i;
    IData/*31:0*/ __Vm_traceActivity;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vjpeg_core__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vjpeg_core);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vjpeg_core(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vjpeg_core();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vjpeg_core__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vjpeg_core__Syms* symsp, bool first);
  private:
    static QData _change_request(Vjpeg_core__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vjpeg_core__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vjpeg_core__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vjpeg_core__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__3(Vjpeg_core__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(Vjpeg_core__Syms* __restrict vlSymsp);
    static void _settle__TOP__1(Vjpeg_core__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__2(Vjpeg_core__Syms* __restrict vlSymsp);
    static void traceChgThis(Vjpeg_core__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__10(Vjpeg_core__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__11(Vjpeg_core__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__2(Vjpeg_core__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__3(Vjpeg_core__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__4(Vjpeg_core__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__5(Vjpeg_core__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__6(Vjpeg_core__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__7(Vjpeg_core__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__8(Vjpeg_core__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceChgThis__9(Vjpeg_core__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceFullThis(Vjpeg_core__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceFullThis__1(Vjpeg_core__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis(Vjpeg_core__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInitThis__1(Vjpeg_core__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
