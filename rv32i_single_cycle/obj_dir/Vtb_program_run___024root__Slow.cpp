// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_program_run.h for the primary calling header

#include "Vtb_program_run__pch.h"
#include "Vtb_program_run__Syms.h"
#include "Vtb_program_run___024root.h"

void Vtb_program_run___024root___ctor_var_reset(Vtb_program_run___024root* vlSelf);

Vtb_program_run___024root::Vtb_program_run___024root(Vtb_program_run__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_program_run___024root___ctor_var_reset(this);
}

void Vtb_program_run___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_program_run___024root::~Vtb_program_run___024root() {
}
