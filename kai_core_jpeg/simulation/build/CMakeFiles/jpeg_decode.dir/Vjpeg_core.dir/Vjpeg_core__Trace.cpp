// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vjpeg_core__Syms.h"


//======================

void Vjpeg_core::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vjpeg_core* t = (Vjpeg_core*)userthis;
    Vjpeg_core__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vjpeg_core::traceChgThis(Vjpeg_core__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 1U))))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 3U))))) {
            vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
                                | (vlTOPp->__Vm_traceActivity 
                                   >> 1U)) | (vlTOPp->__Vm_traceActivity 
                                              >> 4U))))) {
            vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 2U))))) {
            vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 3U))))) {
            vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
                               | (vlTOPp->__Vm_traceActivity 
                                  >> 4U))))) {
            vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__9(vlSymsp, vcdp, code);
        }
        if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__10(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__11(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vjpeg_core::traceChgThis__2(Vjpeg_core__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_data_o),32);
        vcdp->chgBit(c+9,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__inport_accept_o));
        vcdp->chgBus(c+17,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_idx_o),6);
        vcdp->chgBus(c+25,((0xffffU & (IData)((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__data_shifted_w 
                                               >> 0x18U)))),16);
        vcdp->chgBus(c+33,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__lookup_table_r),2);
        vcdp->chgBit(c+41,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_valid_o));
        vcdp->chgBus(c+49,((IData)((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__data_shifted_w 
                                    >> 8U))),32);
        vcdp->chgBus(c+57,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk2__DOT__u_fixed_y_dc__DOT__y_dc_value_r),8);
        vcdp->chgBus(c+65,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk2__DOT__u_fixed_y_dc__DOT__y_dc_width_r),5);
        vcdp->chgBus(c+73,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk2__DOT__u_fixed_y_ac__DOT__y_ac_value_r),8);
        vcdp->chgBus(c+81,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk2__DOT__u_fixed_y_ac__DOT__y_ac_width_r),5);
        vcdp->chgBus(c+89,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk2__DOT__u_fixed_cx_dc__DOT__cx_dc_value_r),8);
        vcdp->chgBus(c+97,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk2__DOT__u_fixed_cx_dc__DOT__cx_dc_width_r),5);
        vcdp->chgBus(c+105,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk2__DOT__u_fixed_cx_ac__DOT__cx_ac_value_r),8);
        vcdp->chgBus(c+113,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk2__DOT__u_fixed_cx_ac__DOT__cx_ac_width_r),5);
        vcdp->chgBus(c+121,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__idct_x_data_w),32);
        vcdp->chgBit(c+129,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__inport_accept_o));
        vcdp->chgBus(c+137,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_0_1),32);
        vcdp->chgBus(c+145,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_2_3),32);
        vcdp->chgBus(c+153,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_4_5),32);
        vcdp->chgBus(c+161,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_in_6_7),32);
        vcdp->chgBus(c+169,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__table_src_w[0]),2);
        vcdp->chgBus(c+170,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__table_src_w[1]),2);
        vcdp->chgBus(c+171,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__table_src_w[2]),2);
        vcdp->chgBus(c+172,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__table_src_w[3]),2);
        vcdp->chgBit(c+201,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__valid_o));
        vcdp->chgBus(c+209,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__data_out_o),32);
        vcdp->chgBit(c+217,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__valid_o));
        vcdp->chgBus(c+225,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__data_out_o),32);
        vcdp->chgBit(c+233,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__valid_o));
        vcdp->chgBus(c+241,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__data_out_o),32);
        vcdp->chgBus(c+249,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__r_conv_r),32);
        vcdp->chgBus(c+257,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__g_conv_r),32);
        vcdp->chgBus(c+265,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__b_conv_r),32);
        vcdp->chgBus(c+273,(VL_SHIFTRS_III(32,32,32, 
                                           VL_MULS_III(32,32,32, (IData)(0x166fU), vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__data_out_o), 0xcU)),32);
        vcdp->chgBus(c+281,(VL_SHIFTRS_III(32,32,32, 
                                           VL_MULS_III(32,32,32, (IData)(0xb6dU), vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__data_out_o), 0xcU)),32);
        vcdp->chgBus(c+289,(VL_SHIFTRS_III(32,32,32, 
                                           VL_MULS_III(32,32,32, (IData)(0x582U), vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__data_out_o), 0xcU)),32);
        vcdp->chgBus(c+297,(VL_SHIFTRS_III(32,32,32, 
                                           VL_MULS_III(32,32,32, (IData)(0x1c5aU), vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__data_out_o), 0xcU)),32);
        vcdp->chgQuad(c+305,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__fifo_data_r),40);
        vcdp->chgQuad(c+321,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__data_shifted_w),40);
        vcdp->chgBus(c+337,(((IData)((vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__data_shifted_w 
                                      >> 8U)) >> (0x1fU 
                                                  & ((IData)(0x10U) 
                                                     - (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk2__DOT__lookup_width_q))))),32);
        vcdp->chgBus(c+345,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_r),16);
        vcdp->chgBus(c+353,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr_ptr_w),6);
        vcdp->chgBit(c+361,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr0_w));
        vcdp->chgBit(c+369,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr1_w));
        vcdp->chgBit(c+377,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr2_w));
        vcdp->chgBit(c+385,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__wr3_w));
        vcdp->chgQuad(c+393,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid0_r),64);
        vcdp->chgQuad(c+409,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid1_r),64);
        vcdp->chgQuad(c+425,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid2_r),64);
        vcdp->chgQuad(c+441,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid3_r),64);
        vcdp->chgBus(c+457,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__wr_ptr_w),5);
        vcdp->chgBit(c+465,(((((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__valid_q) 
                               >> 5U) & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__inport_accept_o)) 
                             & (0U == (3U & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q) 
                                             >> 4U))))));
        vcdp->chgBit(c+473,(((((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__valid_q) 
                               >> 5U) & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__inport_accept_o)) 
                             & (1U == (3U & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q) 
                                             >> 4U))))));
        vcdp->chgBit(c+481,(((((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__valid_q) 
                               >> 5U) & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__inport_accept_o)) 
                             & (2U == (3U & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q) 
                                             >> 4U))))));
        vcdp->chgBit(c+489,(((((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__valid_q) 
                               >> 5U) & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__inport_accept_o)) 
                             & (3U == (3U & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q) 
                                             >> 4U))))));
        vcdp->chgBit(c+497,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__read_ok_w));
        vcdp->chgBus(c+505,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__cx_rd_ptr_r),6);
        vcdp->chgBus(c+513,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__rd_addr_w),8);
        vcdp->chgBus(c+521,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__cx_rd_ptr_r),6);
        vcdp->chgBus(c+529,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__rd_addr_w),8);
        vcdp->chgBus(c+537,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__Vcellinp__u_ram__addr0_i),9);
        vcdp->chgBus(c+545,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__Vcellinp__u_ram__addr0_i),8);
        vcdp->chgBus(c+553,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__Vcellinp__u_ram__addr0_i),8);
        vcdp->chgBus(c+561,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__Vcellinp__u_ram0__addr1_i),6);
        vcdp->chgBus(c+569,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__Vcellinp__u_ram1__addr1_i),6);
        vcdp->chgBus(c+577,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__Vcellinp__u_ram2__addr1_i),6);
        vcdp->chgBus(c+585,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__Vcellinp__u_ram3__addr1_i),6);
        vcdp->chgBus(c+593,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__Vcellinp__u_ram0__addr1_i),5);
        vcdp->chgBus(c+601,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__Vcellinp__u_ram1__addr1_i),5);
        vcdp->chgBus(c+609,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__Vcellinp__u_ram2__addr1_i),5);
        vcdp->chgBus(c+617,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__Vcellinp__u_ram3__addr1_i),5);
    }
}

void Vjpeg_core::traceChgThis__3(Vjpeg_core__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+625,(((0xffU == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__last_b_q)) 
                             & (0xdbU == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_r)))));
        vcdp->chgBit(c+633,(((0xffU == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__last_b_q)) 
                             & (0xc4U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_r)))));
        vcdp->chgBit(c+641,(((0xffU == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__last_b_q)) 
                             & (0xc2U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_r)))));
        vcdp->chgBit(c+649,(((0xffU == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__last_b_q)) 
                             & (0xddU == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_r)))));
        vcdp->chgBit(c+657,((((0xffU == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__last_b_q)) 
                              & (0xd0U <= (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_r))) 
                             & (0xd7U >= (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_r)))));
        vcdp->chgBit(c+665,((((0xffU == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__last_b_q)) 
                              & (0xe0U <= (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_r))) 
                             & (0xefU >= (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_r)))));
        vcdp->chgBit(c+673,(((0xffU == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__last_b_q)) 
                             & (0xfeU == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_r)))));
    }
}

void Vjpeg_core::traceChgThis__4(Vjpeg_core__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+681,(((1U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q)) 
                             & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__outport_valid_o))));
        vcdp->chgBit(c+689,(((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__inport_accept_o) 
                             & (~ ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_eob_q) 
                                   | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__inport_eob_q))))));
        vcdp->chgBus(c+697,(((vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__table_src_w
                              [(3U & (vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__outport_id_o 
                                      >> 0x1eU))] << 6U) 
                             | (0x3fU & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_idx_q)))),8);
    }
}

void Vjpeg_core::traceChgThis__5(Vjpeg_core__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+705,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__outport_id_o),32);
        vcdp->chgBus(c+713,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__id_value_w),32);
        vcdp->chgBus(c+721,((0x7fff8U & (vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__id_value_w 
                                         << 3U))),32);
        vcdp->chgBus(c+729,((0x1fff8U & (vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__id_value_w 
                                         >> 0xdU))),32);
        vcdp->chgBit(c+737,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_info__push_i));
        vcdp->chgBit(c+745,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_ram_y__push_i));
        vcdp->chgBit(c+753,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_ram_cb__push_i));
        vcdp->chgBit(c+761,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__Vcellinp__u_ram_cr__push_i));
    }
}

void Vjpeg_core::traceChgThis__6(Vjpeg_core__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+769,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_r),8);
        vcdp->chgBit(c+777,(vlSymsp->TOP__jpeg_core.__PVT__img_end_w));
        vcdp->chgBit(c+785,(vlSymsp->TOP__jpeg_core.__PVT__bb_inport_valid_w));
        vcdp->chgBit(c+793,(vlSymsp->TOP__jpeg_core.__PVT__dqt_cfg_valid_w));
        vcdp->chgBit(c+801,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__inport_accept_w));
        vcdp->chgBit(c+809,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__token_soi_w));
        vcdp->chgBit(c+817,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__token_sof0_w));
        vcdp->chgBit(c+825,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__token_eoi_w));
        vcdp->chgBit(c+833,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__token_sos_w));
        vcdp->chgBit(c+841,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__token_pad_w));
        vcdp->chgBus(c+849,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__next_state_r),5);
        vcdp->chgBit(c+857,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__dqt_write_w));
        vcdp->chgBus(c+865,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__dqt_table_addr_w),8);
        vcdp->chgBit(c+873,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__output_space_w));
        vcdp->chgBit(c+881,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__y_pop_w));
        vcdp->chgBit(c+889,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__id_pop_w));
        vcdp->chgBus(c+897,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__count_r),7);
        vcdp->chgBit(c+905,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__start_block_w));
        vcdp->chgBus(c+913,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__next_state_r),5);
        vcdp->chgBus(c+921,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__count_r),32);
        vcdp->chgBus(c+929,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__count_r),32);
        vcdp->chgBus(c+937,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__count_r),32);
    }
}

void Vjpeg_core::traceChgThis__7(Vjpeg_core__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+945,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__outport_valid_o));
        vcdp->chgBus(c+953,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__outport_id_o),32);
        vcdp->chgBus(c+961,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__pop_bits_r),6);
        vcdp->chgBit(c+969,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__Vcellinp__u_id_fifo__pop_i));
        vcdp->chgBus(c+977,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__next_state_r),2);
        vcdp->chgBus(c+985,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__next_state_r),2);
    }
}

void Vjpeg_core::traceChgThis__8(Vjpeg_core__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+993,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__valid_q));
        vcdp->chgBus(c+1001,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_width_q),16);
        vcdp->chgBus(c+1009,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_height_q),16);
        vcdp->chgBus(c+1017,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_x_q),16);
        vcdp->chgBus(c+1025,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_y_q),16);
        vcdp->chgBus(c+1033,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_r_q),8);
        vcdp->chgBus(c+1041,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_g_q),8);
        vcdp->chgBus(c+1049,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__pixel_b_q),8);
        vcdp->chgBit(c+1057,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__idle_q));
        vcdp->chgBus(c+1065,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_data_q),16);
        vcdp->chgBus(c+1073,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_idx_q),6);
        vcdp->chgBit(c+1081,((((0x180U >= vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__count_q) 
                               & (0x80U >= vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__count_q)) 
                              | (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__idle_q))));
        vcdp->chgBit(c+1089,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk2__DOT__lookup_valid_q));
        vcdp->chgBus(c+1097,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_cb_dqt_table_q),2);
        vcdp->chgBus(c+1105,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk2__DOT__lookup_width_q),5);
        vcdp->chgBus(c+1113,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_q),16);
        vcdp->chgBit(c+1121,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_valid_q));
        vcdp->chgBus(c+1129,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_y_dqt_table_q),2);
        vcdp->chgBit(c+1137,((1U & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__valid_q) 
                                    >> 5U))));
        vcdp->chgBus(c+1145,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_dht__DOT__genblk2__DOT__lookup_value_q),8);
        vcdp->chgBus(c+1153,((0x3fU & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_idx_q))),6);
        vcdp->chgBus(c+1161,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q),2);
        vcdp->chgBus(c+1169,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_cr_dqt_table_q),2);
        vcdp->chgBus(c+1177,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_data_q),8);
        vcdp->chgBit(c+1185,((0x38U >= (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__count_q))));
        vcdp->chgBus(c+1193,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__byte_idx_q),2);
        vcdp->chgBus(c+1201,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__last_b_q),8);
        vcdp->chgBus(c+1209,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__length_q),16);
        vcdp->chgBit(c+1217,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_valid_q));
        vcdp->chgBus(c+1225,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__idx_q),6);
        vcdp->chgBus(c+1233,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_precision_q),8);
        vcdp->chgBus(c+1241,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_num_comp_q),8);
        vcdp->chgBus(c+1249,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_y_factor_q),8);
        vcdp->chgBus(c+1257,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_cb_factor_q),8);
        vcdp->chgBus(c+1265,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_cr_factor_q),8);
        vcdp->chgBus(c+1273,((0xfU & ((IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_y_factor_q) 
                                      >> 4U))),4);
        vcdp->chgBus(c+1281,((0xfU & (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_y_factor_q))),4);
        vcdp->chgBus(c+1289,((0xfU & ((IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_cb_factor_q) 
                                      >> 4U))),4);
        vcdp->chgBus(c+1297,((0xfU & (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_cb_factor_q))),4);
        vcdp->chgBus(c+1305,((0xfU & ((IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_cr_factor_q) 
                                      >> 4U))),4);
        vcdp->chgBus(c+1313,((0xfU & (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_cr_factor_q))),4);
        vcdp->chgBit(c+1321,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__eof_q));
        vcdp->chgBit(c+1329,((2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__state_q))));
        vcdp->chgBus(c+1337,((VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val0_q))) 
                              & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0.__PVT__ram_read1_q))),16);
        vcdp->chgBus(c+1345,((VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val1_q))) 
                              & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1.__PVT__ram_read1_q))),16);
        vcdp->chgBus(c+1353,((VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val2_q))) 
                              & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2.__PVT__ram_read1_q))),16);
        vcdp->chgBus(c+1361,((VL_NEGATE_I((IData)((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val3_q))) 
                              & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3.__PVT__ram_read1_q))),16);
        vcdp->chgBus(c+1369,((7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q))),3);
        vcdp->chgBit(c+1377,((1U & ((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__valid_q) 
                                    >> 5U))));
        vcdp->chgBus(c+1385,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__ptr_q),6);
        vcdp->chgBit(c+1393,((2U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__state_q))));
        vcdp->chgBus(c+1401,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.__PVT__ram_read1_q),32);
        vcdp->chgBus(c+1409,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.__PVT__ram_read1_q),32);
        vcdp->chgBus(c+1417,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.__PVT__ram_read1_q),32);
        vcdp->chgBus(c+1425,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.__PVT__ram_read1_q),32);
        vcdp->chgBus(c+1433,((7U & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q))),3);
        vcdp->chgBus(c+1441,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s0),32);
        vcdp->chgBus(c+1449,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s1),32);
        vcdp->chgBus(c+1457,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s2),32);
        vcdp->chgBus(c+1465,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s3),32);
        vcdp->chgBus(c+1473,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s4),32);
        vcdp->chgBus(c+1481,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s5),32);
        vcdp->chgBus(c+1489,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s6),32);
        vcdp->chgBus(c+1497,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__s7),32);
        vcdp->chgBus(c+1505,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0_a),32);
        vcdp->chgBus(c+1513,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0_b),32);
        vcdp->chgBus(c+1521,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul1_a),32);
        vcdp->chgBus(c+1529,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul1_b),32);
        vcdp->chgBus(c+1537,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul0),32);
        vcdp->chgBus(c+1545,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__mul1),32);
        vcdp->chgBit(c+1553,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg0_valid_q));
        vcdp->chgBus(c+1561,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg0_idx_q),3);
        vcdp->chgBit(c+1569,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_valid_q));
        vcdp->chgBus(c+1577,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg1_idx_q),3);
        vcdp->chgBus(c+1585,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t0),32);
        vcdp->chgBus(c+1593,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t1),32);
        vcdp->chgBus(c+1601,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t2),32);
        vcdp->chgBus(c+1609,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t3),32);
        vcdp->chgBus(c+1617,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t4),32);
        vcdp->chgBus(c+1625,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t5),32);
        vcdp->chgBus(c+1633,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t6),32);
        vcdp->chgBus(c+1641,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__o_t7),32);
        vcdp->chgBit(c+1649,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg2_valid_q));
        vcdp->chgBus(c+1657,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__out_stg2_idx_q),3);
        vcdp->chgBus(c+1665,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[0]),32);
        vcdp->chgBus(c+1666,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[1]),32);
        vcdp->chgBus(c+1667,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[2]),32);
        vcdp->chgBus(c+1668,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[3]),32);
        vcdp->chgBus(c+1669,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[4]),32);
        vcdp->chgBus(c+1670,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[5]),32);
        vcdp->chgBus(c+1671,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[6]),32);
        vcdp->chgBus(c+1672,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out[7]),32);
        vcdp->chgBus(c+1729,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__block_out_tmp),32);
        vcdp->chgBus(c+1737,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk1__DOT__u_idct_ifast_x__DOT__valid_q),6);
        vcdp->chgBus(c+1745,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s0),32);
        vcdp->chgBus(c+1753,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s1),32);
        vcdp->chgBus(c+1761,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s2),32);
        vcdp->chgBus(c+1769,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s3),32);
        vcdp->chgBus(c+1777,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s4),32);
        vcdp->chgBus(c+1785,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s5),32);
        vcdp->chgBus(c+1793,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s6),32);
        vcdp->chgBus(c+1801,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__s7),32);
        vcdp->chgBus(c+1809,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul0_a),32);
        vcdp->chgBus(c+1817,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul0_b),32);
        vcdp->chgBus(c+1825,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul1_a),32);
        vcdp->chgBus(c+1833,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul1_b),32);
        vcdp->chgBus(c+1841,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul0),32);
        vcdp->chgBus(c+1849,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__mul1),32);
        vcdp->chgBit(c+1857,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg0_valid_q));
        vcdp->chgBus(c+1865,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg0_idx_q),3);
        vcdp->chgBit(c+1873,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_valid_q));
        vcdp->chgBus(c+1881,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg1_idx_q),3);
        vcdp->chgBus(c+1889,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t0),32);
        vcdp->chgBus(c+1897,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t1),32);
        vcdp->chgBus(c+1905,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t2),32);
        vcdp->chgBus(c+1913,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t3),32);
        vcdp->chgBus(c+1921,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t4),32);
        vcdp->chgBus(c+1929,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t5),32);
        vcdp->chgBus(c+1937,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t6),32);
        vcdp->chgBus(c+1945,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__o_t7),32);
        vcdp->chgBit(c+1953,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg2_valid_q));
        vcdp->chgBus(c+1961,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__out_stg2_idx_q),3);
        vcdp->chgBus(c+1969,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out[0]),32);
        vcdp->chgBus(c+1970,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out[1]),32);
        vcdp->chgBus(c+1971,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out[2]),32);
        vcdp->chgBus(c+1972,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out[3]),32);
        vcdp->chgBus(c+1973,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out[4]),32);
        vcdp->chgBus(c+1974,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out[5]),32);
        vcdp->chgBus(c+1975,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out[6]),32);
        vcdp->chgBus(c+1976,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out[7]),32);
        vcdp->chgBus(c+2033,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__block_out_tmp),32);
        vcdp->chgBus(c+2041,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__valid_q),6);
        vcdp->chgBus(c+2049,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__genblk3__DOT__u_idct_ifast_y__DOT__ptr_q),6);
        vcdp->chgBus(c+2057,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__idx_q),8);
        vcdp->chgBus(c+2065,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__cfg_table_q),2);
        vcdp->chgBus(c+2073,((((IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__cfg_table_q) 
                               << 6U) | (0x3fU & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__idx_q)))),8);
        vcdp->chgBus(c+2081,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__dqt_entry_q),8);
        vcdp->chgBit(c+2089,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__inport_valid_q));
        vcdp->chgBus(c+2097,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__inport_data_q),16);
        vcdp->chgBus(c+2105,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__inport_idx_q),6);
        vcdp->chgBit(c+2113,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__active_q));
        vcdp->chgBus(c+2121,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__count_q),32);
        vcdp->chgBus(c+2129,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__count_q),32);
        vcdp->chgBus(c+2137,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__count_q),32);
        vcdp->chgBus(c+2145,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__idx_q),6);
        vcdp->chgBus(c+2153,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__subsmpl_q),2);
        vcdp->chgBus(c+2161,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q[0]),8);
        vcdp->chgBus(c+2162,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q[1]),8);
        vcdp->chgBus(c+2163,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q[2]),8);
        vcdp->chgBus(c+2164,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q[3]),8);
        vcdp->chgBus(c+2165,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q[4]),8);
        vcdp->chgBus(c+2166,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q[5]),8);
        vcdp->chgBus(c+2167,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q[6]),8);
        vcdp->chgBus(c+2168,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__ram_q[7]),8);
        vcdp->chgBus(c+2225,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__rd_ptr_q),6);
        vcdp->chgBus(c+2233,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__wr_ptr_q),6);
        vcdp->chgBus(c+2241,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__count_q),7);
        vcdp->chgBit(c+2249,(vlSymsp->TOP__jpeg_core__u_jpeg_bitbuffer.__PVT__drain_q));
        vcdp->chgBit(c+2257,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__end_of_image_q));
        vcdp->chgBus(c+2265,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_type_q),2);
        vcdp->chgBus(c+2273,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_bits_q),8);
        vcdp->chgBus(c+2281,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__coeff_idx_q),8);
        vcdp->chgBit(c+2289,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__first_q));
        vcdp->chgBus(c+2297,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q),8);
        vcdp->chgBus(c+2305,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__lookup_width_q),5);
        vcdp->chgBus(c+2313,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__input_data_q),16);
        vcdp->chgBus(c+2321,((0xfU & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__code_q))),5);
        vcdp->chgBus(c+2329,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__prev_dc_coeff_q[0]),16);
        vcdp->chgBus(c+2330,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__prev_dc_coeff_q[1]),16);
        vcdp->chgBus(c+2331,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__prev_dc_coeff_q[2]),16);
        vcdp->chgBus(c+2332,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__prev_dc_coeff_q[3]),16);
        vcdp->chgBus(c+2361,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__dc_coeff_q),16);
        vcdp->chgBus(c+2369,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__type_idx_q),3);
        vcdp->chgBus(c+2377,((0xfff8U & ((IData)(7U) 
                                         + (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_width_q)))),16);
        vcdp->chgBus(c+2385,((0x1fffU & (((IData)(7U) 
                                          + (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_width_q)) 
                                         >> 3U))),16);
        vcdp->chgBus(c+2393,((0x3ffeU & (((IData)(7U) 
                                          + (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_width_q)) 
                                         >> 2U))),16);
        vcdp->chgBus(c+2401,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_x_q),16);
        vcdp->chgBus(c+2409,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_y_q),16);
        vcdp->chgBus(c+2417,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__x_idx_q),16);
        vcdp->chgBus(c+2425,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__y_idx_q),16);
        vcdp->chgBus(c+2433,((0xffffU & ((IData)(1U) 
                                         + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__u_id__DOT__block_x_q)))),16);
        vcdp->chgBus(c+2441,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_wr_q),2);
        vcdp->chgBus(c+2449,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_rd_q),2);
        vcdp->chgBus(c+2457,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_idx_q),6);
        vcdp->chgBus(c+2465,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__rd_addr_q),4);
        vcdp->chgBus(c+2473,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0.__PVT__ram_read1_q),16);
        vcdp->chgBus(c+2481,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1.__PVT__ram_read1_q),16);
        vcdp->chgBus(c+2489,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2.__PVT__ram_read1_q),16);
        vcdp->chgBus(c+2497,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3.__PVT__ram_read1_q),16);
        vcdp->chgQuad(c+2505,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid0_q),64);
        vcdp->chgQuad(c+2521,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid1_q),64);
        vcdp->chgQuad(c+2537,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid2_q),64);
        vcdp->chgQuad(c+2553,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_valid3_q),64);
        vcdp->chgBus(c+2569,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__block_ready_q),4);
        vcdp->chgBus(c+2577,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__state_q),2);
        vcdp->chgBit(c+2585,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val0_q));
        vcdp->chgBit(c+2593,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val1_q));
        vcdp->chgBit(c+2601,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val2_q));
        vcdp->chgBit(c+2609,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input.__PVT__data_val3_q));
        vcdp->chgBit(c+2617,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__block_wr_q));
        vcdp->chgBit(c+2625,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__block_rd_q));
        vcdp->chgBus(c+2633,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_idx_q),6);
        vcdp->chgBus(c+2641,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__rd_addr_q),4);
        vcdp->chgBus(c+2649,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__block_ready_q),2);
        vcdp->chgBus(c+2657,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose.__PVT__state_q),2);
        vcdp->chgBus(c+2665,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__rd_ptr_q),9);
        vcdp->chgBus(c+2673,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__wr_ptr_q),9);
        vcdp->chgBus(c+2681,((0x1ffU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__wr_ptr_q)))),9);
        vcdp->chgBit(c+2689,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__rd_q));
        vcdp->chgBus(c+2697,((0x1ffU & ((IData)(1U) 
                                        + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__rd_ptr_q)))),9);
        vcdp->chgBit(c+2705,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__rd_skid_q));
        vcdp->chgBus(c+2713,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y.__PVT__rd_skid_data_q),32);
        vcdp->chgBus(c+2721,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y__u_ram.__PVT__ram_read1_q),32);
        vcdp->chgBit(c+2729,((2U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__img_mode_q))));
        vcdp->chgBus(c+2737,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__rd_ptr_q),8);
        vcdp->chgBus(c+2745,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__wr_ptr_q),8);
        vcdp->chgBus(c+2753,((0xffU & ((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__wr_ptr_q)))),8);
        vcdp->chgBit(c+2761,((1U < vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__count_q)));
        vcdp->chgBit(c+2769,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__rd_q));
        vcdp->chgBus(c+2777,((0xffU & ((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__rd_ptr_q)))),8);
        vcdp->chgBus(c+2785,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__cx_idx_q),8);
        vcdp->chgBus(c+2793,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__cx_half_q),2);
        vcdp->chgBus(c+2801,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__cx_rd_ptr_q),6);
        vcdp->chgBit(c+2809,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__rd_skid_q));
        vcdp->chgBus(c+2817,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb.__PVT__rd_skid_data_q),32);
        vcdp->chgBus(c+2825,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb__u_ram.__PVT__ram_read1_q),32);
        vcdp->chgBus(c+2833,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__rd_ptr_q),8);
        vcdp->chgBus(c+2841,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__wr_ptr_q),8);
        vcdp->chgBus(c+2849,((0xffU & ((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__wr_ptr_q)))),8);
        vcdp->chgBit(c+2857,((1U < vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__count_q)));
        vcdp->chgBit(c+2865,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__rd_q));
        vcdp->chgBus(c+2873,((0xffU & ((IData)(1U) 
                                       + (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__rd_ptr_q)))),8);
        vcdp->chgBus(c+2881,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__cx_idx_q),8);
        vcdp->chgBus(c+2889,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__cx_half_q),2);
        vcdp->chgBus(c+2897,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__cx_rd_ptr_q),6);
        vcdp->chgBit(c+2905,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__rd_skid_q));
        vcdp->chgBus(c+2913,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr.__PVT__rd_skid_data_q),32);
        vcdp->chgBus(c+2921,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr__u_ram.__PVT__ram_read1_q),32);
        vcdp->chgBus(c+2929,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_y__u_ram.__PVT__ram_read0_q),32);
        vcdp->chgBus(c+2937,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cb__u_ram.__PVT__ram_read0_q),32);
        vcdp->chgBus(c+2945,(vlSymsp->TOP__jpeg_core__u_jpeg_output__u_ram_cr__u_ram.__PVT__ram_read0_q),32);
        vcdp->chgBus(c+2953,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0.__PVT__ram_read0_q),16);
        vcdp->chgBus(c+2961,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1.__PVT__ram_read0_q),16);
        vcdp->chgBus(c+2969,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2.__PVT__ram_read0_q),16);
        vcdp->chgBus(c+2977,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3.__PVT__ram_read0_q),16);
        vcdp->chgBus(c+2985,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.__PVT__ram_read0_q),32);
        vcdp->chgBus(c+2993,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.__PVT__ram_read0_q),32);
        vcdp->chgBus(c+3001,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.__PVT__ram_read0_q),32);
        vcdp->chgBus(c+3009,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.__PVT__ram_read0_q),32);
    }
}

void Vjpeg_core::traceChgThis__9(Vjpeg_core__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+3017,((8U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__count_q))));
        vcdp->chgBit(c+3025,((0U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__count_q))));
        vcdp->chgBus(c+3033,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__ram_q[0]),32);
        vcdp->chgBus(c+3034,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__ram_q[1]),32);
        vcdp->chgBus(c+3035,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__ram_q[2]),32);
        vcdp->chgBus(c+3036,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__ram_q[3]),32);
        vcdp->chgBus(c+3037,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__ram_q[4]),32);
        vcdp->chgBus(c+3038,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__ram_q[5]),32);
        vcdp->chgBus(c+3039,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__ram_q[6]),32);
        vcdp->chgBus(c+3040,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__ram_q[7]),32);
        vcdp->chgBus(c+3097,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__rd_ptr_q),3);
        vcdp->chgBus(c+3105,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__wr_ptr_q),3);
        vcdp->chgBus(c+3113,(vlSymsp->TOP__jpeg_core__u_jpeg_idct.__PVT__u_id_fifo__DOT__count_q),4);
        vcdp->chgBit(c+3121,((0U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__count_q))));
        vcdp->chgBit(c+3129,((8U != (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__count_q))));
        vcdp->chgBus(c+3137,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__ram_q[0]),32);
        vcdp->chgBus(c+3138,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__ram_q[1]),32);
        vcdp->chgBus(c+3139,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__ram_q[2]),32);
        vcdp->chgBus(c+3140,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__ram_q[3]),32);
        vcdp->chgBus(c+3141,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__ram_q[4]),32);
        vcdp->chgBus(c+3142,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__ram_q[5]),32);
        vcdp->chgBus(c+3143,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__ram_q[6]),32);
        vcdp->chgBus(c+3144,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__ram_q[7]),32);
        vcdp->chgBus(c+3201,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__rd_ptr_q),3);
        vcdp->chgBus(c+3209,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__wr_ptr_q),3);
        vcdp->chgBus(c+3217,(vlSymsp->TOP__jpeg_core__u_jpeg_output.__PVT__u_info__DOT__count_q),4);
    }
}

void Vjpeg_core::traceChgThis__10(Vjpeg_core__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+3225,(((4U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q)) 
                              | ((5U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q)) 
                                 & (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__push_q)))));
        vcdp->chgBit(c+3233,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__start_q));
        vcdp->chgBus(c+3241,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_id_q),32);
        vcdp->chgBit(c+3249,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__outport_eob_q));
        vcdp->chgBus(c+3257,(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__state_q),5);
        vcdp->chgBus(c+3265,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__inport_id_q),32);
        vcdp->chgBit(c+3273,(vlSymsp->TOP__jpeg_core__u_jpeg_dqt.__PVT__inport_eob_q));
        vcdp->chgBit(c+3281,((4U == (IData)(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q))));
        vcdp->chgBus(c+3289,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__state_q),5);
        vcdp->chgBit(c+3297,(vlSymsp->TOP__jpeg_core__u_jpeg_mcu_proc.__PVT__push_q));
    }
}

void Vjpeg_core::traceChgThis__11(Vjpeg_core__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vjpeg_core* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+3305,(vlTOPp->clk_i));
        vcdp->chgBit(c+3313,(vlTOPp->rst_i));
        vcdp->chgBit(c+3321,(vlTOPp->inport_valid_i));
        vcdp->chgBus(c+3329,(vlTOPp->inport_data_i),32);
        vcdp->chgBus(c+3337,(vlTOPp->inport_strb_i),4);
        vcdp->chgBit(c+3345,(vlTOPp->inport_last_i));
        vcdp->chgBit(c+3353,(vlTOPp->outport_accept_i));
        vcdp->chgBit(c+3361,(vlTOPp->inport_accept_o));
        vcdp->chgBit(c+3369,(vlTOPp->outport_valid_o));
        vcdp->chgBus(c+3377,(vlTOPp->outport_width_o),16);
        vcdp->chgBus(c+3385,(vlTOPp->outport_height_o),16);
        vcdp->chgBus(c+3393,(vlTOPp->outport_pixel_x_o),16);
        vcdp->chgBus(c+3401,(vlTOPp->outport_pixel_y_o),16);
        vcdp->chgBus(c+3409,(vlTOPp->outport_pixel_r_o),8);
        vcdp->chgBus(c+3417,(vlTOPp->outport_pixel_g_o),8);
        vcdp->chgBus(c+3425,(vlTOPp->outport_pixel_b_o),8);
        vcdp->chgBit(c+3433,(vlTOPp->idle_o));
        vcdp->chgBit(c+3441,((((3U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__byte_idx_q)) 
                               | (IData)(vlTOPp->inport_last_i)) 
                              & (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__inport_accept_w))));
        vcdp->chgBit(c+3449,(((0xaU == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__state_q)) 
                              & (IData)(vlTOPp->inport_valid_i))));
        vcdp->chgBit(c+3457,(((IData)(vlTOPp->inport_last_i) 
                              | (1U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__length_q)))));
        vcdp->chgBit(c+3465,((((IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__data_valid_q) 
                               & (IData)(vlTOPp->inport_valid_i)) 
                              & (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__token_eoi_w))));
        vcdp->chgBit(c+3473,(((3U == (IData)(vlSymsp->TOP__jpeg_core.__PVT__u_jpeg_input__DOT__byte_idx_q)) 
                              | (IData)(vlTOPp->inport_last_i))));
        vcdp->chgBus(c+3481,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[0]),32);
        vcdp->chgBus(c+3482,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[1]),32);
        vcdp->chgBus(c+3483,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[2]),32);
        vcdp->chgBus(c+3484,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[3]),32);
        vcdp->chgBus(c+3485,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[4]),32);
        vcdp->chgBus(c+3486,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[5]),32);
        vcdp->chgBus(c+3487,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[6]),32);
        vcdp->chgBus(c+3488,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[7]),32);
        vcdp->chgBus(c+3489,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[8]),32);
        vcdp->chgBus(c+3490,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[9]),32);
        vcdp->chgBus(c+3491,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[10]),32);
        vcdp->chgBus(c+3492,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[11]),32);
        vcdp->chgBus(c+3493,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[12]),32);
        vcdp->chgBus(c+3494,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[13]),32);
        vcdp->chgBus(c+3495,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[14]),32);
        vcdp->chgBus(c+3496,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[15]),32);
        vcdp->chgBus(c+3497,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[16]),32);
        vcdp->chgBus(c+3498,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[17]),32);
        vcdp->chgBus(c+3499,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[18]),32);
        vcdp->chgBus(c+3500,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[19]),32);
        vcdp->chgBus(c+3501,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[20]),32);
        vcdp->chgBus(c+3502,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[21]),32);
        vcdp->chgBus(c+3503,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[22]),32);
        vcdp->chgBus(c+3504,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[23]),32);
        vcdp->chgBus(c+3505,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[24]),32);
        vcdp->chgBus(c+3506,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[25]),32);
        vcdp->chgBus(c+3507,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[26]),32);
        vcdp->chgBus(c+3508,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[27]),32);
        vcdp->chgBus(c+3509,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[28]),32);
        vcdp->chgBus(c+3510,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[29]),32);
        vcdp->chgBus(c+3511,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[30]),32);
        vcdp->chgBus(c+3512,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram[31]),32);
        vcdp->chgBus(c+3737,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[0]),32);
        vcdp->chgBus(c+3738,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[1]),32);
        vcdp->chgBus(c+3739,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[2]),32);
        vcdp->chgBus(c+3740,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[3]),32);
        vcdp->chgBus(c+3741,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[4]),32);
        vcdp->chgBus(c+3742,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[5]),32);
        vcdp->chgBus(c+3743,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[6]),32);
        vcdp->chgBus(c+3744,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[7]),32);
        vcdp->chgBus(c+3745,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[8]),32);
        vcdp->chgBus(c+3746,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[9]),32);
        vcdp->chgBus(c+3747,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[10]),32);
        vcdp->chgBus(c+3748,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[11]),32);
        vcdp->chgBus(c+3749,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[12]),32);
        vcdp->chgBus(c+3750,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[13]),32);
        vcdp->chgBus(c+3751,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[14]),32);
        vcdp->chgBus(c+3752,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[15]),32);
        vcdp->chgBus(c+3753,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[16]),32);
        vcdp->chgBus(c+3754,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[17]),32);
        vcdp->chgBus(c+3755,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[18]),32);
        vcdp->chgBus(c+3756,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[19]),32);
        vcdp->chgBus(c+3757,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[20]),32);
        vcdp->chgBus(c+3758,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[21]),32);
        vcdp->chgBus(c+3759,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[22]),32);
        vcdp->chgBus(c+3760,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[23]),32);
        vcdp->chgBus(c+3761,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[24]),32);
        vcdp->chgBus(c+3762,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[25]),32);
        vcdp->chgBus(c+3763,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[26]),32);
        vcdp->chgBus(c+3764,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[27]),32);
        vcdp->chgBus(c+3765,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[28]),32);
        vcdp->chgBus(c+3766,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[29]),32);
        vcdp->chgBus(c+3767,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[30]),32);
        vcdp->chgBus(c+3768,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram[31]),32);
        vcdp->chgBus(c+3993,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[0]),32);
        vcdp->chgBus(c+3994,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[1]),32);
        vcdp->chgBus(c+3995,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[2]),32);
        vcdp->chgBus(c+3996,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[3]),32);
        vcdp->chgBus(c+3997,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[4]),32);
        vcdp->chgBus(c+3998,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[5]),32);
        vcdp->chgBus(c+3999,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[6]),32);
        vcdp->chgBus(c+4000,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[7]),32);
        vcdp->chgBus(c+4001,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[8]),32);
        vcdp->chgBus(c+4002,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[9]),32);
        vcdp->chgBus(c+4003,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[10]),32);
        vcdp->chgBus(c+4004,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[11]),32);
        vcdp->chgBus(c+4005,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[12]),32);
        vcdp->chgBus(c+4006,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[13]),32);
        vcdp->chgBus(c+4007,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[14]),32);
        vcdp->chgBus(c+4008,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[15]),32);
        vcdp->chgBus(c+4009,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[16]),32);
        vcdp->chgBus(c+4010,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[17]),32);
        vcdp->chgBus(c+4011,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[18]),32);
        vcdp->chgBus(c+4012,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[19]),32);
        vcdp->chgBus(c+4013,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[20]),32);
        vcdp->chgBus(c+4014,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[21]),32);
        vcdp->chgBus(c+4015,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[22]),32);
        vcdp->chgBus(c+4016,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[23]),32);
        vcdp->chgBus(c+4017,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[24]),32);
        vcdp->chgBus(c+4018,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[25]),32);
        vcdp->chgBus(c+4019,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[26]),32);
        vcdp->chgBus(c+4020,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[27]),32);
        vcdp->chgBus(c+4021,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[28]),32);
        vcdp->chgBus(c+4022,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[29]),32);
        vcdp->chgBus(c+4023,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[30]),32);
        vcdp->chgBus(c+4024,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram[31]),32);
        vcdp->chgBus(c+4249,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[0]),32);
        vcdp->chgBus(c+4250,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[1]),32);
        vcdp->chgBus(c+4251,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[2]),32);
        vcdp->chgBus(c+4252,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[3]),32);
        vcdp->chgBus(c+4253,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[4]),32);
        vcdp->chgBus(c+4254,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[5]),32);
        vcdp->chgBus(c+4255,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[6]),32);
        vcdp->chgBus(c+4256,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[7]),32);
        vcdp->chgBus(c+4257,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[8]),32);
        vcdp->chgBus(c+4258,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[9]),32);
        vcdp->chgBus(c+4259,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[10]),32);
        vcdp->chgBus(c+4260,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[11]),32);
        vcdp->chgBus(c+4261,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[12]),32);
        vcdp->chgBus(c+4262,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[13]),32);
        vcdp->chgBus(c+4263,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[14]),32);
        vcdp->chgBus(c+4264,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[15]),32);
        vcdp->chgBus(c+4265,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[16]),32);
        vcdp->chgBus(c+4266,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[17]),32);
        vcdp->chgBus(c+4267,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[18]),32);
        vcdp->chgBus(c+4268,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[19]),32);
        vcdp->chgBus(c+4269,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[20]),32);
        vcdp->chgBus(c+4270,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[21]),32);
        vcdp->chgBus(c+4271,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[22]),32);
        vcdp->chgBus(c+4272,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[23]),32);
        vcdp->chgBus(c+4273,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[24]),32);
        vcdp->chgBus(c+4274,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[25]),32);
        vcdp->chgBus(c+4275,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[26]),32);
        vcdp->chgBus(c+4276,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[27]),32);
        vcdp->chgBus(c+4277,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[28]),32);
        vcdp->chgBus(c+4278,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[29]),32);
        vcdp->chgBus(c+4279,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[30]),32);
        vcdp->chgBus(c+4280,(vlSymsp->TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram[31]),32);
    }
}
