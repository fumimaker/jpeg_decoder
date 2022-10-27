// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjpeg_core.h for the primary calling header

#include "Vjpeg_core_jpeg_idct_transpose_ram.h"
#include "Vjpeg_core__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vjpeg_core_jpeg_idct_transpose_ram) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vjpeg_core_jpeg_idct_transpose_ram::__Vconfigure(Vjpeg_core__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vjpeg_core_jpeg_idct_transpose_ram::~Vjpeg_core_jpeg_idct_transpose_ram() {
}

VL_INLINE_OPT void Vjpeg_core_jpeg_idct_transpose_ram::_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0__1(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vjpeg_core_jpeg_idct_transpose_ram::_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0__1\n"); );
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram__v0 = 0U;
    this->__PVT__ram_read0_q = this->ram[vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__wr_ptr_w];
    if (((((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__valid_q) 
           >> 5U) & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__inport_accept_o)) 
         & (0U == (3U & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q) 
                         >> 4U))))) {
        this->__Vdlyvval__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__idct_x_data_w;
        this->__Vdlyvset__ram__v0 = 1U;
        this->__Vdlyvdim0__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__wr_ptr_w;
    }
}

VL_INLINE_OPT void Vjpeg_core_jpeg_idct_transpose_ram::_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0__8(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vjpeg_core_jpeg_idct_transpose_ram::_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0__8\n"); );
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__ram_read1_q = this->ram[vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__Vcellinp__u_ram0__addr1_i];
    if (this->__Vdlyvset__ram__v0) {
        this->ram[this->__Vdlyvdim0__ram__v0] = this->__Vdlyvval__ram__v0;
    }
}

VL_INLINE_OPT void Vjpeg_core_jpeg_idct_transpose_ram::_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1__2(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vjpeg_core_jpeg_idct_transpose_ram::_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1__2\n"); );
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram__v0 = 0U;
    this->__PVT__ram_read0_q = this->ram[vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__wr_ptr_w];
    if (((((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__valid_q) 
           >> 5U) & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__inport_accept_o)) 
         & (1U == (3U & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q) 
                         >> 4U))))) {
        this->__Vdlyvval__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__idct_x_data_w;
        this->__Vdlyvset__ram__v0 = 1U;
        this->__Vdlyvdim0__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__wr_ptr_w;
    }
}

VL_INLINE_OPT void Vjpeg_core_jpeg_idct_transpose_ram::_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1__6(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vjpeg_core_jpeg_idct_transpose_ram::_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1__6\n"); );
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__ram_read1_q = this->ram[vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__Vcellinp__u_ram1__addr1_i];
    if (this->__Vdlyvset__ram__v0) {
        this->ram[this->__Vdlyvdim0__ram__v0] = this->__Vdlyvval__ram__v0;
    }
}

VL_INLINE_OPT void Vjpeg_core_jpeg_idct_transpose_ram::_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2__3(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vjpeg_core_jpeg_idct_transpose_ram::_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2__3\n"); );
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram__v0 = 0U;
    this->__PVT__ram_read0_q = this->ram[vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__wr_ptr_w];
    if (((((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__valid_q) 
           >> 5U) & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__inport_accept_o)) 
         & (2U == (3U & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q) 
                         >> 4U))))) {
        this->__Vdlyvval__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__idct_x_data_w;
        this->__Vdlyvset__ram__v0 = 1U;
        this->__Vdlyvdim0__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__wr_ptr_w;
    }
}

VL_INLINE_OPT void Vjpeg_core_jpeg_idct_transpose_ram::_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2__7(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vjpeg_core_jpeg_idct_transpose_ram::_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2__7\n"); );
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__ram_read1_q = this->ram[vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__Vcellinp__u_ram2__addr1_i];
    if (this->__Vdlyvset__ram__v0) {
        this->ram[this->__Vdlyvdim0__ram__v0] = this->__Vdlyvval__ram__v0;
    }
}

VL_INLINE_OPT void Vjpeg_core_jpeg_idct_transpose_ram::_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3__4(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vjpeg_core_jpeg_idct_transpose_ram::_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3__4\n"); );
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__Vdlyvset__ram__v0 = 0U;
    this->__PVT__ram_read0_q = this->ram[vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__wr_ptr_w];
    if (((((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__valid_q) 
           >> 5U) & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__inport_accept_o)) 
         & (3U == (3U & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q) 
                         >> 4U))))) {
        this->__Vdlyvval__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__idct_x_data_w;
        this->__Vdlyvset__ram__v0 = 1U;
        this->__Vdlyvdim0__ram__v0 = vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__wr_ptr_w;
    }
}

VL_INLINE_OPT void Vjpeg_core_jpeg_idct_transpose_ram::_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3__5(Vjpeg_core__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vjpeg_core_jpeg_idct_transpose_ram::_sequent__TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3__5\n"); );
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__ram_read1_q = this->ram[vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__Vcellinp__u_ram3__addr1_i];
    if (this->__Vdlyvset__ram__v0) {
        this->ram[this->__Vdlyvdim0__ram__v0] = this->__Vdlyvval__ram__v0;
    }
}

void Vjpeg_core_jpeg_idct_transpose_ram::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vjpeg_core_jpeg_idct_transpose_ram::_ctor_var_reset\n"); );
    // Body
    __PVT__clk0_i = VL_RAND_RESET_I(1);
    __PVT__rst0_i = VL_RAND_RESET_I(1);
    __PVT__addr0_i = VL_RAND_RESET_I(5);
    __PVT__data0_i = VL_RAND_RESET_I(32);
    __PVT__wr0_i = VL_RAND_RESET_I(1);
    __PVT__clk1_i = VL_RAND_RESET_I(1);
    __PVT__rst1_i = VL_RAND_RESET_I(1);
    __PVT__addr1_i = VL_RAND_RESET_I(5);
    __PVT__data1_i = VL_RAND_RESET_I(32);
    __PVT__wr1_i = VL_RAND_RESET_I(1);
    __PVT__data0_o = VL_RAND_RESET_I(32);
    __PVT__data1_o = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            ram[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__ram_read0_q = VL_RAND_RESET_I(32);
    __PVT__ram_read1_q = VL_RAND_RESET_I(32);
    __Vdlyvdim0__ram__v0 = 0;
    __Vdlyvval__ram__v0 = VL_RAND_RESET_I(32);
    __Vdlyvset__ram__v0 = 0;
}
