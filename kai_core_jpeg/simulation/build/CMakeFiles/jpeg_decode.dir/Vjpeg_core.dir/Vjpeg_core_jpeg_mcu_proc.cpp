// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "Vjpeg_core_jpeg_mcu_proc.h"
#include "Vjpeg_core__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vjpeg_core_jpeg_mcu_proc) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vjpeg_core_jpeg_mcu_proc::__Vconfigure(Vjpeg_core__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vjpeg_core_jpeg_mcu_proc::~Vjpeg_core_jpeg_mcu_proc() {
}

bool Vjpeg_core_jpeg_mcu_proc::get_valid() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_mcu_proc::get_valid\n"); );
    // Variables
    VL_OUT8(get_valid__Vfuncrtn,0,0);
    Vjpeg_core__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    get_valid__Vfuncrtn = ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__outport_valid_o) 
                           & (3U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_type_q)));
    // Final
    return (get_valid__Vfuncrtn);
}

uint32_t Vjpeg_core_jpeg_mcu_proc::get_sample_idx() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_mcu_proc::get_sample_idx\n"); );
    // Variables
    VL_OUT8(get_sample_idx__Vfuncrtn,5,0);
    Vjpeg_core__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    get_sample_idx__Vfuncrtn = (0x3fU & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_idx_q));
    // Final
    return (get_sample_idx__Vfuncrtn);
}

uint32_t Vjpeg_core_jpeg_mcu_proc::get_sample() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_mcu_proc::get_sample\n"); );
    // Variables
    VL_OUT16(get_sample__Vfuncrtn,15,0);
    Vjpeg_core__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    get_sample__Vfuncrtn = vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_q;
    // Final
    return (get_sample__Vfuncrtn);
}

uint32_t Vjpeg_core_jpeg_mcu_proc::get_bitbuffer_pop() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_mcu_proc::get_bitbuffer_pop\n"); );
    // Variables
    VL_OUT8(get_bitbuffer_pop__Vfuncrtn,5,0);
    Vjpeg_core__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    get_bitbuffer_pop__Vfuncrtn = vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__pop_bits_r;
    // Final
    return (get_bitbuffer_pop__Vfuncrtn);
}

bool Vjpeg_core_jpeg_mcu_proc::get_dht_valid() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_mcu_proc::get_dht_valid\n"); );
    // Variables
    VL_OUT8(get_dht_valid__Vfuncrtn,0,0);
    Vjpeg_core__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    get_dht_valid__Vfuncrtn = ((IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk2__DOT__lookup_valid_q) 
                               & (2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q)));
    // Final
    return (get_dht_valid__Vfuncrtn);
}

uint32_t Vjpeg_core_jpeg_mcu_proc::get_dht_width() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_mcu_proc::get_dht_width\n"); );
    // Variables
    VL_OUT8(get_dht_width__Vfuncrtn,4,0);
    Vjpeg_core__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    get_dht_width__Vfuncrtn = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk2__DOT__lookup_width_q;
    // Final
    return (get_dht_width__Vfuncrtn);
}

uint32_t Vjpeg_core_jpeg_mcu_proc::get_dht_value() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_mcu_proc::get_dht_value\n"); );
    // Variables
    VL_OUT8(get_dht_value__Vfuncrtn,7,0);
    Vjpeg_core__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    get_dht_value__Vfuncrtn = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk2__DOT__lookup_value_q;
    // Final
    return (get_dht_value__Vfuncrtn);
}

void Vjpeg_core_jpeg_mcu_proc::_settle__TOP__jpeg_core__u_jpeg_mcu_proc__1(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_mcu_proc::_settle__TOP__jpeg_core__u_jpeg_mcu_proc__1\n"); );
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_x_next_w 
        = (0xffffU & ((IData)(1U) + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_x_q)));
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__lookup_table_r 
        = ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__first_q)
            ? ((0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_type_q))
                ? 0U : 2U) : ((0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_type_q))
                               ? 1U : 3U));
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__outport_id_o 
        = (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_type_q) 
            << 0x1eU) | ((0x3fff0000U & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_y_q) 
                                         << 0x10U)) 
                         | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_x_q)));
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__bits 
        = (0xfU & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q));
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__w 
        = ((0xfU >= ((IData)(0x10U) - (0xfU & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q))))
            ? (0xffffU & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__input_data_q) 
                          >> ((IData)(0x10U) - (0xfU 
                                                & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q)))))
            : 0U);
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__code 
        = vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__w;
    if (((0U == ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__code) 
                 & ((IData)(1U) << (0x1fU & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__bits) 
                                             - (IData)(1U)))))) 
         & (0U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__bits)))) {
        vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__code 
            = (0xffffU & ((IData)(1U) + (VL_EXTENDS_II(16,16, (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__code)) 
                                         | ((IData)(0xffffffffU) 
                                            << (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__bits)))));
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__Vfuncout 
        = vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__code;
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__bits 
        = (0xfU & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q));
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__w 
        = ((0xfU >= ((IData)(0x10U) - (0xfU & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q))))
            ? (0xffffU & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__input_data_q) 
                          >> ((IData)(0x10U) - (0xfU 
                                                & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q)))))
            : 0U);
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__code 
        = vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__w;
    if (((0U == ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__code) 
                 & ((IData)(1U) << (0x1fU & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__bits) 
                                             - (IData)(1U)))))) 
         & (0U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__bits)))) {
        vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__code 
            = (0xffffU & ((IData)(1U) + (VL_EXTENDS_II(16,16, (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__code)) 
                                         | ((IData)(0xffffffffU) 
                                            << (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__bits)))));
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__Vfuncout 
        = vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__code;
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_r 
        = (0xffffU & ((0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_idx_q))
                       ? ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__Vfuncout) 
                          + vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__prev_dc_coeff_q
                          [vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_type_q])
                       : (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__Vfuncout)));
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__outport_valid_o 
        = ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__push_q) 
           & (0x40U > (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_idx_q)));
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__pop_bits_r = 0U;
    if ((3U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q))) {
        vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__pop_bits_r 
            = (0x3fU & ((0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_idx_q))
                         ? ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__lookup_width_q) 
                            + (0xfU & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q)))
                         : (((0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q)) 
                             | (0xf0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q)))
                             ? (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__lookup_width_q)
                             : ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__lookup_width_q) 
                                + (0xfU & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q))))));
    }
}

VL_INLINE_OPT void Vjpeg_core_jpeg_mcu_proc::_settle__TOP__jpeg_core__u_jpeg_mcu_proc__2(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_mcu_proc::_settle__TOP__jpeg_core__u_jpeg_mcu_proc__2\n"); );
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__next_state_r 
        = vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q;
    if ((1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q) 
                  >> 4U)))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q))) {
                if ((1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q))) {
                        if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core.__PVT__img_end_w)))) {
                            vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__next_state_r = 0U;
                        }
                    } else {
                        vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__next_state_r = 0U;
                    }
                }
            } else {
                if ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q))) {
                    if ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q))) {
                        vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__next_state_r = 1U;
                    } else {
                        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk2__DOT__lookup_valid_q) {
                            vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__next_state_r = 3U;
                        }
                    }
                } else {
                    if ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q))) {
                        if ((0x3fU <= (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_idx_q))) {
                            vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__next_state_r = 4U;
                        } else {
                            if (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_valid_o) {
                                vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__next_state_r = 2U;
                            }
                        }
                    } else {
                        if (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__end_of_image_q) 
                             & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__inport_accept_o) 
                                & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_eob_q) 
                                      | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__inport_eob_q)))))) {
                            vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__next_state_r = 5U;
                        } else {
                            if (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_valid_o) 
                                 & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__inport_accept_o) 
                                    & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_eob_q) 
                                          | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__inport_eob_q)))))) {
                                vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__next_state_r = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
        vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__next_state_r = 0U;
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__start_block_w 
        = ((0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q)) 
           & (0U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__next_state_r)));
}

VL_INLINE_OPT void Vjpeg_core_jpeg_mcu_proc::_sequent__TOP__jpeg_core__u_jpeg_mcu_proc__3(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_mcu_proc::_sequent__TOP__jpeg_core__u_jpeg_mcu_proc__3\n"); );
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__prev_dc_coeff_q__v0;
    CData/*0:0*/ __Vdlyvset__prev_dc_coeff_q__v4;
    CData/*1:0*/ __Vdlyvdim0__prev_dc_coeff_q__v8;
    CData/*0:0*/ __Vdlyvset__prev_dc_coeff_q__v8;
    CData/*7:0*/ __Vdly__coeff_idx_q;
    CData/*1:0*/ __Vdly__u_id__DOT__block_type_q;
    CData/*2:0*/ __Vdly__u_id__DOT__type_idx_q;
    SData/*15:0*/ __Vdlyvval__prev_dc_coeff_q__v8;
    SData/*15:0*/ __Vdly__u_id__DOT__block_y_q;
    SData/*15:0*/ __Vdly__u_id__DOT__x_idx_q;
    SData/*15:0*/ __Vdly__u_id__DOT__y_idx_q;
    // Body
    __Vdly__coeff_idx_q = vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_idx_q;
    __Vdlyvset__prev_dc_coeff_q__v0 = 0U;
    __Vdlyvset__prev_dc_coeff_q__v4 = 0U;
    __Vdlyvset__prev_dc_coeff_q__v8 = 0U;
    __Vdly__u_id__DOT__y_idx_q = vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__y_idx_q;
    __Vdly__u_id__DOT__x_idx_q = vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__x_idx_q;
    __Vdly__u_id__DOT__block_y_q = vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_y_q;
    __Vdly__u_id__DOT__type_idx_q = vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__type_idx_q;
    __Vdly__u_id__DOT__block_type_q = vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_type_q;
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_q = 0U;
    } else {
        if ((3U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q))) {
            vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_q 
                = vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_r;
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_bits_q = 0U;
    } else {
        if (((2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q)) 
             & (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk2__DOT__lookup_valid_q))) {
            vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_bits_q 
                = (0xfU & (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk2__DOT__lookup_value_q));
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__lookup_width_q = 0U;
    } else {
        if (((2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q)) 
             & (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk2__DOT__lookup_valid_q))) {
            vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__lookup_width_q 
                = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk2__DOT__lookup_width_q;
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__input_data_q = 0U;
    } else {
        if (((2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q)) 
             & (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk2__DOT__lookup_valid_q))) {
            vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__input_data_q 
                = (0xffffU & ((IData)((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__data_shifted_w 
                                       >> 8U)) >> (0x1fU 
                                                   & ((IData)(0x10U) 
                                                      - (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk2__DOT__lookup_width_q)))));
        }
    }
    if (vlTOPp->rst_i) {
        __Vdly__coeff_idx_q = 0U;
    } else {
        if (((4U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q)) 
             | (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q))) {
            __Vdly__coeff_idx_q = 0U;
        } else {
            if ((((1U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q)) 
                  & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__first_q))) 
                 & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_valid_o))) {
                __Vdly__coeff_idx_q = (0xffU & ((IData)(1U) 
                                                + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_idx_q)));
            } else {
                if ((3U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q))) {
                    if ((0U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_idx_q))) {
                        __Vdly__coeff_idx_q = ((0U 
                                                == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q))
                                                ? 0x40U
                                                : (0xffU 
                                                   & ((0xf0U 
                                                       == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q))
                                                       ? 
                                                      ((IData)(0xfU) 
                                                       + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_idx_q))
                                                       : 
                                                      ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_idx_q) 
                                                       + 
                                                       (0xfU 
                                                        & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q) 
                                                           >> 4U))))));
                    }
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        __Vdlyvset__prev_dc_coeff_q__v0 = 1U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            __Vdlyvset__prev_dc_coeff_q__v4 = 1U;
        } else {
            if ((4U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q))) {
                __Vdlyvval__prev_dc_coeff_q__v8 = vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__dc_coeff_q;
                __Vdlyvset__prev_dc_coeff_q__v8 = 1U;
                __Vdlyvdim0__prev_dc_coeff_q__v8 = vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_type_q;
            }
        }
    }
    if (vlTOPp->rst_i) {
        __Vdly__u_id__DOT__block_type_q = 0U;
        __Vdly__u_id__DOT__type_idx_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            __Vdly__u_id__DOT__block_type_q = 0U;
            __Vdly__u_id__DOT__type_idx_q = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__start_block_w) 
                 & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__end_of_image_q))) {
                __Vdly__u_id__DOT__block_type_q = 3U;
                __Vdly__u_id__DOT__type_idx_q = 0U;
            } else {
                if ((0U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q))) {
                    __Vdly__u_id__DOT__block_type_q = 0U;
                } else {
                    if (((1U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q)) 
                         & (4U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q)))) {
                        __Vdly__u_id__DOT__block_type_q 
                            = ((2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_type_q))
                                ? 0U : (3U & ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_type_q))));
                    } else {
                        if (((2U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q)) 
                             & (4U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q)))) {
                            __Vdly__u_id__DOT__type_idx_q 
                                = (7U & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__type_idx_q)));
                            if ((3U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__type_idx_q))) {
                                __Vdly__u_id__DOT__block_type_q = 1U;
                            } else {
                                if ((4U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__type_idx_q))) {
                                    __Vdly__u_id__DOT__block_type_q = 2U;
                                } else {
                                    if ((5U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__type_idx_q))) {
                                        __Vdly__u_id__DOT__block_type_q = 0U;
                                        __Vdly__u_id__DOT__type_idx_q = 0U;
                                    } else {
                                        __Vdly__u_id__DOT__block_type_q = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (__Vdlyvset__prev_dc_coeff_q__v0) {
        vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__prev_dc_coeff_q[0U] = 0U;
        vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__prev_dc_coeff_q[1U] = 0U;
        vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__prev_dc_coeff_q[2U] = 0U;
        vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__prev_dc_coeff_q[3U] = 0U;
    }
    if (__Vdlyvset__prev_dc_coeff_q__v4) {
        vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__prev_dc_coeff_q[0U] = 0U;
        vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__prev_dc_coeff_q[1U] = 0U;
        vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__prev_dc_coeff_q[2U] = 0U;
        vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__prev_dc_coeff_q[3U] = 0U;
    }
    if (__Vdlyvset__prev_dc_coeff_q__v8) {
        vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__prev_dc_coeff_q[__Vdlyvdim0__prev_dc_coeff_q__v8] 
            = __Vdlyvval__prev_dc_coeff_q__v8;
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__first_q = 1U;
    } else {
        if ((0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q))) {
            vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__first_q = 1U;
        } else {
            if ((3U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q))) {
                vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__first_q = 0U;
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q = 0U;
    } else {
        if (((2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q)) 
             & (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk2__DOT__lookup_valid_q))) {
            vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q 
                = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk2__DOT__lookup_value_q;
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__dc_coeff_q = 0U;
    } else {
        if (((3U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q)) 
             & (0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_idx_q)))) {
            vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__dc_coeff_q 
                = vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_r;
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__end_of_image_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__end_of_image_q = 0U;
        } else {
            if (((4U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q)) 
                 & ((0U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q)) 
                    | ((1U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q)) 
                       & (2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_type_q)))))) {
                if (((IData)(vlSymsp->TOP__jpeg_core.__PVT__img_end_w) 
                     & ((0xffffU & ((IData)(1U) + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_x_q))) 
                        == (0x1fffU & (((IData)(7U) 
                                        + (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_width_q)) 
                                       >> 3U))))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__end_of_image_q = 1U;
                }
            } else {
                if ((1U & (~ (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__start_block_w) 
                               & (2U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q))) 
                              & (0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_type_q)))))) {
                    if ((((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__start_block_w) 
                          & (2U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q))) 
                         & (2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_type_q)))) {
                        if (((IData)(vlSymsp->TOP__jpeg_core.__PVT__img_end_w) 
                             & ((0xffffU & ((IData)(1U) 
                                            + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_x_q))) 
                                == (0x1fffU & (((IData)(7U) 
                                                + (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_width_q)) 
                                               >> 3U))))) {
                            vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__end_of_image_q = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_idx_q 
        = __Vdly__coeff_idx_q;
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_x_q = 0U;
        __Vdly__u_id__DOT__block_y_q = 0U;
        __Vdly__u_id__DOT__x_idx_q = 0U;
        __Vdly__u_id__DOT__y_idx_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_x_q = 0U;
            __Vdly__u_id__DOT__block_y_q = 0U;
            __Vdly__u_id__DOT__x_idx_q = 0U;
            __Vdly__u_id__DOT__y_idx_q = 0U;
        } else {
            if (((4U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q)) 
                 & ((0U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q)) 
                    | ((1U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q)) 
                       & (2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_type_q)))))) {
                if (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_x_next_w) 
                     == (0x1fffU & (((IData)(7U) + (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_width_q)) 
                                    >> 3U)))) {
                    __Vdly__u_id__DOT__block_y_q = 
                        (0xffffU & ((IData)(1U) + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_y_q)));
                    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_x_q = 0U;
                } else {
                    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_x_q 
                        = vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_x_next_w;
                }
            } else {
                if ((((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__start_block_w) 
                      & (2U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q))) 
                     & (0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_type_q)))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_x_q 
                        = (0xffffU & ((0x7ffeU & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__x_idx_q) 
                                                  >> 1U)) 
                                      + ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__type_idx_q))
                                          ? 1U : 0U)));
                    __Vdly__u_id__DOT__block_y_q = 
                        (0xffffU & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__y_idx_q) 
                                    + ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__type_idx_q))
                                        ? 1U : 0U)));
                    if ((4U > (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__type_idx_q))) {
                        if (((0xffffU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__x_idx_q))) 
                             == (0x3ffeU & (((IData)(7U) 
                                             + (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_width_q)) 
                                            >> 2U)))) {
                            __Vdly__u_id__DOT__y_idx_q 
                                = (0xffffU & ((IData)(2U) 
                                              + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__y_idx_q)));
                            __Vdly__u_id__DOT__x_idx_q = 0U;
                        } else {
                            __Vdly__u_id__DOT__x_idx_q 
                                = (0xffffU & ((IData)(1U) 
                                              + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__x_idx_q)));
                        }
                    }
                }
            }
        }
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__x_idx_q 
        = __Vdly__u_id__DOT__x_idx_q;
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__y_idx_q 
        = __Vdly__u_id__DOT__y_idx_q;
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__type_idx_q 
        = __Vdly__u_id__DOT__type_idx_q;
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_y_q 
        = __Vdly__u_id__DOT__block_y_q;
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_type_q 
        = __Vdly__u_id__DOT__block_type_q;
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_x_next_w 
        = (0xffffU & ((IData)(1U) + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_x_q)));
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__bits 
        = (0xfU & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q));
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__w 
        = ((0xfU >= ((IData)(0x10U) - (0xfU & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q))))
            ? (0xffffU & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__input_data_q) 
                          >> ((IData)(0x10U) - (0xfU 
                                                & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q)))))
            : 0U);
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__code 
        = vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__w;
    if (((0U == ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__code) 
                 & ((IData)(1U) << (0x1fU & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__bits) 
                                             - (IData)(1U)))))) 
         & (0U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__bits)))) {
        vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__code 
            = (0xffffU & ((IData)(1U) + (VL_EXTENDS_II(16,16, (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__code)) 
                                         | ((IData)(0xffffffffU) 
                                            << (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__bits)))));
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__Vfuncout 
        = vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__code;
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__bits 
        = (0xfU & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q));
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__w 
        = ((0xfU >= ((IData)(0x10U) - (0xfU & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q))))
            ? (0xffffU & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__input_data_q) 
                          >> ((IData)(0x10U) - (0xfU 
                                                & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q)))))
            : 0U);
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__code 
        = vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__w;
    if (((0U == ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__code) 
                 & ((IData)(1U) << (0x1fU & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__bits) 
                                             - (IData)(1U)))))) 
         & (0U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__bits)))) {
        vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__code 
            = (0xffffU & ((IData)(1U) + (VL_EXTENDS_II(16,16, (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__code)) 
                                         | ((IData)(0xffffffffU) 
                                            << (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__bits)))));
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__Vfuncout 
        = vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__code;
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_r 
        = (0xffffU & ((0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_idx_q))
                       ? ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__0__Vfuncout) 
                          + vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__prev_dc_coeff_q
                          [vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_type_q])
                       : (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__Vfunc_decode_number__1__Vfuncout)));
}

VL_INLINE_OPT void Vjpeg_core_jpeg_mcu_proc::_sequent__TOP__jpeg_core__u_jpeg_mcu_proc__4(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_mcu_proc::_sequent__TOP__jpeg_core__u_jpeg_mcu_proc__4\n"); );
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__lookup_table_r 
        = ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__first_q)
            ? ((0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_type_q))
                ? 0U : 2U) : ((0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_type_q))
                               ? 1U : 3U));
}

VL_INLINE_OPT void Vjpeg_core_jpeg_mcu_proc::_sequent__TOP__jpeg_core__u_jpeg_mcu_proc__5(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_mcu_proc::_sequent__TOP__jpeg_core__u_jpeg_mcu_proc__5\n"); );
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__outport_id_o 
        = (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_type_q) 
            << 0x1eU) | ((0x3fff0000U & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_y_q) 
                                         << 0x10U)) 
                         | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_x_q)));
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__push_q 
        = ((~ (IData)(vlTOPp->rst_i)) & ((3U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q)) 
                                         | (5U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q))));
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__outport_valid_o 
        = ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__push_q) 
           & (0x40U > (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_idx_q)));
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q 
        = ((IData)(vlTOPp->rst_i) ? 0U : (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__next_state_r));
    vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__pop_bits_r = 0U;
    if ((3U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q))) {
        vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__pop_bits_r 
            = (0x3fU & ((0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_idx_q))
                         ? ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__lookup_width_q) 
                            + (0xfU & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q)))
                         : (((0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q)) 
                             | (0xf0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q)))
                             ? (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__lookup_width_q)
                             : ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__lookup_width_q) 
                                + (0xfU & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q))))));
    }
}

void Vjpeg_core_jpeg_mcu_proc::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_mcu_proc::_ctor_var_reset\n"); );
    // Body
    __PVT__clk_i = VL_RAND_RESET_I(1);
    __PVT__rst_i = VL_RAND_RESET_I(1);
    __PVT__img_start_i = VL_RAND_RESET_I(1);
    __PVT__img_end_i = VL_RAND_RESET_I(1);
    __PVT__img_width_i = VL_RAND_RESET_I(16);
    __PVT__img_height_i = VL_RAND_RESET_I(16);
    __PVT__img_mode_i = VL_RAND_RESET_I(2);
    __PVT__inport_valid_i = VL_RAND_RESET_I(1);
    __PVT__inport_data_i = VL_RAND_RESET_I(32);
    __PVT__inport_last_i = VL_RAND_RESET_I(1);
    __PVT__lookup_valid_i = VL_RAND_RESET_I(1);
    __PVT__lookup_width_i = VL_RAND_RESET_I(5);
    __PVT__lookup_value_i = VL_RAND_RESET_I(8);
    __PVT__outport_blk_space_i = VL_RAND_RESET_I(1);
    __PVT__inport_pop_o = VL_RAND_RESET_I(6);
    __PVT__lookup_req_o = VL_RAND_RESET_I(1);
    __PVT__lookup_table_o = VL_RAND_RESET_I(2);
    __PVT__lookup_input_o = VL_RAND_RESET_I(16);
    __PVT__outport_valid_o = VL_RAND_RESET_I(1);
    __PVT__outport_data_o = VL_RAND_RESET_I(16);
    __PVT__outport_idx_o = VL_RAND_RESET_I(6);
    __PVT__outport_id_o = VL_RAND_RESET_I(32);
    __PVT__outport_eob_o = VL_RAND_RESET_I(1);
    __PVT__start_block_w = VL_RAND_RESET_I(1);
    __PVT__state_q = VL_RAND_RESET_I(5);
    __PVT__next_state_r = VL_RAND_RESET_I(5);
    __PVT__code_bits_q = VL_RAND_RESET_I(8);
    __PVT__coeff_idx_q = VL_RAND_RESET_I(8);
    __PVT__first_q = VL_RAND_RESET_I(1);
    __PVT__code_q = VL_RAND_RESET_I(8);
    __PVT__lookup_width_q = VL_RAND_RESET_I(5);
    __PVT__input_data_q = VL_RAND_RESET_I(16);
    __PVT__pop_bits_r = VL_RAND_RESET_I(6);
    __PVT__lookup_table_r = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __PVT__prev_dc_coeff_q[__Vi0] = VL_RAND_RESET_I(16);
    }}
    __PVT__dc_coeff_q = VL_RAND_RESET_I(16);
    __PVT__coeff_r = VL_RAND_RESET_I(16);
    __PVT__coeff_q = VL_RAND_RESET_I(16);
    __PVT__push_q = VL_RAND_RESET_I(1);
    __PVT__u_id__DOT__block_type_q = VL_RAND_RESET_I(2);
    __PVT__u_id__DOT__type_idx_q = VL_RAND_RESET_I(3);
    __PVT__u_id__DOT__block_x_q = VL_RAND_RESET_I(16);
    __PVT__u_id__DOT__block_y_q = VL_RAND_RESET_I(16);
    __PVT__u_id__DOT__x_idx_q = VL_RAND_RESET_I(16);
    __PVT__u_id__DOT__y_idx_q = VL_RAND_RESET_I(16);
    __PVT__u_id__DOT__block_x_next_w = VL_RAND_RESET_I(16);
    __PVT__u_id__DOT__end_of_image_q = VL_RAND_RESET_I(1);
    __Vfunc_decode_number__0__Vfuncout = VL_RAND_RESET_I(16);
    __Vfunc_decode_number__0__w = VL_RAND_RESET_I(16);
    __Vfunc_decode_number__0__bits = VL_RAND_RESET_I(5);
    __Vfunc_decode_number__0__code = VL_RAND_RESET_I(16);
    __Vfunc_decode_number__1__Vfuncout = VL_RAND_RESET_I(16);
    __Vfunc_decode_number__1__w = VL_RAND_RESET_I(16);
    __Vfunc_decode_number__1__bits = VL_RAND_RESET_I(5);
    __Vfunc_decode_number__1__code = VL_RAND_RESET_I(16);
}
