// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjpeg_core.h for the primary calling header

#ifndef _VJPEG_CORE_JPEG_OUTPUT_Y_RAM_H_
#define _VJPEG_CORE_JPEG_OUTPUT_Y_RAM_H_  // guard

#include "verilated.h"
#include "Vjpeg_core__Dpi.h"

//==========

class Vjpeg_core__Syms;
class Vjpeg_core_VerilatedVcd;
class Vjpeg_core_jpeg_output_y_ram_ram_dp_512_9;


//----------

VL_MODULE(Vjpeg_core_jpeg_output_y_ram) {
  public:
    // CELLS
    Vjpeg_core_jpeg_output_y_ram_ram_dp_512_9* u_ram;
    
    // PORTS
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__wr_idx_i,5,0);
    VL_IN8(__PVT__push_i,0,0);
    VL_IN8(__PVT__pop_i,0,0);
    VL_IN8(__PVT__flush_i,0,0);
    VL_OUT8(__PVT__valid_o,0,0);
    VL_IN(__PVT__data_in_i,31,0);
    VL_OUT(__PVT__data_out_o,31,0);
    VL_OUT(__PVT__level_o,31,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__read_ok_w;
    CData/*0:0*/ __PVT__rd_q;
    CData/*0:0*/ __PVT__rd_skid_q;
    SData/*8:0*/ __PVT__rd_ptr_q;
    SData/*8:0*/ __PVT__wr_ptr_q;
    SData/*8:0*/ __PVT__write_next_w;
    SData/*8:0*/ __PVT__rd_ptr_next_w;
    IData/*31:0*/ __PVT__rd_skid_data_q;
    IData/*31:0*/ __PVT__count_q;
    IData/*31:0*/ __PVT__count_r;
    
    // LOCAL VARIABLES
    SData/*8:0*/ __Vcellinp__u_ram__addr0_i;
    
    // INTERNAL VARIABLES
  private:
    Vjpeg_core__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vjpeg_core_jpeg_output_y_ram);  ///< Copying not allowed
  public:
    Vjpeg_core_jpeg_output_y_ram(const char* name = "TOP");
    ~Vjpeg_core_jpeg_output_y_ram();
    
    // INTERNAL METHODS
    void __Vconfigure(Vjpeg_core__Syms* symsp, bool first);
    static void _combo__TOP__jpeg_core__u_jpeg_output__u_ram_y__3(Vjpeg_core__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__jpeg_core__u_jpeg_output__u_ram_y__2(Vjpeg_core__Syms* __restrict vlSymsp);
    static void _settle__TOP__jpeg_core__u_jpeg_output__u_ram_y__1(Vjpeg_core__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
