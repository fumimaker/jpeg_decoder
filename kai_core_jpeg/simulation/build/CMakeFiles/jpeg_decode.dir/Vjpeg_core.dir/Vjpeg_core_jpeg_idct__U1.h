// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjpeg_core.h for the primary calling header

#ifndef _VJPEG_CORE_JPEG_IDCT__U1_H_
#define _VJPEG_CORE_JPEG_IDCT__U1_H_  // guard

#include "verilated.h"
#include "Vjpeg_core__Dpi.h"

//==========

class Vjpeg_core__Syms;
class Vjpeg_core_VerilatedVcd;
class Vjpeg_core_jpeg_idct_ram__U1;
class Vjpeg_core_jpeg_idct_transpose__U1;


//----------

VL_MODULE(Vjpeg_core_jpeg_idct__U1) {
  public:
    // CELLS
    Vjpeg_core_jpeg_idct_ram__U1* u_input;
    Vjpeg_core_jpeg_idct_transpose__U1* u_transpose;
    
    // PORTS
    VL_IN8(__PVT__clk_i,0,0);
    VL_IN8(__PVT__rst_i,0,0);
    VL_IN8(__PVT__img_start_i,0,0);
    VL_IN8(__PVT__img_end_i,0,0);
    VL_IN8(__PVT__inport_valid_i,0,0);
    VL_IN8(__PVT__inport_idx_i,5,0);
    VL_IN8(__PVT__inport_eob_i,0,0);
    VL_IN8(__PVT__outport_accept_i,0,0);
    VL_OUT8(__PVT__inport_accept_o,0,0);
    VL_OUT8(__PVT__outport_valid_o,0,0);
    VL_OUT8(__PVT__outport_idx_o,5,0);
    VL_IN16(__PVT__inport_data_i,15,0);
    VL_IN(__PVT__inport_id_i,31,0);
    VL_OUT(__PVT__outport_data_o,31,0);
    VL_OUT(__PVT__outport_id_o,31,0);
    
    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ __PVT__input_ready_w;
        CData/*0:0*/ __PVT__u_id_fifo__DOT__accept_o;
        CData/*0:0*/ __PVT__u_id_fifo__DOT__valid_o;
        CData/*2:0*/ __PVT__u_id_fifo__DOT__rd_ptr_q;
        CData/*2:0*/ __PVT__u_id_fifo__DOT__wr_ptr_q;
        CData/*3:0*/ __PVT__u_id_fifo__DOT__count_q;
        CData/*0:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg0_valid_q;
        CData/*2:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg0_idx_q;
        CData/*0:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_valid_q;
        CData/*2:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q;
        CData/*0:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg2_valid_q;
        CData/*2:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg2_idx_q;
        CData/*5:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__valid_q;
        CData/*5:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q;
        CData/*0:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg0_valid_q;
        CData/*2:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg0_idx_q;
        CData/*0:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_valid_q;
        CData/*2:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q;
        CData/*0:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg2_valid_q;
        CData/*2:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg2_idx_q;
        CData/*5:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__valid_q;
        CData/*5:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__ptr_q;
        IData/*31:0*/ __PVT__idct_x_data_w;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_0_1;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_2_3;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_4_5;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_6_7;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__s0;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__s1;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__s2;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__s3;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__s4;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__s5;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__s6;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__s7;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0_a;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0_b;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul1_a;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul1_b;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul1;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t0;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t1;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t2;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t3;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t4;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t5;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t6;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t7;
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out_tmp;
        IData/*31:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__s0;
        IData/*31:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__s1;
        IData/*31:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__s2;
        IData/*31:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__s3;
        IData/*31:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__s4;
        IData/*31:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__s5;
        IData/*31:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__s6;
        IData/*31:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__s7;
        IData/*31:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul0_a;
        IData/*31:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul0_b;
        IData/*31:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul1_a;
        IData/*31:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul1_b;
        IData/*31:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul0;
        IData/*31:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul1;
    };
    struct {
        IData/*31:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t0;
        IData/*31:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t1;
        IData/*31:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t2;
        IData/*31:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t3;
        IData/*31:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t4;
        IData/*31:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t5;
        IData/*31:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t6;
        IData/*31:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t7;
        IData/*31:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out_tmp;
        IData/*31:0*/ __PVT__u_id_fifo__DOT__ram_q[8];
        IData/*31:0*/ __PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[8];
        IData/*31:0*/ __PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out[8];
    };
    
    // LOCAL VARIABLES
    CData/*0:0*/ __Vcellinp__u_id_fifo__pop_i;
    CData/*5:0*/ __Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__Vfuncout;
    CData/*5:0*/ __Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx;
    CData/*5:0*/ __Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__out_idx;
    CData/*5:0*/ __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__valid_q;
    CData/*5:0*/ __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q;
    
    // INTERNAL VARIABLES
  private:
    Vjpeg_core__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vjpeg_core_jpeg_idct__U1);  ///< Copying not allowed
  public:
    Vjpeg_core_jpeg_idct__U1(const char* name = "TOP");
    ~Vjpeg_core_jpeg_idct__U1();
    
    // INTERNAL METHODS
    void __Vconfigure(Vjpeg_core__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _sequent__TOP__jpeg_core__u_jpeg_idct__2(Vjpeg_core__Syms* __restrict vlSymsp);
    static void _sequent__TOP__jpeg_core__u_jpeg_idct__3(Vjpeg_core__Syms* __restrict vlSymsp);
    static void _sequent__TOP__jpeg_core__u_jpeg_idct__4(Vjpeg_core__Syms* __restrict vlSymsp);
    static void _sequent__TOP__jpeg_core__u_jpeg_idct__5(Vjpeg_core__Syms* __restrict vlSymsp);
    static void _settle__TOP__jpeg_core__u_jpeg_idct__1(Vjpeg_core__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    uint32_t get_sample();
    uint32_t get_sample_idx();
    bool get_valid();
    static void traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
