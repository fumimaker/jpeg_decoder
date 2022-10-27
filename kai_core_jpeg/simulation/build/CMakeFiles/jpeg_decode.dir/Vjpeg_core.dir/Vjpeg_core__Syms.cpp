// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vjpeg_core__Syms.h"
#include "Vjpeg_core.h"
#include "Vjpeg_core_jpeg_core.h"
#include "Vjpeg_core_jpeg_idct__U1.h"
#include "Vjpeg_core_jpeg_dqt.h"
#include "Vjpeg_core_jpeg_output.h"
#include "Vjpeg_core_jpeg_bitbuffer.h"
#include "Vjpeg_core_jpeg_mcu_proc.h"
#include "Vjpeg_core_jpeg_idct_ram__U1.h"
#include "Vjpeg_core_jpeg_idct_transpose__U1.h"
#include "Vjpeg_core_jpeg_output_y_ram.h"
#include "Vjpeg_core_jpeg_output_cx_ram.h"
#include "Vjpeg_core_jpeg_output_y_ram_ram_dp_512_9.h"
#include "Vjpeg_core_jpeg_output_cx_ram_ram_dp_256_8.h"
#include "Vjpeg_core_jpeg_idct_ram_dp.h"
#include "Vjpeg_core_jpeg_idct_transpose_ram.h"



// FUNCTIONS
Vjpeg_core__Syms::Vjpeg_core__Syms(Vjpeg_core* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__jpeg_core(Verilated::catName(topp->name(), "jpeg_core"))
    , TOP__jpeg_core__u_jpeg_bitbuffer(Verilated::catName(topp->name(), "jpeg_core.u_jpeg_bitbuffer"))
    , TOP__jpeg_core__u_jpeg_dqt(Verilated::catName(topp->name(), "jpeg_core.u_jpeg_dqt"))
    , TOP__jpeg_core__u_jpeg_idct(Verilated::catName(topp->name(), "jpeg_core.u_jpeg_idct"))
    , TOP__jpeg_core__u_jpeg_idct__u_input(Verilated::catName(topp->name(), "jpeg_core.u_jpeg_idct.u_input"))
    , TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0(Verilated::catName(topp->name(), "jpeg_core.u_jpeg_idct.u_input.u_ram0"))
    , TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1(Verilated::catName(topp->name(), "jpeg_core.u_jpeg_idct.u_input.u_ram1"))
    , TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2(Verilated::catName(topp->name(), "jpeg_core.u_jpeg_idct.u_input.u_ram2"))
    , TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3(Verilated::catName(topp->name(), "jpeg_core.u_jpeg_idct.u_input.u_ram3"))
    , TOP__jpeg_core__u_jpeg_idct__u_transpose(Verilated::catName(topp->name(), "jpeg_core.u_jpeg_idct.u_transpose"))
    , TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0(Verilated::catName(topp->name(), "jpeg_core.u_jpeg_idct.u_transpose.u_ram0"))
    , TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1(Verilated::catName(topp->name(), "jpeg_core.u_jpeg_idct.u_transpose.u_ram1"))
    , TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2(Verilated::catName(topp->name(), "jpeg_core.u_jpeg_idct.u_transpose.u_ram2"))
    , TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3(Verilated::catName(topp->name(), "jpeg_core.u_jpeg_idct.u_transpose.u_ram3"))
    , TOP__jpeg_core__u_jpeg_mcu_proc(Verilated::catName(topp->name(), "jpeg_core.u_jpeg_mcu_proc"))
    , TOP__jpeg_core__u_jpeg_output(Verilated::catName(topp->name(), "jpeg_core.u_jpeg_output"))
    , TOP__jpeg_core__u_jpeg_output__u_ram_cb(Verilated::catName(topp->name(), "jpeg_core.u_jpeg_output.u_ram_cb"))
    , TOP__jpeg_core__u_jpeg_output__u_ram_cb__u_ram(Verilated::catName(topp->name(), "jpeg_core.u_jpeg_output.u_ram_cb.u_ram"))
    , TOP__jpeg_core__u_jpeg_output__u_ram_cr(Verilated::catName(topp->name(), "jpeg_core.u_jpeg_output.u_ram_cr"))
    , TOP__jpeg_core__u_jpeg_output__u_ram_cr__u_ram(Verilated::catName(topp->name(), "jpeg_core.u_jpeg_output.u_ram_cr.u_ram"))
    , TOP__jpeg_core__u_jpeg_output__u_ram_y(Verilated::catName(topp->name(), "jpeg_core.u_jpeg_output.u_ram_y"))
    , TOP__jpeg_core__u_jpeg_output__u_ram_y__u_ram(Verilated::catName(topp->name(), "jpeg_core.u_jpeg_output.u_ram_y.u_ram"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->jpeg_core = &TOP__jpeg_core;
    TOPp->jpeg_core->u_jpeg_bitbuffer = &TOP__jpeg_core__u_jpeg_bitbuffer;
    TOPp->jpeg_core->u_jpeg_dqt = &TOP__jpeg_core__u_jpeg_dqt;
    TOPp->jpeg_core->u_jpeg_idct = &TOP__jpeg_core__u_jpeg_idct;
    TOPp->jpeg_core->u_jpeg_idct->u_input = &TOP__jpeg_core__u_jpeg_idct__u_input;
    TOPp->jpeg_core->u_jpeg_idct->u_input->u_ram0 = &TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0;
    TOPp->jpeg_core->u_jpeg_idct->u_input->u_ram1 = &TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1;
    TOPp->jpeg_core->u_jpeg_idct->u_input->u_ram2 = &TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2;
    TOPp->jpeg_core->u_jpeg_idct->u_input->u_ram3 = &TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3;
    TOPp->jpeg_core->u_jpeg_idct->u_transpose = &TOP__jpeg_core__u_jpeg_idct__u_transpose;
    TOPp->jpeg_core->u_jpeg_idct->u_transpose->u_ram0 = &TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0;
    TOPp->jpeg_core->u_jpeg_idct->u_transpose->u_ram1 = &TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1;
    TOPp->jpeg_core->u_jpeg_idct->u_transpose->u_ram2 = &TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2;
    TOPp->jpeg_core->u_jpeg_idct->u_transpose->u_ram3 = &TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3;
    TOPp->jpeg_core->u_jpeg_mcu_proc = &TOP__jpeg_core__u_jpeg_mcu_proc;
    TOPp->jpeg_core->u_jpeg_output = &TOP__jpeg_core__u_jpeg_output;
    TOPp->jpeg_core->u_jpeg_output->u_ram_cb = &TOP__jpeg_core__u_jpeg_output__u_ram_cb;
    TOPp->jpeg_core->u_jpeg_output->u_ram_cb->u_ram = &TOP__jpeg_core__u_jpeg_output__u_ram_cb__u_ram;
    TOPp->jpeg_core->u_jpeg_output->u_ram_cr = &TOP__jpeg_core__u_jpeg_output__u_ram_cr;
    TOPp->jpeg_core->u_jpeg_output->u_ram_cr->u_ram = &TOP__jpeg_core__u_jpeg_output__u_ram_cr__u_ram;
    TOPp->jpeg_core->u_jpeg_output->u_ram_y = &TOP__jpeg_core__u_jpeg_output__u_ram_y;
    TOPp->jpeg_core->u_jpeg_output->u_ram_y->u_ram = &TOP__jpeg_core__u_jpeg_output__u_ram_y__u_ram;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__jpeg_core.__Vconfigure(this, true);
    TOP__jpeg_core__u_jpeg_bitbuffer.__Vconfigure(this, true);
    TOP__jpeg_core__u_jpeg_dqt.__Vconfigure(this, true);
    TOP__jpeg_core__u_jpeg_idct.__Vconfigure(this, true);
    TOP__jpeg_core__u_jpeg_idct__u_input.__Vconfigure(this, true);
    TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0.__Vconfigure(this, true);
    TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1.__Vconfigure(this, false);
    TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2.__Vconfigure(this, false);
    TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3.__Vconfigure(this, false);
    TOP__jpeg_core__u_jpeg_idct__u_transpose.__Vconfigure(this, true);
    TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.__Vconfigure(this, true);
    TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.__Vconfigure(this, false);
    TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.__Vconfigure(this, false);
    TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.__Vconfigure(this, false);
    TOP__jpeg_core__u_jpeg_mcu_proc.__Vconfigure(this, true);
    TOP__jpeg_core__u_jpeg_output.__Vconfigure(this, true);
    TOP__jpeg_core__u_jpeg_output__u_ram_cb.__Vconfigure(this, true);
    TOP__jpeg_core__u_jpeg_output__u_ram_cb__u_ram.__Vconfigure(this, true);
    TOP__jpeg_core__u_jpeg_output__u_ram_cr.__Vconfigure(this, false);
    TOP__jpeg_core__u_jpeg_output__u_ram_cr__u_ram.__Vconfigure(this, false);
    TOP__jpeg_core__u_jpeg_output__u_ram_y.__Vconfigure(this, true);
    TOP__jpeg_core__u_jpeg_output__u_ram_y__u_ram.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_jpeg_core__u_jpeg_idct__u_input__u_ram0.configure(this, name(), "jpeg_core.u_jpeg_idct.u_input.u_ram0", "u_ram0", VerilatedScope::SCOPE_OTHER);
    __Vscope_jpeg_core__u_jpeg_idct__u_input__u_ram1.configure(this, name(), "jpeg_core.u_jpeg_idct.u_input.u_ram1", "u_ram1", VerilatedScope::SCOPE_OTHER);
    __Vscope_jpeg_core__u_jpeg_idct__u_input__u_ram2.configure(this, name(), "jpeg_core.u_jpeg_idct.u_input.u_ram2", "u_ram2", VerilatedScope::SCOPE_OTHER);
    __Vscope_jpeg_core__u_jpeg_idct__u_input__u_ram3.configure(this, name(), "jpeg_core.u_jpeg_idct.u_input.u_ram3", "u_ram3", VerilatedScope::SCOPE_OTHER);
    __Vscope_jpeg_core__u_jpeg_idct__u_transpose__u_ram0.configure(this, name(), "jpeg_core.u_jpeg_idct.u_transpose.u_ram0", "u_ram0", VerilatedScope::SCOPE_OTHER);
    __Vscope_jpeg_core__u_jpeg_idct__u_transpose__u_ram1.configure(this, name(), "jpeg_core.u_jpeg_idct.u_transpose.u_ram1", "u_ram1", VerilatedScope::SCOPE_OTHER);
    __Vscope_jpeg_core__u_jpeg_idct__u_transpose__u_ram2.configure(this, name(), "jpeg_core.u_jpeg_idct.u_transpose.u_ram2", "u_ram2", VerilatedScope::SCOPE_OTHER);
    __Vscope_jpeg_core__u_jpeg_idct__u_transpose__u_ram3.configure(this, name(), "jpeg_core.u_jpeg_idct.u_transpose.u_ram3", "u_ram3", VerilatedScope::SCOPE_OTHER);
    __Vscope_jpeg_core__u_jpeg_output__u_ram_cb__u_ram.configure(this, name(), "jpeg_core.u_jpeg_output.u_ram_cb.u_ram", "u_ram", VerilatedScope::SCOPE_OTHER);
    __Vscope_jpeg_core__u_jpeg_output__u_ram_cr__u_ram.configure(this, name(), "jpeg_core.u_jpeg_output.u_ram_cr.u_ram", "u_ram", VerilatedScope::SCOPE_OTHER);
    __Vscope_jpeg_core__u_jpeg_output__u_ram_y__u_ram.configure(this, name(), "jpeg_core.u_jpeg_output.u_ram_y.u_ram", "u_ram", VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_jpeg_core__u_jpeg_idct__u_input__u_ram0.varInsert(__Vfinal,"ram", &(TOP__jpeg_core__u_jpeg_idct__u_input__u_ram0.ram), VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,63,0);
        __Vscope_jpeg_core__u_jpeg_idct__u_input__u_ram1.varInsert(__Vfinal,"ram", &(TOP__jpeg_core__u_jpeg_idct__u_input__u_ram1.ram), VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,63,0);
        __Vscope_jpeg_core__u_jpeg_idct__u_input__u_ram2.varInsert(__Vfinal,"ram", &(TOP__jpeg_core__u_jpeg_idct__u_input__u_ram2.ram), VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,63,0);
        __Vscope_jpeg_core__u_jpeg_idct__u_input__u_ram3.varInsert(__Vfinal,"ram", &(TOP__jpeg_core__u_jpeg_idct__u_input__u_ram3.ram), VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,2 ,15,0 ,63,0);
        __Vscope_jpeg_core__u_jpeg_idct__u_transpose__u_ram0.varInsert(__Vfinal,"ram", &(TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram0.ram), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,31,0);
        __Vscope_jpeg_core__u_jpeg_idct__u_transpose__u_ram1.varInsert(__Vfinal,"ram", &(TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram1.ram), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,31,0);
        __Vscope_jpeg_core__u_jpeg_idct__u_transpose__u_ram2.varInsert(__Vfinal,"ram", &(TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram2.ram), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,31,0);
        __Vscope_jpeg_core__u_jpeg_idct__u_transpose__u_ram3.varInsert(__Vfinal,"ram", &(TOP__jpeg_core__u_jpeg_idct__u_transpose__u_ram3.ram), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,31,0);
        __Vscope_jpeg_core__u_jpeg_output__u_ram_cb__u_ram.varInsert(__Vfinal,"ram", &(TOP__jpeg_core__u_jpeg_output__u_ram_cb__u_ram.ram), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,255,0);
        __Vscope_jpeg_core__u_jpeg_output__u_ram_cr__u_ram.varInsert(__Vfinal,"ram", &(TOP__jpeg_core__u_jpeg_output__u_ram_cr__u_ram.ram), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,255,0);
        __Vscope_jpeg_core__u_jpeg_output__u_ram_y__u_ram.varInsert(__Vfinal,"ram", &(TOP__jpeg_core__u_jpeg_output__u_ram_y__u_ram.ram), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,511,0);
    }
}
