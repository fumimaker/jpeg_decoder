// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjpeg_core.h for the primary calling header

#ifndef _VJPEG_CORE_JPEG_DQT_H_
#define _VJPEG_CORE_JPEG_DQT_H_  // guard

#include "verilated.h"
#include "Vjpeg_core__Dpi.h"

//==========

class Vjpeg_core__Syms;
class Vjpeg_core_VerilatedVcd;


//----------

VL_MODULE(Vjpeg_core_jpeg_dqt) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__img_start_i,0,0);
    VL_IN8(__PVT__img_end_i,0,0);
    VL_IN8(__PVT__img_dqt_table_y_i,1,0);
    VL_IN8(__PVT__img_dqt_table_cb_i,1,0);
    VL_IN8(__PVT__img_dqt_table_cr_i,1,0);
    VL_IN8(__PVT__cfg_valid_i,0,0);
    VL_IN8(__PVT__cfg_data_i,7,0);
    VL_IN8(__PVT__cfg_last_i,0,0);
    VL_IN8(__PVT__inport_valid_i,0,0);
    VL_IN8(__PVT__inport_idx_i,5,0);
    VL_IN8(__PVT__inport_eob_i,0,0);
    VL_IN8(__PVT__outport_accept_i,0,0);
    VL_OUT8(__PVT__cfg_accept_o,0,0);
    VL_OUT8(__PVT__inport_blk_space_o,0,0);
    VL_OUT8(__PVT__outport_valid_o,0,0);
    VL_OUT8(__PVT__outport_idx_o,5,0);
    VL_OUT8(__PVT__outport_eob_o,0,0);
    VL_IN16(__PVT__inport_data_i,15,0);
    VL_OUT16(__PVT__outport_data_o,15,0);
    VL_IN(__PVT__inport_id_i,31,0);
    VL_OUT(__PVT__outport_id_o,31,0);
    
    // LOCAL SIGNALS
    CData/*7:0*/ __PVT__idx_q;
    CData/*1:0*/ __PVT__cfg_table_q;
    CData/*0:0*/ __PVT__dqt_write_w;
    CData/*7:0*/ __PVT__dqt_table_addr_w;
    CData/*7:0*/ __PVT__dqt_entry_q;
    CData/*0:0*/ __PVT__inport_valid_q;
    CData/*5:0*/ __PVT__inport_idx_q;
    CData/*0:0*/ __PVT__inport_eob_q;
    CData/*0:0*/ __PVT__outport_valid_q;
    CData/*5:0*/ __PVT__outport_idx_q;
    CData/*0:0*/ __PVT__outport_eob_q;
    SData/*15:0*/ __PVT__inport_data_q;
    SData/*15:0*/ __PVT__outport_data_q;
    IData/*31:0*/ __PVT__inport_id_q;
    IData/*31:0*/ __PVT__outport_id_q;
    CData/*7:0*/ __PVT__table_dqt_q[256];
    CData/*1:0*/ __PVT__table_src_w[4];
    
    // INTERNAL VARIABLES
  private:
    Vjpeg_core__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vjpeg_core_jpeg_dqt);  ///< Copying not allowed
  public:
    Vjpeg_core_jpeg_dqt(const char* name = "TOP");
    ~Vjpeg_core_jpeg_dqt();
    
    // INTERNAL METHODS
    void __Vconfigure(Vjpeg_core__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__jpeg_core__u_jpeg_dqt__3(Vjpeg_core__Syms* __restrict vlSymsp);
    static void _sequent__TOP__jpeg_core__u_jpeg_dqt__4(Vjpeg_core__Syms* __restrict vlSymsp);
    static void _sequent__TOP__jpeg_core__u_jpeg_dqt__5(Vjpeg_core__Syms* __restrict vlSymsp);
    static void _settle__TOP__jpeg_core__u_jpeg_dqt__1(Vjpeg_core__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__jpeg_core__u_jpeg_dqt__2(Vjpeg_core__Syms* __restrict vlSymsp);
    uint32_t get_sample();
    uint32_t get_sample_idx();
    bool get_valid();
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
