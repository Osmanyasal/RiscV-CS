// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_program_run__pch.h"

//============================================================
// Constructors

Vtb_program_run::Vtb_program_run(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_program_run__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_program_run::Vtb_program_run(const char* _vcname__)
    : Vtb_program_run(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_program_run::~Vtb_program_run() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_program_run___024root___eval_debug_assertions(Vtb_program_run___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_program_run___024root___eval_static(Vtb_program_run___024root* vlSelf);
void Vtb_program_run___024root___eval_initial(Vtb_program_run___024root* vlSelf);
void Vtb_program_run___024root___eval_settle(Vtb_program_run___024root* vlSelf);
void Vtb_program_run___024root___eval(Vtb_program_run___024root* vlSelf);

void Vtb_program_run::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_program_run::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_program_run___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_program_run___024root___eval_static(&(vlSymsp->TOP));
        Vtb_program_run___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_program_run___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_program_run___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_program_run::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_program_run::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_program_run::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_program_run___024root___eval_final(Vtb_program_run___024root* vlSelf);

VL_ATTR_COLD void Vtb_program_run::final() {
    Vtb_program_run___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_program_run::hierName() const { return vlSymsp->name(); }
const char* Vtb_program_run::modelName() const { return "Vtb_program_run"; }
unsigned Vtb_program_run::threads() const { return 1; }
void Vtb_program_run::prepareClone() const { contextp()->prepareClone(); }
void Vtb_program_run::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtb_program_run::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_program_run::trace()' called on model that was Verilated without --trace option");
}
