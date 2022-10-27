// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjpeg_core.h for the primary calling header

#ifndef _VJPEG_CORE_JPEG_CORE_H_
#define _VJPEG_CORE_JPEG_CORE_H_  // guard

#include "verilated.h"
#include "Vjpeg_core__Dpi.h"

//==========

class Vjpeg_core__Syms;
class Vjpeg_core_VerilatedVcd;
class Vjpeg_core_jpeg_idct__U1;
class Vjpeg_core_jpeg_dqt;
class Vjpeg_core_jpeg_output;
class Vjpeg_core_jpeg_bitbuffer;
class Vjpeg_core_jpeg_mcu_proc;


//----------

VL_MODULE(Vjpeg_core_jpeg_core) {
  public:
    // CELLS
    Vjpeg_core_jpeg_idct__U1* u_jpeg_idct;
    Vjpeg_core_jpeg_dqt* u_jpeg_dqt;
    Vjpeg_core_jpeg_output* u_jpeg_output;
    Vjpeg_core_jpeg_bitbuffer* u_jpeg_bitbuffer;
    Vjpeg_core_jpeg_mcu_proc* u_jpeg_mcu_proc;
    
    // PORTS
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
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__img_end_w;
    CData/*0:0*/ __PVT__bb_inport_valid_w;
    CData/*0:0*/ __PVT__dqt_cfg_valid_w;
    CData/*0:0*/ __PVT__u_jpeg_input__DOT__inport_accept_w;
    CData/*1:0*/ __PVT__u_jpeg_input__DOT__byte_idx_q;
    CData/*7:0*/ __PVT__u_jpeg_input__DOT__data_r;
    CData/*7:0*/ __PVT__u_jpeg_input__DOT__last_b_q;
    CData/*0:0*/ __PVT__u_jpeg_input__DOT__token_soi_w;
    CData/*0:0*/ __PVT__u_jpeg_input__DOT__token_sof0_w;
    CData/*0:0*/ __PVT__u_jpeg_input__DOT__token_eoi_w;
    CData/*0:0*/ __PVT__u_jpeg_input__DOT__token_sos_w;
    CData/*0:0*/ __PVT__u_jpeg_input__DOT__token_pad_w;
    CData/*4:0*/ __PVT__u_jpeg_input__DOT__state_q;
    CData/*4:0*/ __PVT__u_jpeg_input__DOT__next_state_r;
    CData/*0:0*/ __PVT__u_jpeg_input__DOT__data_valid_q;
    CData/*7:0*/ __PVT__u_jpeg_input__DOT__data_data_q;
    CData/*0:0*/ __PVT__u_jpeg_input__DOT__data_last_q;
    CData/*5:0*/ __PVT__u_jpeg_input__DOT__idx_q;
    CData/*7:0*/ __PVT__u_jpeg_input__DOT__img_precision_q;
    CData/*7:0*/ __PVT__u_jpeg_input__DOT__img_num_comp_q;
    CData/*7:0*/ __PVT__u_jpeg_input__DOT__img_y_factor_q;
    CData/*1:0*/ __PVT__u_jpeg_input__DOT__img_y_dqt_table_q;
    CData/*7:0*/ __PVT__u_jpeg_input__DOT__img_cb_factor_q;
    CData/*1:0*/ __PVT__u_jpeg_input__DOT__img_cb_dqt_table_q;
    CData/*7:0*/ __PVT__u_jpeg_input__DOT__img_cr_factor_q;
    CData/*1:0*/ __PVT__u_jpeg_input__DOT__img_cr_dqt_table_q;
    CData/*1:0*/ __PVT__u_jpeg_input__DOT__img_mode_q;
    CData/*0:0*/ __PVT__u_jpeg_input__DOT__eof_q;
    CData/*0:0*/ __PVT__u_jpeg_input__DOT__start_q;
    CData/*0:0*/ __PVT__u_jpeg_dht__DOT__genblk2__DOT__lookup_valid_q;
    CData/*7:0*/ __PVT__u_jpeg_dht__DOT__genblk2__DOT__lookup_value_q;
    CData/*4:0*/ __PVT__u_jpeg_dht__DOT__genblk2__DOT__lookup_width_q;
    CData/*7:0*/ __PVT__u_jpeg_dht__DOT__genblk2__DOT__u_fixed_y_dc__DOT__y_dc_value_r;
    CData/*4:0*/ __PVT__u_jpeg_dht__DOT__genblk2__DOT__u_fixed_y_dc__DOT__y_dc_width_r;
    CData/*7:0*/ __PVT__u_jpeg_dht__DOT__genblk2__DOT__u_fixed_y_ac__DOT__y_ac_value_r;
    CData/*4:0*/ __PVT__u_jpeg_dht__DOT__genblk2__DOT__u_fixed_y_ac__DOT__y_ac_width_r;
    CData/*7:0*/ __PVT__u_jpeg_dht__DOT__genblk2__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r;
    CData/*4:0*/ __PVT__u_jpeg_dht__DOT__genblk2__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r;
    CData/*7:0*/ __PVT__u_jpeg_dht__DOT__genblk2__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r;
    CData/*4:0*/ __PVT__u_jpeg_dht__DOT__genblk2__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r;
    SData/*15:0*/ __PVT__u_jpeg_input__DOT__length_q;
    SData/*15:0*/ __PVT__u_jpeg_input__DOT__img_height_q;
    SData/*15:0*/ __PVT__u_jpeg_input__DOT__img_width_q;
    
    // LOCAL VARIABLES
    CData/*5:0*/ __Vdly__u_jpeg_input__DOT__idx_q;
    SData/*15:0*/ __Vdly__u_jpeg_input__DOT__img_width_q;
    
    // INTERNAL VARIABLES
  private:
    Vjpeg_core__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vjpeg_core_jpeg_core);  ///< Copying not allowed
  public:
    Vjpeg_core_jpeg_core(const char* name = "TOP");
    ~Vjpeg_core_jpeg_core();
    
    // INTERNAL METHODS
    void __Vconfigure(Vjpeg_core__Syms* symsp, bool first);
    static void _combo__TOP__jpeg_core__4(Vjpeg_core__Syms* __restrict vlSymsp);
    static void _combo__TOP__jpeg_core__6(Vjpeg_core__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__jpeg_core__2(Vjpeg_core__Syms* __restrict vlSymsp);
    static void _sequent__TOP__jpeg_core__3(Vjpeg_core__Syms* __restrict vlSymsp);
    static void _sequent__TOP__jpeg_core__5(Vjpeg_core__Syms* __restrict vlSymsp);
    static void _settle__TOP__jpeg_core__1(Vjpeg_core__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
