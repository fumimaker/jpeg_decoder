// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjpeg_core.h for the primary calling header

#ifndef _VJPEG_CORE_JPEG_OUTPUT_Y_RAM_RAM_DP_512_9_H_
#define _VJPEG_CORE_JPEG_OUTPUT_Y_RAM_RAM_DP_512_9_H_  // guard

#include "verilated.h"
#include "Vjpeg_core__Dpi.h"

//==========

class Vjpeg_core__Syms;
class Vjpeg_core_VerilatedVcd;


//----------

VL_MODULE(Vjpeg_core_jpeg_output_y_ram_ram_dp_512_9) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clk0_i,0,0);
    VL_IN8(__PVT__clk1_i,0,0);
    VL_IN8(__PVT__rst0_i,0,0);
    VL_IN8(__PVT__wr0_i,0,0);
    VL_IN8(__PVT__rst1_i,0,0);
    VL_IN8(__PVT__wr1_i,0,0);
    VL_IN16(__PVT__addr0_i,8,0);
    VL_IN16(__PVT__addr1_i,8,0);
    VL_IN(__PVT__data0_i,31,0);
    VL_IN(__PVT__data1_i,31,0);
    VL_OUT(__PVT__data0_o,31,0);
    VL_OUT(__PVT__data1_o,31,0);
    
    // LOCAL SIGNALS
    IData/*31:0*/ __PVT__ram_read0_q;
    IData/*31:0*/ __PVT__ram_read1_q;
    IData/*31:0*/ ram[512];
    
    // INTERNAL VARIABLES
  private:
    Vjpeg_core__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vjpeg_core_jpeg_output_y_ram_ram_dp_512_9);  ///< Copying not allowed
  public:
    Vjpeg_core_jpeg_output_y_ram_ram_dp_512_9(const char* name = "TOP");
    ~Vjpeg_core_jpeg_output_y_ram_ram_dp_512_9();
    
    // INTERNAL METHODS
    void __Vconfigure(Vjpeg_core__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__jpeg_core__u_jpeg_output__u_ram_y__u_ram__1(Vjpeg_core__Syms* __restrict vlSymsp);
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
