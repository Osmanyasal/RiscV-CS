// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_program_run.h for the primary calling header

#include "Vtb_program_run__pch.h"
#include "Vtb_program_run___024root.h"

VL_ATTR_COLD void Vtb_program_run___024root___eval_initial__TOP(Vtb_program_run___024root* vlSelf);
VlCoroutine Vtb_program_run___024root___eval_initial__TOP__Vtiming__0(Vtb_program_run___024root* vlSelf);
VlCoroutine Vtb_program_run___024root___eval_initial__TOP__Vtiming__1(Vtb_program_run___024root* vlSelf);

void Vtb_program_run___024root___eval_initial(Vtb_program_run___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_program_run__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_program_run___024root___eval_initial\n"); );
    // Body
    Vtb_program_run___024root___eval_initial__TOP(vlSelf);
    Vtb_program_run___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_program_run___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_program_run__DOT__clk__0 
        = vlSelf->tb_program_run__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_program_run__DOT__rst__0 
        = vlSelf->tb_program_run__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vtb_program_run___024root___eval_initial__TOP__Vtiming__0(Vtb_program_run___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_program_run__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_program_run___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ tb_program_run__DOT__fail_counter;
    tb_program_run__DOT__fail_counter = 0;
    IData/*31:0*/ tb_program_run__DOT__expected_prev;
    tb_program_run__DOT__expected_prev = 0;
    IData/*31:0*/ tb_program_run__DOT__expected_curr;
    tb_program_run__DOT__expected_curr = 0;
    IData/*31:0*/ tb_program_run__DOT__expected_next;
    tb_program_run__DOT__expected_next = 0;
    IData/*31:0*/ tb_program_run__DOT____Vrepeat0;
    tb_program_run__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_program_run__DOT__clear_runtime_state__0__unnamedblk1__DOT__unnamedblk2_2__DOT__i;
    __Vtask_tb_program_run__DOT__clear_runtime_state__0__unnamedblk1__DOT__unnamedblk2_2__DOT__i = 0;
    // Body
    vlSelf->tb_program_run__DOT__clk = 0U;
    vlSelf->tb_program_run__DOT__rst = 1U;
    tb_program_run__DOT__fail_counter = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0U] = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[1U] = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[2U] = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[3U] = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[4U] = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[5U] = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[6U] = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[7U] = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[8U] = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[9U] = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0xaU] = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0xbU] = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0xcU] = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0xdU] = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0xeU] = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0xfU] = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x10U] = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x11U] = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x12U] = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x13U] = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x14U] = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x15U] = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x16U] = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x17U] = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x18U] = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x19U] = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x1aU] = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x1bU] = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x1cU] = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x1dU] = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x1eU] = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x1fU] = 0U;
    __Vtask_tb_program_run__DOT__clear_runtime_state__0__unnamedblk1__DOT__unnamedblk2_2__DOT__i = 0U;
    while (VL_GTES_III(32, 0x3ffU, __Vtask_tb_program_run__DOT__clear_runtime_state__0__unnamedblk1__DOT__unnamedblk2_2__DOT__i)) {
        vlSelf->tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr[(0x3ffU 
                                                                       & __Vtask_tb_program_run__DOT__clear_runtime_state__0__unnamedblk1__DOT__unnamedblk2_2__DOT__i)] = 0U;
        __Vtask_tb_program_run__DOT__clear_runtime_state__0__unnamedblk1__DOT__unnamedblk2_2__DOT__i 
            = ((IData)(1U) + __Vtask_tb_program_run__DOT__clear_runtime_state__0__unnamedblk1__DOT__unnamedblk2_2__DOT__i);
    }
    vlSelf->tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr[0U] = 0x14U;
    co_await vlSelf->__VtrigSched_h9ecd40ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_program_run.clk)", 
                                                       "rv32i_single_cycle.srcs/sim_1/new/tb_program_run.sv", 
                                                       36);
    vlSelf->tb_program_run__DOT__rst = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "rv32i_single_cycle.srcs/sim_1/new/tb_program_run.sv", 
                                       38);
    tb_program_run__DOT____Vrepeat0 = 0xd4U;
    while (VL_LTS_III(32, 0U, tb_program_run__DOT____Vrepeat0)) {
        co_await vlSelf->__VtrigSched_h9ecd40ab__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_program_run.clk)", 
                                                           "rv32i_single_cycle.srcs/sim_1/new/tb_program_run.sv", 
                                                           41);
        co_await vlSelf->__VdlySched.delay(0x3e8ULL, 
                                           nullptr, 
                                           "rv32i_single_cycle.srcs/sim_1/new/tb_program_run.sv", 
                                           42);
        if ((0x40U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
            if ((0x20U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                if ((0x10U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                    vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                        std::string{"UNKNOWN"};
                    vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm = 0U;
                } else if ((8U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                    if ((4U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                        if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                            if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                                vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                                    std::string{"J-TYPE (JAL)"};
                                vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm 
                                    = (((- (IData)(
                                                   (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                    >> 0x1fU))) 
                                        << 0x15U) | 
                                       ((0x100000U 
                                         & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                            >> 0xbU)) 
                                        | ((0xff000U 
                                            & vlSelf->tb_program_run__DOT__dut__DOT__inst_out) 
                                           | ((0x800U 
                                               & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                  >> 9U)) 
                                              | (0x7feU 
                                                 & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                    >> 0x14U))))));
                            } else {
                                vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                                    std::string{"UNKNOWN"};
                                vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm = 0U;
                            }
                        } else {
                            vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                                std::string{"UNKNOWN"};
                            vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm = 0U;
                        }
                    } else {
                        vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                            std::string{"UNKNOWN"};
                        vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm = 0U;
                    }
                } else if ((4U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                    if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                        if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                            vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                                std::string{"I-TYPE (JALR)"};
                            vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm 
                                = vlSelf->tb_program_run__DOT__dut__DOT__control_imm_i_type;
                        } else {
                            vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                                std::string{"UNKNOWN"};
                            vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm = 0U;
                        }
                    } else {
                        vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                            std::string{"UNKNOWN"};
                        vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm = 0U;
                    }
                } else if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                    if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                        vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                            std::string{"B-TYPE (BRANCH)"};
                        vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm 
                            = (((- (IData)((vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                     >> 7U)))));
                    } else {
                        vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                            std::string{"UNKNOWN"};
                        vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm = 0U;
                    }
                } else {
                    vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                        std::string{"UNKNOWN"};
                    vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm = 0U;
                }
            } else {
                vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                    std::string{"UNKNOWN"};
                vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm = 0U;
            }
        } else if ((0x20U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
            if ((0x10U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                if ((8U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                    vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                        std::string{"UNKNOWN"};
                    vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm = 0U;
                } else if ((4U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                    if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                        if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                            vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                                std::string{"U-TYPE (LUI)"};
                            vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm 
                                = (0xfffff000U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out);
                        } else {
                            vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                                std::string{"UNKNOWN"};
                            vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm = 0U;
                        }
                    } else {
                        vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                            std::string{"UNKNOWN"};
                        vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm = 0U;
                    }
                } else if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                    if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                        vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                            std::string{"R-TYPE"};
                        vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm = 0U;
                    } else {
                        vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                            std::string{"UNKNOWN"};
                        vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm = 0U;
                    }
                } else {
                    vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                        std::string{"UNKNOWN"};
                    vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm = 0U;
                }
            } else if ((8U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                    std::string{"UNKNOWN"};
                vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm = 0U;
            } else if ((4U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                    std::string{"UNKNOWN"};
                vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm = 0U;
            } else if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                    vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                        std::string{"S-TYPE (STORE)"};
                    vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm 
                        = (((- (IData)((vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                        >> 0x1fU))) 
                            << 0xcU) | ((0xfe0U & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                            >> 7U))));
                } else {
                    vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                        std::string{"UNKNOWN"};
                    vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm = 0U;
                }
            } else {
                vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                    std::string{"UNKNOWN"};
                vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm = 0U;
            }
        } else if ((0x10U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
            if ((8U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                    std::string{"UNKNOWN"};
                vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm = 0U;
            } else if ((4U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                    if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                        vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                            std::string{"U-TYPE (AUIPC)"};
                        vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm 
                            = (0xfffff000U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out);
                    } else {
                        vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                            std::string{"UNKNOWN"};
                        vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm = 0U;
                    }
                } else {
                    vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                        std::string{"UNKNOWN"};
                    vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm = 0U;
                }
            } else if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                    vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                        std::string{"I-TYPE (OP-IMM)"};
                    vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm 
                        = vlSelf->tb_program_run__DOT__dut__DOT__control_imm_i_type;
                } else {
                    vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                        std::string{"UNKNOWN"};
                    vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm = 0U;
                }
            } else {
                vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                    std::string{"UNKNOWN"};
                vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm = 0U;
            }
        } else if ((8U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
            vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                std::string{"UNKNOWN"};
            vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm = 0U;
        } else if ((4U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
            vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                std::string{"UNKNOWN"};
            vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm = 0U;
        } else if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
            if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                    std::string{"I-TYPE (LOAD)"};
                vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm 
                    = vlSelf->tb_program_run__DOT__dut__DOT__control_imm_i_type;
            } else {
                vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                    std::string{"UNKNOWN"};
                vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm = 0U;
            }
        } else {
            vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name = 
                std::string{"UNKNOWN"};
            vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm = 0U;
        }
        VL_WRITEF("\n==================================================\n      RISC-V CPU DEBUG DASHBOARD | %@\n==================================================\n\n[FETCH PHASE]\n\tPC Current    : %0#\n\tRaw Hex       : 0x%x\n",
                  -1,&(vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__inst_name),
                  32,vlSelf->tb_program_run__DOT__dut__DOT__pc_current,
                  32,vlSelf->tb_program_run__DOT__dut__DOT__inst_out);
        if (VL_UNLIKELY((0x33U == (0x7fU & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)))) {
            VL_WRITEF("\tBinary Split  : %b_%b_%b_%b_%b_%b\n\tField Map     : [f7] [rs2] [rs1] [f3] [rd] [opcode]\n",
                      7,(vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                         >> 0x19U),5,(0x1fU & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                               >> 0x14U)),
                      5,(0x1fU & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                  >> 0xfU)),3,(7U & 
                                               (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                >> 0xcU)),
                      5,(0x1fU & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                  >> 7U)),7,(0x7fU 
                                             & vlSelf->tb_program_run__DOT__dut__DOT__inst_out));
        } else if (VL_UNLIKELY((0x23U == (0x7fU & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)))) {
            VL_WRITEF("\tBinary Split  : %b_%b_%b_%b_%b_%b\n\tField Map     : [imm11:5] [rs2] [rs1] [f3] [imm4:0] [opcode]\n",
                      7,(vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                         >> 0x19U),5,(0x1fU & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                               >> 0x14U)),
                      5,(0x1fU & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                  >> 0xfU)),3,(7U & 
                                               (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                >> 0xcU)),
                      5,(0x1fU & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                  >> 7U)),7,(0x7fU 
                                             & vlSelf->tb_program_run__DOT__dut__DOT__inst_out));
        } else if ((0x63U == (0x7fU & vlSelf->tb_program_run__DOT__dut__DOT__inst_out))) {
            VL_WRITEF("\tBinary Split  : %b_%b_%b_%b_%b_%b_%b_%b\n\tField Map     : [imm12] [imm10:5] [rs2] [rs1] [f3] [imm4:1] [imm11] [opcode]\n",
                      1,(vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                         >> 0x1fU),6,(0x3fU & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                               >> 0x19U)),
                      5,(0x1fU & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                  >> 0x14U)),5,(0x1fU 
                                                & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                   >> 0xfU)),
                      3,(7U & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                               >> 0xcU)),4,(0xfU & 
                                            (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                             >> 8U)),
                      1,(1U & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                               >> 7U)),7,(0x7fU & vlSelf->tb_program_run__DOT__dut__DOT__inst_out));
        } else {
            VL_WRITEF("\tBinary Split  : %b_%b_%b_%b_%b\n\tField Map     : [imm] [rs1] [f3] [rd] [opcode]\n",
                      12,(vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                          >> 0x14U),5,(0x1fU & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                >> 0xfU)),
                      3,(7U & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                               >> 0xcU)),5,(0x1fU & 
                                            (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                             >> 7U)),
                      7,(0x7fU & vlSelf->tb_program_run__DOT__dut__DOT__inst_out));
        }
        VL_WRITEF("\n[DECODE PHASE]\n\tReg Access    : RD1(x%0#)=0x%x, RD2(x%0#)=0x%x\n\tImm Decoded   : %0d (0x%x)\n\n[EXECUTE PHASE]\n\tALU Inputs    : A=0x%x, B=0x%x\n\tALU Result    : (%0d) 0x%x\n\n[MEMORY/WB PHASE]\n",
                  5,(0x1fU & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                              >> 0xfU)),32,vlSelf->tb_program_run__DOT__dut__DOT__regfile_rd1,
                  5,(0x1fU & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                              >> 0x14U)),32,vlSelf->tb_program_run__DOT__dut__DOT__regfile_rd2,
                  32,vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm,
                  32,vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm,
                  32,vlSelf->tb_program_run__DOT__dut__DOT___alu_src_a,
                  32,vlSelf->tb_program_run__DOT__dut__DOT___alu_src_b,
                  32,(IData)(vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result),
                  32,(IData)(vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result));
        if (VL_UNLIKELY((3U == (0x7fU & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)))) {
            VL_WRITEF("\tAction        : MEM_READ  [%0d] -> 0x%x\n",
                      32,(IData)(vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result),
                      32,vlSelf->tb_program_run__DOT__dut__DOT__data_mem_rd);
            if (VL_UNLIKELY(vlSelf->tb_program_run__DOT__dut__DOT__control_regfile_we)) {
                VL_WRITEF("\tAction        : WRITE REG x%0d <= 0x%x\n",
                          5,(0x1fU & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                      >> 7U)),32,vlSelf->tb_program_run__DOT__dut__DOT__data_mem_rd);
            }
        } else if (VL_UNLIKELY(((0x23U == (0x7fU & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) 
                                & (IData)(vlSelf->tb_program_run__DOT__dut__DOT__control_data_mem_we)))) {
            VL_WRITEF("\tAction        : MEM_WRITE [%0d] <= 0x%x\n",
                      32,(IData)(vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result),
                      32,vlSelf->tb_program_run__DOT__dut__DOT___data_mem_wr);
        } else if (VL_UNLIKELY((0x63U == (0x7fU & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)))) {
            VL_WRITEF("\tAction        : BRANCH Target = %0d (PC + %0d)\n",
                      32,(vlSelf->tb_program_run__DOT__dut__DOT__pc_current 
                          + vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm),
                      32,vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm);
        } else if (VL_UNLIKELY(((0x6fU == (0x7fU & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) 
                                | (0x67U == (0x7fU 
                                             & vlSelf->tb_program_run__DOT__dut__DOT__inst_out))))) {
            VL_WRITEF("\tAction        : JUMP Target = %0d, Link x%0d <= %0d\n",
                      32,(((0x6fU == (0x7fU & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) 
                           | (0x67U == (0x7fU & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)))
                           ? ((0x67U == (0x7fU & vlSelf->tb_program_run__DOT__dut__DOT__inst_out))
                               ? (0xfffffffeU & (vlSelf->tb_program_run__DOT__dut__DOT__regfile_rd1 
                                                 + vlSelf->tb_program_run__DOT__dut__DOT__control_imm_i_type))
                               : (vlSelf->tb_program_run__DOT__dut__DOT__pc_current 
                                  + (((- (IData)((vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                  >> 0x1fU))) 
                                      << 0x15U) | (
                                                   (0x100000U 
                                                    & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                       >> 0xbU)) 
                                                   | ((0xff000U 
                                                       & vlSelf->tb_program_run__DOT__dut__DOT__inst_out) 
                                                      | ((0x800U 
                                                          & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                               >> 0x14U))))))))
                           : ((IData)(vlSelf->tb_program_run__DOT__dut__DOT__branch_taken)
                               ? (vlSelf->tb_program_run__DOT__dut__DOT__pc_current 
                                  + (((- (IData)((vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                  >> 0x1fU))) 
                                      << 0xcU) | ((0x800U 
                                                   & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                           >> 7U))))))
                               : ((IData)(1U) + vlSelf->tb_program_run__DOT__dut__DOT__pc_current))),
                      5,(0x1fU & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                  >> 7U)),32,((IData)(1U) 
                                              + vlSelf->tb_program_run__DOT__dut__DOT__pc_current));
        } else if (vlSelf->tb_program_run__DOT__dut__DOT__control_regfile_we) {
            VL_WRITEF("\tAction        : ALU_RESULT 0x%x -> x%0d\n",
                      32,(IData)(vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result),
                      5,(0x1fU & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                  >> 7U)));
        } else {
            VL_WRITEF("\tAction        : NO WRITEBACK\n");
        }
        VL_WRITEF("==================================================\n\n");
        tb_program_run__DOT____Vrepeat0 = (tb_program_run__DOT____Vrepeat0 
                                           - (IData)(1U));
    }
    tb_program_run__DOT__expected_prev = 0U;
    tb_program_run__DOT__expected_curr = 1U;
    tb_program_run__DOT__expected_next = (tb_program_run__DOT__expected_prev 
                                          + tb_program_run__DOT__expected_curr);
    tb_program_run__DOT__expected_prev = tb_program_run__DOT__expected_curr;
    tb_program_run__DOT__expected_curr = tb_program_run__DOT__expected_next;
    tb_program_run__DOT__expected_next = (tb_program_run__DOT__expected_prev 
                                          + tb_program_run__DOT__expected_curr);
    tb_program_run__DOT__expected_prev = tb_program_run__DOT__expected_curr;
    tb_program_run__DOT__expected_curr = tb_program_run__DOT__expected_next;
    tb_program_run__DOT__expected_next = (tb_program_run__DOT__expected_prev 
                                          + tb_program_run__DOT__expected_curr);
    tb_program_run__DOT__expected_prev = tb_program_run__DOT__expected_curr;
    tb_program_run__DOT__expected_curr = tb_program_run__DOT__expected_next;
    tb_program_run__DOT__expected_next = (tb_program_run__DOT__expected_prev 
                                          + tb_program_run__DOT__expected_curr);
    tb_program_run__DOT__expected_prev = tb_program_run__DOT__expected_curr;
    tb_program_run__DOT__expected_curr = tb_program_run__DOT__expected_next;
    tb_program_run__DOT__expected_next = (tb_program_run__DOT__expected_prev 
                                          + tb_program_run__DOT__expected_curr);
    tb_program_run__DOT__expected_prev = tb_program_run__DOT__expected_curr;
    tb_program_run__DOT__expected_curr = tb_program_run__DOT__expected_next;
    tb_program_run__DOT__expected_next = (tb_program_run__DOT__expected_prev 
                                          + tb_program_run__DOT__expected_curr);
    tb_program_run__DOT__expected_prev = tb_program_run__DOT__expected_curr;
    tb_program_run__DOT__expected_curr = tb_program_run__DOT__expected_next;
    tb_program_run__DOT__expected_next = (tb_program_run__DOT__expected_prev 
                                          + tb_program_run__DOT__expected_curr);
    tb_program_run__DOT__expected_prev = tb_program_run__DOT__expected_curr;
    tb_program_run__DOT__expected_curr = tb_program_run__DOT__expected_next;
    tb_program_run__DOT__expected_next = (tb_program_run__DOT__expected_prev 
                                          + tb_program_run__DOT__expected_curr);
    tb_program_run__DOT__expected_prev = tb_program_run__DOT__expected_curr;
    tb_program_run__DOT__expected_curr = tb_program_run__DOT__expected_next;
    tb_program_run__DOT__expected_next = (tb_program_run__DOT__expected_prev 
                                          + tb_program_run__DOT__expected_curr);
    tb_program_run__DOT__expected_prev = tb_program_run__DOT__expected_curr;
    tb_program_run__DOT__expected_curr = tb_program_run__DOT__expected_next;
    tb_program_run__DOT__expected_next = (tb_program_run__DOT__expected_prev 
                                          + tb_program_run__DOT__expected_curr);
    tb_program_run__DOT__expected_prev = tb_program_run__DOT__expected_curr;
    tb_program_run__DOT__expected_curr = tb_program_run__DOT__expected_next;
    tb_program_run__DOT__expected_next = (tb_program_run__DOT__expected_prev 
                                          + tb_program_run__DOT__expected_curr);
    tb_program_run__DOT__expected_prev = tb_program_run__DOT__expected_curr;
    tb_program_run__DOT__expected_curr = tb_program_run__DOT__expected_next;
    tb_program_run__DOT__expected_next = (tb_program_run__DOT__expected_prev 
                                          + tb_program_run__DOT__expected_curr);
    tb_program_run__DOT__expected_prev = tb_program_run__DOT__expected_curr;
    tb_program_run__DOT__expected_curr = tb_program_run__DOT__expected_next;
    tb_program_run__DOT__expected_next = (tb_program_run__DOT__expected_prev 
                                          + tb_program_run__DOT__expected_curr);
    tb_program_run__DOT__expected_prev = tb_program_run__DOT__expected_curr;
    tb_program_run__DOT__expected_curr = tb_program_run__DOT__expected_next;
    tb_program_run__DOT__expected_next = (tb_program_run__DOT__expected_prev 
                                          + tb_program_run__DOT__expected_curr);
    tb_program_run__DOT__expected_prev = tb_program_run__DOT__expected_curr;
    tb_program_run__DOT__expected_curr = tb_program_run__DOT__expected_next;
    tb_program_run__DOT__expected_next = (tb_program_run__DOT__expected_prev 
                                          + tb_program_run__DOT__expected_curr);
    tb_program_run__DOT__expected_prev = tb_program_run__DOT__expected_curr;
    tb_program_run__DOT__expected_curr = tb_program_run__DOT__expected_next;
    tb_program_run__DOT__expected_next = (tb_program_run__DOT__expected_prev 
                                          + tb_program_run__DOT__expected_curr);
    tb_program_run__DOT__expected_prev = tb_program_run__DOT__expected_curr;
    tb_program_run__DOT__expected_curr = tb_program_run__DOT__expected_next;
    tb_program_run__DOT__expected_next = (tb_program_run__DOT__expected_prev 
                                          + tb_program_run__DOT__expected_curr);
    tb_program_run__DOT__expected_prev = tb_program_run__DOT__expected_curr;
    tb_program_run__DOT__expected_curr = tb_program_run__DOT__expected_next;
    tb_program_run__DOT__expected_next = (tb_program_run__DOT__expected_prev 
                                          + tb_program_run__DOT__expected_curr);
    tb_program_run__DOT__expected_prev = tb_program_run__DOT__expected_curr;
    tb_program_run__DOT__expected_curr = tb_program_run__DOT__expected_next;
    tb_program_run__DOT__expected_next = (tb_program_run__DOT__expected_prev 
                                          + tb_program_run__DOT__expected_curr);
    tb_program_run__DOT__expected_prev = tb_program_run__DOT__expected_curr;
    tb_program_run__DOT__expected_curr = tb_program_run__DOT__expected_next;
    tb_program_run__DOT__expected_next = (tb_program_run__DOT__expected_prev 
                                          + tb_program_run__DOT__expected_curr);
    tb_program_run__DOT__expected_prev = tb_program_run__DOT__expected_curr;
    tb_program_run__DOT__expected_curr = tb_program_run__DOT__expected_next;
    VL_WRITEF("Generated Fibonacci sequence:\nmem[32] = %0#\nmem[33] = %0#\nmem[34] = %0#\nmem[35] = %0#\nmem[36] = %0#\nmem[37] = %0#\nmem[38] = %0#\nmem[39] = %0#\nmem[40] = %0#\nmem[41] = %0#\nmem[42] = %0#\nmem[43] = %0#\nmem[44] = %0#\nmem[45] = %0#\nmem[46] = %0#\nmem[47] = %0#\nmem[48] = %0#\nmem[49] = %0#\nmem[50] = %0#\nmem[51] = %0#\n",
              32,vlSelf->tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr
              [0x20U],32,vlSelf->tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr
              [0x21U],32,vlSelf->tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr
              [0x22U],32,vlSelf->tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr
              [0x23U],32,vlSelf->tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr
              [0x24U],32,vlSelf->tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr
              [0x25U],32,vlSelf->tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr
              [0x26U],32,vlSelf->tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr
              [0x27U],32,vlSelf->tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr
              [0x28U],32,vlSelf->tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr
              [0x29U],32,vlSelf->tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr
              [0x2aU],32,vlSelf->tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr
              [0x2bU],32,vlSelf->tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr
              [0x2cU],32,vlSelf->tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr
              [0x2dU],32,vlSelf->tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr
              [0x2eU],32,vlSelf->tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr
              [0x2fU],32,vlSelf->tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr
              [0x30U],32,vlSelf->tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr
              [0x31U],32,vlSelf->tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr
              [0x32U],32,vlSelf->tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr
              [0x33U]);
    co_await vlSelf->__VtrigSched_h9ecd40ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_program_run.clk)", 
                                                       "rv32i_single_cycle.srcs/sim_1/new/tb_program_run.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h9ecd40ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_program_run.clk)", 
                                                       "rv32i_single_cycle.srcs/sim_1/new/tb_program_run.sv", 
                                                       71);
    co_await vlSelf->__VtrigSched_h9ecd40ab__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_program_run.clk)", 
                                                       "rv32i_single_cycle.srcs/sim_1/new/tb_program_run.sv", 
                                                       71);
    if ((0U == tb_program_run__DOT__fail_counter)) {
        VL_WRITEF("PASS: Program completed successfully and entered self-loop at PC=%0#\n",
                  32,vlSelf->tb_program_run__DOT__dut__DOT__pc_current);
    } else {
        VL_WRITEF("FAIL: Program run completed with %0# errors\n",
                  32,tb_program_run__DOT__fail_counter);
    }
    VL_FINISH_MT("rv32i_single_cycle.srcs/sim_1/new/tb_program_run.sv", 80, "");
}

VL_INLINE_OPT VlCoroutine Vtb_program_run___024root___eval_initial__TOP__Vtiming__1(Vtb_program_run___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_program_run__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_program_run___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "rv32i_single_cycle.srcs/sim_1/new/tb_program_run.sv", 
                                           83);
        vlSelf->tb_program_run__DOT__clk = (1U & (~ (IData)(vlSelf->tb_program_run__DOT__clk)));
    }
}

void Vtb_program_run___024root___eval_act(Vtb_program_run___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_program_run__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_program_run___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtb_program_run___024root___nba_sequent__TOP__0(Vtb_program_run___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_program_run__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_program_run___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr__v0;
    __Vdlyvdim0__tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr__v0;
    __Vdlyvval__tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr__v0;
    __Vdlyvset__tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr__v0 = 0;
    // Body
    __Vdlyvset__tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr__v0 = 0U;
    if (vlSelf->tb_program_run__DOT__dut__DOT__control_data_mem_we) {
        __Vdlyvval__tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr__v0 
            = vlSelf->tb_program_run__DOT__dut__DOT___data_mem_wr;
        __Vdlyvset__tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr__v0 = 1U;
        __Vdlyvdim0__tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr__v0 
            = (0x3ffU & (IData)(vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result));
    }
    if (__Vdlyvset__tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr__v0) {
        vlSelf->tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr[__Vdlyvdim0__tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr__v0] 
            = __Vdlyvval__tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr__v0;
    }
}

VL_INLINE_OPT void Vtb_program_run___024root___nba_sequent__TOP__1(Vtb_program_run___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_program_run__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_program_run___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*3:0*/ tb_program_run__DOT__dut__DOT__control_alu;
    tb_program_run__DOT__dut__DOT__control_alu = 0;
    QData/*32:0*/ tb_program_run__DOT__dut__DOT___alu__DOT__temp_add_sub;
    tb_program_run__DOT__dut__DOT___alu__DOT__temp_add_sub = 0;
    IData/*31:0*/ tb_program_run__DOT__dut__DOT___alu__DOT__result_word;
    tb_program_run__DOT__dut__DOT___alu__DOT__result_word = 0;
    CData/*0:0*/ __Vdlyvset__tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr__v0;
    __Vdlyvset__tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr__v32;
    __Vdlyvdim0__tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr__v32 = 0;
    IData/*31:0*/ __Vdlyvval__tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr__v32;
    __Vdlyvval__tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr__v32 = 0;
    CData/*0:0*/ __Vdlyvset__tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr__v32;
    __Vdlyvset__tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr__v32 = 0;
    // Body
    __Vdlyvset__tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr__v0 = 0U;
    __Vdlyvset__tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr__v32 = 0U;
    if (vlSelf->tb_program_run__DOT__rst) {
        __Vdlyvset__tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr__v0 = 1U;
        vlSelf->tb_program_run__DOT__dut__DOT__pc_current = 0U;
    } else {
        if (vlSelf->tb_program_run__DOT__dut__DOT__control_regfile_we) {
            if ((0U != (0x1fU & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                 >> 7U)))) {
                __Vdlyvval__tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr__v32 
                    = vlSelf->tb_program_run__DOT__dut__DOT__regfile_wd3;
                __Vdlyvset__tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr__v32 = 1U;
                __Vdlyvdim0__tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr__v32 
                    = (0x1fU & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                >> 7U));
            }
        }
        if (vlSelf->tb_program_run__DOT__dut__DOT__control_pc_en) {
            vlSelf->tb_program_run__DOT__dut__DOT__pc_current 
                = vlSelf->tb_program_run__DOT__dut__DOT__next_pc;
        }
    }
    if (__Vdlyvset__tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr__v0) {
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0U] = 0U;
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[1U] = 0U;
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[2U] = 0U;
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[3U] = 0U;
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[4U] = 0U;
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[5U] = 0U;
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[6U] = 0U;
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[7U] = 0U;
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[8U] = 0U;
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[9U] = 0U;
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0xaU] = 0U;
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0xbU] = 0U;
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0xcU] = 0U;
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0xdU] = 0U;
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0xeU] = 0U;
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0xfU] = 0U;
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x10U] = 0U;
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x11U] = 0U;
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x12U] = 0U;
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x13U] = 0U;
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x14U] = 0U;
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x15U] = 0U;
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x16U] = 0U;
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x17U] = 0U;
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x18U] = 0U;
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x19U] = 0U;
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x1aU] = 0U;
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x1bU] = 0U;
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x1cU] = 0U;
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x1dU] = 0U;
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x1eU] = 0U;
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[0x1fU] = 0U;
    }
    if (__Vdlyvset__tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr__v32) {
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[__Vdlyvdim0__tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr__v32] 
            = __Vdlyvval__tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr__v32;
    }
    vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
        = vlSelf->tb_program_run__DOT__dut__DOT__mem_inst__DOT__mem_arr
        [(0x3ffU & vlSelf->tb_program_run__DOT__dut__DOT__pc_current)];
    vlSelf->tb_program_run__DOT__dut__DOT__control_regfile_we = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__control_data_mem_we = 0U;
    if ((1U & (~ (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                  >> 6U)))) {
        if ((0x20U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
            if ((1U & (~ (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                  >> 2U)))) {
                        if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                            if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                                vlSelf->tb_program_run__DOT__dut__DOT__control_data_mem_we = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((0x10U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
            if ((1U & (~ (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                              >> 2U)))) {
                    if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                        if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                            vlSelf->tb_program_run__DOT__dut__DOT__control_data_mem_we = 0U;
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                          >> 2U)))) {
                if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                    if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                        vlSelf->tb_program_run__DOT__dut__DOT__control_data_mem_we = 0U;
                    }
                }
            }
        }
    }
    vlSelf->tb_program_run__DOT__dut__DOT__control_pc_en = 1U;
    tb_program_run__DOT__dut__DOT__control_alu = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__regfile_rd2 
        = ((0U == (0x1fU & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                            >> 0x14U))) ? 0U : vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr
           [(0x1fU & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                      >> 0x14U))]);
    vlSelf->tb_program_run__DOT__dut__DOT__control_imm_i_type 
        = (((0x13U == (0x7fU & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) 
            & ((1U == (7U & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                             >> 0xcU))) | (5U == (7U 
                                                  & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                     >> 0xcU)))))
            ? (0x1fU & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                        >> 0x14U)) : (((- (IData)((vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                   >> 0x14U)));
    vlSelf->tb_program_run__DOT__dut__DOT__regfile_rd1 
        = ((0U == (0x1fU & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                            >> 0xfU))) ? 0U : vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr
           [(0x1fU & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                      >> 0xfU))]);
    vlSelf->tb_program_run__DOT__dut__DOT___alu_src_b = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT___alu_src_a = 0U;
    if ((0x40U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
        if ((0x20U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
            if ((1U & (~ (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                          >> 4U)))) {
                if ((8U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                    if ((4U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                        if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                            if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                                vlSelf->tb_program_run__DOT__dut__DOT__control_regfile_we = 1U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                    if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                        if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                            vlSelf->tb_program_run__DOT__dut__DOT__control_regfile_we = 1U;
                        }
                    }
                }
                if ((1U & (~ (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                              >> 3U)))) {
                    if ((4U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                        if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                            if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                                tb_program_run__DOT__dut__DOT__control_alu = 0U;
                                vlSelf->tb_program_run__DOT__dut__DOT___alu_src_b 
                                    = vlSelf->tb_program_run__DOT__dut__DOT__control_imm_i_type;
                                vlSelf->tb_program_run__DOT__dut__DOT___alu_src_a 
                                    = vlSelf->tb_program_run__DOT__dut__DOT__regfile_rd1;
                            }
                        }
                    } else if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                        if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                            if ((0U == (7U & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                              >> 0xcU)))) {
                                tb_program_run__DOT__dut__DOT__control_alu = 1U;
                            } else if ((1U == (7U & 
                                               (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                >> 0xcU)))) {
                                tb_program_run__DOT__dut__DOT__control_alu = 5U;
                            } else if ((4U == (7U & 
                                               (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                >> 0xcU)))) {
                                tb_program_run__DOT__dut__DOT__control_alu = 1U;
                            } else if ((5U == (7U & 
                                               (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                >> 0xcU)))) {
                                tb_program_run__DOT__dut__DOT__control_alu = 1U;
                            } else if ((6U == (7U & 
                                               (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                >> 0xcU)))) {
                                tb_program_run__DOT__dut__DOT__control_alu = 1U;
                            } else if ((7U == (7U & 
                                               (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                >> 0xcU)))) {
                                tb_program_run__DOT__dut__DOT__control_alu = 1U;
                            }
                            vlSelf->tb_program_run__DOT__dut__DOT___alu_src_b 
                                = vlSelf->tb_program_run__DOT__dut__DOT__regfile_rd2;
                            vlSelf->tb_program_run__DOT__dut__DOT___alu_src_a 
                                = vlSelf->tb_program_run__DOT__dut__DOT__regfile_rd1;
                        }
                    }
                }
            }
            if ((0x10U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                vlSelf->tb_program_run__DOT__dut__DOT__control_pc_en = 0U;
            } else if ((8U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                if ((4U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                    if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                        if ((1U & (~ vlSelf->tb_program_run__DOT__dut__DOT__inst_out))) {
                            vlSelf->tb_program_run__DOT__dut__DOT__control_pc_en = 0U;
                        }
                    } else {
                        vlSelf->tb_program_run__DOT__dut__DOT__control_pc_en = 0U;
                    }
                } else {
                    vlSelf->tb_program_run__DOT__dut__DOT__control_pc_en = 0U;
                }
            } else if ((4U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                    if ((1U & (~ vlSelf->tb_program_run__DOT__dut__DOT__inst_out))) {
                        vlSelf->tb_program_run__DOT__dut__DOT__control_pc_en = 0U;
                    }
                } else {
                    vlSelf->tb_program_run__DOT__dut__DOT__control_pc_en = 0U;
                }
            } else if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                if ((1U & (~ vlSelf->tb_program_run__DOT__dut__DOT__inst_out))) {
                    vlSelf->tb_program_run__DOT__dut__DOT__control_pc_en = 0U;
                }
            } else {
                vlSelf->tb_program_run__DOT__dut__DOT__control_pc_en = 0U;
            }
        } else {
            vlSelf->tb_program_run__DOT__dut__DOT__control_pc_en = 0U;
        }
    } else if ((0x20U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
        if ((0x10U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
            if ((1U & (~ (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                          >> 3U)))) {
                if ((4U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                    if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                        if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                            vlSelf->tb_program_run__DOT__dut__DOT__control_regfile_we = 1U;
                        }
                    }
                } else if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                    if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                        vlSelf->tb_program_run__DOT__dut__DOT__control_regfile_we = 1U;
                    }
                }
                if ((1U & (~ (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                              >> 2U)))) {
                    if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                        if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                            if ((IData)((0U == (0xfe007000U 
                                                & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)))) {
                                tb_program_run__DOT__dut__DOT__control_alu = 0U;
                            } else if ((IData)((0x40000000U 
                                                == 
                                                (0xfe007000U 
                                                 & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)))) {
                                tb_program_run__DOT__dut__DOT__control_alu = 1U;
                            } else if ((IData)((0x2000000U 
                                                == 
                                                (0xfe007000U 
                                                 & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)))) {
                                tb_program_run__DOT__dut__DOT__control_alu = 2U;
                            } else if ((4U == (7U & 
                                               (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                >> 0xcU)))) {
                                tb_program_run__DOT__dut__DOT__control_alu = 5U;
                            } else if ((6U == (7U & 
                                               (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                >> 0xcU)))) {
                                tb_program_run__DOT__dut__DOT__control_alu = 4U;
                            } else if ((7U == (7U & 
                                               (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                >> 0xcU)))) {
                                tb_program_run__DOT__dut__DOT__control_alu = 3U;
                            } else if ((1U == (7U & 
                                               (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                >> 0xcU)))) {
                                tb_program_run__DOT__dut__DOT__control_alu = 6U;
                            } else if ((IData)((0x5000U 
                                                == 
                                                (0xfe007000U 
                                                 & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)))) {
                                tb_program_run__DOT__dut__DOT__control_alu = 8U;
                            } else if ((IData)((0x40005000U 
                                                == 
                                                (0xfe007000U 
                                                 & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)))) {
                                tb_program_run__DOT__dut__DOT__control_alu = 7U;
                            } else if ((2U == (7U & 
                                               (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                >> 0xcU)))) {
                                tb_program_run__DOT__dut__DOT__control_alu = 9U;
                            } else if ((3U == (7U & 
                                               (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                >> 0xcU)))) {
                                tb_program_run__DOT__dut__DOT__control_alu = 0xaU;
                            }
                            vlSelf->tb_program_run__DOT__dut__DOT___alu_src_b 
                                = vlSelf->tb_program_run__DOT__dut__DOT__regfile_rd2;
                            vlSelf->tb_program_run__DOT__dut__DOT___alu_src_a 
                                = vlSelf->tb_program_run__DOT__dut__DOT__regfile_rd1;
                        }
                    }
                }
            }
            if ((8U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                vlSelf->tb_program_run__DOT__dut__DOT__control_pc_en = 0U;
            } else if ((4U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                    if ((1U & (~ vlSelf->tb_program_run__DOT__dut__DOT__inst_out))) {
                        vlSelf->tb_program_run__DOT__dut__DOT__control_pc_en = 0U;
                    }
                } else {
                    vlSelf->tb_program_run__DOT__dut__DOT__control_pc_en = 0U;
                }
            } else if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                if ((1U & (~ vlSelf->tb_program_run__DOT__dut__DOT__inst_out))) {
                    vlSelf->tb_program_run__DOT__dut__DOT__control_pc_en = 0U;
                }
            } else {
                vlSelf->tb_program_run__DOT__dut__DOT__control_pc_en = 0U;
            }
        } else {
            if ((8U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                vlSelf->tb_program_run__DOT__dut__DOT__control_pc_en = 0U;
            } else if ((4U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                vlSelf->tb_program_run__DOT__dut__DOT__control_pc_en = 0U;
            } else if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                if ((1U & (~ vlSelf->tb_program_run__DOT__dut__DOT__inst_out))) {
                    vlSelf->tb_program_run__DOT__dut__DOT__control_pc_en = 0U;
                }
            } else {
                vlSelf->tb_program_run__DOT__dut__DOT__control_pc_en = 0U;
            }
            if ((1U & (~ (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                              >> 2U)))) {
                    if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                        if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                            vlSelf->tb_program_run__DOT__dut__DOT___alu_src_b 
                                = (((- (IData)((vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                      >> 7U))));
                            vlSelf->tb_program_run__DOT__dut__DOT___alu_src_a 
                                = vlSelf->tb_program_run__DOT__dut__DOT__regfile_rd1;
                        }
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
        if ((1U & (~ (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                      >> 3U)))) {
            if ((4U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                    if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                        vlSelf->tb_program_run__DOT__dut__DOT__control_regfile_we = 1U;
                        tb_program_run__DOT__dut__DOT__control_alu = 0U;
                        vlSelf->tb_program_run__DOT__dut__DOT___alu_src_b 
                            = (0xfffff000U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out);
                        vlSelf->tb_program_run__DOT__dut__DOT___alu_src_a 
                            = vlSelf->tb_program_run__DOT__dut__DOT__pc_current;
                    }
                }
            } else if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                    vlSelf->tb_program_run__DOT__dut__DOT__control_regfile_we = 1U;
                    tb_program_run__DOT__dut__DOT__control_alu 
                        = ((0U == (7U & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                         >> 0xcU)))
                            ? 0U : ((4U == (7U & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                  >> 0xcU)))
                                     ? 5U : ((6U == 
                                              (7U & 
                                               (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                >> 0xcU)))
                                              ? 4U : 
                                             ((7U == 
                                               (7U 
                                                & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                   >> 0xcU)))
                                               ? 3U
                                               : ((IData)(
                                                          (0x1000U 
                                                           == 
                                                           (0xfe007000U 
                                                            & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)))
                                                   ? 6U
                                                   : 
                                                  ((IData)(
                                                           (0x5000U 
                                                            == 
                                                            (0xfe007000U 
                                                             & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)))
                                                    ? 8U
                                                    : 
                                                   ((IData)(
                                                            (0x40005000U 
                                                             == 
                                                             (0xfe007000U 
                                                              & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)))
                                                     ? 7U
                                                     : 
                                                    ((2U 
                                                      == 
                                                      (7U 
                                                       & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                          >> 0xcU)))
                                                      ? 9U
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (7U 
                                                        & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                           >> 0xcU)))
                                                       ? 0xaU
                                                       : 0U)))))))));
                    vlSelf->tb_program_run__DOT__dut__DOT___alu_src_b 
                        = vlSelf->tb_program_run__DOT__dut__DOT__control_imm_i_type;
                    vlSelf->tb_program_run__DOT__dut__DOT___alu_src_a 
                        = vlSelf->tb_program_run__DOT__dut__DOT__regfile_rd1;
                }
            }
        }
        if ((8U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
            vlSelf->tb_program_run__DOT__dut__DOT__control_pc_en = 0U;
        } else if ((4U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
            if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                if ((1U & (~ vlSelf->tb_program_run__DOT__dut__DOT__inst_out))) {
                    vlSelf->tb_program_run__DOT__dut__DOT__control_pc_en = 0U;
                }
            } else {
                vlSelf->tb_program_run__DOT__dut__DOT__control_pc_en = 0U;
            }
        } else if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
            if ((1U & (~ vlSelf->tb_program_run__DOT__dut__DOT__inst_out))) {
                vlSelf->tb_program_run__DOT__dut__DOT__control_pc_en = 0U;
            }
        } else {
            vlSelf->tb_program_run__DOT__dut__DOT__control_pc_en = 0U;
        }
    } else {
        if ((1U & (~ (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                      >> 3U)))) {
            if ((1U & (~ (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                          >> 2U)))) {
                if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                    if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                        vlSelf->tb_program_run__DOT__dut__DOT__control_regfile_we = 1U;
                        vlSelf->tb_program_run__DOT__dut__DOT___alu_src_b 
                            = vlSelf->tb_program_run__DOT__dut__DOT__control_imm_i_type;
                        vlSelf->tb_program_run__DOT__dut__DOT___alu_src_a 
                            = vlSelf->tb_program_run__DOT__dut__DOT__regfile_rd1;
                    }
                }
            }
        }
        if ((8U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
            vlSelf->tb_program_run__DOT__dut__DOT__control_pc_en = 0U;
        } else if ((4U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
            vlSelf->tb_program_run__DOT__dut__DOT__control_pc_en = 0U;
        } else if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
            if ((1U & (~ vlSelf->tb_program_run__DOT__dut__DOT__inst_out))) {
                vlSelf->tb_program_run__DOT__dut__DOT__control_pc_en = 0U;
            }
        } else {
            vlSelf->tb_program_run__DOT__dut__DOT__control_pc_en = 0U;
        }
    }
    vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result = 0ULL;
    tb_program_run__DOT__dut__DOT___alu__DOT__result_word = 0U;
    tb_program_run__DOT__dut__DOT___alu__DOT__temp_add_sub = 0ULL;
    if ((8U & (IData)(tb_program_run__DOT__dut__DOT__control_alu))) {
        if ((4U & (IData)(tb_program_run__DOT__dut__DOT__control_alu))) {
            vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result = 0ULL;
        } else if ((2U & (IData)(tb_program_run__DOT__dut__DOT__control_alu))) {
            vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result 
                = ((1U & (IData)(tb_program_run__DOT__dut__DOT__control_alu))
                    ? 0ULL : ((vlSelf->tb_program_run__DOT__dut__DOT___alu_src_a 
                               < vlSelf->tb_program_run__DOT__dut__DOT___alu_src_b)
                               ? 1ULL : 0ULL));
        } else if ((1U & (IData)(tb_program_run__DOT__dut__DOT__control_alu))) {
            vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result 
                = (VL_LTS_III(32, vlSelf->tb_program_run__DOT__dut__DOT___alu_src_a, vlSelf->tb_program_run__DOT__dut__DOT___alu_src_b)
                    ? 1ULL : 0ULL);
        } else {
            tb_program_run__DOT__dut__DOT___alu__DOT__result_word 
                = (vlSelf->tb_program_run__DOT__dut__DOT___alu_src_a 
                   >> (0x1fU & vlSelf->tb_program_run__DOT__dut__DOT___alu_src_b));
            vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result 
                = (((QData)((IData)((- (IData)((tb_program_run__DOT__dut__DOT___alu__DOT__result_word 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)(tb_program_run__DOT__dut__DOT___alu__DOT__result_word)));
        }
    } else if ((4U & (IData)(tb_program_run__DOT__dut__DOT__control_alu))) {
        if ((2U & (IData)(tb_program_run__DOT__dut__DOT__control_alu))) {
            if ((1U & (IData)(tb_program_run__DOT__dut__DOT__control_alu))) {
                tb_program_run__DOT__dut__DOT___alu__DOT__result_word 
                    = VL_SHIFTRS_III(32,32,5, vlSelf->tb_program_run__DOT__dut__DOT___alu_src_a, 
                                     (0x1fU & vlSelf->tb_program_run__DOT__dut__DOT___alu_src_b));
                vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result 
                    = (((QData)((IData)((- (IData)(
                                                   (tb_program_run__DOT__dut__DOT___alu__DOT__result_word 
                                                    >> 0x1fU))))) 
                        << 0x20U) | (QData)((IData)(tb_program_run__DOT__dut__DOT___alu__DOT__result_word)));
            } else {
                tb_program_run__DOT__dut__DOT___alu__DOT__result_word 
                    = (vlSelf->tb_program_run__DOT__dut__DOT___alu_src_a 
                       << (0x1fU & vlSelf->tb_program_run__DOT__dut__DOT___alu_src_b));
                vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result 
                    = (((QData)((IData)((- (IData)(
                                                   (tb_program_run__DOT__dut__DOT___alu__DOT__result_word 
                                                    >> 0x1fU))))) 
                        << 0x20U) | (QData)((IData)(tb_program_run__DOT__dut__DOT___alu__DOT__result_word)));
            }
        } else if ((1U & (IData)(tb_program_run__DOT__dut__DOT__control_alu))) {
            tb_program_run__DOT__dut__DOT___alu__DOT__result_word 
                = (vlSelf->tb_program_run__DOT__dut__DOT___alu_src_a 
                   ^ vlSelf->tb_program_run__DOT__dut__DOT___alu_src_b);
            vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result 
                = (((QData)((IData)((- (IData)((tb_program_run__DOT__dut__DOT___alu__DOT__result_word 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)(tb_program_run__DOT__dut__DOT___alu__DOT__result_word)));
        } else {
            tb_program_run__DOT__dut__DOT___alu__DOT__result_word 
                = (vlSelf->tb_program_run__DOT__dut__DOT___alu_src_a 
                   | vlSelf->tb_program_run__DOT__dut__DOT___alu_src_b);
            vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result 
                = (((QData)((IData)((- (IData)((tb_program_run__DOT__dut__DOT___alu__DOT__result_word 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)(tb_program_run__DOT__dut__DOT___alu__DOT__result_word)));
        }
    } else if ((2U & (IData)(tb_program_run__DOT__dut__DOT__control_alu))) {
        if ((1U & (IData)(tb_program_run__DOT__dut__DOT__control_alu))) {
            tb_program_run__DOT__dut__DOT___alu__DOT__result_word 
                = (vlSelf->tb_program_run__DOT__dut__DOT___alu_src_a 
                   & vlSelf->tb_program_run__DOT__dut__DOT___alu_src_b);
            vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result 
                = (((QData)((IData)((- (IData)((tb_program_run__DOT__dut__DOT___alu__DOT__result_word 
                                                >> 0x1fU))))) 
                    << 0x20U) | (QData)((IData)(tb_program_run__DOT__dut__DOT___alu__DOT__result_word)));
        } else {
            vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result 
                = VL_MULS_QQQ(64, VL_EXTENDS_QI(64,32, vlSelf->tb_program_run__DOT__dut__DOT___alu_src_a), 
                              VL_EXTENDS_QI(64,32, vlSelf->tb_program_run__DOT__dut__DOT___alu_src_b));
        }
    } else if ((1U & (IData)(tb_program_run__DOT__dut__DOT__control_alu))) {
        tb_program_run__DOT__dut__DOT___alu__DOT__temp_add_sub 
            = (0x1ffffffffULL & ((QData)((IData)(vlSelf->tb_program_run__DOT__dut__DOT___alu_src_a)) 
                                 - (QData)((IData)(vlSelf->tb_program_run__DOT__dut__DOT___alu_src_b))));
        vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result 
            = (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (tb_program_run__DOT__dut__DOT___alu__DOT__temp_add_sub 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(tb_program_run__DOT__dut__DOT___alu__DOT__temp_add_sub)));
    } else {
        tb_program_run__DOT__dut__DOT___alu__DOT__temp_add_sub 
            = (0x1ffffffffULL & ((QData)((IData)(vlSelf->tb_program_run__DOT__dut__DOT___alu_src_a)) 
                                 + (QData)((IData)(vlSelf->tb_program_run__DOT__dut__DOT___alu_src_b))));
        vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result 
            = (((QData)((IData)((- (IData)((1U & (IData)(
                                                         (tb_program_run__DOT__dut__DOT___alu__DOT__temp_add_sub 
                                                          >> 0x1fU))))))) 
                << 0x20U) | (QData)((IData)(tb_program_run__DOT__dut__DOT___alu__DOT__temp_add_sub)));
    }
    vlSelf->tb_program_run__DOT__dut__DOT__branch_taken = 0U;
    if ((0x63U == (0x7fU & vlSelf->tb_program_run__DOT__dut__DOT__inst_out))) {
        if ((0U == (7U & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                          >> 0xcU)))) {
            vlSelf->tb_program_run__DOT__dut__DOT__branch_taken 
                = (0ULL == vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result);
        } else if ((1U == (7U & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                 >> 0xcU)))) {
            vlSelf->tb_program_run__DOT__dut__DOT__branch_taken 
                = (0ULL != vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result);
        } else if ((4U == (7U & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                 >> 0xcU)))) {
            vlSelf->tb_program_run__DOT__dut__DOT__branch_taken 
                = (1U & (IData)((vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result 
                                 >> 0x3fU)));
        } else if ((5U == (7U & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                 >> 0xcU)))) {
            vlSelf->tb_program_run__DOT__dut__DOT__branch_taken 
                = (1U & (~ (IData)((vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result 
                                    >> 0x3fU))));
        } else if ((6U == (7U & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                 >> 0xcU)))) {
            vlSelf->tb_program_run__DOT__dut__DOT__branch_taken 
                = (1U & (~ (IData)(vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result)));
        } else if ((7U == (7U & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                 >> 0xcU)))) {
            vlSelf->tb_program_run__DOT__dut__DOT__branch_taken 
                = (1U & (IData)(vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result));
        }
    }
    vlSelf->tb_program_run__DOT__dut__DOT__next_pc 
        = (((0x6fU == (0x7fU & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) 
            | (0x67U == (0x7fU & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)))
            ? ((0x67U == (0x7fU & vlSelf->tb_program_run__DOT__dut__DOT__inst_out))
                ? (0xfffffffeU & (vlSelf->tb_program_run__DOT__dut__DOT__regfile_rd1 
                                  + vlSelf->tb_program_run__DOT__dut__DOT__control_imm_i_type))
                : (vlSelf->tb_program_run__DOT__dut__DOT__pc_current 
                   + (((- (IData)((vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                   >> 0x1fU))) << 0x15U) 
                      | ((0x100000U & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                       >> 0xbU)) | 
                         ((0xff000U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out) 
                          | ((0x800U & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                        >> 9U)) | (0x7feU 
                                                   & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                      >> 0x14U))))))))
            : ((IData)(vlSelf->tb_program_run__DOT__dut__DOT__branch_taken)
                ? (vlSelf->tb_program_run__DOT__dut__DOT__pc_current 
                   + (((- (IData)((vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                   >> 0x1fU))) << 0xcU) 
                      | ((0x800U & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                    << 4U)) | ((0x7e0U 
                                                & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                     >> 7U))))))
                : ((IData)(1U) + vlSelf->tb_program_run__DOT__dut__DOT__pc_current)));
}

VL_INLINE_OPT void Vtb_program_run___024root___nba_comb__TOP__0(Vtb_program_run___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_program_run__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_program_run___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_program_run__DOT__dut__DOT__data_mem_rd 
        = vlSelf->tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr
        [(0x3ffU & (IData)(vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result))];
    vlSelf->tb_program_run__DOT__dut__DOT___data_mem_wr = 0U;
    if ((1U & (~ (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                  >> 6U)))) {
        if ((0x20U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
            if ((1U & (~ (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                  >> 2U)))) {
                        if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                            if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                                vlSelf->tb_program_run__DOT__dut__DOT___data_mem_wr 
                                    = vlSelf->tb_program_run__DOT__dut__DOT__data_mem_rd;
                                vlSelf->tb_program_run__DOT__dut__DOT___data_mem_wr 
                                    = ((2U == (7U & 
                                               (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                >> 0xcU)))
                                        ? vlSelf->tb_program_run__DOT__dut__DOT__regfile_rd2
                                        : ((1U == (7U 
                                                   & (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                                                      >> 0xcU)))
                                            ? ((0xffff0000U 
                                                & vlSelf->tb_program_run__DOT__dut__DOT___data_mem_wr) 
                                               | (0xffffU 
                                                  & vlSelf->tb_program_run__DOT__dut__DOT__regfile_rd2))
                                            : ((0xffffff00U 
                                                & vlSelf->tb_program_run__DOT__dut__DOT___data_mem_wr) 
                                               | (0xffU 
                                                  & vlSelf->tb_program_run__DOT__dut__DOT__regfile_rd2))));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_program_run__DOT__dut__DOT__regfile_wd3 = 0U;
    if ((0x40U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
        if ((0x20U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
            if ((1U & (~ (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                          >> 4U)))) {
                if ((8U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                    if ((4U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                        if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                            if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                                vlSelf->tb_program_run__DOT__dut__DOT__regfile_wd3 
                                    = ((IData)(1U) 
                                       + vlSelf->tb_program_run__DOT__dut__DOT__pc_current);
                            }
                        }
                    }
                } else if ((4U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                    if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                        if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                            vlSelf->tb_program_run__DOT__dut__DOT__regfile_wd3 
                                = ((IData)(1U) + vlSelf->tb_program_run__DOT__dut__DOT__pc_current);
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
        if ((0x10U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
            if ((1U & (~ (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                          >> 3U)))) {
                if ((4U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                    if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                        if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                            vlSelf->tb_program_run__DOT__dut__DOT__regfile_wd3 
                                = (0xfffff000U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out);
                        }
                    }
                } else if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                    if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                        vlSelf->tb_program_run__DOT__dut__DOT__regfile_wd3 
                            = (IData)(vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result);
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                          >> 2U)))) {
                if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                    if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                        vlSelf->tb_program_run__DOT__dut__DOT__regfile_wd3 
                            = vlSelf->tb_program_run__DOT__dut__DOT__data_mem_rd;
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
        if ((1U & (~ (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                      >> 3U)))) {
            if ((4U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                    if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                        vlSelf->tb_program_run__DOT__dut__DOT__regfile_wd3 
                            = (IData)(vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result);
                    }
                }
            } else if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                    vlSelf->tb_program_run__DOT__dut__DOT__regfile_wd3 
                        = (IData)(vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result);
                }
            }
        }
    } else if ((1U & (~ (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
                      >> 2U)))) {
            if ((2U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                if ((1U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)) {
                    vlSelf->tb_program_run__DOT__dut__DOT__regfile_wd3 
                        = ((0x4000U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)
                            ? ((0x2000U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)
                                ? vlSelf->tb_program_run__DOT__dut__DOT__data_mem_rd
                                : ((0x1000U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)
                                    ? (0xffffU & vlSelf->tb_program_run__DOT__dut__DOT__data_mem_rd)
                                    : (0xffU & vlSelf->tb_program_run__DOT__dut__DOT__data_mem_rd)))
                            : ((0x2000U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)
                                ? vlSelf->tb_program_run__DOT__dut__DOT__data_mem_rd
                                : ((0x1000U & vlSelf->tb_program_run__DOT__dut__DOT__inst_out)
                                    ? (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->tb_program_run__DOT__dut__DOT__data_mem_rd 
                                                       >> 0xfU)))) 
                                        << 0x10U) | 
                                       (0xffffU & vlSelf->tb_program_run__DOT__dut__DOT__data_mem_rd))
                                    : (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->tb_program_run__DOT__dut__DOT__data_mem_rd 
                                                       >> 7U)))) 
                                        << 8U) | (0xffU 
                                                  & vlSelf->tb_program_run__DOT__dut__DOT__data_mem_rd)))));
                }
            }
        }
    }
}

void Vtb_program_run___024root___eval_nba(Vtb_program_run___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_program_run__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_program_run___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_program_run___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_program_run___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_program_run___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vtb_program_run___024root___timing_resume(Vtb_program_run___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_program_run__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_program_run___024root___timing_resume\n"); );
    // Body
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h9ecd40ab__0.resume("@(posedge tb_program_run.clk)");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_program_run___024root___timing_commit(Vtb_program_run___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_program_run__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_program_run___024root___timing_commit\n"); );
    // Body
    if ((! (2ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h9ecd40ab__0.commit("@(posedge tb_program_run.clk)");
    }
}

void Vtb_program_run___024root___eval_triggers__act(Vtb_program_run___024root* vlSelf);

bool Vtb_program_run___024root___eval_phase__act(Vtb_program_run___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_program_run__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_program_run___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_program_run___024root___eval_triggers__act(vlSelf);
    Vtb_program_run___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_program_run___024root___timing_resume(vlSelf);
        Vtb_program_run___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_program_run___024root___eval_phase__nba(Vtb_program_run___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_program_run__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_program_run___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_program_run___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_program_run___024root___dump_triggers__nba(Vtb_program_run___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_program_run___024root___dump_triggers__act(Vtb_program_run___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_program_run___024root___eval(Vtb_program_run___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_program_run__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_program_run___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_program_run___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rv32i_single_cycle.srcs/sim_1/new/tb_program_run.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_program_run___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rv32i_single_cycle.srcs/sim_1/new/tb_program_run.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_program_run___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_program_run___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_program_run___024root___eval_debug_assertions(Vtb_program_run___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_program_run__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_program_run___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
