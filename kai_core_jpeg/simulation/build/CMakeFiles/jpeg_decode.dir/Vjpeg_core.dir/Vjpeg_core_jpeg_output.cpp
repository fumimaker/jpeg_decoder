// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "Vjpeg_core_jpeg_output.h"
#include "Vjpeg_core__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vjpeg_core_jpeg_output) {
    VL_CELL(u_ram_y, Vjpeg_core_jpeg_output_y_ram);
    VL_CELL(u_ram_cb, Vjpeg_core_jpeg_output_cx_ram);
    VL_CELL(u_ram_cr, Vjpeg_core_jpeg_output_cx_ram);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vjpeg_core_jpeg_output::__Vconfigure(Vjpeg_core__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vjpeg_core_jpeg_output::~Vjpeg_core_jpeg_output() {
}

void Vjpeg_core_jpeg_output::_settle__TOP__jpeg_core__u_jpeg_output__1(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_output::_settle__TOP__jpeg_core__u_jpeg_output__1\n"); );
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__valid_r 
        = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__active_q;
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__id_valid_w 
        = (0U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__count_q));
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__accept_o 
        = (8U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__count_q));
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__id_value_w 
        = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__ram_q
        [vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__rd_ptr_q];
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__output_space_w 
        = (1U & ((~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__valid_q)) 
                 | (IData)(vlTOPp->outport_accept_i)));
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_info__push_i 
        = ((((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__valid_q) 
             >> 5U) & ((0U == (3U & (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_id_o 
                                     >> 0x1eU))) | 
                       (3U == (3U & (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_id_o 
                                     >> 0x1eU))))) 
           & (0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_idx_o)));
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_ram_y__push_i 
        = (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__valid_q) 
            >> 5U) & ((0U == (3U & (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_id_o 
                                    >> 0x1eU))) | (3U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_id_o 
                                                       >> 0x1eU)))));
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_ram_cb__push_i 
        = (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__valid_q) 
            >> 5U) & ((1U == (3U & (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_id_o 
                                    >> 0x1eU))) | (3U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_id_o 
                                                       >> 0x1eU)))));
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_ram_cr__push_i 
        = (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__valid_q) 
            >> 5U) & ((2U == (3U & (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_id_o 
                                    >> 0x1eU))) | (3U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_id_o 
                                                       >> 0x1eU)))));
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__id_pop_w 
        = ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__output_space_w) 
           & (0x3fU == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__idx_q)));
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w 
        = ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__output_space_w) 
           & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__active_q));
}

void Vjpeg_core_jpeg_output::_settle__TOP__jpeg_core__u_jpeg_output__2(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_output::_settle__TOP__jpeg_core__u_jpeg_output__2\n"); );
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__b_conv_r 
        = ((0U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q))
            ? ((IData)(0x80U) + vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__data_out_o)
            : ((IData)(0x80U) + (vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__data_out_o 
                                 + VL_SHIFTRS_III(32,32,32, 
                                                  VL_MULS_III(32,32,32, (IData)(0x1c5aU), vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__data_out_o), 0xcU))));
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__r_conv_r 
        = ((0U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q))
            ? ((IData)(0x80U) + vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__data_out_o)
            : ((IData)(0x80U) + (vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__data_out_o 
                                 + VL_SHIFTRS_III(32,32,32, 
                                                  VL_MULS_III(32,32,32, (IData)(0x166fU), vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__data_out_o), 0xcU))));
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__g_conv_r 
        = ((0U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q))
            ? ((IData)(0x80U) + vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__data_out_o)
            : ((((IData)(0x80U) + vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__data_out_o) 
                - VL_SHIFTRS_III(32,32,32, VL_MULS_III(32,32,32, (IData)(0x582U), vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__data_out_o), 0xcU)) 
               - VL_SHIFTRS_III(32,32,32, VL_MULS_III(32,32,32, (IData)(0xb6dU), vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__data_out_o), 0xcU)));
}

VL_INLINE_OPT void Vjpeg_core_jpeg_output::_sequent__TOP__jpeg_core__u_jpeg_output__3(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_output::_sequent__TOP__jpeg_core__u_jpeg_output__3\n"); );
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*5:0*/ __Vdly__idx_q;
    CData/*1:0*/ __Vdly__subsmpl_q;
    CData/*0:0*/ __Vdly__active_q;
    // Body
    __Vdly__idx_q = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__idx_q;
    __Vdly__subsmpl_q = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__subsmpl_q;
    __Vdly__active_q = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__active_q;
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_b_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__output_space_w) {
            vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_b_q 
                = (0xffU & ((0U != (0xffffffU & (vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__b_conv_r 
                                                 >> 8U)))
                             ? (~ (vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__b_conv_r 
                                   >> 0x18U)) : vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__b_conv_r));
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_r_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__output_space_w) {
            vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_r_q 
                = (0xffU & ((0U != (0xffffffU & (vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__r_conv_r 
                                                 >> 8U)))
                             ? (~ (vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__r_conv_r 
                                   >> 0x18U)) : vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__r_conv_r));
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_g_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__output_space_w) {
            vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_g_q 
                = (0xffU & ((0U != (0xffffffU & (vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__g_conv_r 
                                                 >> 8U)))
                             ? (~ (vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__g_conv_r 
                                   >> 0x18U)) : vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__g_conv_r));
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_y_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__output_space_w) {
            vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_y_q 
                = (0xffffU & ((0xfff8U & (vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__id_value_w 
                                          >> 0xdU)) 
                              + ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__idx_q) 
                                 >> 3U)));
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_x_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__output_space_w) {
            vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_x_q 
                = (0xffffU & ((0xfff8U & (vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__id_value_w 
                                          << 3U)) + 
                              (7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__idx_q))));
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__valid_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__output_space_w) {
            vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__valid_q 
                = ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__active_q) 
                   & (3U != (3U & (vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__id_value_w 
                                   >> 0x1eU))));
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__idle_q = 1U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__idle_q = 0U;
        } else {
            if (((0U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__count_q)) 
                 & (3U == (3U & (vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__id_value_w 
                                 >> 0x1eU))))) {
                vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__idle_q = 1U;
            }
        }
    }
    if (vlTOPp->rst_i) {
        __Vdly__idx_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            __Vdly__idx_q = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__active_q) 
                 & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__output_space_w))) {
                __Vdly__idx_q = (0x3fU & ((IData)(1U) 
                                          + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__idx_q)));
            }
        }
    }
    if (vlTOPp->rst_i) {
        __Vdly__subsmpl_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            __Vdly__subsmpl_q = 0U;
        } else {
            if (((((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__active_q) 
                   & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__output_space_w)) 
                  & (2U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q))) 
                 & (0x3fU == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__idx_q)))) {
                __Vdly__subsmpl_q = (3U & ((IData)(1U) 
                                           + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__subsmpl_q)));
            }
        }
    }
    if (vlTOPp->rst_i) {
        __Vdly__active_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            __Vdly__active_q = 0U;
        } else {
            if (vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__active_q) {
                if ((((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__valid_r) 
                      & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__output_space_w)) 
                     & (0x3fU == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__idx_q)))) {
                    __Vdly__active_q = 0U;
                }
            } else {
                __Vdly__active_q = ((0U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q))
                                     ? (0x40U <= vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__count_q)
                                     : ((1U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q))
                                         ? (((0x40U 
                                              <= vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__count_q) 
                                             & (0x40U 
                                                <= vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__count_q)) 
                                            & (0x40U 
                                               <= vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__count_q))
                                         : ((0U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__subsmpl_q)) 
                                            | (((0x100U 
                                                 <= vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__count_q) 
                                                & (0x100U 
                                                   <= vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__count_q)) 
                                               & (0x100U 
                                                  <= vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__count_q)))));
            }
        }
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__subsmpl_q 
        = __Vdly__subsmpl_q;
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__idx_q 
        = __Vdly__idx_q;
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__active_q 
        = __Vdly__active_q;
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__valid_r 
        = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__active_q;
}

VL_INLINE_OPT void Vjpeg_core_jpeg_output::_sequent__TOP__jpeg_core__u_jpeg_output__4(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_output::_sequent__TOP__jpeg_core__u_jpeg_output__4\n"); );
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__r_conv_r 
        = ((0U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q))
            ? ((IData)(0x80U) + vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__data_out_o)
            : ((IData)(0x80U) + (vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__data_out_o 
                                 + VL_SHIFTRS_III(32,32,32, 
                                                  VL_MULS_III(32,32,32, (IData)(0x166fU), vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__data_out_o), 0xcU))));
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__b_conv_r 
        = ((0U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q))
            ? ((IData)(0x80U) + vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__data_out_o)
            : ((IData)(0x80U) + (vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__data_out_o 
                                 + VL_SHIFTRS_III(32,32,32, 
                                                  VL_MULS_III(32,32,32, (IData)(0x1c5aU), vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__data_out_o), 0xcU))));
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__g_conv_r 
        = ((0U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q))
            ? ((IData)(0x80U) + vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__data_out_o)
            : ((((IData)(0x80U) + vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__data_out_o) 
                - VL_SHIFTRS_III(32,32,32, VL_MULS_III(32,32,32, (IData)(0x582U), vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__data_out_o), 0xcU)) 
               - VL_SHIFTRS_III(32,32,32, VL_MULS_III(32,32,32, (IData)(0xb6dU), vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__data_out_o), 0xcU)));
}

VL_INLINE_OPT void Vjpeg_core_jpeg_output::_sequent__TOP__jpeg_core__u_jpeg_output__5(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_output::_sequent__TOP__jpeg_core__u_jpeg_output__5\n"); );
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vdly__u_info__DOT__wr_ptr_q;
    CData/*2:0*/ __Vdlyvdim0__u_info__DOT__ram_q__v0;
    CData/*0:0*/ __Vdlyvset__u_info__DOT__ram_q__v0;
    CData/*2:0*/ __Vdly__u_info__DOT__rd_ptr_q;
    CData/*3:0*/ __Vdly__u_info__DOT__count_q;
    IData/*31:0*/ __Vdlyvval__u_info__DOT__ram_q__v0;
    // Body
    __Vdly__u_info__DOT__rd_ptr_q = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__rd_ptr_q;
    __Vdly__u_info__DOT__count_q = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__count_q;
    __Vdly__u_info__DOT__wr_ptr_q = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__wr_ptr_q;
    __Vdlyvset__u_info__DOT__ram_q__v0 = 0U;
    if (vlTOPp->rst_i) {
        __Vdly__u_info__DOT__rd_ptr_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            __Vdly__u_info__DOT__rd_ptr_q = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__id_pop_w) 
                 & (0U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__count_q)))) {
                __Vdly__u_info__DOT__rd_ptr_q = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__rd_ptr_q)));
            }
        }
    }
    if (vlTOPp->rst_i) {
        __Vdly__u_info__DOT__count_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            __Vdly__u_info__DOT__count_q = 0U;
        } else {
            if ((((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_info__push_i) 
                  & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__accept_o)) 
                 & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__id_pop_w) 
                       & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__id_valid_w))))) {
                __Vdly__u_info__DOT__count_q = (0xfU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__count_q)));
            } else {
                if (((~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_info__push_i) 
                         & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__accept_o))) 
                     & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__id_pop_w) 
                        & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__id_valid_w)))) {
                    __Vdly__u_info__DOT__count_q = 
                        (0xfU & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__count_q) 
                                 - (IData)(1U)));
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        __Vdly__u_info__DOT__wr_ptr_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            __Vdly__u_info__DOT__wr_ptr_q = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_info__push_i) 
                 & (8U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__count_q)))) {
                __Vdlyvval__u_info__DOT__ram_q__v0 
                    = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_id_o;
                __Vdlyvset__u_info__DOT__ram_q__v0 = 1U;
                __Vdlyvdim0__u_info__DOT__ram_q__v0 
                    = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__wr_ptr_q;
                __Vdly__u_info__DOT__wr_ptr_q = (7U 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__wr_ptr_q)));
            }
        }
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__rd_ptr_q 
        = __Vdly__u_info__DOT__rd_ptr_q;
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__wr_ptr_q 
        = __Vdly__u_info__DOT__wr_ptr_q;
    if (__Vdlyvset__u_info__DOT__ram_q__v0) {
        vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__ram_q[__Vdlyvdim0__u_info__DOT__ram_q__v0] 
            = __Vdlyvval__u_info__DOT__ram_q__v0;
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__count_q 
        = __Vdly__u_info__DOT__count_q;
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__id_value_w 
        = vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__ram_q
        [vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__rd_ptr_q];
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__id_valid_w 
        = (0U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__count_q));
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__accept_o 
        = (8U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__count_q));
}

VL_INLINE_OPT void Vjpeg_core_jpeg_output::_sequent__TOP__jpeg_core__u_jpeg_output__6(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_output::_sequent__TOP__jpeg_core__u_jpeg_output__6\n"); );
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_info__push_i 
        = ((((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__valid_q) 
             >> 5U) & ((0U == (3U & (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_id_o 
                                     >> 0x1eU))) | 
                       (3U == (3U & (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_id_o 
                                     >> 0x1eU))))) 
           & (0U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_idx_o)));
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_ram_y__push_i 
        = (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__valid_q) 
            >> 5U) & ((0U == (3U & (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_id_o 
                                    >> 0x1eU))) | (3U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_id_o 
                                                       >> 0x1eU)))));
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_ram_cb__push_i 
        = (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__valid_q) 
            >> 5U) & ((1U == (3U & (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_id_o 
                                    >> 0x1eU))) | (3U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_id_o 
                                                       >> 0x1eU)))));
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_ram_cr__push_i 
        = (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__valid_q) 
            >> 5U) & ((2U == (3U & (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_id_o 
                                    >> 0x1eU))) | (3U 
                                                   == 
                                                   (3U 
                                                    & (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_id_o 
                                                       >> 0x1eU)))));
}

VL_INLINE_OPT void Vjpeg_core_jpeg_output::_combo__TOP__jpeg_core__u_jpeg_output__7(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_output::_combo__TOP__jpeg_core__u_jpeg_output__7\n"); );
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__output_space_w 
        = (1U & ((~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__valid_q)) 
                 | (IData)(vlTOPp->outport_accept_i)));
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__id_pop_w 
        = ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__output_space_w) 
           & (0x3fU == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__idx_q)));
    vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w 
        = ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__output_space_w) 
           & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__active_q));
}

void Vjpeg_core_jpeg_output::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_output::_ctor_var_reset\n"); );
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
    __PVT__inport_idx_i = VL_RAND_RESET_I(6);
    __PVT__inport_id_i = VL_RAND_RESET_I(32);
    __PVT__outport_accept_i = VL_RAND_RESET_I(1);
    __PVT__inport_accept_o = VL_RAND_RESET_I(1);
    __PVT__outport_valid_o = VL_RAND_RESET_I(1);
    __PVT__outport_width_o = VL_RAND_RESET_I(16);
    __PVT__outport_height_o = VL_RAND_RESET_I(16);
    __PVT__outport_pixel_x_o = VL_RAND_RESET_I(16);
    __PVT__outport_pixel_y_o = VL_RAND_RESET_I(16);
    __PVT__outport_pixel_r_o = VL_RAND_RESET_I(8);
    __PVT__outport_pixel_g_o = VL_RAND_RESET_I(8);
    __PVT__outport_pixel_b_o = VL_RAND_RESET_I(8);
    __PVT__idle_o = VL_RAND_RESET_I(1);
    __PVT__valid_r = VL_RAND_RESET_I(1);
    __PVT__output_space_w = VL_RAND_RESET_I(1);
    __PVT__y_pop_w = VL_RAND_RESET_I(1);
    __Vcellinp__u_ram_y__push_i = VL_RAND_RESET_I(1);
    __Vcellinp__u_ram_cb__push_i = VL_RAND_RESET_I(1);
    __Vcellinp__u_ram_cr__push_i = VL_RAND_RESET_I(1);
    __PVT__id_valid_w = VL_RAND_RESET_I(1);
    __PVT__id_value_w = VL_RAND_RESET_I(32);
    __PVT__id_pop_w = VL_RAND_RESET_I(1);
    __Vcellinp__u_info__push_i = VL_RAND_RESET_I(1);
    __PVT__idx_q = VL_RAND_RESET_I(6);
    __PVT__subsmpl_q = VL_RAND_RESET_I(2);
    __PVT__active_q = VL_RAND_RESET_I(1);
    __PVT__r_conv_r = VL_RAND_RESET_I(32);
    __PVT__g_conv_r = VL_RAND_RESET_I(32);
    __PVT__b_conv_r = VL_RAND_RESET_I(32);
    __PVT__valid_q = VL_RAND_RESET_I(1);
    __PVT__pixel_x_q = VL_RAND_RESET_I(16);
    __PVT__pixel_y_q = VL_RAND_RESET_I(16);
    __PVT__pixel_r_q = VL_RAND_RESET_I(8);
    __PVT__pixel_g_q = VL_RAND_RESET_I(8);
    __PVT__pixel_b_q = VL_RAND_RESET_I(8);
    __PVT__idle_q = VL_RAND_RESET_I(1);
    __PVT__u_info__DOT__accept_o = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            __PVT__u_info__DOT__ram_q[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__u_info__DOT__rd_ptr_q = VL_RAND_RESET_I(3);
    __PVT__u_info__DOT__wr_ptr_q = VL_RAND_RESET_I(3);
    __PVT__u_info__DOT__count_q = VL_RAND_RESET_I(4);
}
