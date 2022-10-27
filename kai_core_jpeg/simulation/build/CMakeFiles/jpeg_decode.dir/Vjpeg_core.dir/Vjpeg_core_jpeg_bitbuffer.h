// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjpeg_core.h for the primary calling header

#ifndef _VJPEG_CORE_JPEG_BITBUFFER_H_
#define _VJPEG_CORE_JPEG_BITBUFFER_H_  // guard

#include "verilated.h"
#include "Vjpeg_core__Dpi.h"

//==========

class Vjpeg_core__Syms;
class Vjpeg_core_VerilatedVcd;


//----------

VL_MODULE(Vjpeg_core_jpeg_bitbuffer) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__img_start_i,0,0);
    VL_IN8(__PVT__img_end_i,0,0);
    VL_IN8(__PVT__inport_valid_i,0,0);
    VL_IN8(__PVT__inport_data_i,7,0);
    VL_IN8(__PVT__inport_last_i,0,0);
    VL_IN8(__PVT__outport_pop_i,5,0);
    VL_OUT8(__PVT__inport_accept_o,0,0);
    VL_OUT8(__PVT__outport_valid_o,0,0);
    VL_OUT8(__PVT__outport_last_o,0,0);
    VL_OUT(__PVT__outport_data_o,31,0);
    
    // LOCAL SIGNALS
    CData/*5:0*/ __PVT__rd_ptr_q;
    CData/*5:0*/ __PVT__wr_ptr_q;
    CData/*6:0*/ __PVT__count_q;
    CData/*0:0*/ __PVT__drain_q;
    CData/*6:0*/ __PVT__count_r;
    QData/*39:0*/ __PVT__fifo_data_r;
    QData/*39:0*/ __PVT__data_shifted_w;
    CData/*7:0*/ __PVT__ram_q[8];
    
    // INTERNAL VARIABLES
  private:
    Vjpeg_core__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vjpeg_core_jpeg_bitbuffer);  ///< Copying not allowed
  public:
    Vjpeg_core_jpeg_bitbuffer(const char* name = "TOP");
    ~Vjpeg_core_jpeg_bitbuffer();
    
    // INTERNAL METHODS
    void __Vconfigure(Vjpeg_core__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__jpeg_core__u_jpeg_bitbuffer__3(Vjpeg_core__Syms* __restrict vlSymsp);
    static void _sequent__TOP__jpeg_core__u_jpeg_bitbuffer__4(Vjpeg_core__Syms* __restrict vlSymsp);
    static void _settle__TOP__jpeg_core__u_jpeg_bitbuffer__1(Vjpeg_core__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__jpeg_core__u_jpeg_bitbuffer__2(Vjpeg_core__Syms* __restrict vlSymsp);
    uint32_t get_data();
    bool get_valid();
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
