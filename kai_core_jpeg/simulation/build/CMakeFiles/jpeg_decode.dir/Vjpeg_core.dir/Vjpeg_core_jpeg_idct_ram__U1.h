// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjpeg_core.h for the primary calling header

#ifndef _VJPEG_CORE_JPEG_IDCT_RAM__U1_H_
#define _VJPEG_CORE_JPEG_IDCT_RAM__U1_H_  // guard

#include "verilated.h"
#include "Vjpeg_core__Dpi.h"

//==========

class Vjpeg_core__Syms;
class Vjpeg_core_VerilatedVcd;
class Vjpeg_core_jpeg_idct_ram_dp;


//----------

VL_MODULE(Vjpeg_core_jpeg_idct_ram__U1) {
  public:
    // CELLS
    Vjpeg_core_jpeg_idct_ram_dp* u_ram0;
    Vjpeg_core_jpeg_idct_ram_dp* u_ram1;
    Vjpeg_core_jpeg_idct_ram_dp* u_ram2;
    Vjpeg_core_jpeg_idct_ram_dp* u_ram3;
    
    // PORTS
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__img_start_i,0,0);
    VL_IN8(__PVT__img_end_i,0,0);
    VL_IN8(__PVT__inport_valid_i,0,0);
    VL_IN8(__PVT__inport_idx_i,5,0);
    VL_IN8(__PVT__inport_eob_i,0,0);
    VL_IN8(__PVT__outport_ready_i,0,0);
    VL_OUT8(__PVT__inport_accept_o,0,0);
    VL_OUT8(__PVT__outport_valid_o,0,0);
    VL_OUT8(__PVT__outport_idx_o,2,0);
    VL_IN16(__PVT__inport_data_i,15,0);
    VL_OUT16(__PVT__outport_data0_o,15,0);
    VL_OUT16(__PVT__outport_data1_o,15,0);
    VL_OUT16(__PVT__outport_data2_o,15,0);
    VL_OUT16(__PVT__outport_data3_o,15,0);
    
    // LOCAL SIGNALS
    CData/*1:0*/ __PVT__block_wr_q;
    CData/*1:0*/ __PVT__block_rd_q;
    CData/*5:0*/ __PVT__rd_idx_q;
    CData/*3:0*/ __PVT__rd_addr_q;
    CData/*5:0*/ __PVT__wr_ptr_w;
    CData/*0:0*/ __PVT__wr0_w;
    CData/*0:0*/ __PVT__wr1_w;
    CData/*0:0*/ __PVT__wr2_w;
    CData/*0:0*/ __PVT__wr3_w;
    CData/*3:0*/ __PVT__block_ready_q;
    CData/*1:0*/ __PVT__state_q;
    CData/*1:0*/ __PVT__next_state_r;
    CData/*0:0*/ __PVT__data_val0_q;
    CData/*0:0*/ __PVT__data_val1_q;
    CData/*0:0*/ __PVT__data_val2_q;
    CData/*0:0*/ __PVT__data_val3_q;
    QData/*63:0*/ __PVT__data_valid0_r;
    QData/*63:0*/ __PVT__data_valid0_q;
    QData/*63:0*/ __PVT__data_valid1_r;
    QData/*63:0*/ __PVT__data_valid1_q;
    QData/*63:0*/ __PVT__data_valid2_r;
    QData/*63:0*/ __PVT__data_valid2_q;
    QData/*63:0*/ __PVT__data_valid3_r;
    QData/*63:0*/ __PVT__data_valid3_q;
    
    // LOCAL VARIABLES
    CData/*5:0*/ __Vcellinp__u_ram0__addr1_i;
    CData/*5:0*/ __Vcellinp__u_ram1__addr1_i;
    CData/*5:0*/ __Vcellinp__u_ram2__addr1_i;
    CData/*5:0*/ __Vcellinp__u_ram3__addr1_i;
    
    // INTERNAL VARIABLES
  private:
    Vjpeg_core__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vjpeg_core_jpeg_idct_ram__U1);  ///< Copying not allowed
  public:
    Vjpeg_core_jpeg_idct_ram__U1(const char* name = "TOP");
    ~Vjpeg_core_jpeg_idct_ram__U1();
    
    // INTERNAL METHODS
    void __Vconfigure(Vjpeg_core__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__jpeg_core__u_jpeg_idct__u_input__2(Vjpeg_core__Syms* __restrict vlSymsp);
    static void _sequent__TOP__jpeg_core__u_jpeg_idct__u_input__3(Vjpeg_core__Syms* __restrict vlSymsp);
    static void _settle__TOP__jpeg_core__u_jpeg_idct__u_input__1(Vjpeg_core__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard