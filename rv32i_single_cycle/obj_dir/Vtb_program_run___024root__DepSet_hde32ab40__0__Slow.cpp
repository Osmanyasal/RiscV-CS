// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_program_run.h for the primary calling header

#include "Vtb_program_run__pch.h"
#include "Vtb_program_run___024root.h"

VL_ATTR_COLD void Vtb_program_run___024root___eval_static(Vtb_program_run___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_program_run__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_program_run___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_program_run___024root___eval_initial__TOP(Vtb_program_run___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_program_run__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_program_run___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x696f6e73U;
    __Vtemp_1[2U] = 0x72756374U;
    __Vtemp_1[3U] = 0x696e7374U;
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                 ,  &(vlSelf->tb_program_run__DOT__dut__DOT__mem_inst__DOT__mem_arr)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtb_program_run___024root___eval_final(Vtb_program_run___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_program_run__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_program_run___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_program_run___024root___dump_triggers__stl(Vtb_program_run___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_program_run___024root___eval_phase__stl(Vtb_program_run___024root* vlSelf);

VL_ATTR_COLD void Vtb_program_run___024root___eval_settle(Vtb_program_run___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_program_run__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_program_run___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_program_run___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rv32i_single_cycle.srcs/sim_1/new/tb_program_run.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_program_run___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_program_run___024root___dump_triggers__stl(Vtb_program_run___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_program_run__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_program_run___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_program_run___024root___stl_sequent__TOP__0(Vtb_program_run___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_program_run__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_program_run___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ tb_program_run__DOT__dut__DOT__control_alu;
    tb_program_run__DOT__dut__DOT__control_alu = 0;
    QData/*32:0*/ tb_program_run__DOT__dut__DOT___alu__DOT__temp_add_sub;
    tb_program_run__DOT__dut__DOT___alu__DOT__temp_add_sub = 0;
    IData/*31:0*/ tb_program_run__DOT__dut__DOT___alu__DOT__result_word;
    tb_program_run__DOT__dut__DOT___alu__DOT__result_word = 0;
    // Body
    vlSelf->tb_program_run__DOT__dut__DOT__inst_out 
        = vlSelf->tb_program_run__DOT__dut__DOT__mem_inst__DOT__mem_arr
        [(0x3ffU & vlSelf->tb_program_run__DOT__dut__DOT__pc_current)];
    vlSelf->tb_program_run__DOT__dut__DOT__control_regfile_we = 0U;
    vlSelf->tb_program_run__DOT__dut__DOT__control_data_mem_we = 0U;
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
    vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result = 0ULL;
    tb_program_run__DOT__dut__DOT___alu__DOT__result_word = 0U;
    tb_program_run__DOT__dut__DOT___alu__DOT__temp_add_sub = 0ULL;
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
    vlSelf->tb_program_run__DOT__dut__DOT__data_mem_rd 
        = vlSelf->tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr
        [(0x3ffU & (IData)(vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result))];
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
                                vlSelf->tb_program_run__DOT__dut__DOT__control_data_mem_we = 1U;
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

VL_ATTR_COLD void Vtb_program_run___024root___eval_stl(Vtb_program_run___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_program_run__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_program_run___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_program_run___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_program_run___024root___eval_triggers__stl(Vtb_program_run___024root* vlSelf);

VL_ATTR_COLD bool Vtb_program_run___024root___eval_phase__stl(Vtb_program_run___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_program_run__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_program_run___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_program_run___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_program_run___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_program_run___024root___dump_triggers__act(Vtb_program_run___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_program_run__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_program_run___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_program_run.clk or posedge tb_program_run.rst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_program_run.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_program_run___024root___dump_triggers__nba(Vtb_program_run___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_program_run__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_program_run___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_program_run.clk or posedge tb_program_run.rst)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_program_run.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_program_run___024root___ctor_var_reset(Vtb_program_run___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_program_run__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_program_run___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_program_run__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_program_run__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->tb_program_run__DOT__print_cpu_dashboard__Vstatic__current_imm = VL_RAND_RESET_I(32);
    vlSelf->tb_program_run__DOT__dut__DOT__control_imm_i_type = VL_RAND_RESET_I(32);
    vlSelf->tb_program_run__DOT__dut__DOT__control_pc_en = VL_RAND_RESET_I(1);
    vlSelf->tb_program_run__DOT__dut__DOT__control_regfile_we = VL_RAND_RESET_I(1);
    vlSelf->tb_program_run__DOT__dut__DOT__control_data_mem_we = VL_RAND_RESET_I(1);
    vlSelf->tb_program_run__DOT__dut__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_program_run__DOT__dut__DOT__pc_current = VL_RAND_RESET_I(32);
    vlSelf->tb_program_run__DOT__dut__DOT__inst_out = VL_RAND_RESET_I(32);
    vlSelf->tb_program_run__DOT__dut__DOT___alu_src_a = VL_RAND_RESET_I(32);
    vlSelf->tb_program_run__DOT__dut__DOT___alu_src_b = VL_RAND_RESET_I(32);
    vlSelf->tb_program_run__DOT__dut__DOT___data_mem_wr = VL_RAND_RESET_I(32);
    vlSelf->tb_program_run__DOT__dut__DOT__regfile_rd1 = VL_RAND_RESET_I(32);
    vlSelf->tb_program_run__DOT__dut__DOT__regfile_rd2 = VL_RAND_RESET_I(32);
    vlSelf->tb_program_run__DOT__dut__DOT__data_mem_rd = VL_RAND_RESET_I(32);
    vlSelf->tb_program_run__DOT__dut__DOT__regfile_wd3 = VL_RAND_RESET_I(32);
    vlSelf->tb_program_run__DOT__dut__DOT__branch_taken = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_program_run__DOT__dut__DOT__mem_inst__DOT__mem_arr[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_program_run__DOT__dut__DOT__reg_file__DOT__mem_arr[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_program_run__DOT__dut__DOT___alu__DOT__result = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_program_run__DOT__dut__DOT__mem_data__DOT__mem_arr[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_program_run__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_program_run__DOT__rst__0 = VL_RAND_RESET_I(1);
}
