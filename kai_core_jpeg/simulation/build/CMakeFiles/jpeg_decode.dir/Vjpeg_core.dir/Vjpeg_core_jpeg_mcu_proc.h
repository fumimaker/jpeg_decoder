// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjpeg_core.h for the primary calling header

#ifndef _VJPEG_CORE_JPEG_MCU_PROC_H_
#define _VJPEG_CORE_JPEG_MCU_PROC_H_  // guard

#include "verilated.h"
#include "Vjpeg_core__Dpi.h"

//==========

class Vjpeg_core__Syms;
class Vjpeg_core_VerilatedVcd;


//----------

VL_MODULE(Vjpeg_core_jpeg_mcu_proc) {
  public:
    
    // PORTS
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__img_start_i,0,0);
    VL_IN8(__PVT__img_end_i,0,0);
    VL_IN8(__PVT__img_mode_i,1,0);
    VL_IN8(__PVT__inport_valid_i,0,0);
    VL_IN8(__PVT__inport_last_i,0,0);
    VL_IN8(__PVT__lookup_valid_i,0,0);
    VL_IN8(__PVT__lookup_width_i,4,0);
    VL_IN8(__PVT__lookup_value_i,7,0);
    VL_IN8(__PVT__outport_blk_space_i,0,0);
    VL_OUT8(__PVT__inport_pop_o,5,0);
    VL_OUT8(__PVT__lookup_req_o,0,0);
    VL_OUT8(__PVT__lookup_table_o,1,0);
    VL_OUT8(__PVT__outport_valid_o,0,0);
    VL_OUT8(__PVT__outport_idx_o,5,0);
    VL_OUT8(__PVT__outport_eob_o,0,0);
    VL_IN16(__PVT__img_width_i,15,0);
    VL_IN16(__PVT__img_height_i,15,0);
    VL_OUT16(__PVT__lookup_input_o,15,0);
    VL_OUT16(__PVT__outport_data_o,15,0);
    VL_IN(__PVT__inport_data_i,31,0);
    VL_OUT(__PVT__outport_id_o,31,0);
    
    // LOCAL SIGNALS
    CData/*0:0*/ __PVT__start_block_w;
    CData/*4:0*/ __PVT__state_q;
    CData/*4:0*/ __PVT__next_state_r;
    CData/*7:0*/ __PVT__code_bits_q;
    CData/*7:0*/ __PVT__coeff_idx_q;
    CData/*0:0*/ __PVT__first_q;
    CData/*7:0*/ __PVT__code_q;
    CData/*4:0*/ __PVT__lookup_width_q;
    CData/*5:0*/ __PVT__pop_bits_r;
    CData/*1:0*/ __PVT__lookup_table_r;
    CData/*0:0*/ __PVT__push_q;
    CData/*1:0*/ __PVT__u_id__DOT__block_type_q;
    CData/*2:0*/ __PVT__u_id__DOT__type_idx_q;
    CData/*0:0*/ __PVT__u_id__DOT__end_of_image_q;
    SData/*15:0*/ __PVT__input_data_q;
    SData/*15:0*/ __PVT__dc_coeff_q;
    SData/*15:0*/ __PVT__coeff_r;
    SData/*15:0*/ __PVT__coeff_q;
    SData/*15:0*/ __PVT__u_id__DOT__block_x_q;
    SData/*15:0*/ __PVT__u_id__DOT__block_y_q;
    SData/*15:0*/ __PVT__u_id__DOT__x_idx_q;
    SData/*15:0*/ __PVT__u_id__DOT__y_idx_q;
    SData/*15:0*/ __PVT__u_id__DOT__block_x_next_w;
    SData/*15:0*/ __PVT__prev_dc_coeff_q[4];
    
    // LOCAL VARIABLES
    CData/*4:0*/ __Vfunc_decode_number__0__bits;
    CData/*4:0*/ __Vfunc_decode_number__1__bits;
    SData/*15:0*/ __Vfunc_decode_number__0__Vfuncout;
    SData/*15:0*/ __Vfunc_decode_number__0__w;
    SData/*15:0*/ __Vfunc_decode_number__0__code;
    SData/*15:0*/ __Vfunc_decode_number__1__Vfuncout;
    SData/*15:0*/ __Vfunc_decode_number__1__w;
    SData/*15:0*/ __Vfunc_decode_number__1__code;
    
    // INTERNAL VARIABLES
  private:
    Vjpeg_core__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vjpeg_core_jpeg_mcu_proc);  ///< Copying not allowed
  public:
    Vjpeg_core_jpeg_mcu_proc(const char* name = "TOP");
    ~Vjpeg_core_jpeg_mcu_proc();
    
    // INTERNAL METHODS
    void __Vconfigure(Vjpeg_core__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__jpeg_core__u_jpeg_mcu_proc__3(Vjpeg_core__Syms* __restrict vlSymsp);
    static void _sequent__TOP__jpeg_core__u_jpeg_mcu_proc__4(Vjpeg_core__Syms* __restrict vlSymsp);
    static void _sequent__TOP__jpeg_core__u_jpeg_mcu_proc__5(Vjpeg_core__Syms* __restrict vlSymsp);
    static void _settle__TOP__jpeg_core__u_jpeg_mcu_proc__1(Vjpeg_core__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _settle__TOP__jpeg_core__u_jpeg_mcu_proc__2(Vjpeg_core__Syms* __restrict vlSymsp);
    uint32_t get_bitbuffer_pop();
    bool get_dht_valid();
    uint32_t get_dht_value();
    uint32_t get_dht_width();
    uint32_t get_sample();
    uint32_t get_sample_idx();
    bool get_valid();
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
