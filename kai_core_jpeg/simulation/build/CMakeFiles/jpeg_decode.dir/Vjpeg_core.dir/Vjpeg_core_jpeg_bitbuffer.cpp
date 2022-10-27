// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "Vjpeg_core_jpeg_bitbuffer.h"
#include "Vjpeg_core__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vjpeg_core_jpeg_bitbuffer) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vjpeg_core_jpeg_bitbuffer::__Vconfigure(Vjpeg_core__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vjpeg_core_jpeg_bitbuffer::~Vjpeg_core_jpeg_bitbuffer() {
}

bool Vjpeg_core_jpeg_bitbuffer::get_valid() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_bitbuffer::get_valid\n"); );
    // Variables
    VL_OUT8(get_valid__Vfuncrtn,0,0);
    Vjpeg_core__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    get_valid__Vfuncrtn = ((IData)(vlSymsp->TOP__jpeg_core.__PVT__bb_inport_valid_w) 
                           & (0x38U >= (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__count_q)));
    // Final
    return (get_valid__Vfuncrtn);
}

uint32_t Vjpeg_core_jpeg_bitbuffer::get_data() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_bitbuffer::get_data\n"); );
    // Variables
    VL_OUT8(get_data__Vfuncrtn,7,0);
    Vjpeg_core__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    get_data__Vfuncrtn = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_data_q;
    // Final
    return (get_data__Vfuncrtn);
}

void Vjpeg_core_jpeg_bitbuffer::_settle__TOP__jpeg_core__u_jpeg_bitbuffer__1(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_bitbuffer::_settle__TOP__jpeg_core__u_jpeg_bitbuffer__1\n"); );
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__fifo_data_r 
        = ((0x20U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__rd_ptr_q))
            ? ((0x10U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__rd_ptr_q))
                ? ((8U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__rd_ptr_q))
                    ? (((QData)((IData)(((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                          [7U] << 0x18U) 
                                         | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                             [0U] << 0x10U) 
                                            | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                [1U] 
                                                << 8U) 
                                               | vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                               [2U]))))) 
                        << 8U) | (QData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                 [3U])))
                    : (((QData)((IData)(((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                          [6U] << 0x18U) 
                                         | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                             [7U] << 0x10U) 
                                            | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                [0U] 
                                                << 8U) 
                                               | vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                               [1U]))))) 
                        << 8U) | (QData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                 [2U]))))
                : ((8U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__rd_ptr_q))
                    ? (((QData)((IData)(((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                          [5U] << 0x18U) 
                                         | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                             [6U] << 0x10U) 
                                            | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                [7U] 
                                                << 8U) 
                                               | vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                               [0U]))))) 
                        << 8U) | (QData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                 [1U])))
                    : (((QData)((IData)(((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                          [4U] << 0x18U) 
                                         | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                             [5U] << 0x10U) 
                                            | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                [6U] 
                                                << 8U) 
                                               | vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                               [7U]))))) 
                        << 8U) | (QData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                 [0U])))))
            : ((0x10U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__rd_ptr_q))
                ? ((8U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__rd_ptr_q))
                    ? (((QData)((IData)(((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                          [3U] << 0x18U) 
                                         | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                             [4U] << 0x10U) 
                                            | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                [5U] 
                                                << 8U) 
                                               | vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                               [6U]))))) 
                        << 8U) | (QData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                 [7U])))
                    : (((QData)((IData)(((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                          [2U] << 0x18U) 
                                         | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                             [3U] << 0x10U) 
                                            | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                [4U] 
                                                << 8U) 
                                               | vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                               [5U]))))) 
                        << 8U) | (QData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                 [6U]))))
                : ((8U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__rd_ptr_q))
                    ? (((QData)((IData)(((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                          [1U] << 0x18U) 
                                         | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                             [2U] << 0x10U) 
                                            | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                [3U] 
                                                << 8U) 
                                               | vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                               [4U]))))) 
                        << 8U) | (QData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                 [5U])))
                    : (((QData)((IData)(((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                          [0U] << 0x18U) 
                                         | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                             [1U] << 0x10U) 
                                            | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                [2U] 
                                                << 8U) 
                                               | vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                               [3U]))))) 
                        << 8U) | (QData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                 [4U]))))));
    vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_valid_o 
        = ((0x20U <= (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__count_q)) 
           | ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__drain_q) 
              & (0U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__count_q))));
    vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__data_shifted_w 
        = (VL_ULL(0xffffffffff) & (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__fifo_data_r 
                                   << (7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__rd_ptr_q))));
}

VL_INLINE_OPT void Vjpeg_core_jpeg_bitbuffer::_settle__TOP__jpeg_core__u_jpeg_bitbuffer__2(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_bitbuffer::_settle__TOP__jpeg_core__u_jpeg_bitbuffer__2\n"); );
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__count_r 
        = vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__count_q;
    if (((IData)(vlSymsp->TOP__jpeg_core.__PVT__bb_inport_valid_w) 
         & (0x38U >= (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__count_q)))) {
        vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__count_r 
            = (0x7fU & ((IData)(8U) + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__count_r)));
    }
    if (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_valid_o) 
         & (0U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__pop_bits_r)))) {
        vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__count_r 
            = (0x7fU & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__count_r) 
                        - (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__pop_bits_r)));
    }
}

VL_INLINE_OPT void Vjpeg_core_jpeg_bitbuffer::_sequent__TOP__jpeg_core__u_jpeg_bitbuffer__3(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_bitbuffer::_sequent__TOP__jpeg_core__u_jpeg_bitbuffer__3\n"); );
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*5:0*/ __Vdly__wr_ptr_q;
    CData/*2:0*/ __Vdlyvdim0__ram_q__v0;
    CData/*7:0*/ __Vdlyvval__ram_q__v0;
    CData/*0:0*/ __Vdlyvset__ram_q__v0;
    CData/*5:0*/ __Vdly__rd_ptr_q;
    // Body
    __Vdly__rd_ptr_q = vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__rd_ptr_q;
    __Vdly__wr_ptr_q = vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__wr_ptr_q;
    __Vdlyvset__ram_q__v0 = 0U;
    if (vlTOPp->rst_i) {
        __Vdly__rd_ptr_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            __Vdly__rd_ptr_q = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_valid_o) 
                 & (0U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__pop_bits_r)))) {
                __Vdly__rd_ptr_q = (0x3fU & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__rd_ptr_q) 
                                             + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__pop_bits_r)));
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__drain_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__drain_q = 0U;
        } else {
            if ((((IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_valid_q) 
                  & (IData)(vlTOPp->inport_valid_i)) 
                 & (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__token_eoi_w))) {
                vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__drain_q = 1U;
            }
        }
    }
    if (vlTOPp->rst_i) {
        __Vdly__wr_ptr_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            __Vdly__wr_ptr_q = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__jpeg_core.__PVT__bb_inport_valid_w) 
                 & (0x38U >= (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__count_q)))) {
                __Vdlyvval__ram_q__v0 = vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_data_q;
                __Vdlyvset__ram_q__v0 = 1U;
                __Vdlyvdim0__ram_q__v0 = (7U & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__wr_ptr_q) 
                                                >> 3U));
                __Vdly__wr_ptr_q = (0x3fU & ((IData)(8U) 
                                             + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__wr_ptr_q)));
            }
        }
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__rd_ptr_q 
        = __Vdly__rd_ptr_q;
    vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__wr_ptr_q 
        = __Vdly__wr_ptr_q;
    if (__Vdlyvset__ram_q__v0) {
        vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q[__Vdlyvdim0__ram_q__v0] 
            = __Vdlyvval__ram_q__v0;
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__fifo_data_r 
        = ((0x20U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__rd_ptr_q))
            ? ((0x10U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__rd_ptr_q))
                ? ((8U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__rd_ptr_q))
                    ? (((QData)((IData)(((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                          [7U] << 0x18U) 
                                         | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                             [0U] << 0x10U) 
                                            | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                [1U] 
                                                << 8U) 
                                               | vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                               [2U]))))) 
                        << 8U) | (QData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                 [3U])))
                    : (((QData)((IData)(((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                          [6U] << 0x18U) 
                                         | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                             [7U] << 0x10U) 
                                            | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                [0U] 
                                                << 8U) 
                                               | vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                               [1U]))))) 
                        << 8U) | (QData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                 [2U]))))
                : ((8U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__rd_ptr_q))
                    ? (((QData)((IData)(((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                          [5U] << 0x18U) 
                                         | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                             [6U] << 0x10U) 
                                            | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                [7U] 
                                                << 8U) 
                                               | vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                               [0U]))))) 
                        << 8U) | (QData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                 [1U])))
                    : (((QData)((IData)(((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                          [4U] << 0x18U) 
                                         | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                             [5U] << 0x10U) 
                                            | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                [6U] 
                                                << 8U) 
                                               | vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                               [7U]))))) 
                        << 8U) | (QData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                 [0U])))))
            : ((0x10U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__rd_ptr_q))
                ? ((8U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__rd_ptr_q))
                    ? (((QData)((IData)(((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                          [3U] << 0x18U) 
                                         | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                             [4U] << 0x10U) 
                                            | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                [5U] 
                                                << 8U) 
                                               | vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                               [6U]))))) 
                        << 8U) | (QData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                 [7U])))
                    : (((QData)((IData)(((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                          [2U] << 0x18U) 
                                         | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                             [3U] << 0x10U) 
                                            | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                [4U] 
                                                << 8U) 
                                               | vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                               [5U]))))) 
                        << 8U) | (QData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                 [6U]))))
                : ((8U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__rd_ptr_q))
                    ? (((QData)((IData)(((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                          [1U] << 0x18U) 
                                         | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                             [2U] << 0x10U) 
                                            | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                [3U] 
                                                << 8U) 
                                               | vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                               [4U]))))) 
                        << 8U) | (QData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                 [5U])))
                    : (((QData)((IData)(((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                          [0U] << 0x18U) 
                                         | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                             [1U] << 0x10U) 
                                            | ((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                [2U] 
                                                << 8U) 
                                               | vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                               [3U]))))) 
                        << 8U) | (QData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q
                                                 [4U]))))));
    vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__data_shifted_w 
        = (VL_ULL(0xffffffffff) & (vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__fifo_data_r 
                                   << (7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__rd_ptr_q))));
}

VL_INLINE_OPT void Vjpeg_core_jpeg_bitbuffer::_sequent__TOP__jpeg_core__u_jpeg_bitbuffer__4(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_bitbuffer::_sequent__TOP__jpeg_core__u_jpeg_bitbuffer__4\n"); );
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__count_q 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q)
                                           ? 0U : (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__count_r)));
    vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_valid_o 
        = ((0x20U <= (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__count_q)) 
           | ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__drain_q) 
              & (0U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__count_q))));
}

void Vjpeg_core_jpeg_bitbuffer::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_bitbuffer::_ctor_var_reset\n"); );
    // Body
    __PVT__clk_i = VL_RAND_RESET_I(1);
    __PVT__rst_i = VL_RAND_RESET_I(1);
    __PVT__img_start_i = VL_RAND_RESET_I(1);
    __PVT__img_end_i = VL_RAND_RESET_I(1);
    __PVT__inport_valid_i = VL_RAND_RESET_I(1);
    __PVT__inport_data_i = VL_RAND_RESET_I(8);
    __PVT__inport_last_i = VL_RAND_RESET_I(1);
    __PVT__outport_pop_i = VL_RAND_RESET_I(6);
    __PVT__inport_accept_o = VL_RAND_RESET_I(1);
    __PVT__outport_valid_o = VL_RAND_RESET_I(1);
    __PVT__outport_data_o = VL_RAND_RESET_I(32);
    __PVT__outport_last_o = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            __PVT__ram_q[__Vi0] = VL_RAND_RESET_I(8);
    }}
    __PVT__rd_ptr_q = VL_RAND_RESET_I(6);
    __PVT__wr_ptr_q = VL_RAND_RESET_I(6);
    __PVT__count_q = VL_RAND_RESET_I(7);
    __PVT__drain_q = VL_RAND_RESET_I(1);
    __PVT__count_r = VL_RAND_RESET_I(7);
    __PVT__fifo_data_r = VL_RAND_RESET_Q(40);
    __PVT__data_shifted_w = VL_RAND_RESET_Q(40);
}
