// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_program_run.h for the primary calling header

#ifndef VERILATED_VTB_PROGRAM_RUN___024ROOT_H_
#define VERILATED_VTB_PROGRAM_RUN___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_program_run__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_program_run___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_program_run__DOT__clk;
    CData/*0:0*/ tb_program_run__DOT__rst;
    CData/*0:0*/ tb_program_run__DOT__dut__DOT__control_pc_en;
    CData/*0:0*/ tb_program_run__DOT__dut__DOT__control_regfile_we;
    CData/*0:0*/ tb_program_run__DOT__dut__DOT__control_data_mem_we;
    CData/*0:0*/ tb_program_run__DOT__dut__DOT__branch_taken;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_program_run__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_program_run__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm;
    IData/*31:0*/ tb_program_run__DOT__dut__DOT__control_imm_i_type;
    IData/*31:0*/ tb_program_run__DOT__dut__DOT__next_pc;
    IData/*31:0*/ tb_program_run__DOT__dut__DOT__pc_current;
    IData/*31:0*/ tb_program_run__DOT__dut__DOT__inst_out;
    IData/*31:0*/ tb_program_run__DOT__dut__DOT___alu_src_a;
    IData/*31:0*/ tb_program_run__DOT__dut__DOT___alu_src_b;
    IData/*31:0*/ tb_program_run__DOT__dut__DOT___data_mem_wr;
    IData/*31:0*/ tb_program_run__DOT__dut__DOT__regfile_rd1;
    IData/*31:0*/ tb_program_run__DOT__dut__DOT__regfile_rd2;
    IData/*31:0*/ tb_program_run__DOT__dut__DOT__data_mem_rd;
    IData/*31:0*/ tb_program_run__DOT__dut__DOT__regfile_wd3;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ tb_program_run__DOT__dut__DOT___alu__DOT__result;
    VlUnpacked<IData/*31:0*/, 1024> tb_program_run__DOT__dut__DOT__mem_inst__DOT__mem_arr;
    VlUnpacked<IData/*31:0*/, 32> tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr;
    VlUnpacked<IData/*31:0*/, 1024> tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr;
    std::string tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name;
    VlTriggerScheduler __VtrigSched_h9ecd40ab__0;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_program_run__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_program_run___024root(Vtb_program_run__Syms* symsp, const char* v__name);
    ~Vtb_program_run___024root();
    VL_UNCOPYABLE(Vtb_program_run___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
