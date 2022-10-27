// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "Vjpeg_core_jpeg_idct__U1.h"
#include "Vjpeg_core__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vjpeg_core_jpeg_idct__U1) {
    VL_CELL(u_input, Vjpeg_core_jpeg_idct_ram__U1);
    VL_CELL(u_transpose, Vjpeg_core_jpeg_idct_transpose__U1);
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vjpeg_core_jpeg_idct__U1::__Vconfigure(Vjpeg_core__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vjpeg_core_jpeg_idct__U1::~Vjpeg_core_jpeg_idct__U1() {
}

bool Vjpeg_core_jpeg_idct__U1::get_valid() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_idct__U1::get_valid\n"); );
    // Variables
    VL_OUT8(get_valid__Vfuncrtn,0,0);
    Vjpeg_core__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    get_valid__Vfuncrtn = (1U & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__valid_q) 
                                 >> 5U));
    // Final
    return (get_valid__Vfuncrtn);
}

uint32_t Vjpeg_core_jpeg_idct__U1::get_sample_idx() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_idct__U1::get_sample_idx\n"); );
    // Variables
    VL_OUT8(get_sample_idx__Vfuncrtn,5,0);
    Vjpeg_core__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    get_sample_idx__Vfuncrtn = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_idx_o;
    // Final
    return (get_sample_idx__Vfuncrtn);
}

uint32_t Vjpeg_core_jpeg_idct__U1::get_sample() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_idct__U1::get_sample\n"); );
    // Variables
    VL_OUT(get_sample__Vfuncrtn,31,0);
    Vjpeg_core__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    get_sample__Vfuncrtn = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_data_o;
    // Final
    return (get_sample__Vfuncrtn);
}

void Vjpeg_core_jpeg_idct__U1::_settle__TOP__jpeg_core__u_jpeg_idct__1(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_idct__U1::_settle__TOP__jpeg_core__u_jpeg_idct__1\n"); );
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__valid_o 
        = (0U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__count_q));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__accept_o 
        = (8U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__count_q));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__idct_x_data_w 
        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out
        [(7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q))];
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_data_o 
        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out
        [(7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__ptr_q))];
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx 
        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__ptr_q;
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__out_idx 
        = ((0x20U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
            ? ((0x10U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                ? ((8U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                    ? ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                ? 0x3fU : 0x37U) : 
                           ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                             ? 0x2fU : 0x27U)) : ((2U 
                                                   & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0x1fU
                                                    : 0x17U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0xfU
                                                    : 7U)))
                    : ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                ? 0x3eU : 0x36U) : 
                           ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                             ? 0x2eU : 0x26U)) : ((2U 
                                                   & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0x1eU
                                                    : 0x16U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0xeU
                                                    : 6U))))
                : ((8U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                    ? ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                ? 0x3dU : 0x35U) : 
                           ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                             ? 0x2dU : 0x25U)) : ((2U 
                                                   & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0x1dU
                                                    : 0x15U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0xdU
                                                    : 5U)))
                    : ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                ? 0x3cU : 0x34U) : 
                           ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                             ? 0x2cU : 0x24U)) : ((2U 
                                                   & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0x1cU
                                                    : 0x14U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0xcU
                                                    : 4U)))))
            : ((0x10U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                ? ((8U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                    ? ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                ? 0x3bU : 0x33U) : 
                           ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                             ? 0x2bU : 0x23U)) : ((2U 
                                                   & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0x1bU
                                                    : 0x13U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0xbU
                                                    : 3U)))
                    : ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                ? 0x3aU : 0x32U) : 
                           ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                             ? 0x2aU : 0x22U)) : ((2U 
                                                   & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0x1aU
                                                    : 0x12U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0xaU
                                                    : 2U))))
                : ((8U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                    ? ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                ? 0x39U : 0x31U) : 
                           ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                             ? 0x29U : 0x21U)) : ((2U 
                                                   & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0x19U
                                                    : 0x11U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 9U
                                                    : 1U)))
                    : ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                ? 0x38U : 0x30U) : 
                           ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                             ? 0x28U : 0x20U)) : ((2U 
                                                   & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0x18U
                                                    : 0x10U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 8U
                                                    : 0U))))));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__Vfuncout 
        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__out_idx;
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_idx_o 
        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__Vfuncout;
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_id_o 
        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__ram_q
        [vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__rd_ptr_q];
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_0_1 
        = ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
                                                & ((VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val0_q))) 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0.__PVT__ram_read1_q)) 
                                                   >> 0xfU)))) 
                           << 0x10U)) | (VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val0_q))) 
                                         & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0.__PVT__ram_read1_q)));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_2_3 
        = ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
                                                & ((VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val1_q))) 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1.__PVT__ram_read1_q)) 
                                                   >> 0xfU)))) 
                           << 0x10U)) | (VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val1_q))) 
                                         & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1.__PVT__ram_read1_q)));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_4_5 
        = ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
                                                & ((VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val2_q))) 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2.__PVT__ram_read1_q)) 
                                                   >> 0xfU)))) 
                           << 0x10U)) | (VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val2_q))) 
                                         & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2.__PVT__ram_read1_q)));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_6_7 
        = ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
                                                & ((VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val3_q))) 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3.__PVT__ram_read1_q)) 
                                                   >> 0xfU)))) 
                           << 0x10U)) | (VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val3_q))) 
                                         & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3.__PVT__ram_read1_q)));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vcellinp__u_id_fifo__pop_i 
        = (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__valid_q) 
            >> 5U) & (0x3fU == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_idx_o)));
}

VL_INLINE_OPT void Vjpeg_core_jpeg_idct__U1::_sequent__TOP__jpeg_core__u_jpeg_idct__2(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_idct__U1::_sequent__TOP__jpeg_core__u_jpeg_idct__2\n"); );
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvset__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v0;
    CData/*0:0*/ __Vdlyvset__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v8;
    CData/*0:0*/ __Vdlyvset__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v11;
    CData/*0:0*/ __Vdlyvset__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v0;
    CData/*0:0*/ __Vdlyvset__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v8;
    CData/*0:0*/ __Vdlyvset__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v11;
    CData/*5:0*/ __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__ptr_q;
    IData/*31:0*/ __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__s0;
    IData/*31:0*/ __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__s1;
    IData/*31:0*/ __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__mul1_a;
    IData/*31:0*/ __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__s2;
    IData/*31:0*/ __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__s4;
    IData/*31:0*/ __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__s5;
    IData/*31:0*/ __Vdlyvval__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v8;
    IData/*31:0*/ __Vdlyvval__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v9;
    IData/*31:0*/ __Vdlyvval__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v10;
    IData/*31:0*/ __Vdlyvval__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v11;
    IData/*31:0*/ __Vdlyvval__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v12;
    IData/*31:0*/ __Vdlyvval__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v13;
    IData/*31:0*/ __Vdlyvval__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v14;
    IData/*31:0*/ __Vdlyvval__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v15;
    IData/*31:0*/ __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__s0;
    IData/*31:0*/ __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__s1;
    IData/*31:0*/ __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__mul1_a;
    IData/*31:0*/ __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__s2;
    IData/*31:0*/ __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__s4;
    IData/*31:0*/ __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__s5;
    IData/*31:0*/ __Vdlyvval__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v8;
    IData/*31:0*/ __Vdlyvval__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v9;
    IData/*31:0*/ __Vdlyvval__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v10;
    IData/*31:0*/ __Vdlyvval__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v11;
    IData/*31:0*/ __Vdlyvval__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v12;
    IData/*31:0*/ __Vdlyvval__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v13;
    IData/*31:0*/ __Vdlyvval__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v14;
    IData/*31:0*/ __Vdlyvval__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v15;
    // Body
    __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__s1 = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s1;
    __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__s0 = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s0;
    __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__s1 = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s1;
    __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__s0 = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s0;
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vdly__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q 
        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q;
    __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__s2 = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s2;
    __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__s2 = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s2;
    __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__ptr_q 
        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__ptr_q;
    __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__s5 = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s5;
    __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__s4 = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s4;
    __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__s5 = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s5;
    __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__s4 = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s4;
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vdly__genblk1__DOT__u_idct_ifast_x__DOT__valid_q 
        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__valid_q;
    __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__mul1_a 
        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul1_a;
    __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__mul1_a 
        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul1_a;
    __Vdlyvset__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v0 = 0U;
    __Vdlyvset__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v8 = 0U;
    __Vdlyvset__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v11 = 0U;
    __Vdlyvset__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v0 = 0U;
    __Vdlyvset__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v8 = 0U;
    __Vdlyvset__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v11 = 0U;
    if (vlTOPp->rst_i) {
        __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__s0 = 0U;
        __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__s1 = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q)))) {
                    __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__s0 
                        = (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s0 
                           + vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s1);
                    __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__s1 
                        = (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s0 
                           - vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s1);
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q)))) {
                    __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__s0 
                        = ((IData)(0x2000U) + (vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.__PVT__ram_read1_q 
                                               << 8U));
                    __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__s1 
                        = (vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.__PVT__ram_read1_q 
                           << 8U);
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__s0 = 0U;
        __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__s1 = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q)))) {
                    __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__s0 
                        = (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s0 
                           + vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s1);
                    __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__s1 
                        = (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s0 
                           - vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s1);
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q)))) {
                    __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__s0 
                        = ((IData)(0x80U) + (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_0_1 
                                             << 0xbU));
                    __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__s1 
                        = (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_4_5 
                           << 0xbU);
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vdly__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vdly__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q = 0U;
        } else {
            if ((0x20U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__valid_q))) {
                vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vdly__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q)));
            }
        }
    }
    if (vlTOPp->rst_i) {
        __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__ptr_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__ptr_q = 0U;
        } else {
            if ((0x20U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__valid_q))) {
                __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__ptr_q 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__ptr_q)));
            }
        }
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vdly__genblk1__DOT__u_idct_ifast_x__DOT__valid_q 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q)
                                           ? 0U : (
                                                   (0x3eU 
                                                    & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__valid_q) 
                                                       << 1U)) 
                                                   | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg2_valid_q))));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__valid_q 
        = ((IData)(vlTOPp->rst_i) ? 0U : ((IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q)
                                           ? 0U : (
                                                   (0x3eU 
                                                    & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__valid_q) 
                                                       << 1U)) 
                                                   | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg2_valid_q))));
    if (vlTOPp->rst_i) {
        __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__mul1_a = 0U;
    } else {
        if ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))) {
            if ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q)))) {
                    __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__mul1_a 
                        = (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s7 
                           - vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s6);
                }
            }
        } else {
            __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__mul1_a 
                = ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))
                    ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))
                        ? vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.__PVT__ram_read1_q
                        : vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.__PVT__ram_read1_q)
                    : ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))
                        ? vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.__PVT__ram_read1_q
                        : vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.__PVT__ram_read1_q));
        }
    }
    if (vlTOPp->rst_i) {
        __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__mul1_a = 0U;
    } else {
        if ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))) {
            if ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q)))) {
                    __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__mul1_a 
                        = (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s7 
                           - vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s6);
                }
            }
        } else {
            __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__mul1_a 
                = ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))
                    ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))
                        ? vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_4_5
                        : vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_6_7)
                    : ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))
                        ? vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_0_1
                        : vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_2_3));
        }
    }
    if (vlTOPp->rst_i) {
        __Vdlyvset__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v0 = 1U;
    } else {
        if (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg2_valid_q) {
            if ((4U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg2_idx_q))) {
                __Vdlyvval__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v8 
                    = VL_SHIFTRS_III(32,32,32, (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t0 
                                                + vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t7), 0xeU);
                __Vdlyvset__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v8 = 1U;
                __Vdlyvval__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v9 
                    = VL_SHIFTRS_III(32,32,32, (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t3 
                                                + vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t4), 0xeU);
                __Vdlyvval__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v10 
                    = VL_SHIFTRS_III(32,32,32, (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t3 
                                                - vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t4), 0xeU);
            }
            if ((6U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg2_idx_q))) {
                __Vdlyvval__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v11 
                    = VL_SHIFTRS_III(32,32,32, (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t2 
                                                + vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t5), 0xeU);
                __Vdlyvset__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v11 = 1U;
                __Vdlyvval__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v12 
                    = VL_SHIFTRS_III(32,32,32, (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t2 
                                                - vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t5), 0xeU);
                __Vdlyvval__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v13 
                    = VL_SHIFTRS_III(32,32,32, (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t1 
                                                + vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t6), 0xeU);
                __Vdlyvval__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v14 
                    = VL_SHIFTRS_III(32,32,32, (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t1 
                                                - vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t6), 0xeU);
                __Vdlyvval__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v15 
                    = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out_tmp;
            }
        }
    }
    if (vlTOPp->rst_i) {
        __Vdlyvset__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v0 = 1U;
    } else {
        if (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg2_valid_q) {
            if ((4U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg2_idx_q))) {
                __Vdlyvval__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v8 
                    = VL_SHIFTRS_III(32,32,32, (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t0 
                                                + vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t7), 8U);
                __Vdlyvset__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v8 = 1U;
                __Vdlyvval__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v9 
                    = VL_SHIFTRS_III(32,32,32, (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t3 
                                                + vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t4), 8U);
                __Vdlyvval__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v10 
                    = VL_SHIFTRS_III(32,32,32, (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t3 
                                                - vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t4), 8U);
            }
            if ((6U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg2_idx_q))) {
                __Vdlyvval__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v11 
                    = VL_SHIFTRS_III(32,32,32, (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t2 
                                                + vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t5), 8U);
                __Vdlyvset__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v11 = 1U;
                __Vdlyvval__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v12 
                    = VL_SHIFTRS_III(32,32,32, (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t2 
                                                - vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t5), 8U);
                __Vdlyvval__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v13 
                    = VL_SHIFTRS_III(32,32,32, (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t1 
                                                + vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t6), 8U);
                __Vdlyvval__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v14 
                    = VL_SHIFTRS_III(32,32,32, (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t1 
                                                - vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t6), 8U);
                __Vdlyvval__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v15 
                    = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out_tmp;
            }
        }
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__ptr_q 
        = __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__ptr_q;
    if (__Vdlyvset__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v0) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out[0U] = 0U;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out[1U] = 0U;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out[2U] = 0U;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out[3U] = 0U;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out[4U] = 0U;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out[5U] = 0U;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out[6U] = 0U;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out[7U] = 0U;
    }
    if (__Vdlyvset__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v8) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out[0U] 
            = __Vdlyvval__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v8;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out[3U] 
            = __Vdlyvval__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v9;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out[4U] 
            = __Vdlyvval__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v10;
    }
    if (__Vdlyvset__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v11) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out[2U] 
            = __Vdlyvval__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v11;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out[5U] 
            = __Vdlyvval__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v12;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out[1U] 
            = __Vdlyvval__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v13;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out[6U] 
            = __Vdlyvval__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v14;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out[7U] 
            = __Vdlyvval__genblk3__DOT__u_idct_ifast_y__DOT__block_out__v15;
    }
    if (__Vdlyvset__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v0) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[0U] = 0U;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[1U] = 0U;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[2U] = 0U;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[3U] = 0U;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[4U] = 0U;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[5U] = 0U;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[6U] = 0U;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[7U] = 0U;
    }
    if (__Vdlyvset__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v8) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[0U] 
            = __Vdlyvval__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v8;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[3U] 
            = __Vdlyvval__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v9;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[4U] 
            = __Vdlyvval__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v10;
    }
    if (__Vdlyvset__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v11) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[2U] 
            = __Vdlyvval__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v11;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[5U] 
            = __Vdlyvval__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v12;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[1U] 
            = __Vdlyvval__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v13;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[6U] 
            = __Vdlyvval__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v14;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[7U] 
            = __Vdlyvval__genblk1__DOT__u_idct_ifast_x__DOT__block_out__v15;
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx 
        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__ptr_q;
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__out_idx 
        = ((0x20U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
            ? ((0x10U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                ? ((8U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                    ? ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                ? 0x3fU : 0x37U) : 
                           ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                             ? 0x2fU : 0x27U)) : ((2U 
                                                   & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0x1fU
                                                    : 0x17U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0xfU
                                                    : 7U)))
                    : ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                ? 0x3eU : 0x36U) : 
                           ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                             ? 0x2eU : 0x26U)) : ((2U 
                                                   & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0x1eU
                                                    : 0x16U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0xeU
                                                    : 6U))))
                : ((8U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                    ? ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                ? 0x3dU : 0x35U) : 
                           ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                             ? 0x2dU : 0x25U)) : ((2U 
                                                   & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0x1dU
                                                    : 0x15U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0xdU
                                                    : 5U)))
                    : ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                ? 0x3cU : 0x34U) : 
                           ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                             ? 0x2cU : 0x24U)) : ((2U 
                                                   & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0x1cU
                                                    : 0x14U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0xcU
                                                    : 4U)))))
            : ((0x10U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                ? ((8U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                    ? ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                ? 0x3bU : 0x33U) : 
                           ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                             ? 0x2bU : 0x23U)) : ((2U 
                                                   & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0x1bU
                                                    : 0x13U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0xbU
                                                    : 3U)))
                    : ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                ? 0x3aU : 0x32U) : 
                           ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                             ? 0x2aU : 0x22U)) : ((2U 
                                                   & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0x1aU
                                                    : 0x12U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0xaU
                                                    : 2U))))
                : ((8U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                    ? ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                ? 0x39U : 0x31U) : 
                           ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                             ? 0x29U : 0x21U)) : ((2U 
                                                   & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0x19U
                                                    : 0x11U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 9U
                                                    : 1U)))
                    : ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                        ? ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                            ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                ? 0x38U : 0x30U) : 
                           ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                             ? 0x28U : 0x20U)) : ((2U 
                                                   & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 0x18U
                                                    : 0x10U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx))
                                                    ? 8U
                                                    : 0U))))));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__Vfuncout 
        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__out_idx;
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_idx_o 
        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__Vfuncout;
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_data_o 
        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out
        [(7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__ptr_q))];
    if (vlTOPp->rst_i) {
        __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__s2 = 0U;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t1 = 0U;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t2 = 0U;
    } else {
        if ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t1 
                        = (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s1 
                           + vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s2);
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t2 
                        = (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s1 
                           - vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s2);
                } else {
                    __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__s2 
                        = VL_SHIFTRS_III(32,32,32, 
                                         (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s2 
                                          - vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul0), 3U);
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q)))) {
                    __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__s2 
                        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul0;
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t5 = 0U;
    } else {
        if ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q))) {
            if ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q)))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t5 
                        = VL_SHIFTRS_III(32,32,32, 
                                         (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul1 
                                          - vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul0), 8U);
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t6 = 0U;
    } else {
        if ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q))) {
            if ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q)))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t6 
                        = VL_SHIFTRS_III(32,32,32, 
                                         (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul1 
                                          + vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul0), 8U);
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out_tmp = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg2_valid_q) {
            if ((4U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg2_idx_q))) {
                vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out_tmp 
                    = VL_SHIFTRS_III(32,32,32, (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t0 
                                                - vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t7), 0xeU);
            }
        }
    }
    if (vlTOPp->rst_i) {
        __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__s2 = 0U;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t1 = 0U;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t2 = 0U;
    } else {
        if ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t1 
                        = (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s1 
                           + vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s2);
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t2 
                        = (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s1 
                           - vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s2);
                } else {
                    __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__s2 
                        = (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s2 
                           - vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0);
                }
            }
        } else {
            if ((1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q)))) {
                    __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__s2 
                        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0;
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t5 = 0U;
    } else {
        if ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q))) {
            if ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q)))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t5 
                        = VL_SHIFTRS_III(32,32,32, 
                                         (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul1 
                                          - vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0), 8U);
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t6 = 0U;
    } else {
        if ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q))) {
            if ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q)))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t6 
                        = VL_SHIFTRS_III(32,32,32, 
                                         (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul1 
                                          + vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0), 8U);
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out_tmp = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg2_valid_q) {
            if ((4U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg2_idx_q))) {
                vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out_tmp 
                    = VL_SHIFTRS_III(32,32,32, (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t0 
                                                - vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t7), 8U);
            }
        }
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s2 
        = __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__s2;
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s1 
        = __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__s1;
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s2 
        = __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__s2;
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s1 
        = __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__s1;
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg2_idx_q 
        = ((IData)(vlTOPp->rst_i) ? 0U : (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg2_valid_q 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_valid_q));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t0 = 0U;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t3 = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q)))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t3 
                        = (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s0 
                           - vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s3);
                }
            } else {
                if ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t0 
                        = (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s0 
                           + vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s3);
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t7 = 0U;
    } else {
        if ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q)))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t7 
                        = (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s6 
                           + vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s7);
                }
            }
        }
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg2_idx_q 
        = ((IData)(vlTOPp->rst_i) ? 0U : (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg2_valid_q 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_valid_q));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t0 = 0U;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t3 = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q)))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t3 
                        = (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s0 
                           - vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s3);
                }
            } else {
                if ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t0 
                        = (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s0 
                           + vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s3);
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t7 = 0U;
    } else {
        if ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q)))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t7 
                        = (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s6 
                           + vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s7);
                }
            }
        }
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s0 
        = __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__s0;
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s0 
        = __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__s0;
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_valid_q 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg0_valid_q));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s3 = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q)))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s3 
                        = VL_SHIFTRS_III(32,32,32, 
                                         (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul0 
                                          + vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul1), 3U);
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s7 = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s7 
                        = VL_SHIFTRS_III(32,32,32, 
                                         (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul0 
                                          + vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul1), 3U);
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__s4 = 0U;
        __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__s5 = 0U;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s6 = 0U;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t4 = 0U;
    } else {
        if ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q)))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t4 
                        = (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s4 
                           + vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s5);
                }
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q))) {
                if ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q))) {
                    __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__s5 
                        = VL_SHIFTRS_III(32,32,32, 
                                         (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s5 
                                          - vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul0), 3U);
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s6 
                        = VL_SHIFTRS_III(32,32,32, 
                                         (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s5 
                                          - vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul1), 3U);
                } else {
                    __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__s4 
                        = VL_SHIFTRS_III(32,32,32, 
                                         (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s4 
                                          - vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul1), 3U);
                    __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__s5 
                        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul0;
                }
            } else {
                if ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q))) {
                    __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__s4 
                        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul0;
                }
            }
        }
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_valid_q 
        = ((~ (IData)(vlTOPp->rst_i)) & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg0_valid_q));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s3 = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q)))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s3 
                        = (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0 
                           + vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul1);
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s7 = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s7 
                        = (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0 
                           + vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul1);
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__s4 = 0U;
        __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__s5 = 0U;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s6 = 0U;
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t4 = 0U;
    } else {
        if ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q))) {
            if ((1U & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q)))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t4 
                        = (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s4 
                           + vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s5);
                }
            }
        } else {
            if ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q))) {
                if ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q))) {
                    __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__s5 
                        = (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s5 
                           - vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0);
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s6 
                        = (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s5 
                           - vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul1);
                } else {
                    __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__s4 
                        = (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s4 
                           - vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul1);
                    __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__s5 
                        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0;
                }
            } else {
                if ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q))) {
                    __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__s4 
                        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0;
                }
            }
        }
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg0_valid_q 
        = ((~ (IData)(vlTOPp->rst_i)) & (2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__state_q)));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q 
        = ((IData)(vlTOPp->rst_i) ? 0U : (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg0_idx_q));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul1 
        = ((IData)(vlTOPp->rst_i) ? 0U : VL_MULS_III(32,32,32, vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul1_a, vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul1_b));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul0 
        = ((IData)(vlTOPp->rst_i) ? 0U : VL_MULS_III(32,32,32, vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul0_a, vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul0_b));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg0_valid_q 
        = ((~ (IData)(vlTOPp->rst_i)) & (2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__state_q)));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q 
        = ((IData)(vlTOPp->rst_i) ? 0U : (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg0_idx_q));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul1 
        = ((IData)(vlTOPp->rst_i) ? 0U : VL_MULS_III(32,32,32, vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul1_a, vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul1_b));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0 
        = ((IData)(vlTOPp->rst_i) ? 0U : VL_MULS_III(32,32,32, vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0_a, vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0_b));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul1_a 
        = __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__mul1_a;
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul1_a 
        = __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__mul1_a;
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg0_idx_q 
        = ((IData)(vlTOPp->rst_i) ? 0U : (7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q)));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul1_b = 0U;
    } else {
        if ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))) {
            if ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q)))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul1_b = 0xb5U;
                }
            }
        } else {
            vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul1_b 
                = ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))
                    ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))
                        ? 0x31fU : 0xd4eU) : ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))
                                               ? 0x8e4U
                                               : 0x61fU));
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul0_b = 0U;
    } else {
        if ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))) {
            if ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q)))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul0_b = 0xb5U;
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q)))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul0_b = 0xec8U;
                }
            }
        } else {
            vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul0_b 
                = ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))
                    ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))
                        ? 0xfb1U : 0x968U) : ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))
                                               ? 0x235U
                                               : 0x454U));
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul0_a = 0U;
    } else {
        if ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))) {
            if ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q)))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul0_a 
                        = (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s4 
                           - vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s5);
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q)))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul0_a 
                        = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.__PVT__ram_read1_q;
                }
            }
        } else {
            vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul0_a 
                = ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))
                    ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))
                        ? vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.__PVT__ram_read1_q
                        : (vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.__PVT__ram_read1_q 
                           + vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.__PVT__ram_read1_q))
                    : ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))
                        ? (vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.__PVT__ram_read1_q 
                           + vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.__PVT__ram_read1_q)
                        : (vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.__PVT__ram_read1_q 
                           + vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.__PVT__ram_read1_q)));
        }
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg0_idx_q 
        = ((IData)(vlTOPp->rst_i) ? 0U : (7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q)));
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul1_b = 0U;
    } else {
        if ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))) {
            if ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q)))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul1_b = 0xb5U;
                }
            }
        } else {
            vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul1_b 
                = ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))
                    ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))
                        ? 0x31fU : 0xd4eU) : ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))
                                               ? 0x8e4U
                                               : 0x61fU));
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0_b = 0U;
    } else {
        if ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))) {
            if ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q)))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0_b = 0xb5U;
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q)))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0_b = 0xec8U;
                }
            }
        } else {
            vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0_b 
                = ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))
                    ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))
                        ? 0xfb1U : 0x968U) : ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))
                                               ? 0x235U
                                               : 0x454U));
        }
    }
    if (vlTOPp->rst_i) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0_a = 0U;
    } else {
        if ((4U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))) {
            if ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))) {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q)))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0_a 
                        = (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s4 
                           - vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s5);
                }
            } else {
                if ((1U & (~ (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q)))) {
                    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0_a 
                        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_6_7;
                }
            }
        } else {
            vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0_a 
                = ((2U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))
                    ? ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))
                        ? vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_2_3
                        : (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_2_3 
                           + vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_4_5))
                    : ((1U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))
                        ? (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_0_1 
                           + vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_6_7)
                        : (vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_2_3 
                           + vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_6_7)));
        }
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s4 
        = __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__s4;
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s5 
        = __Vdly__genblk3__DOT__u_idct_ifast_y__DOT__s5;
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s4 
        = __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__s4;
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s5 
        = __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__s5;
}

VL_INLINE_OPT void Vjpeg_core_jpeg_idct__U1::_sequent__TOP__jpeg_core__u_jpeg_idct__3(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_idct__U1::_sequent__TOP__jpeg_core__u_jpeg_idct__3\n"); );
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__valid_q 
        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vdly__genblk1__DOT__u_idct_ifast_x__DOT__valid_q;
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q 
        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vdly__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q;
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_6_7 
        = ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
                                                & ((VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val3_q))) 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3.__PVT__ram_read1_q)) 
                                                   >> 0xfU)))) 
                           << 0x10U)) | (VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val3_q))) 
                                         & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3.__PVT__ram_read1_q)));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_4_5 
        = ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
                                                & ((VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val2_q))) 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2.__PVT__ram_read1_q)) 
                                                   >> 0xfU)))) 
                           << 0x10U)) | (VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val2_q))) 
                                         & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2.__PVT__ram_read1_q)));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_2_3 
        = ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
                                                & ((VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val1_q))) 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1.__PVT__ram_read1_q)) 
                                                   >> 0xfU)))) 
                           << 0x10U)) | (VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val1_q))) 
                                         & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1.__PVT__ram_read1_q)));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_0_1 
        = ((0xffff0000U & (VL_NEGATE_I((IData)((1U 
                                                & ((VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val0_q))) 
                                                    & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0.__PVT__ram_read1_q)) 
                                                   >> 0xfU)))) 
                           << 0x10U)) | (VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val0_q))) 
                                         & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0.__PVT__ram_read1_q)));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__idct_x_data_w 
        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out
        [(7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q))];
}

VL_INLINE_OPT void Vjpeg_core_jpeg_idct__U1::_sequent__TOP__jpeg_core__u_jpeg_idct__4(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_idct__U1::_sequent__TOP__jpeg_core__u_jpeg_idct__4\n"); );
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vdly__u_id_fifo__DOT__wr_ptr_q;
    CData/*2:0*/ __Vdlyvdim0__u_id_fifo__DOT__ram_q__v0;
    CData/*0:0*/ __Vdlyvset__u_id_fifo__DOT__ram_q__v0;
    CData/*2:0*/ __Vdly__u_id_fifo__DOT__rd_ptr_q;
    CData/*3:0*/ __Vdly__u_id_fifo__DOT__count_q;
    IData/*31:0*/ __Vdlyvval__u_id_fifo__DOT__ram_q__v0;
    // Body
    __Vdly__u_id_fifo__DOT__rd_ptr_q = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__rd_ptr_q;
    __Vdly__u_id_fifo__DOT__count_q = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__count_q;
    __Vdly__u_id_fifo__DOT__wr_ptr_q = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__wr_ptr_q;
    __Vdlyvset__u_id_fifo__DOT__ram_q__v0 = 0U;
    if (vlTOPp->rst_i) {
        __Vdly__u_id_fifo__DOT__rd_ptr_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            __Vdly__u_id_fifo__DOT__rd_ptr_q = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vcellinp__u_id_fifo__pop_i) 
                 & (0U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__count_q)))) {
                __Vdly__u_id_fifo__DOT__rd_ptr_q = 
                    (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__rd_ptr_q)));
            }
        }
    }
    if (vlTOPp->rst_i) {
        __Vdly__u_id_fifo__DOT__count_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            __Vdly__u_id_fifo__DOT__count_q = 0U;
        } else {
            if ((((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_eob_q) 
                  & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__accept_o)) 
                 & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vcellinp__u_id_fifo__pop_i) 
                       & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__valid_o))))) {
                __Vdly__u_id_fifo__DOT__count_q = (0xfU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__count_q)));
            } else {
                if (((~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_eob_q) 
                         & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__accept_o))) 
                     & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vcellinp__u_id_fifo__pop_i) 
                        & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__valid_o)))) {
                    __Vdly__u_id_fifo__DOT__count_q 
                        = (0xfU & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__count_q) 
                                   - (IData)(1U)));
                }
            }
        }
    }
    if (vlTOPp->rst_i) {
        __Vdly__u_id_fifo__DOT__wr_ptr_q = 0U;
    } else {
        if (vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q) {
            __Vdly__u_id_fifo__DOT__wr_ptr_q = 0U;
        } else {
            if (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_eob_q) 
                 & (8U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__count_q)))) {
                __Vdlyvval__u_id_fifo__DOT__ram_q__v0 
                    = vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_id_q;
                __Vdlyvset__u_id_fifo__DOT__ram_q__v0 = 1U;
                __Vdlyvdim0__u_id_fifo__DOT__ram_q__v0 
                    = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__wr_ptr_q;
                __Vdly__u_id_fifo__DOT__wr_ptr_q = 
                    (7U & ((IData)(1U) + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__wr_ptr_q)));
            }
        }
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__rd_ptr_q 
        = __Vdly__u_id_fifo__DOT__rd_ptr_q;
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__wr_ptr_q 
        = __Vdly__u_id_fifo__DOT__wr_ptr_q;
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__count_q 
        = __Vdly__u_id_fifo__DOT__count_q;
    if (__Vdlyvset__u_id_fifo__DOT__ram_q__v0) {
        vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__ram_q[__Vdlyvdim0__u_id_fifo__DOT__ram_q__v0] 
            = __Vdlyvval__u_id_fifo__DOT__ram_q__v0;
    }
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__valid_o 
        = (0U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__count_q));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__accept_o 
        = (8U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__count_q));
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_id_o 
        = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__ram_q
        [vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__rd_ptr_q];
}

VL_INLINE_OPT void Vjpeg_core_jpeg_idct__U1::_sequent__TOP__jpeg_core__u_jpeg_idct__5(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_idct__U1::_sequent__TOP__jpeg_core__u_jpeg_idct__5\n"); );
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vcellinp__u_id_fifo__pop_i 
        = (((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__valid_q) 
            >> 5U) & (0x3fU == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_idx_o)));
}

void Vjpeg_core_jpeg_idct__U1::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vjpeg_core_jpeg_idct__U1::_ctor_var_reset\n"); );
    // Body
    __PVT__clk_i = VL_RAND_RESET_I(1);
    __PVT__rst_i = VL_RAND_RESET_I(1);
    __PVT__img_start_i = VL_RAND_RESET_I(1);
    __PVT__img_end_i = VL_RAND_RESET_I(1);
    __PVT__inport_valid_i = VL_RAND_RESET_I(1);
    __PVT__inport_data_i = VL_RAND_RESET_I(16);
    __PVT__inport_idx_i = VL_RAND_RESET_I(6);
    __PVT__inport_eob_i = VL_RAND_RESET_I(1);
    __PVT__inport_id_i = VL_RAND_RESET_I(32);
    __PVT__outport_accept_i = VL_RAND_RESET_I(1);
    __PVT__inport_accept_o = VL_RAND_RESET_I(1);
    __PVT__outport_valid_o = VL_RAND_RESET_I(1);
    __PVT__outport_data_o = VL_RAND_RESET_I(32);
    __PVT__outport_idx_o = VL_RAND_RESET_I(6);
    __PVT__outport_id_o = VL_RAND_RESET_I(32);
    __PVT__input_ready_w = VL_RAND_RESET_I(1);
    __PVT__idct_x_data_w = VL_RAND_RESET_I(32);
    __Vcellinp__u_id_fifo__pop_i = VL_RAND_RESET_I(1);
    __PVT__u_id_fifo__DOT__accept_o = VL_RAND_RESET_I(1);
    __PVT__u_id_fifo__DOT__valid_o = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            __PVT__u_id_fifo__DOT__ram_q[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__u_id_fifo__DOT__rd_ptr_q = VL_RAND_RESET_I(3);
    __PVT__u_id_fifo__DOT__wr_ptr_q = VL_RAND_RESET_I(3);
    __PVT__u_id_fifo__DOT__count_q = VL_RAND_RESET_I(4);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_0_1 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_2_3 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_4_5 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_6_7 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__s0 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__s1 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__s2 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__s3 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__s4 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__s5 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__s6 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__s7 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0_a = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0_b = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul1_a = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul1_b = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul1 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg0_valid_q = VL_RAND_RESET_I(1);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg0_idx_q = VL_RAND_RESET_I(3);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_valid_q = VL_RAND_RESET_I(1);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q = VL_RAND_RESET_I(3);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t0 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t1 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t2 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t3 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t4 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t5 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t6 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t7 = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg2_valid_q = VL_RAND_RESET_I(1);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg2_idx_q = VL_RAND_RESET_I(3);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            __PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out_tmp = VL_RAND_RESET_I(32);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__valid_q = VL_RAND_RESET_I(6);
    __PVT__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q = VL_RAND_RESET_I(6);
    __PVT__genblk3__DOT__u_idct_ifast_y__DOT__s0 = VL_RAND_RESET_I(32);
    __PVT__genblk3__DOT__u_idct_ifast_y__DOT__s1 = VL_RAND_RESET_I(32);
    __PVT__genblk3__DOT__u_idct_ifast_y__DOT__s2 = VL_RAND_RESET_I(32);
    __PVT__genblk3__DOT__u_idct_ifast_y__DOT__s3 = VL_RAND_RESET_I(32);
    __PVT__genblk3__DOT__u_idct_ifast_y__DOT__s4 = VL_RAND_RESET_I(32);
    __PVT__genblk3__DOT__u_idct_ifast_y__DOT__s5 = VL_RAND_RESET_I(32);
    __PVT__genblk3__DOT__u_idct_ifast_y__DOT__s6 = VL_RAND_RESET_I(32);
    __PVT__genblk3__DOT__u_idct_ifast_y__DOT__s7 = VL_RAND_RESET_I(32);
    __PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul0_a = VL_RAND_RESET_I(32);
    __PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul0_b = VL_RAND_RESET_I(32);
    __PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul1_a = VL_RAND_RESET_I(32);
    __PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul1_b = VL_RAND_RESET_I(32);
    __PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul0 = VL_RAND_RESET_I(32);
    __PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul1 = VL_RAND_RESET_I(32);
    __PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg0_valid_q = VL_RAND_RESET_I(1);
    __PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg0_idx_q = VL_RAND_RESET_I(3);
    __PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_valid_q = VL_RAND_RESET_I(1);
    __PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q = VL_RAND_RESET_I(3);
    __PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t0 = VL_RAND_RESET_I(32);
    __PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t1 = VL_RAND_RESET_I(32);
    __PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t2 = VL_RAND_RESET_I(32);
    __PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t3 = VL_RAND_RESET_I(32);
    __PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t4 = VL_RAND_RESET_I(32);
    __PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t5 = VL_RAND_RESET_I(32);
    __PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t6 = VL_RAND_RESET_I(32);
    __PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t7 = VL_RAND_RESET_I(32);
    __PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg2_valid_q = VL_RAND_RESET_I(1);
    __PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg2_idx_q = VL_RAND_RESET_I(3);
    { int __Vi0=0; for (; __Vi0<8; ++__Vi0) {
            __PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out_tmp = VL_RAND_RESET_I(32);
    __PVT__genblk3__DOT__u_idct_ifast_y__DOT__valid_q = VL_RAND_RESET_I(6);
    __PVT__genblk3__DOT__u_idct_ifast_y__DOT__ptr_q = VL_RAND_RESET_I(6);
    __Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__Vfuncout = VL_RAND_RESET_I(6);
    __Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__idx = VL_RAND_RESET_I(6);
    __Vfunc_genblk3__DOT__u_idct_ifast_y__DOT__ptr_conv__0__out_idx = VL_RAND_RESET_I(6);
    __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__valid_q = VL_RAND_RESET_I(6);
    __Vdly__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q = VL_RAND_RESET_I(6);
}
