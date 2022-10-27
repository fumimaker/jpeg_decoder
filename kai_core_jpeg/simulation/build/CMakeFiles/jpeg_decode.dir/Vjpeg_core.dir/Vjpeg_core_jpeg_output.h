// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjpeg_core.h for the primary calling header

#ifndef _VJPEG_CORE_JPEG_OUTPUT_H_
#define _VJPEG_CORE_JPEG_OUTPUT_H_  // guard

#include "verilated.h"
#include "Vjpeg_core__Dpi.h"

//==========

class Vjpeg_core__Syms;
class Vjpeg_core_VerilatedVcd;
class Vjpeg_core_jpeg_output_y_ram;
class Vjpeg_core_jpeg_output_cx_ram;


//----------

VL_MODULE(Vjpeg_core_jpeg_output) {
  public:
    // CELLS
    Vjpeg_core_jpeg_output_y_ram* u_ram_y;
    Vjpeg_core_jpeg_output_cx_ram* u_ram_cb;
    Vjpeg_core_jpeg_output_cx_ram* u_ram_cr;
    
    // PORTS
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__img_start_i,0,0);
    VL_IN8(__PVT__img_end_i,0,0);
    VL_IN8(__PVT__img_mode_i,1,0);
    VL_IN8(__PVT__inport_valid_i,0,0);
    VL_IN8(__PVT__inport_idx_i,5,0);
    VL_IN8(__PVT__outport_accept_i,0,0);
    VL_OUT8(__PVT__inport_accept_o,0,0);
    VL_OUT8(__PVT__outport_valid_o,0,0);
    VL_OUT8(__PVT__outport_pixel_r_o,7,0);
    VL_OUT8(__PVT__outport_pixel_g_o,7,0);
    VL_OUT8(__PVT__outport_pixel_b_o,7,0);
    VL_OUT8(__PVT__idle_o,0,0);
    VL_IN16(__PVT__img_width_i,15,0);
    VL_IN16(__PVT__img_height_i,15,0);
    VL_OUT16(__PVT__outport_width_o,15,0);
    VL_OUT16(__PVT__outport_height_o,15,0);
    VL_OUT16(__PVT__outport_pixel_x_o,15,0);
    VL_OUT16(__PVT__outport_pixel_y_o,15,0);
    VL_IN(__PVT__inport_data_i,31,0);
    VL_IN(__PVT__inport_id_i,31,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__valid_r;
    CData/*0:0*/ __PVT__output_space_w;
    CData/*0:0*/ __PVT__y_pop_w;
    CData/*0:0*/ __PVT__id_valid_w;
    CData/*0:0*/ __PVT__id_pop_w;
    CData/*5:0*/ __PVT__idx_q;
    CData/*1:0*/ __PVT__subsmpl_q;
    CData/*0:0*/ __PVT__active_q;
    CData/*0:0*/ __PVT__valid_q;
    CData/*7:0*/ __PVT__pixel_r_q;
    CData/*7:0*/ __PVT__pixel_g_q;
    CData/*7:0*/ __PVT__pixel_b_q;
    CData/*0:0*/ __PVT__idle_q;
    CData/*0:0*/ __PVT__u_info__DOT__accept_o;
    CData/*2:0*/ __PVT__u_info__DOT__rd_ptr_q;
    CData/*2:0*/ __PVT__u_info__DOT__wr_ptr_q;
    CData/*3:0*/ __PVT__u_info__DOT__count_q;
    SData/*15:0*/ __PVT__pixel_x_q;
    SData/*15:0*/ __PVT__pixel_y_q;
    IData/*31:0*/ __PVT__id_value_w;
    IData/*31:0*/ __PVT__r_conv_r;
    IData/*31:0*/ __PVT__g_conv_r;
    IData/*31:0*/ __PVT__b_conv_r;
    IData/*31:0*/ __PVT__u_info__DOT__ram_q[8];
    
    // LOCAL VARIABLES
    CData/*0:0*/ __Vcellinp__u_ram_y__push_i;
    CData/*0:0*/ __Vcellinp__u_ram_cb__push_i;
    CData/*0:0*/ __Vcellinp__u_ram_cr__push_i;
    CData/*0:0*/ __Vcellinp__u_info__push_i;
    
    // INTERNAL VARIABLES
  private:
    Vjpeg_core__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vjpeg_core_jpeg_output);  ///< Copying not allowed
  public:
    Vjpeg_core_jpeg_output(const char* name = "TOP");
    ~Vjpeg_core_jpeg_output();
    
    // INTERNAL METHODS
    void __Vconfigure(Vjpeg_core__Syms* symsp, bool first);
    static void _combo__TOP__jpeg_core__u_jpeg_output__7(Vjpeg_core__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__jpeg_core__u_jpeg_output__3(Vjpeg_core__Syms* __restrict vlSymsp);
    static void _sequent__TOP__jpeg_core__u_jpeg_output__4(Vjpeg_core__Syms* __restrict vlSymsp);
    static void _sequent__TOP__jpeg_core__u_jpeg_output__5(Vjpeg_core__Syms* __restrict vlSymsp);
    static void _sequent__TOP__jpeg_core__u_jpeg_output__6(Vjpeg_core__Syms* __restrict vlSymsp);
    static void _settle__TOP__jpeg_core__u_jpeg_output__1(Vjpeg_core__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__jpeg_core__u_jpeg_output__2(Vjpeg_core__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
