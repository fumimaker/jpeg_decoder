// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjpeg_core.h for the primary calling header

#ifndef _VJPEG_CORE_JPEG_OUTPUT_CX_RAM_H_
#define _VJPEG_CORE_JPEG_OUTPUT_CX_RAM_H_  // guard

#include "verilated.h"
#include "Vjpeg_core__Dpi.h"

//==========

class Vjpeg_core__Syms;
class Vjpeg_core_VerilatedVcd;
class Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8;


//----------

VL_MODULE(Vjpeg_core_jpeg_output_cx_ram) {
  public:
    // CELLS
    Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8* u_ram;
    
    // PORTS
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__wr_idx_i,5,0);
    VL_IN8(__PVT__push_i,0,0);
    VL_IN8(__PVT__mode420_i,0,0);
    VL_IN8(__PVT__pop_i,0,0);
    VL_IN8(__PVT__flush_i,0,0);
    VL_OUT8(__PVT__valid_o,0,0);
    VL_IN(__PVT__data_in_i,31,0);
    VL_OUT(__PVT__data_out_o,31,0);
    VL_OUT(__PVT__level_o,31,0);
    
    // LOCAL SIGNALS
    CData/*7:0*/ __PVT__rd_ptr_q;
    CData/*7:0*/ __PVT__wr_ptr_q;
    CData/*7:0*/ __PVT__write_next_w;
    CData/*0:0*/ __PVT__rd_q;
    CData/*7:0*/ __PVT__rd_ptr_next_w;
    CData/*7:0*/ __PVT__cx_idx_q;
    CData/*5:0*/ __PVT__cx_rd_ptr_r;
    CData/*1:0*/ __PVT__cx_half_q;
    CData/*5:0*/ __PVT__cx_rd_ptr_q;
    CData/*7:0*/ __PVT__rd_addr_w;
    CData/*0:0*/ __PVT__rd_skid_q;
    IData/*31:0*/ __PVT__rd_skid_data_q;
    IData/*31:0*/ __PVT__count_q;
    IData/*31:0*/ __PVT__count_r;
    
    // LOCAL VARIABLES
    CData/*7:0*/ __Vcellinp__u_ram__addr0_i;
    CData/*7:0*/ __Vtableidx1;
    CData/*7:0*/ __Vtableidx2;
    CData/*7:0*/ __Vdly__cx_idx_q;
    CData/*1:0*/ __Vdly__cx_half_q;
    static CData/*5:0*/ __Vtable1___PVT__cx_rd_ptr_r[256];
    static CData/*5:0*/ __Vtable2___PVT__cx_rd_ptr_r[256];
    
    // INTERNAL VARIABLES
  private:
    Vjpeg_core__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vjpeg_core_jpeg_output_cx_ram);  ///< Copying not allowed
  public:
    Vjpeg_core_jpeg_output_cx_ram(const char* name = "TOP");
    ~Vjpeg_core_jpeg_output_cx_ram();
    
    // INTERNAL METHODS
    void __Vconfigure(Vjpeg_core__Syms* symsp, bool first);
    void _combo__TOP__jpeg_core__u_jpeg_output__u_ram_cb__7(Vjpeg_core__Syms* __restrict vlSymsp);
    void _combo__TOP__jpeg_core__u_jpeg_output__u_ram_cr__8(Vjpeg_core__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    void _sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cb__3(Vjpeg_core__Syms* __restrict vlSymsp);
    void _sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cb__5(Vjpeg_core__Syms* __restrict vlSymsp);
    void _sequent__TOP__jpeg_core__u_jpeg_output__u_ram_cr__4(Vjpeg_core__Syms* __restrict vlSymsp);
    void _settle__TOP__jpeg_core__u_jpeg_output__u_ram_cb__1(Vjpeg_core__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    void _settle__TOP__jpeg_core__u_jpeg_output__u_ram_cr__2(Vjpeg_core__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
