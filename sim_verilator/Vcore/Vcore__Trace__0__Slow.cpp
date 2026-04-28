// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vcore__Syms.h"


VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__include_pkg__0(Vcore___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__0(Vcore___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("include_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vcore___024root__trace_init_sub__TOP__include_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+1149,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1150,0,"clk_m",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1152,0,"rst_m",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1149,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1150,0,"clk_m",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1152,0,"rst_m",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+477,0,"fb_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"jump1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"jump2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"consumed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+29,0,"jta1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"jta2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+478,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("prefetch_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+479+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+998,0,"rename_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fetch_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+999,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declArray(c+1002,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->popPrefix();
    tracep->pushPrefix("decode_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+481,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 101,0);
    tracep->declArray(c+485,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 101,0);
    tracep->popPrefix();
    tracep->declBit(c+1005,0,"ROB_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1202,0,"dispatch_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+489,0,"chkpt_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("restore_specTag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+32+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("commit_packet", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+945,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+946,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->popPrefix();
    tracep->pushPrefix("read_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+2,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+3,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+4,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+5,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+6,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+7,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+8,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+1044,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1045,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+1046,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1047,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+1048,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1049,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+1050,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1051,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rename_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+490,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+494,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->popPrefix();
    tracep->pushPrefix("chkpt", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+498+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("chkpt_sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+500+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+502,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+504,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+506,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+508,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->popPrefix();
    tracep->pushPrefix("CDB_tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1052+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+1056+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+510+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+514+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rename_rob_rd", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+518+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rename_rob", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+520,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+521,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->popPrefix();
    tracep->pushPrefix("alu_buffer_busy", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+947+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("mul_div_buffer_busy", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+949+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("lsu_buffer_busy", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+1203+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBit(c+522,0,"dispatch_unit_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+523,0,"lsu_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"flush_sqN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("commit_sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+950+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("alu_dispatch_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1204,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 102,0);
    tracep->declArray(c+1208,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 102,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul_div_dispatch_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1212,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->popPrefix();
    tracep->pushPrefix("lsu_dispatch_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+1213,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 62,0);
    tracep->popPrefix();
    tracep->pushPrefix("issue_buffer_busy", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+464+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("RF_raddr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1077,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1078,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1079,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1080,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1081,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1082,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1083,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1084,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("RF_read_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1085,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1086,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1087,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1088,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1089,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1090,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1091,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1092,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mul_div_fu_busy", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+1060+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("int_issue_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+468,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->declArray(c+471,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->declArray(c+474,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->popPrefix();
    tracep->pushPrefix("lsu_issue_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+154,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 113,0);
    tracep->popPrefix();
    tracep->pushPrefix("br_taken", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+65+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("jump_type", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+158,0,"[0]",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+159,0,"[1]",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("br_jalr_sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+952+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("agu_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+524,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->popPrefix();
    tracep->pushPrefix("int_cdb_lines", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+527,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+529,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+531,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->popPrefix();
    tracep->pushPrefix("lsu_cdb_lines", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+533,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->popPrefix();
    tracep->pushPrefix("rs1_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1093+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs2_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1097+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs1_addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1101+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs2_addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1105+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ROB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1149,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rename_rob", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+520,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+521,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->popPrefix();
    tracep->declBit(c+31,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"flush_sqN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("CDB_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+1056+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+514+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+1005,0,"OUT_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("OUT_commit", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+945,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+946,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->popPrefix();
    tracep->declBus(c+1006,0,"commit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+954,0,"dataout_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1007,0,"write_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+160,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1008,0,"next_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+161,0,"head",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+162,0,"tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1009,0,"next_head",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1010,0,"next_tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("alloc_index", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+163+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("commit_index", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1011+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1215,0,"num_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1216,0,"num_commit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+165,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1013,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1217,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1217,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1217,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1217,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+166,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+167,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+168,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+169,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+170,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("decode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1149,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+998,0,"IN_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("IN_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+999,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declArray(c+1002,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->popPrefix();
    tracep->pushPrefix("OUT_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+481,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 101,0);
    tracep->declArray(c+485,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 101,0);
    tracep->popPrefix();
    tracep->pushPrefix("decoder_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1014,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 101,0);
    tracep->declArray(c+1018,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 101,0);
    tracep->popPrefix();
    tracep->pushPrefix("Decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("IN_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+999,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declArray(c+1002,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->popPrefix();
    tracep->pushPrefix("OUT_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1014,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 101,0);
    tracep->declArray(c+1018,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 101,0);
    tracep->popPrefix();
    tracep->pushPrefix("opcode", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1022+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("immediate", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1024+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("IG", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("IN_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+999,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declArray(c+1002,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->popPrefix();
    tracep->pushPrefix("immediate", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1024+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1026,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1027,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1028,0,"imm12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1029,0,"imm13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+1030,0,"imm21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1031,0,"iw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1217,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1217,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+535,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dispatch", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1149,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ALU_buffer_busy", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+947+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("MUL_DIV_buffer_busy", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+949+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("LSU_buffer_busy", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+1203+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBit(c+523,0,"LSU_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"flush_sqN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("commit_sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+950+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("instr_sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+500+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("IN_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+490,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+494,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->popPrefix();
    tracep->pushPrefix("checkpoint", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+498+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("OUT_specTag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+32+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+522,0,"d_unit_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+489,0,"check_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("OUT_alu_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1204,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 102,0);
    tracep->declArray(c+1208,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 102,0);
    tracep->popPrefix();
    tracep->pushPrefix("OUT_mul_div_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1212,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->popPrefix();
    tracep->pushPrefix("OUT_lsu_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+1213,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 62,0);
    tracep->popPrefix();
    tracep->pushPrefix("alu_dispatch_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+536,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 102,0);
    tracep->declArray(c+540,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 102,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul_div_dispatch_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+544,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->popPrefix();
    tracep->pushPrefix("lsu_dispatch_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+545,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 62,0);
    tracep->popPrefix();
    tracep->pushPrefix("BC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1149,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"flush_sqN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("commit_sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+950+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("instr_sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+500+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("chk_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+498+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBit(c+489,0,"check_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("OUT_specTag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+32+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1218,0,"NUM_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1219,0,"NUM_CHKPT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1220,0,"CHKPT_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBit(c+547+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBus(c+563,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1221,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+564,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+565,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+566,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+567,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("DU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1149,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("IN_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+490,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+494,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->popPrefix();
    tracep->pushPrefix("ALU_buffer_busy", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+947+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("MUL_DIV_buffer_busy", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+949+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("LSU_buffer_busy", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+1203+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBit(c+523,0,"LSU_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+522,0,"OUT_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("OUT_alu_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+536,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 102,0);
    tracep->declArray(c+540,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 102,0);
    tracep->popPrefix();
    tracep->pushPrefix("OUT_mul_div_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+544,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->popPrefix();
    tracep->pushPrefix("OUT_lsu_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+545,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 62,0);
    tracep->popPrefix();
    tracep->pushPrefix("packet", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+568,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+572,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->popPrefix();
    tracep->pushPrefix("dispatched", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+576+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("alu_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+955+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("mul_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+957+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("lsu_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+578+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("slot_pending", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+579+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("slot_is_alu", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+581+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("slot_is_mul", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+583+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("slot_is_lsu", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+585+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("prefix_alu", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+1153+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("prefix_mul", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+1156+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("prefix_lsu", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+1159+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("prefix_ready_alu", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+1162+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("prefix_ready_mul", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1165+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("prefix_ready_lsu", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1167+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("alu_slot", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1169+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("alu_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1171+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("mul_slot", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+1173+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("mul_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+1174+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("lsu_slot", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+1175+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("lsu_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+1176+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("can_dispatch", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1177+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBit(c+587,0,"packet_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1217,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("g_alu_assign", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+958,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1222,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1217,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+588,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+589,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+590,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+591,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+592,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+593,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1222,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+959,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1222,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+594,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1217,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1217,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1222,0,"p",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("execute", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1149,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"flush_sqN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("int_issue_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+468,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->declArray(c+471,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->declArray(c+474,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->popPrefix();
    tracep->pushPrefix("lsu_issue_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+154,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 113,0);
    tracep->popPrefix();
    tracep->pushPrefix("CDB_line", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+527,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+529,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+531,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->popPrefix();
    tracep->pushPrefix("agu_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+524,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul_div_busy", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+1060+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("int_fu_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+1179,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+1181,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+1183,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->popPrefix();
    tracep->pushPrefix("next_agu_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+960,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->popPrefix();
    tracep->pushPrefix("gen_agu_fu[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("AGU_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+171,0,"IN_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 113,0);
    tracep->declArray(c+175,0,"OUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->declBit(c+178,0,"is_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+179,0,"is_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+180,0,"data_size",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+181,0,"is_unsigned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+182,0,"target_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_alu_fu[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("ALU_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+183,0,"IN_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->declQuad(c+186,0,"OUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBus(c+188,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_alu_fu[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("ALU_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+189,0,"IN_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->declQuad(c+192,0,"OUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBus(c+194,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_mul_div_fu[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("MUL_DIV_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1149,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"flush_sqN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declArray(c+963,0,"IN_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->declBit(c+1061,0,"OUT_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+595,0,"OUT_cdb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBus(c+1062,0,"state",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+597,0,"instr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->declBus(c+600,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mul_pipe", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+1223+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+601,0,"mul_pipe_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("mul_pipe_sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+602+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("mul_pipe_tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+605+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("mul_pipe_oper", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+608,0,"[0]",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+609,0,"[1]",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+610,0,"[2]",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBus(c+611,0,"div_dividend",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+612,0,"div_divisor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1229,0,"div_quotient",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1230,0,"div_remainder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+613,0,"div_partial",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+615,0,"div_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+616,0,"div_quot_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+617,0,"div_rem_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+618,0,"div_by_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+619,0,"mul_op1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+621,0,"mul_op2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+623,0,"mul_op1_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+625,0,"mul_op2_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declArray(c+627,0,"mul_result_ss",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+630,0,"mul_result_uu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+633,0,"mul_result_su",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+636,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+637,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+638,0,"op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+639,0,"op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+640,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+641,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+642,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+643,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+644,0,"partial_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+646,0,"sub_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+648,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+649,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+650,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+651,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fetch", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1149,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+998,0,"IN_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"jump2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"flush_sqN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+478,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("IN_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+479+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+477,0,"OUT_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"jump1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"consumed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+29,0,"jta1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("OUT_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+999,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declArray(c+1002,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->popPrefix();
    tracep->declBit(c+652,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"invalidate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("aligner_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+68,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+71,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+74+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+76+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("opcode", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+78+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("imm", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+80+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 20,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+82,0,"iw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("FB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1149,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+998,0,"IN_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"flush_sqN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("IN_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+68,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+71,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->popPrefix();
    tracep->declBit(c+477,0,"OUT_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("OUT_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+999,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declArray(c+1002,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->popPrefix();
    tracep->declBus(c+1220,0,"PTR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+653,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+656,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+659,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+662,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+665,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+668,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+671,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+674,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+677,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+680,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+683,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+686,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+689,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+692,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+695,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+698,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->popPrefix();
    tracep->declBus(c+701,0,"head",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+702,0,"tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+703,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+704,0,"sqN_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+83,0,"in_valid_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1032,0,"out_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+705,0,"can_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1033,0,"can_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1034,0,"idx_head",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1217,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1217,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+706,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("IA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("IN_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+479+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+478,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+67,0,"invalidate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("OUT_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+68,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+71,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->popPrefix();
    tracep->declBus(c+28,0,"consumed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+84,0,"pc_align",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("pc_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+85+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1217,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("JTA1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pc", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+74+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+76+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("opcode", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+78+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("imm", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+80+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 20,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+477,0,"IN_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"jump1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"jta1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+87,0,"jump_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+88,0,"jump_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1217,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1217,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("flush_controller", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("br_taken", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+89+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+966+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("jump_type", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+195,0,"[0]",1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+196,0,"[1]",1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->declBit(c+31,0,"flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"flush_sqN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+91,0,"valid0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"valid1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+93,0,"diff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("issue", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1149,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("IN_alu_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1204,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 102,0);
    tracep->declArray(c+1208,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 102,0);
    tracep->popPrefix();
    tracep->pushPrefix("IN_mul_div_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1212,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->popPrefix();
    tracep->pushPrefix("IN_lsu_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+1213,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 62,0);
    tracep->popPrefix();
    tracep->declBit(c+31,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"flush_sqN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("tag_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+1044,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1045,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+1046,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1047,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+1048,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1049,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+1050,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1051,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("RF_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1085,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1086,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1087,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1088,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1089,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1090,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1091,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1092,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("IN_busy", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+1060+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+510+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1052+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+1056+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("OUT_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+468,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->declArray(c+471,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->declArray(c+474,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->popPrefix();
    tracep->pushPrefix("OUT_lsu_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+154,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 113,0);
    tracep->popPrefix();
    tracep->pushPrefix("OUT_br_taken", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+65+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("OUT_jump_type", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+158,0,"[0]",1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+159,0,"[1]",1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("OUT_busy", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+464+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("check_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+2,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+3,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+4,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+5,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+6,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+7,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+8,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("read_tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1077,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1078,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1079,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1080,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1081,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1082,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1083,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1084,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+30,0,"jta2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"jump2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("pc", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+197+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("instr_sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+968+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("instr_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+970+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("alu_rs1_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+199+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("alu_imm", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+201+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("gen_agu_buffer[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("lsu_issue_buffer_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1231,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1149,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1232,0,"IN_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 62,0);
    tracep->declBit(c+31,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"flush_sqN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("tag_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1063+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("RF_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1109+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+510+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1052+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+1056+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declArray(c+171,0,"OUT_instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 113,0);
    tracep->pushPrefix("check_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+9+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("read_tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1111+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+203,0,"OUT_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("queue", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+204,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+207,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+210,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+213,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+216,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+219,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+222,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+225,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->popPrefix();
    tracep->declBus(c+228,0,"tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1113,0,"ready_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1114,0,"issue_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1115,0,"issue_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+94,0,"rs1_data_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"rs2_data_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+96,0,"issue_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1065,0,"dispatch_ready_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1066,0,"dispatch_ready_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1231,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1113,0,"req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1114,0,"grant_idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1115,0,"grant_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1116,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1234,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1117,0,"r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1118,0,"r2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+229,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+97,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+98,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+230,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("v_queue", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+231,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+234,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+237,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+240,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+243,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+246,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+249,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+252,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->popPrefix();
    tracep->declBus(c+255,0,"v_tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+256,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+257,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+258,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+259,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+260,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+261,0,"diff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_alu_buffer[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("alu_issue_buffer_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1231,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1235,0,"NUM_INT_FU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1149,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1236,0,"IN_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 102,0);
    tracep->declBit(c+31,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"flush_sqN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("tag_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1067+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("RF_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1119+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+510+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1052+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+1056+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declArray(c+183,0,"OUT_instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->declBit(c+99,0,"OUT_br_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+262,0,"OUT_jump_type",1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+263,0,"OUT_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+264,0,"rs1_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+265,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("check_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+11+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("read_tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1121+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+266,0,"OUT_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("queue", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+267,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+271,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+275,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+279,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+283,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+287,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+291,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+295,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->popPrefix();
    tracep->declBus(c+299,0,"tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1123,0,"ready_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1124,0,"issue_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1125,0,"issue_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+100,0,"rs1_data_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"rs2_data_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+102,0,"sel1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+103,0,"sel2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1185,0,"op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1186,0,"op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+13,0,"is_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"sel_ready2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1069,0,"dispatch_ready_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1070,0,"dispatch_ready_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"issue_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+100,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"br_type",5, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+99,0,"br_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1231,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1123,0,"req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1124,0,"grant_idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1125,0,"grant_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1126,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1234,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1127,0,"r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1128,0,"r2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+300,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+106,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+107,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+301,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("next_queue", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+302,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+306,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+310,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+314,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+318,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+322,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+326,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+330,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->popPrefix();
    tracep->declBus(c+334,0,"next_tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+335,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+336,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+337,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+338,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+339,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+340,0,"diff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_alu_buffer[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("alu_issue_buffer_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1231,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1235,0,"NUM_INT_FU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1149,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1240,0,"IN_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 102,0);
    tracep->declBit(c+31,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"flush_sqN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("tag_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1071+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("RF_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1129+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+510+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1052+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+1056+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declArray(c+189,0,"OUT_instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->declBit(c+108,0,"OUT_br_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+341,0,"OUT_jump_type",1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+342,0,"OUT_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+343,0,"rs1_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+344,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("check_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+15+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("read_tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1131+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+345,0,"OUT_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("queue", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+346,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+350,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+354,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+358,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+362,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+366,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+370,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+374,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->popPrefix();
    tracep->declBus(c+378,0,"tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1133,0,"ready_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1134,0,"issue_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1135,0,"issue_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+109,0,"rs1_data_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"rs2_data_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+111,0,"sel1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+112,0,"sel2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1187,0,"op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1188,0,"op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17,0,"is_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"sel_ready2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1073,0,"dispatch_ready_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1074,0,"dispatch_ready_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"issue_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+109,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"br_type",5, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+108,0,"br_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1231,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1133,0,"req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1134,0,"grant_idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1135,0,"grant_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1136,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1234,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1137,0,"r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1138,0,"r2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+379,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+115,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+116,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+380,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("next_queue", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+381,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+385,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+389,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+393,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+397,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+401,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+405,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+409,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->popPrefix();
    tracep->declBus(c+413,0,"next_tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+414,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+415,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+416,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+417,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+418,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+419,0,"diff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_mul_div_buffer[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mul_div_issue_buffer_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1231,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1235,0,"NUM_INT_FU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1149,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1244,0,"IN_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBit(c+31,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"flush_sqN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("tag_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1075+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("RF_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1139+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+1061,0,"IN_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("CDB_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+510+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1052+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+1056+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declArray(c+963,0,"OUT_instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->pushPrefix("check_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+19+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("read_tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1141+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+972,0,"OUT_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("queue", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+973,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+974,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+975,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+976,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+977,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+978,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+979,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+980,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->declBus(c+981,0,"tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1143,0,"ready_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1144,0,"issue_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1145,0,"issue_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+117,0,"rs1_data_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"rs2_data_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+119,0,"issue_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1231,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1143,0,"req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1144,0,"grant_idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1145,0,"grant_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1146,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1234,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1147,0,"r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1148,0,"r2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+982,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+120,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+121,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+420,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("v_queue", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+983,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+984,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+985,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+986,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+987,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+988,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+989,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+990,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->declBus(c+991,0,"v_tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+421,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+422,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+992,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+423,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+424,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+993,0,"diff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ta_gen2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("IN_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+970+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("br_taken", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+65+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("jump_type", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+158,0,"[0]",1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+159,0,"[1]",1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("instr_sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+968+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("pc", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+197+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("alu_rs1_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+199+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("imm", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+201+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+30,0,"jta2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+27,0,"jump2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"oldest_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+123,0,"oldest_sqN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1217,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1217,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("lsu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1149,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1150,0,"clk_m",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1152,0,"rst_m",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1232,0,"dispatch_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 62,0);
    tracep->declArray(c+707,0,"agu_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->pushPrefix("commit_sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+950+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+31,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"flush_sqN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+523,0,"OUT_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+710,0,"OUT_cdb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBit(c+21,0,"is_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+22,0,"is_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"stb_alloc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+712,0,"stb_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 73,0);
    tracep->declBus(c+24,0,"ldb_alloc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declQuad(c+715,0,"ldb_addr_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->pushPrefix("stb_mem_req", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1035,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 66,0);
    tracep->declArray(c+1038,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 66,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem_stall", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+425+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("stb_fwd", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+717,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+719,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+721,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+723,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+725,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+727,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+729,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+731,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+733,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+735,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+737,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+739,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+741,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+743,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+745,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+747,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->popPrefix();
    tracep->declBit(c+523,0,"str_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ldb_mem_req", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+749,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+751,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->popPrefix();
    tracep->pushPrefix("ldb_mem_resp", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+994,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+996,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->popPrefix();
    tracep->declBit(c+1245,0,"ld_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_dmem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1149,0,"clk_cpu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"rst_cpu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1150,0,"clk_mem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1152,0,"rst_mem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("wr_req", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1035,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 66,0);
    tracep->declArray(c+1038,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 66,0);
    tracep->popPrefix();
    tracep->pushPrefix("wr_stall", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+425+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_req", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+749,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+751,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->popPrefix();
    tracep->pushPrefix("rd_resp", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+994,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+996,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->popPrefix();
    tracep->pushPrefix("rd_stall", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+427+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("wr_req_held", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+429,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 66,0);
    tracep->declArray(c+432,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 66,0);
    tracep->popPrefix();
    tracep->pushPrefix("rd_req_held", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+435,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+437,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->popPrefix();
    tracep->pushPrefix("wr_pending", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+439+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_pending", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+441+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("wr_ack_sync", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+443+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_ack_sync", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+445+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("wr_valid_sync", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+129+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_valid_sync", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+131+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBus(c+1246,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1247,0,"BANK_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1248,0,"BANK_AW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("wr_ack_mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+935+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_ack_mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+937+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_data_mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+939+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_tag_mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1249+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_resp_valid_mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+133+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("wr_valid_sync_r", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+135+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_valid_sync_r", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+137+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("g_ack_sync[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_rd_ack", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1251,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1149,0,"clk_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"rst_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+941,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+447,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+448,0,"ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+447,0,"ff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_wr_ack", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1251,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1149,0,"clk_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"rst_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+942,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+449,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+450,0,"ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+449,0,"ff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_ack_sync[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_rd_ack", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1251,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1149,0,"clk_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"rst_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+943,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+451,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+452,0,"ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+451,0,"ff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_wr_ack", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1251,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1149,0,"clk_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"rst_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+944,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+453,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+454,0,"ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+453,0,"ff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_req_sync[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_rd_sync", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1251,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1150,0,"clk_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1152,0,"rst_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+455,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+139,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+140,0,"ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+139,0,"ff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_wr_sync", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1251,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1150,0,"clk_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1152,0,"rst_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+456,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+141,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+142,0,"ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+141,0,"ff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_req_sync[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_rd_sync", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1251,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1150,0,"clk_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1152,0,"rst_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+457,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+143,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+144,0,"ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+143,0,"ff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_wr_sync", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1251,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1150,0,"clk_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1152,0,"rst_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+458,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+145,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+146,0,"ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+145,0,"ff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+459,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+460,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+147,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+148,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+149,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+150,0,"be",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+151,0,"bsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+152,0,"boff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+153,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+461,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+462,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_ldb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1149,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+24,0,"alloc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declQuad(c+715,0,"addr_wb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->pushPrefix("stb_fwd", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+717,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+719,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+721,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+723,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+725,0,"[4]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+727,0,"[5]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+729,0,"[6]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+731,0,"[7]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+733,0,"[8]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+735,0,"[9]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+737,0,"[10]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+739,0,"[11]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+741,0,"[12]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+743,0,"[13]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+745,0,"[14]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+747,0,"[15]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->popPrefix();
    tracep->declBit(c+31,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"flush_sqN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("mem_resp", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+994,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+996,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem_req", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+749,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+751,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->popPrefix();
    tracep->declQuad(c+710,0,"cdb_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBit(c+1245,0,"ld_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("entries", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+753,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+756,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+759,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+762,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+765,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+768,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+771,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+774,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+777,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+780,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+783,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+786,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+789,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+792,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+795,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+798,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->popPrefix();
    tracep->declBus(c+801,0,"alloc_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+802,0,"ta_wb_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("req_idx", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+803+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+805,0,"broadcast_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+806,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+807,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1252,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+808,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+809,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1221,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+810,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+811,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1252,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1217,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1252,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+812,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+813,0,"num_flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+814,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_stb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1149,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+23,0,"alloc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+712,0,"wb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 73,0);
    tracep->pushPrefix("commit_sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+950+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+31,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"flush_sqN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("mem_req", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1035,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 66,0);
    tracep->declArray(c+1038,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 66,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem_stall", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+425+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("fwd", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+717,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+719,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+721,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+723,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+725,0,"[4]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+727,0,"[5]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+729,0,"[6]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+731,0,"[7]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+733,0,"[8]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+735,0,"[9]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+737,0,"[10]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+739,0,"[11]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+741,0,"[12]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+743,0,"[13]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+745,0,"[14]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+747,0,"[15]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->popPrefix();
    tracep->declBit(c+523,0,"str_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1253,0,"PTR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1254,0,"PTR_MASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("entries", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+815,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+818,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+821,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+824,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+827,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+830,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+833,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+836,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+839,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+842,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+845,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+848,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+851,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+854,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+857,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+860,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->popPrefix();
    tracep->declBus(c+863,0,"tail_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+864,0,"drain_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+865,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+124,0,"new_tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+125,0,"on_flush_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1221,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1217,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1041,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+126,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+127,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+866,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+867,0,"drain_inc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+868,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+869,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+870,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+871,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+872,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("prefetch", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1149,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+477,0,"IN_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"jta1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"jta2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+26,0,"jump1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"jump2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+128,0,"consumed",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("OUT_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+479+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+478,0,"out_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+873,0,"fetch_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1189,0,"in_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("IMEM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1149,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+874,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+479+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1255,0,"WORD_ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1218,0,"MEM_WORDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+875,0,"block_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+876,0,"base_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+25,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+877,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("PC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1149,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1189,0,"IN_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+705,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+478,0,"OUT_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+478,0,"pc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("register_file", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1149,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rs1_addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1101+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs2_addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1105+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1052+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_write_en", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+1056+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+510+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs1_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1093+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs2_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1097+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+463,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("rename", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1149,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1151,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1005,0,"ROB_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1202,0,"dispatch_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+489,0,"chkpt_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("IN_specTag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+32+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("commit_packet", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+945,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+946,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->popPrefix();
    tracep->pushPrefix("IN_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+481,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 101,0);
    tracep->declArray(c+485,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 101,0);
    tracep->popPrefix();
    tracep->pushPrefix("CDB_tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1052+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+1056+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("read_tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+2,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+3,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+4,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+5,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+6,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+7,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+8,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("OUT_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+490,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+494,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+1044,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1045,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+1046,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1047,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+1048,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1049,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+1050,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1051,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("chkpt", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+498+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("chkpt_sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+500+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+998,0,"OUT_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("OUT_rd", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+518+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1218,0,"NUM_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("rename_table", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+878,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+879,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+880,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+881,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+882,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+883,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+884,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+885,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+886,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+887,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+888,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+889,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+890,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+891,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+892,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+893,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+894,0,"[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+895,0,"[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+896,0,"[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+897,0,"[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+898,0,"[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+899,0,"[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+900,0,"[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+901,0,"[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+902,0,"[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+903,0,"[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+904,0,"[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+905,0,"[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+906,0,"[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+907,0,"[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+908,0,"[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+909,0,"[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->popPrefix();
    tracep->declQuad(c+910,0,"ftb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+912,0,"req_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("masked", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+1190+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("onehot", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+1196+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("chosen", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1200+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("req_count", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+913+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+915,0,"chkpt_need",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+998,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("free_CommTag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1042+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1256,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+916,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+917,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+918,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+919,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+920,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+921,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+922,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+923,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk18", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+924,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk19", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+925,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1217,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk20", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+926,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk21", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+927,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk22", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+928,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk23", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+929,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk24", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+930,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk25", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+931,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk26", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+932,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk27", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+933,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1256,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1217,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1257,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1217,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1257,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+934,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1258,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1217,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1217,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1258,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1217,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1259,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1222,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1258,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__include_pkg__0(Vcore___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__include_pkg__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1260,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1261,0,"FETCH_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1261,0,"DECODE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1261,0,"RENAME_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1262,0,"ISSUE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1261,0,"COMMIT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1263,0,"REG_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1264,0,"DMEM_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1265,0,"IMEM_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1266,0,"ROB_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1267,0,"FETCHB_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1265,0,"ISSUEB_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1267,0,"STOREB_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1267,0,"LOADB_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1261,0,"NUM_ALU_FU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1268,0,"NUM_MUL_DIV_FU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1268,0,"NUM_AGU_FU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1268,0,"NUM_LD_BUFFER_WR_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1269,0,"NUM_INT_FU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1262,0,"NUM_CDB_LINES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1270,0,"SQN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1271,0,"SQN_MASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_top(Vcore___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_top\n"); );
    // Body
    Vcore___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcore___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vcore___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vcore___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vcore___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vcore___024root__trace_register(Vcore___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vcore___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vcore___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vcore___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vcore___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcore___024root__trace_const_0_sub_0(Vcore___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vcore___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_const_0\n"); );
    // Init
    Vcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcore___024root*>(voidSelf);
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcore___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcore___024root__trace_const_0_sub_0(Vcore___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1202,(vlSelf->core__DOT__dispatch_busy));
    bufp->fullBit(oldp+1203,(vlSelf->core__DOT__lsu_buffer_busy[0]));
    bufp->fullWData(oldp+1204,(vlSelf->core__DOT__alu_dispatch_instr
                               [0U]),103);
    bufp->fullWData(oldp+1208,(vlSelf->core__DOT__alu_dispatch_instr
                               [1U]),103);
    bufp->fullIData(oldp+1212,(vlSelf->core__DOT__mul_div_dispatch_instr
                               [0U]),30);
    bufp->fullQData(oldp+1213,(vlSelf->core__DOT__lsu_dispatch_instr
                               [0U]),63);
    bufp->fullCData(oldp+1215,(vlSelf->core__DOT__ROB__DOT__num_wr),2);
    bufp->fullCData(oldp+1216,(vlSelf->core__DOT__ROB__DOT__num_commit),2);
    bufp->fullIData(oldp+1217,(2U),32);
    bufp->fullIData(oldp+1218,(0x40U),32);
    bufp->fullIData(oldp+1219,(0x10U),32);
    bufp->fullIData(oldp+1220,(4U),32);
    bufp->fullIData(oldp+1221,(0x10U),32);
    bufp->fullIData(oldp+1222,(1U),32);
    bufp->fullQData(oldp+1223,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe[0]),64);
    bufp->fullQData(oldp+1225,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe[1]),64);
    bufp->fullQData(oldp+1227,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe[2]),64);
    bufp->fullIData(oldp+1229,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_quotient),32);
    bufp->fullIData(oldp+1230,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_remainder),32);
    bufp->fullIData(oldp+1231,(8U),32);
    bufp->fullQData(oldp+1232,(vlSelf->core__DOT__lsu_dispatch_instr
                               [0U]),63);
    bufp->fullIData(oldp+1234,(8U),32);
    bufp->fullIData(oldp+1235,(3U),32);
    bufp->fullWData(oldp+1236,(vlSelf->core__DOT__alu_dispatch_instr
                               [0U]),103);
    bufp->fullWData(oldp+1240,(vlSelf->core__DOT__alu_dispatch_instr
                               [1U]),103);
    bufp->fullIData(oldp+1244,(vlSelf->core__DOT__mul_div_dispatch_instr
                               [0U]),30);
    bufp->fullBit(oldp+1245,(0U));
    bufp->fullIData(oldp+1246,(0x100U),32);
    bufp->fullIData(oldp+1247,(0x80U),32);
    bufp->fullIData(oldp+1248,(7U),32);
    bufp->fullCData(oldp+1249,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_tag_mem[0]),6);
    bufp->fullCData(oldp+1250,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_tag_mem[1]),6);
    bufp->fullIData(oldp+1251,(1U),32);
    bufp->fullIData(oldp+1252,(0xffffffffU),32);
    bufp->fullIData(oldp+1253,(4U),32);
    bufp->fullCData(oldp+1254,(0xfU),4);
    bufp->fullIData(oldp+1255,(6U),32);
    bufp->fullIData(oldp+1256,(0x40U),32);
    bufp->fullIData(oldp+1257,(0x20U),32);
    bufp->fullIData(oldp+1258,(4U),32);
    bufp->fullIData(oldp+1259,(3U),32);
    bufp->fullIData(oldp+1260,(0x20U),32);
    bufp->fullIData(oldp+1261,(2U),32);
    bufp->fullIData(oldp+1262,(4U),32);
    bufp->fullIData(oldp+1263,(6U),32);
    bufp->fullIData(oldp+1264,(0xaU),32);
    bufp->fullIData(oldp+1265,(8U),32);
    bufp->fullIData(oldp+1266,(0x40U),32);
    bufp->fullIData(oldp+1267,(0x10U),32);
    bufp->fullIData(oldp+1268,(1U),32);
    bufp->fullIData(oldp+1269,(3U),32);
    bufp->fullIData(oldp+1270,(7U),32);
    bufp->fullCData(oldp+1271,(0x7fU),8);
}

VL_ATTR_COLD void Vcore___024root__trace_full_0_sub_0(Vcore___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vcore___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_full_0\n"); );
    // Init
    Vcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcore___024root*>(voidSelf);
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcore___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcore___024root__trace_full_0_sub_0(Vcore___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->core__DOT__read_ready
                            [0U][0U]),6);
    bufp->fullCData(oldp+2,(vlSelf->core__DOT__read_ready
                            [0U][1U]),6);
    bufp->fullCData(oldp+3,(vlSelf->core__DOT__read_ready
                            [1U][0U]),6);
    bufp->fullCData(oldp+4,(vlSelf->core__DOT__read_ready
                            [1U][1U]),6);
    bufp->fullCData(oldp+5,(vlSelf->core__DOT__read_ready
                            [2U][0U]),6);
    bufp->fullCData(oldp+6,(vlSelf->core__DOT__read_ready
                            [2U][1U]),6);
    bufp->fullCData(oldp+7,(vlSelf->core__DOT__read_ready
                            [3U][0U]),6);
    bufp->fullCData(oldp+8,(vlSelf->core__DOT__read_ready
                            [3U][1U]),6);
    bufp->fullCData(oldp+9,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__check_ready[0]),6);
    bufp->fullCData(oldp+10,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__check_ready[1]),6);
    bufp->fullCData(oldp+11,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__check_ready[0]),6);
    bufp->fullCData(oldp+12,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__check_ready[1]),6);
    bufp->fullBit(oldp+13,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__is_jump));
    bufp->fullBit(oldp+14,((1U & ((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__is_jump) 
                                  | (vlSelf->core__DOT__alu_dispatch_instr
                                     [0U][0U] >> 8U)))));
    bufp->fullCData(oldp+15,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__check_ready[0]),6);
    bufp->fullCData(oldp+16,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__check_ready[1]),6);
    bufp->fullBit(oldp+17,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__is_jump));
    bufp->fullBit(oldp+18,((1U & ((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__is_jump) 
                                  | (vlSelf->core__DOT__alu_dispatch_instr
                                     [1U][0U] >> 8U)))));
    bufp->fullCData(oldp+19,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__check_ready[0]),6);
    bufp->fullCData(oldp+20,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__check_ready[1]),6);
    bufp->fullBit(oldp+21,(vlSelf->core__DOT__lsu__DOT__is_store));
    bufp->fullBit(oldp+22,(vlSelf->core__DOT__lsu__DOT__is_load));
    bufp->fullCData(oldp+23,(vlSelf->core__DOT__lsu__DOT__stb_alloc),8);
    bufp->fullSData(oldp+24,(vlSelf->core__DOT__lsu__DOT__ldb_alloc),14);
    bufp->fullIData(oldp+25,(vlSelf->core__DOT__prefetch__DOT__IMEM__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+26,(vlSelf->core__DOT__jump1));
    bufp->fullBit(oldp+27,(vlSelf->core__DOT__jump2));
    bufp->fullCData(oldp+28,(vlSelf->core__DOT__consumed),2);
    bufp->fullIData(oldp+29,(vlSelf->core__DOT__jta1),32);
    bufp->fullIData(oldp+30,(vlSelf->core__DOT__jta2),32);
    bufp->fullBit(oldp+31,(vlSelf->core__DOT__flush));
    bufp->fullCData(oldp+32,(vlSelf->core__DOT__restore_specTag[0]),6);
    bufp->fullCData(oldp+33,(vlSelf->core__DOT__restore_specTag[1]),6);
    bufp->fullCData(oldp+34,(vlSelf->core__DOT__restore_specTag[2]),6);
    bufp->fullCData(oldp+35,(vlSelf->core__DOT__restore_specTag[3]),6);
    bufp->fullCData(oldp+36,(vlSelf->core__DOT__restore_specTag[4]),6);
    bufp->fullCData(oldp+37,(vlSelf->core__DOT__restore_specTag[5]),6);
    bufp->fullCData(oldp+38,(vlSelf->core__DOT__restore_specTag[6]),6);
    bufp->fullCData(oldp+39,(vlSelf->core__DOT__restore_specTag[7]),6);
    bufp->fullCData(oldp+40,(vlSelf->core__DOT__restore_specTag[8]),6);
    bufp->fullCData(oldp+41,(vlSelf->core__DOT__restore_specTag[9]),6);
    bufp->fullCData(oldp+42,(vlSelf->core__DOT__restore_specTag[10]),6);
    bufp->fullCData(oldp+43,(vlSelf->core__DOT__restore_specTag[11]),6);
    bufp->fullCData(oldp+44,(vlSelf->core__DOT__restore_specTag[12]),6);
    bufp->fullCData(oldp+45,(vlSelf->core__DOT__restore_specTag[13]),6);
    bufp->fullCData(oldp+46,(vlSelf->core__DOT__restore_specTag[14]),6);
    bufp->fullCData(oldp+47,(vlSelf->core__DOT__restore_specTag[15]),6);
    bufp->fullCData(oldp+48,(vlSelf->core__DOT__restore_specTag[16]),6);
    bufp->fullCData(oldp+49,(vlSelf->core__DOT__restore_specTag[17]),6);
    bufp->fullCData(oldp+50,(vlSelf->core__DOT__restore_specTag[18]),6);
    bufp->fullCData(oldp+51,(vlSelf->core__DOT__restore_specTag[19]),6);
    bufp->fullCData(oldp+52,(vlSelf->core__DOT__restore_specTag[20]),6);
    bufp->fullCData(oldp+53,(vlSelf->core__DOT__restore_specTag[21]),6);
    bufp->fullCData(oldp+54,(vlSelf->core__DOT__restore_specTag[22]),6);
    bufp->fullCData(oldp+55,(vlSelf->core__DOT__restore_specTag[23]),6);
    bufp->fullCData(oldp+56,(vlSelf->core__DOT__restore_specTag[24]),6);
    bufp->fullCData(oldp+57,(vlSelf->core__DOT__restore_specTag[25]),6);
    bufp->fullCData(oldp+58,(vlSelf->core__DOT__restore_specTag[26]),6);
    bufp->fullCData(oldp+59,(vlSelf->core__DOT__restore_specTag[27]),6);
    bufp->fullCData(oldp+60,(vlSelf->core__DOT__restore_specTag[28]),6);
    bufp->fullCData(oldp+61,(vlSelf->core__DOT__restore_specTag[29]),6);
    bufp->fullCData(oldp+62,(vlSelf->core__DOT__restore_specTag[30]),6);
    bufp->fullCData(oldp+63,(vlSelf->core__DOT__restore_specTag[31]),6);
    bufp->fullCData(oldp+64,(vlSelf->core__DOT__flush_sqN),7);
    bufp->fullBit(oldp+65,(vlSelf->core__DOT__br_taken[0]));
    bufp->fullBit(oldp+66,(vlSelf->core__DOT__br_taken[1]));
    bufp->fullBit(oldp+67,(vlSelf->core__DOT__fetch__DOT__invalidate));
    bufp->fullWData(oldp+68,(vlSelf->core__DOT__fetch__DOT__aligner_out
                             [0U]),65);
    bufp->fullWData(oldp+71,(vlSelf->core__DOT__fetch__DOT__aligner_out
                             [1U]),65);
    bufp->fullIData(oldp+74,(vlSelf->core__DOT__fetch__DOT__pc_array[0]),32);
    bufp->fullIData(oldp+75,(vlSelf->core__DOT__fetch__DOT__pc_array[1]),32);
    bufp->fullBit(oldp+76,(vlSelf->core__DOT__fetch__DOT__valid[0]));
    bufp->fullBit(oldp+77,(vlSelf->core__DOT__fetch__DOT__valid[1]));
    bufp->fullCData(oldp+78,(vlSelf->core__DOT__fetch__DOT__opcode[0]),7);
    bufp->fullCData(oldp+79,(vlSelf->core__DOT__fetch__DOT__opcode[1]),7);
    bufp->fullIData(oldp+80,(vlSelf->core__DOT__fetch__DOT__imm[0]),21);
    bufp->fullIData(oldp+81,(vlSelf->core__DOT__fetch__DOT__imm[1]),21);
    bufp->fullIData(oldp+82,(vlSelf->core__DOT__fetch__DOT__iw),32);
    bufp->fullCData(oldp+83,(vlSelf->core__DOT__fetch__DOT__FB__DOT__in_valid_count),2);
    bufp->fullBit(oldp+84,(vlSelf->core__DOT__fetch__DOT__IA__DOT__pc_align));
    bufp->fullBit(oldp+85,(vlSelf->core__DOT__fetch__DOT__IA__DOT__pc_valid[0]));
    bufp->fullBit(oldp+86,(vlSelf->core__DOT__fetch__DOT__IA__DOT__pc_valid[1]));
    bufp->fullBit(oldp+87,(vlSelf->core__DOT__fetch__DOT__JTA1__DOT__jump_valid));
    bufp->fullBit(oldp+88,(vlSelf->core__DOT__fetch__DOT__JTA1__DOT__jump_index));
    bufp->fullBit(oldp+89,(vlSelf->core__DOT____Vcellinp__flush_controller__br_taken[0]));
    bufp->fullBit(oldp+90,(vlSelf->core__DOT____Vcellinp__flush_controller__br_taken[1]));
    bufp->fullBit(oldp+91,(vlSelf->core__DOT__flush_controller__DOT__unnamedblk1__DOT__valid0));
    bufp->fullBit(oldp+92,(vlSelf->core__DOT__flush_controller__DOT__unnamedblk1__DOT__valid1));
    bufp->fullCData(oldp+93,(vlSelf->core__DOT__flush_controller__DOT__unnamedblk1__DOT__diff),7);
    bufp->fullIData(oldp+94,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs1_data_selected),32);
    bufp->fullIData(oldp+95,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs2_data_selected),32);
    bufp->fullBit(oldp+96,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_valid));
    bufp->fullIData(oldp+97,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk4__DOT__j),32);
    bufp->fullIData(oldp+98,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk5__DOT__j),32);
    bufp->fullBit(oldp+99,(((1U & (~ ((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type) 
                                      >> 3U))) && (
                                                   (4U 
                                                    & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type))
                                                     ? 
                                                    ((1U 
                                                      & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type))) 
                                                     && (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                                                         >= vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type))
                                                      ? 
                                                     (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                                                      < vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected)
                                                      : 
                                                     VL_GTES_III(32, vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected, vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected)))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type))
                                                      ? 
                                                     VL_LTS_III(32, vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected, vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected)
                                                      : 
                                                     (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                                                      != vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type)) 
                                                     && (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                                                         == vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected)))))));
    bufp->fullIData(oldp+100,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected),32);
    bufp->fullIData(oldp+101,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected),32);
    bufp->fullBit(oldp+102,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel1));
    bufp->fullCData(oldp+103,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel2),2);
    bufp->fullBit(oldp+104,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_valid));
    bufp->fullCData(oldp+105,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type),4);
    bufp->fullIData(oldp+106,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk4__DOT__j),32);
    bufp->fullIData(oldp+107,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk5__DOT__j),32);
    bufp->fullBit(oldp+108,(((1U & (~ ((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type) 
                                       >> 3U))) && 
                             ((4U & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type))
                               ? ((2U & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type))
                                   ? ((1U & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type))) 
                                      && (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                                          >= vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected))
                                   : ((1U & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type))
                                       ? (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                                          < vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected)
                                       : VL_GTES_III(32, vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected, vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected)))
                               : ((2U & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type))
                                   ? ((1U & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type))
                                       ? VL_LTS_III(32, vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected, vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected)
                                       : (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                                          != vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected))
                                   : ((1U & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type)) 
                                      && (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                                          == vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected)))))));
    bufp->fullIData(oldp+109,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected),32);
    bufp->fullIData(oldp+110,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected),32);
    bufp->fullBit(oldp+111,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel1));
    bufp->fullCData(oldp+112,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel2),2);
    bufp->fullBit(oldp+113,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_valid));
    bufp->fullCData(oldp+114,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type),4);
    bufp->fullIData(oldp+115,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk4__DOT__j),32);
    bufp->fullIData(oldp+116,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk5__DOT__j),32);
    bufp->fullIData(oldp+117,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs1_data_selected),32);
    bufp->fullIData(oldp+118,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs2_data_selected),32);
    bufp->fullBit(oldp+119,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_valid));
    bufp->fullIData(oldp+120,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk4__DOT__j),32);
    bufp->fullIData(oldp+121,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk5__DOT__j),32);
    bufp->fullBit(oldp+122,(vlSelf->core__DOT__issue__DOT__ta_gen2__DOT__oldest_idx));
    bufp->fullCData(oldp+123,(vlSelf->core__DOT__issue__DOT__ta_gen2__DOT__oldest_sqN),7);
    bufp->fullCData(oldp+124,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__new_tail),4);
    bufp->fullSData(oldp+125,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__on_flush_valid),16);
    bufp->fullCData(oldp+126,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__idx),4);
    bufp->fullIData(oldp+127,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i),32);
    bufp->fullBit(oldp+128,((1U & (IData)(vlSelf->core__DOT__consumed))));
    bufp->fullBit(oldp+129,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync[0]));
    bufp->fullBit(oldp+130,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync[1]));
    bufp->fullBit(oldp+131,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync[0]));
    bufp->fullBit(oldp+132,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync[1]));
    bufp->fullBit(oldp+133,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_resp_valid_mem[0]));
    bufp->fullBit(oldp+134,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_resp_valid_mem[1]));
    bufp->fullBit(oldp+135,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r[0]));
    bufp->fullBit(oldp+136,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r[1]));
    bufp->fullBit(oldp+137,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r[0]));
    bufp->fullBit(oldp+138,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r[1]));
    bufp->fullBit(oldp+139,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_rd_sync__DOT__ff2));
    bufp->fullBit(oldp+140,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_rd_sync__DOT__ff1));
    bufp->fullBit(oldp+141,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_wr_sync__DOT__ff2));
    bufp->fullBit(oldp+142,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_wr_sync__DOT__ff1));
    bufp->fullBit(oldp+143,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_rd_sync__DOT__ff2));
    bufp->fullBit(oldp+144,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_rd_sync__DOT__ff1));
    bufp->fullBit(oldp+145,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_wr_sync__DOT__ff2));
    bufp->fullBit(oldp+146,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_wr_sync__DOT__ff1));
    bufp->fullIData(oldp+147,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+148,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+149,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__i),32);
    bufp->fullCData(oldp+150,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__be),4);
    bufp->fullBit(oldp+151,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__bsel));
    bufp->fullCData(oldp+152,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__boff),7);
    bufp->fullIData(oldp+153,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk7__DOT__i),32);
    bufp->fullWData(oldp+154,(vlSelf->core__DOT__lsu_issue_instr
                              [0U]),114);
    bufp->fullCData(oldp+158,(vlSelf->core__DOT__jump_type
                              [0U]),2);
    bufp->fullCData(oldp+159,(vlSelf->core__DOT__jump_type
                              [1U]),2);
    bufp->fullCData(oldp+160,(vlSelf->core__DOT__ROB__DOT__count),7);
    bufp->fullCData(oldp+161,(vlSelf->core__DOT__ROB__DOT__head),6);
    bufp->fullCData(oldp+162,(vlSelf->core__DOT__ROB__DOT__tail),6);
    bufp->fullCData(oldp+163,(vlSelf->core__DOT__ROB__DOT__alloc_index[0]),6);
    bufp->fullCData(oldp+164,(vlSelf->core__DOT__ROB__DOT__alloc_index[1]),6);
    bufp->fullBit(oldp+165,((0x40U == (IData)(vlSelf->core__DOT__ROB__DOT__count))));
    bufp->fullIData(oldp+166,(vlSelf->core__DOT__ROB__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+167,(vlSelf->core__DOT__ROB__DOT__unnamedblk6__DOT__i),32);
    bufp->fullIData(oldp+168,(vlSelf->core__DOT__ROB__DOT__unnamedblk7__DOT__i),32);
    bufp->fullIData(oldp+169,(vlSelf->core__DOT__ROB__DOT__unnamedblk8__DOT__i),32);
    bufp->fullIData(oldp+170,(vlSelf->core__DOT__ROB__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j),32);
    bufp->fullWData(oldp+171,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr),114);
    __Vtemp_1[1U] = (((IData)((((QData)((IData)((((
                                                   vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U] 
                                                   << 0x16U) 
                                                  | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                                                     >> 0xaU)) 
                                                 + 
                                                 ((vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                                                   << 0x16U) 
                                                  | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U] 
                                                     >> 0xaU))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U] 
                                                              << 0x16U) 
                                                             | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U] 
                                                                >> 0xaU)))))) 
                      >> 0x1bU) | ((IData)(((((QData)((IData)(
                                                              (((vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U] 
                                                                 << 0x16U) 
                                                                | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                                                                   >> 0xaU)) 
                                                               + 
                                                               ((vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                                                                 << 0x16U) 
                                                                | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U] 
                                                                   >> 0xaU))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U] 
                                                                 << 0x16U) 
                                                                | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U] 
                                                                   >> 0xaU))))) 
                                            >> 0x20U)) 
                                   << 5U));
    __Vtemp_2[0U] = (((IData)((((QData)((IData)((((
                                                   vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U] 
                                                   << 0x16U) 
                                                  | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                                                     >> 0xaU)) 
                                                 + 
                                                 ((vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                                                   << 0x16U) 
                                                  | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U] 
                                                     >> 0xaU))))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U] 
                                                              << 0x16U) 
                                                             | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U] 
                                                                >> 0xaU)))))) 
                      << 5U) | ((((IData)(vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__is_store)
                                   ? 0U : 1U) << 3U) 
                                | (((IData)(vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__data_size) 
                                    << 1U) | (IData)(vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__is_unsigned))));
    __Vtemp_2[1U] = __Vtemp_1[1U];
    __Vtemp_2[2U] = ((0x1fe0U & (vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U] 
                                 >> 5U)) | ((IData)(
                                                    ((((QData)((IData)(
                                                                       (((vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U] 
                                                                          << 0x16U) 
                                                                         | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                                                                            >> 0xaU)) 
                                                                        + 
                                                                        ((vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                                                                          << 0x16U) 
                                                                         | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U] 
                                                                            >> 0xaU))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        ((vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U] 
                                                                          << 0x16U) 
                                                                         | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U] 
                                                                            >> 0xaU))))) 
                                                     >> 0x20U)) 
                                            >> 0x1bU));
    bufp->fullWData(oldp+175,(__Vtemp_2),77);
    bufp->fullBit(oldp+178,(vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__is_load));
    bufp->fullBit(oldp+179,(vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__is_store));
    bufp->fullCData(oldp+180,(vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__data_size),2);
    bufp->fullBit(oldp+181,(vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__is_unsigned));
    bufp->fullIData(oldp+182,((((vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U] 
                                 << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                                              >> 0xaU)) 
                               + ((vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                                   << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U] 
                                                >> 0xaU)))),32);
    bufp->fullWData(oldp+183,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr),82);
    bufp->fullQData(oldp+186,((((QData)((IData)((0xffU 
                                                 & (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                                                    >> 0xaU)))) 
                                << 0x26U) | (((QData)((IData)(
                                                              (0x3fU 
                                                               & vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U]))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->core__DOT__execute__DOT__gen_alu_fu__BRA__0__KET____DOT__ALU_i__DOT__alu_result))))),46);
    bufp->fullIData(oldp+188,(vlSelf->core__DOT__execute__DOT__gen_alu_fu__BRA__0__KET____DOT__ALU_i__DOT__alu_result),32);
    bufp->fullWData(oldp+189,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr),82);
    bufp->fullQData(oldp+192,((((QData)((IData)((0xffU 
                                                 & (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                                                    >> 0xaU)))) 
                                << 0x26U) | (((QData)((IData)(
                                                              (0x3fU 
                                                               & vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U]))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->core__DOT__execute__DOT__gen_alu_fu__BRA__1__KET____DOT__ALU_i__DOT__alu_result))))),46);
    bufp->fullIData(oldp+194,(vlSelf->core__DOT__execute__DOT__gen_alu_fu__BRA__1__KET____DOT__ALU_i__DOT__alu_result),32);
    bufp->fullCData(oldp+195,(vlSelf->core__DOT____Vcellinp__flush_controller__jump_type
                              [0U]),2);
    bufp->fullCData(oldp+196,(vlSelf->core__DOT____Vcellinp__flush_controller__jump_type
                              [1U]),2);
    bufp->fullIData(oldp+197,(vlSelf->core__DOT__issue__DOT__pc[0]),32);
    bufp->fullIData(oldp+198,(vlSelf->core__DOT__issue__DOT__pc[1]),32);
    bufp->fullIData(oldp+199,(vlSelf->core__DOT__issue__DOT__alu_rs1_result[0]),32);
    bufp->fullIData(oldp+200,(vlSelf->core__DOT__issue__DOT__alu_rs1_result[1]),32);
    bufp->fullIData(oldp+201,(vlSelf->core__DOT__issue__DOT__alu_imm[0]),32);
    bufp->fullIData(oldp+202,(vlSelf->core__DOT__issue__DOT__alu_imm[1]),32);
    bufp->fullBit(oldp+203,((8U == (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__tail))));
    bufp->fullWData(oldp+204,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                              [0U]),65);
    bufp->fullWData(oldp+207,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                              [1U]),65);
    bufp->fullWData(oldp+210,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                              [2U]),65);
    bufp->fullWData(oldp+213,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                              [3U]),65);
    bufp->fullWData(oldp+216,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                              [4U]),65);
    bufp->fullWData(oldp+219,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                              [5U]),65);
    bufp->fullWData(oldp+222,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                              [6U]),65);
    bufp->fullWData(oldp+225,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                              [7U]),65);
    bufp->fullCData(oldp+228,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__tail),4);
    bufp->fullIData(oldp+229,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j),32);
    bufp->fullIData(oldp+230,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk6__DOT__i),32);
    bufp->fullWData(oldp+231,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                              [0U]),65);
    bufp->fullWData(oldp+234,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                              [1U]),65);
    bufp->fullWData(oldp+237,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                              [2U]),65);
    bufp->fullWData(oldp+240,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                              [3U]),65);
    bufp->fullWData(oldp+243,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                              [4U]),65);
    bufp->fullWData(oldp+246,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                              [5U]),65);
    bufp->fullWData(oldp+249,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                              [6U]),65);
    bufp->fullWData(oldp+252,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                              [7U]),65);
    bufp->fullCData(oldp+255,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail),4);
    bufp->fullIData(oldp+256,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk10__DOT__i),32);
    bufp->fullIData(oldp+257,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk11__DOT__i),32);
    bufp->fullIData(oldp+258,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j),32);
    bufp->fullIData(oldp+259,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk13__DOT__i),32);
    bufp->fullIData(oldp+260,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__i),32);
    bufp->fullCData(oldp+261,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff),7);
    bufp->fullCData(oldp+262,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_jump_type),2);
    bufp->fullIData(oldp+263,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_pc),32);
    bufp->fullIData(oldp+264,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__rs1_result),32);
    bufp->fullIData(oldp+265,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__imm),32);
    bufp->fullBit(oldp+266,((7U == (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__tail))));
    bufp->fullWData(oldp+267,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                              [0U]),105);
    bufp->fullWData(oldp+271,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                              [1U]),105);
    bufp->fullWData(oldp+275,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                              [2U]),105);
    bufp->fullWData(oldp+279,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                              [3U]),105);
    bufp->fullWData(oldp+283,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                              [4U]),105);
    bufp->fullWData(oldp+287,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                              [5U]),105);
    bufp->fullWData(oldp+291,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                              [6U]),105);
    bufp->fullWData(oldp+295,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                              [7U]),105);
    bufp->fullCData(oldp+299,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__tail),4);
    bufp->fullIData(oldp+300,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j),32);
    bufp->fullIData(oldp+301,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk6__DOT__i),32);
    bufp->fullWData(oldp+302,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                              [0U]),105);
    bufp->fullWData(oldp+306,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                              [1U]),105);
    bufp->fullWData(oldp+310,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                              [2U]),105);
    bufp->fullWData(oldp+314,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                              [3U]),105);
    bufp->fullWData(oldp+318,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                              [4U]),105);
    bufp->fullWData(oldp+322,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                              [5U]),105);
    bufp->fullWData(oldp+326,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                              [6U]),105);
    bufp->fullWData(oldp+330,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                              [7U]),105);
    bufp->fullCData(oldp+334,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail),4);
    bufp->fullIData(oldp+335,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk10__DOT__i),32);
    bufp->fullIData(oldp+336,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk11__DOT__i),32);
    bufp->fullIData(oldp+337,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j),32);
    bufp->fullIData(oldp+338,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk13__DOT__i),32);
    bufp->fullIData(oldp+339,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__i),32);
    bufp->fullCData(oldp+340,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff),7);
    bufp->fullCData(oldp+341,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_jump_type),2);
    bufp->fullIData(oldp+342,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_pc),32);
    bufp->fullIData(oldp+343,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__rs1_result),32);
    bufp->fullIData(oldp+344,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__imm),32);
    bufp->fullBit(oldp+345,((7U == (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__tail))));
    bufp->fullWData(oldp+346,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                              [0U]),105);
    bufp->fullWData(oldp+350,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                              [1U]),105);
    bufp->fullWData(oldp+354,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                              [2U]),105);
    bufp->fullWData(oldp+358,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                              [3U]),105);
    bufp->fullWData(oldp+362,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                              [4U]),105);
    bufp->fullWData(oldp+366,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                              [5U]),105);
    bufp->fullWData(oldp+370,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                              [6U]),105);
    bufp->fullWData(oldp+374,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                              [7U]),105);
    bufp->fullCData(oldp+378,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__tail),4);
    bufp->fullIData(oldp+379,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j),32);
    bufp->fullIData(oldp+380,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk6__DOT__i),32);
    bufp->fullWData(oldp+381,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                              [0U]),105);
    bufp->fullWData(oldp+385,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                              [1U]),105);
    bufp->fullWData(oldp+389,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                              [2U]),105);
    bufp->fullWData(oldp+393,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                              [3U]),105);
    bufp->fullWData(oldp+397,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                              [4U]),105);
    bufp->fullWData(oldp+401,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                              [5U]),105);
    bufp->fullWData(oldp+405,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                              [6U]),105);
    bufp->fullWData(oldp+409,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                              [7U]),105);
    bufp->fullCData(oldp+413,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail),4);
    bufp->fullIData(oldp+414,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk10__DOT__i),32);
    bufp->fullIData(oldp+415,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk11__DOT__i),32);
    bufp->fullIData(oldp+416,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j),32);
    bufp->fullIData(oldp+417,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk13__DOT__i),32);
    bufp->fullIData(oldp+418,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__i),32);
    bufp->fullCData(oldp+419,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff),7);
    bufp->fullIData(oldp+420,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk6__DOT__i),32);
    bufp->fullIData(oldp+421,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk10__DOT__i),32);
    bufp->fullIData(oldp+422,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk11__DOT__i),32);
    bufp->fullIData(oldp+423,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk13__DOT__i),32);
    bufp->fullIData(oldp+424,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__i),32);
    bufp->fullBit(oldp+425,(vlSelf->core__DOT__lsu__DOT__mem_stall[0]));
    bufp->fullBit(oldp+426,(vlSelf->core__DOT__lsu__DOT__mem_stall[1]));
    bufp->fullBit(oldp+427,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_stall[0]));
    bufp->fullBit(oldp+428,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_stall[1]));
    bufp->fullWData(oldp+429,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held
                              [0U]),67);
    bufp->fullWData(oldp+432,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held
                              [1U]),67);
    bufp->fullQData(oldp+435,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held
                              [0U]),43);
    bufp->fullQData(oldp+437,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held
                              [1U]),43);
    bufp->fullBit(oldp+439,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_pending[0]));
    bufp->fullBit(oldp+440,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_pending[1]));
    bufp->fullBit(oldp+441,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_pending[0]));
    bufp->fullBit(oldp+442,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_pending[1]));
    bufp->fullBit(oldp+443,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_sync[0]));
    bufp->fullBit(oldp+444,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_sync[1]));
    bufp->fullBit(oldp+445,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_sync[0]));
    bufp->fullBit(oldp+446,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_sync[1]));
    bufp->fullBit(oldp+447,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_rd_ack__DOT__ff2));
    bufp->fullBit(oldp+448,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_rd_ack__DOT__ff1));
    bufp->fullBit(oldp+449,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_wr_ack__DOT__ff2));
    bufp->fullBit(oldp+450,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_wr_ack__DOT__ff1));
    bufp->fullBit(oldp+451,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_rd_ack__DOT__ff2));
    bufp->fullBit(oldp+452,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_rd_ack__DOT__ff1));
    bufp->fullBit(oldp+453,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_wr_ack__DOT__ff2));
    bufp->fullBit(oldp+454,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_wr_ack__DOT__ff1));
    bufp->fullBit(oldp+455,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_pending
                            [0U]));
    bufp->fullBit(oldp+456,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_pending
                            [0U]));
    bufp->fullBit(oldp+457,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_pending
                            [1U]));
    bufp->fullBit(oldp+458,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_pending
                            [1U]));
    bufp->fullIData(oldp+459,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+460,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+461,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk8__DOT__i),32);
    bufp->fullIData(oldp+462,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk9__DOT__i),32);
    bufp->fullIData(oldp+463,(vlSelf->core__DOT__register_file__DOT__i),32);
    bufp->fullBit(oldp+464,(vlSelf->core__DOT__issue_buffer_busy[0]));
    bufp->fullBit(oldp+465,(vlSelf->core__DOT__issue_buffer_busy[1]));
    bufp->fullBit(oldp+466,(vlSelf->core__DOT__issue_buffer_busy[2]));
    bufp->fullBit(oldp+467,(vlSelf->core__DOT__issue_buffer_busy[3]));
    bufp->fullWData(oldp+468,(vlSelf->core__DOT__int_issue_instr
                              [0U]),82);
    bufp->fullWData(oldp+471,(vlSelf->core__DOT__int_issue_instr
                              [1U]),82);
    bufp->fullWData(oldp+474,(vlSelf->core__DOT__int_issue_instr
                              [2U]),82);
    bufp->fullBit(oldp+477,((0x1eU < (IData)(vlSelf->core__DOT__fetch__DOT__FB__DOT__count))));
    bufp->fullIData(oldp+478,(vlSelf->core__DOT__prefetch__DOT__PC__DOT__pc_reg),32);
    bufp->fullIData(oldp+479,(vlSelf->core__DOT__prefetch_instr[0]),32);
    bufp->fullIData(oldp+480,(vlSelf->core__DOT__prefetch_instr[1]),32);
    bufp->fullWData(oldp+481,(vlSelf->core__DOT__decode_instr
                              [0U]),102);
    bufp->fullWData(oldp+485,(vlSelf->core__DOT__decode_instr
                              [1U]),102);
    bufp->fullBit(oldp+489,((1U & ((IData)(vlSelf->core__DOT__dispatch__DOT__BC__DOT__count) 
                                   >> 4U))));
    bufp->fullWData(oldp+490,(vlSelf->core__DOT__rename_instr
                              [0U]),105);
    bufp->fullWData(oldp+494,(vlSelf->core__DOT__rename_instr
                              [1U]),105);
    bufp->fullBit(oldp+498,(vlSelf->core__DOT__chkpt[0]));
    bufp->fullBit(oldp+499,(vlSelf->core__DOT__chkpt[1]));
    bufp->fullCData(oldp+500,(vlSelf->core__DOT__chkpt_sqN[0]),7);
    bufp->fullCData(oldp+501,(vlSelf->core__DOT__chkpt_sqN[1]),7);
    bufp->fullQData(oldp+502,(vlSelf->core__DOT__CDB
                              [0U]),46);
    bufp->fullQData(oldp+504,(vlSelf->core__DOT__CDB
                              [1U]),46);
    bufp->fullQData(oldp+506,(vlSelf->core__DOT__CDB
                              [2U]),46);
    bufp->fullQData(oldp+508,(vlSelf->core__DOT__CDB
                              [3U]),46);
    bufp->fullIData(oldp+510,(vlSelf->core__DOT__CDB_result[0]),32);
    bufp->fullIData(oldp+511,(vlSelf->core__DOT__CDB_result[1]),32);
    bufp->fullIData(oldp+512,(vlSelf->core__DOT__CDB_result[2]),32);
    bufp->fullIData(oldp+513,(vlSelf->core__DOT__CDB_result[3]),32);
    bufp->fullCData(oldp+514,(vlSelf->core__DOT__CDB_sqN[0]),7);
    bufp->fullCData(oldp+515,(vlSelf->core__DOT__CDB_sqN[1]),7);
    bufp->fullCData(oldp+516,(vlSelf->core__DOT__CDB_sqN[2]),7);
    bufp->fullCData(oldp+517,(vlSelf->core__DOT__CDB_sqN[3]),7);
    bufp->fullCData(oldp+518,(vlSelf->core__DOT__rename_rob_rd[0]),5);
    bufp->fullCData(oldp+519,(vlSelf->core__DOT__rename_rob_rd[1]),5);
    bufp->fullIData(oldp+520,(vlSelf->core__DOT__rename_rob
                              [0U]),19);
    bufp->fullIData(oldp+521,(vlSelf->core__DOT__rename_rob
                              [1U]),19);
    bufp->fullBit(oldp+522,((1U & (~ (IData)(vlSelf->core__DOT__dispatch__DOT__DU__DOT__packet_done)))));
    bufp->fullBit(oldp+523,((0xfU == (IData)(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__count))));
    bufp->fullWData(oldp+524,(vlSelf->core__DOT__agu_out
                              [0U]),77);
    bufp->fullQData(oldp+527,(vlSelf->core__DOT__int_cdb_lines
                              [0U]),46);
    bufp->fullQData(oldp+529,(vlSelf->core__DOT__int_cdb_lines
                              [1U]),46);
    bufp->fullQData(oldp+531,(vlSelf->core__DOT__int_cdb_lines
                              [2U]),46);
    bufp->fullQData(oldp+533,(vlSelf->core__DOT__lsu_cdb_lines
                              [0U]),46);
    bufp->fullIData(oldp+535,(vlSelf->core__DOT__decode__DOT__unnamedblk1__DOT__i),32);
    bufp->fullWData(oldp+536,(vlSelf->core__DOT__dispatch__DOT__alu_dispatch_out
                              [0U]),103);
    bufp->fullWData(oldp+540,(vlSelf->core__DOT__dispatch__DOT__alu_dispatch_out
                              [1U]),103);
    bufp->fullIData(oldp+544,(vlSelf->core__DOT__dispatch__DOT__mul_div_dispatch_out
                              [0U]),30);
    bufp->fullQData(oldp+545,(vlSelf->core__DOT__dispatch__DOT__lsu_dispatch_out
                              [0U]),63);
    bufp->fullBit(oldp+547,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[0]));
    bufp->fullBit(oldp+548,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[1]));
    bufp->fullBit(oldp+549,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[2]));
    bufp->fullBit(oldp+550,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[3]));
    bufp->fullBit(oldp+551,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[4]));
    bufp->fullBit(oldp+552,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[5]));
    bufp->fullBit(oldp+553,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[6]));
    bufp->fullBit(oldp+554,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[7]));
    bufp->fullBit(oldp+555,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[8]));
    bufp->fullBit(oldp+556,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[9]));
    bufp->fullBit(oldp+557,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[10]));
    bufp->fullBit(oldp+558,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[11]));
    bufp->fullBit(oldp+559,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[12]));
    bufp->fullBit(oldp+560,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[13]));
    bufp->fullBit(oldp+561,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[14]));
    bufp->fullBit(oldp+562,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[15]));
    bufp->fullCData(oldp+563,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__count),5);
    bufp->fullIData(oldp+564,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+565,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+566,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+567,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__unnamedblk5__DOT__i),32);
    bufp->fullWData(oldp+568,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__packet
                              [0U]),105);
    bufp->fullWData(oldp+572,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__packet
                              [1U]),105);
    bufp->fullBit(oldp+576,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__dispatched[0]));
    bufp->fullBit(oldp+577,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__dispatched[1]));
    bufp->fullBit(oldp+578,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__lsu_ready[0]));
    bufp->fullBit(oldp+579,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__slot_pending[0]));
    bufp->fullBit(oldp+580,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__slot_pending[1]));
    bufp->fullBit(oldp+581,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__slot_is_alu[0]));
    bufp->fullBit(oldp+582,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__slot_is_alu[1]));
    bufp->fullBit(oldp+583,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__slot_is_mul[0]));
    bufp->fullBit(oldp+584,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__slot_is_mul[1]));
    bufp->fullBit(oldp+585,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__slot_is_lsu[0]));
    bufp->fullBit(oldp+586,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__slot_is_lsu[1]));
    bufp->fullBit(oldp+587,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__packet_done));
    bufp->fullIData(oldp+588,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__unnamedblk12__DOT__p),32);
    bufp->fullIData(oldp+589,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__unnamedblk13__DOT__p),32);
    bufp->fullIData(oldp+590,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__unnamedblk14__DOT__p),32);
    bufp->fullIData(oldp+591,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__unnamedblk15__DOT__i),32);
    bufp->fullIData(oldp+592,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__unnamedblk16__DOT__i),32);
    bufp->fullIData(oldp+593,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__unnamedblk17__DOT__i),32);
    bufp->fullIData(oldp+594,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__unnamedblk5__DOT__unnamedblk6__DOT__s),32);
    bufp->fullQData(oldp+595,(vlSelf->core__DOT__execute__DOT____Vcellout__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__OUT_cdb),46);
    bufp->fullWData(oldp+597,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r),82);
    bufp->fullIData(oldp+600,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__result),32);
    bufp->fullCData(oldp+601,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_valid),3);
    bufp->fullCData(oldp+602,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_sqN[0]),7);
    bufp->fullCData(oldp+603,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_sqN[1]),7);
    bufp->fullCData(oldp+604,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_sqN[2]),7);
    bufp->fullCData(oldp+605,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_tag[0]),6);
    bufp->fullCData(oldp+606,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_tag[1]),6);
    bufp->fullCData(oldp+607,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_tag[2]),6);
    bufp->fullCData(oldp+608,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_oper
                              [0U]),4);
    bufp->fullCData(oldp+609,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_oper
                              [1U]),4);
    bufp->fullCData(oldp+610,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_oper
                              [2U]),4);
    bufp->fullIData(oldp+611,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_dividend),32);
    bufp->fullIData(oldp+612,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_divisor),32);
    bufp->fullQData(oldp+613,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_partial),64);
    bufp->fullCData(oldp+615,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_count),6);
    bufp->fullBit(oldp+616,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_quot_sign));
    bufp->fullBit(oldp+617,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_rem_sign));
    bufp->fullBit(oldp+618,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_by_zero));
    bufp->fullQData(oldp+619,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_op1_s),33);
    bufp->fullQData(oldp+621,((((QData)((IData)((1U 
                                                 & (vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[1U] 
                                                    >> 9U)))) 
                                << 0x20U) | (QData)((IData)(
                                                            ((vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[1U] 
                                                              << 0x16U) 
                                                             | (vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[0U] 
                                                                >> 0xaU)))))),33);
    bufp->fullQData(oldp+623,((QData)((IData)(((vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[2U] 
                                                << 0x16U) 
                                               | (vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[1U] 
                                                  >> 0xaU))))),33);
    bufp->fullQData(oldp+625,((QData)((IData)(((vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[1U] 
                                                << 0x16U) 
                                               | (vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[0U] 
                                                  >> 0xaU))))),33);
    bufp->fullWData(oldp+627,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_result_ss),66);
    bufp->fullWData(oldp+630,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_result_uu),66);
    bufp->fullWData(oldp+633,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_result_su),66);
    bufp->fullIData(oldp+636,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk1__DOT__s),32);
    bufp->fullIData(oldp+637,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk2__DOT__s),32);
    bufp->fullIData(oldp+638,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__op1),32);
    bufp->fullIData(oldp+639,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__op2),32);
    bufp->fullBit(oldp+640,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__s1));
    bufp->fullBit(oldp+641,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__s2));
    bufp->fullIData(oldp+642,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk4__DOT__q),32);
    bufp->fullIData(oldp+643,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk4__DOT__r),32);
    bufp->fullQData(oldp+644,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk5__DOT__partial_high),33);
    bufp->fullQData(oldp+646,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk5__DOT__sub_result),33);
    bufp->fullIData(oldp+648,(vlSelf->core__DOT__execute__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+649,(vlSelf->core__DOT__execute__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+650,(vlSelf->core__DOT__execute__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+651,(vlSelf->core__DOT__execute__DOT__unnamedblk4__DOT__i),32);
    bufp->fullBit(oldp+652,(vlSelf->core__DOT__fetch__DOT__q));
    bufp->fullWData(oldp+653,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                              [0U]),71);
    bufp->fullWData(oldp+656,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                              [1U]),71);
    bufp->fullWData(oldp+659,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                              [2U]),71);
    bufp->fullWData(oldp+662,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                              [3U]),71);
    bufp->fullWData(oldp+665,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                              [4U]),71);
    bufp->fullWData(oldp+668,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                              [5U]),71);
    bufp->fullWData(oldp+671,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                              [6U]),71);
    bufp->fullWData(oldp+674,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                              [7U]),71);
    bufp->fullWData(oldp+677,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                              [8U]),71);
    bufp->fullWData(oldp+680,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                              [9U]),71);
    bufp->fullWData(oldp+683,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                              [0xaU]),71);
    bufp->fullWData(oldp+686,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                              [0xbU]),71);
    bufp->fullWData(oldp+689,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                              [0xcU]),71);
    bufp->fullWData(oldp+692,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                              [0xdU]),71);
    bufp->fullWData(oldp+695,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                              [0xeU]),71);
    bufp->fullWData(oldp+698,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                              [0xfU]),71);
    bufp->fullCData(oldp+701,(vlSelf->core__DOT__fetch__DOT__FB__DOT__head),4);
    bufp->fullCData(oldp+702,(vlSelf->core__DOT__fetch__DOT__FB__DOT__tail),4);
    bufp->fullCData(oldp+703,(vlSelf->core__DOT__fetch__DOT__FB__DOT__count),5);
    bufp->fullCData(oldp+704,(vlSelf->core__DOT__fetch__DOT__FB__DOT__sqN_counter),7);
    bufp->fullBit(oldp+705,((0x1eU >= (IData)(vlSelf->core__DOT__fetch__DOT__FB__DOT__count))));
    bufp->fullIData(oldp+706,(vlSelf->core__DOT__fetch__DOT__FB__DOT__unnamedblk3__DOT__i),32);
    bufp->fullWData(oldp+707,(vlSelf->core__DOT__agu_out
                              [0U]),77);
    bufp->fullQData(oldp+710,(vlSelf->core__DOT____Vcellout__lsu__OUT_cdb),46);
    bufp->fullWData(oldp+712,(vlSelf->core__DOT__lsu__DOT__stb_wb),74);
    bufp->fullQData(oldp+715,(vlSelf->core__DOT__lsu__DOT__ldb_addr_wb),43);
    bufp->fullQData(oldp+717,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                              [0U]),43);
    bufp->fullQData(oldp+719,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                              [1U]),43);
    bufp->fullQData(oldp+721,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                              [2U]),43);
    bufp->fullQData(oldp+723,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                              [3U]),43);
    bufp->fullQData(oldp+725,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                              [4U]),43);
    bufp->fullQData(oldp+727,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                              [5U]),43);
    bufp->fullQData(oldp+729,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                              [6U]),43);
    bufp->fullQData(oldp+731,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                              [7U]),43);
    bufp->fullQData(oldp+733,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                              [8U]),43);
    bufp->fullQData(oldp+735,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                              [9U]),43);
    bufp->fullQData(oldp+737,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                              [0xaU]),43);
    bufp->fullQData(oldp+739,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                              [0xbU]),43);
    bufp->fullQData(oldp+741,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                              [0xcU]),43);
    bufp->fullQData(oldp+743,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                              [0xdU]),43);
    bufp->fullQData(oldp+745,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                              [0xeU]),43);
    bufp->fullQData(oldp+747,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                              [0xfU]),43);
    bufp->fullQData(oldp+749,(vlSelf->core__DOT__lsu__DOT__ldb_mem_req
                              [0U]),43);
    bufp->fullQData(oldp+751,(vlSelf->core__DOT__lsu__DOT__ldb_mem_req
                              [1U]),43);
    bufp->fullWData(oldp+753,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                              [0U]),83);
    bufp->fullWData(oldp+756,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                              [1U]),83);
    bufp->fullWData(oldp+759,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                              [2U]),83);
    bufp->fullWData(oldp+762,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                              [3U]),83);
    bufp->fullWData(oldp+765,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                              [4U]),83);
    bufp->fullWData(oldp+768,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                              [5U]),83);
    bufp->fullWData(oldp+771,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                              [6U]),83);
    bufp->fullWData(oldp+774,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                              [7U]),83);
    bufp->fullWData(oldp+777,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                              [8U]),83);
    bufp->fullWData(oldp+780,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                              [9U]),83);
    bufp->fullWData(oldp+783,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                              [0xaU]),83);
    bufp->fullWData(oldp+786,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                              [0xbU]),83);
    bufp->fullWData(oldp+789,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                              [0xcU]),83);
    bufp->fullWData(oldp+792,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                              [0xdU]),83);
    bufp->fullWData(oldp+795,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                              [0xeU]),83);
    bufp->fullWData(oldp+798,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                              [0xfU]),83);
    bufp->fullCData(oldp+801,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx),4);
    bufp->fullCData(oldp+802,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx),4);
    bufp->fullCData(oldp+803,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0]),4);
    bufp->fullCData(oldp+804,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1]),4);
    bufp->fullCData(oldp+805,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx),4);
    bufp->fullCData(oldp+806,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__count),4);
    bufp->fullCData(oldp+807,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall),4);
    bufp->fullIData(oldp+808,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk11__DOT__i),32);
    bufp->fullIData(oldp+809,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j),32);
    bufp->fullIData(oldp+810,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+811,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
    bufp->fullIData(oldp+812,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk8__DOT__i),32);
    bufp->fullIData(oldp+813,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush),32);
    bufp->fullIData(oldp+814,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i),32);
    bufp->fullWData(oldp+815,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                              [0U]),76);
    bufp->fullWData(oldp+818,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                              [1U]),76);
    bufp->fullWData(oldp+821,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                              [2U]),76);
    bufp->fullWData(oldp+824,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                              [3U]),76);
    bufp->fullWData(oldp+827,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                              [4U]),76);
    bufp->fullWData(oldp+830,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                              [5U]),76);
    bufp->fullWData(oldp+833,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                              [6U]),76);
    bufp->fullWData(oldp+836,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                              [7U]),76);
    bufp->fullWData(oldp+839,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                              [8U]),76);
    bufp->fullWData(oldp+842,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                              [9U]),76);
    bufp->fullWData(oldp+845,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                              [0xaU]),76);
    bufp->fullWData(oldp+848,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                              [0xbU]),76);
    bufp->fullWData(oldp+851,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                              [0xcU]),76);
    bufp->fullWData(oldp+854,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                              [0xdU]),76);
    bufp->fullWData(oldp+857,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                              [0xeU]),76);
    bufp->fullWData(oldp+860,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                              [0xfU]),76);
    bufp->fullCData(oldp+863,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__tail_ptr),4);
    bufp->fullCData(oldp+864,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__drain_ptr),4);
    bufp->fullCData(oldp+865,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__count),5);
    bufp->fullIData(oldp+866,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk6__DOT__i),32);
    bufp->fullCData(oldp+867,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk7__DOT__drain_inc),5);
    bufp->fullIData(oldp+868,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__i),32);
    bufp->fullIData(oldp+869,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__unnamedblk12__DOT__idx),32);
    bufp->fullIData(oldp+870,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__i),32);
    bufp->fullIData(oldp+871,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk7__DOT__unnamedblk9__DOT__c),32);
    bufp->fullIData(oldp+872,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk7__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i),32);
    bufp->fullIData(oldp+873,((0xfffffff8U & vlSelf->core__DOT__prefetch__DOT__PC__DOT__pc_reg)),32);
    bufp->fullCData(oldp+874,((0xf8U & vlSelf->core__DOT__prefetch__DOT__PC__DOT__pc_reg)),8);
    bufp->fullCData(oldp+875,((0x1fU & VL_SHIFTR_III(8,8,32, 
                                                     (0xffU 
                                                      & vlSelf->core__DOT__prefetch__DOT__PC__DOT__pc_reg), 3U))),8);
    bufp->fullCData(oldp+876,((0x3eU & VL_SHIFTR_III(8,8,32, 
                                                     (0xffU 
                                                      & vlSelf->core__DOT__prefetch__DOT__PC__DOT__pc_reg), 2U))),8);
    bufp->fullIData(oldp+877,(vlSelf->core__DOT__prefetch__DOT__IMEM__DOT__unnamedblk2__DOT__i),32);
    bufp->fullSData(oldp+878,(vlSelf->core__DOT__rename__DOT__rename_table
                              [0U]),12);
    bufp->fullSData(oldp+879,(vlSelf->core__DOT__rename__DOT__rename_table
                              [1U]),12);
    bufp->fullSData(oldp+880,(vlSelf->core__DOT__rename__DOT__rename_table
                              [2U]),12);
    bufp->fullSData(oldp+881,(vlSelf->core__DOT__rename__DOT__rename_table
                              [3U]),12);
    bufp->fullSData(oldp+882,(vlSelf->core__DOT__rename__DOT__rename_table
                              [4U]),12);
    bufp->fullSData(oldp+883,(vlSelf->core__DOT__rename__DOT__rename_table
                              [5U]),12);
    bufp->fullSData(oldp+884,(vlSelf->core__DOT__rename__DOT__rename_table
                              [6U]),12);
    bufp->fullSData(oldp+885,(vlSelf->core__DOT__rename__DOT__rename_table
                              [7U]),12);
    bufp->fullSData(oldp+886,(vlSelf->core__DOT__rename__DOT__rename_table
                              [8U]),12);
    bufp->fullSData(oldp+887,(vlSelf->core__DOT__rename__DOT__rename_table
                              [9U]),12);
    bufp->fullSData(oldp+888,(vlSelf->core__DOT__rename__DOT__rename_table
                              [0xaU]),12);
    bufp->fullSData(oldp+889,(vlSelf->core__DOT__rename__DOT__rename_table
                              [0xbU]),12);
    bufp->fullSData(oldp+890,(vlSelf->core__DOT__rename__DOT__rename_table
                              [0xcU]),12);
    bufp->fullSData(oldp+891,(vlSelf->core__DOT__rename__DOT__rename_table
                              [0xdU]),12);
    bufp->fullSData(oldp+892,(vlSelf->core__DOT__rename__DOT__rename_table
                              [0xeU]),12);
    bufp->fullSData(oldp+893,(vlSelf->core__DOT__rename__DOT__rename_table
                              [0xfU]),12);
    bufp->fullSData(oldp+894,(vlSelf->core__DOT__rename__DOT__rename_table
                              [0x10U]),12);
    bufp->fullSData(oldp+895,(vlSelf->core__DOT__rename__DOT__rename_table
                              [0x11U]),12);
    bufp->fullSData(oldp+896,(vlSelf->core__DOT__rename__DOT__rename_table
                              [0x12U]),12);
    bufp->fullSData(oldp+897,(vlSelf->core__DOT__rename__DOT__rename_table
                              [0x13U]),12);
    bufp->fullSData(oldp+898,(vlSelf->core__DOT__rename__DOT__rename_table
                              [0x14U]),12);
    bufp->fullSData(oldp+899,(vlSelf->core__DOT__rename__DOT__rename_table
                              [0x15U]),12);
    bufp->fullSData(oldp+900,(vlSelf->core__DOT__rename__DOT__rename_table
                              [0x16U]),12);
    bufp->fullSData(oldp+901,(vlSelf->core__DOT__rename__DOT__rename_table
                              [0x17U]),12);
    bufp->fullSData(oldp+902,(vlSelf->core__DOT__rename__DOT__rename_table
                              [0x18U]),12);
    bufp->fullSData(oldp+903,(vlSelf->core__DOT__rename__DOT__rename_table
                              [0x19U]),12);
    bufp->fullSData(oldp+904,(vlSelf->core__DOT__rename__DOT__rename_table
                              [0x1aU]),12);
    bufp->fullSData(oldp+905,(vlSelf->core__DOT__rename__DOT__rename_table
                              [0x1bU]),12);
    bufp->fullSData(oldp+906,(vlSelf->core__DOT__rename__DOT__rename_table
                              [0x1cU]),12);
    bufp->fullSData(oldp+907,(vlSelf->core__DOT__rename__DOT__rename_table
                              [0x1dU]),12);
    bufp->fullSData(oldp+908,(vlSelf->core__DOT__rename__DOT__rename_table
                              [0x1eU]),12);
    bufp->fullSData(oldp+909,(vlSelf->core__DOT__rename__DOT__rename_table
                              [0x1fU]),12);
    bufp->fullQData(oldp+910,(vlSelf->core__DOT__rename__DOT__ftb),64);
    bufp->fullCData(oldp+912,(vlSelf->core__DOT__rename__DOT__req_valid),2);
    bufp->fullCData(oldp+913,(vlSelf->core__DOT__rename__DOT__req_count[0]),2);
    bufp->fullCData(oldp+914,(vlSelf->core__DOT__rename__DOT__req_count[1]),2);
    bufp->fullBit(oldp+915,(vlSelf->core__DOT__rename__DOT__chkpt_need));
    bufp->fullIData(oldp+916,(vlSelf->core__DOT__rename__DOT__unnamedblk10__DOT__i),32);
    bufp->fullIData(oldp+917,(vlSelf->core__DOT__rename__DOT__unnamedblk11__DOT__i),32);
    bufp->fullIData(oldp+918,(vlSelf->core__DOT__rename__DOT__unnamedblk11__DOT__unnamedblk12__DOT__r),32);
    bufp->fullIData(oldp+919,(vlSelf->core__DOT__rename__DOT__unnamedblk11__DOT__unnamedblk13__DOT__b),32);
    bufp->fullIData(oldp+920,(vlSelf->core__DOT__rename__DOT__unnamedblk14__DOT__i),32);
    bufp->fullIData(oldp+921,(vlSelf->core__DOT__rename__DOT__unnamedblk14__DOT__unnamedblk15__DOT__r),32);
    bufp->fullIData(oldp+922,(vlSelf->core__DOT__rename__DOT__unnamedblk14__DOT__unnamedblk16__DOT__b),32);
    bufp->fullIData(oldp+923,(vlSelf->core__DOT__rename__DOT__unnamedblk17__DOT__i),32);
    bufp->fullIData(oldp+924,(vlSelf->core__DOT__rename__DOT__unnamedblk18__DOT__i),32);
    bufp->fullIData(oldp+925,(vlSelf->core__DOT__rename__DOT__unnamedblk19__DOT__b),32);
    bufp->fullIData(oldp+926,(vlSelf->core__DOT__rename__DOT__unnamedblk20__DOT__i),32);
    bufp->fullIData(oldp+927,(vlSelf->core__DOT__rename__DOT__unnamedblk21__DOT__i),32);
    bufp->fullIData(oldp+928,(vlSelf->core__DOT__rename__DOT__unnamedblk22__DOT__i),32);
    bufp->fullIData(oldp+929,(vlSelf->core__DOT__rename__DOT__unnamedblk23__DOT__r),32);
    bufp->fullIData(oldp+930,(vlSelf->core__DOT__rename__DOT__unnamedblk24__DOT__r),32);
    bufp->fullIData(oldp+931,(vlSelf->core__DOT__rename__DOT__unnamedblk25__DOT__i),32);
    bufp->fullIData(oldp+932,(vlSelf->core__DOT__rename__DOT__unnamedblk26__DOT__r),32);
    bufp->fullIData(oldp+933,(vlSelf->core__DOT__rename__DOT__unnamedblk27__DOT__i),32);
    bufp->fullIData(oldp+934,(vlSelf->core__DOT__rename__DOT__unnamedblk9__DOT__i),32);
    bufp->fullBit(oldp+935,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_mem[0]));
    bufp->fullBit(oldp+936,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_mem[1]));
    bufp->fullBit(oldp+937,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_mem[0]));
    bufp->fullBit(oldp+938,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_mem[1]));
    bufp->fullIData(oldp+939,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_data_mem[0]),32);
    bufp->fullIData(oldp+940,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_data_mem[1]),32);
    bufp->fullBit(oldp+941,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_mem
                            [0U]));
    bufp->fullBit(oldp+942,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_mem
                            [0U]));
    bufp->fullBit(oldp+943,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_mem
                            [1U]));
    bufp->fullBit(oldp+944,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_mem
                            [1U]));
    bufp->fullIData(oldp+945,(vlSelf->core__DOT__commit_packet
                              [0U]),19);
    bufp->fullIData(oldp+946,(vlSelf->core__DOT__commit_packet
                              [1U]),19);
    bufp->fullBit(oldp+947,(vlSelf->core__DOT__alu_buffer_busy[0]));
    bufp->fullBit(oldp+948,(vlSelf->core__DOT__alu_buffer_busy[1]));
    bufp->fullBit(oldp+949,(vlSelf->core__DOT__mul_div_buffer_busy[0]));
    bufp->fullCData(oldp+950,(vlSelf->core__DOT__commit_sqN[0]),7);
    bufp->fullCData(oldp+951,(vlSelf->core__DOT__commit_sqN[1]),7);
    bufp->fullCData(oldp+952,(vlSelf->core__DOT__br_jalr_sqN[0]),7);
    bufp->fullCData(oldp+953,(vlSelf->core__DOT__br_jalr_sqN[1]),7);
    bufp->fullCData(oldp+954,(vlSelf->core__DOT__ROB__DOT__dataout_valid),2);
    bufp->fullBit(oldp+955,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__alu_ready[0]));
    bufp->fullBit(oldp+956,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__alu_ready[1]));
    bufp->fullBit(oldp+957,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__mul_ready[0]));
    bufp->fullIData(oldp+958,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__unnamedblk1__DOT__g_alu_assign__DOT__unnamedblk2__DOT__s),32);
    bufp->fullIData(oldp+959,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__unnamedblk3__DOT__unnamedblk4__DOT__s),32);
    bufp->fullWData(oldp+960,(vlSelf->core__DOT__execute__DOT__next_agu_out
                              [0U]),77);
    bufp->fullWData(oldp+963,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr),82);
    bufp->fullCData(oldp+966,(vlSelf->core__DOT____Vcellinp__flush_controller__sqN[0]),7);
    bufp->fullCData(oldp+967,(vlSelf->core__DOT____Vcellinp__flush_controller__sqN[1]),7);
    bufp->fullCData(oldp+968,(vlSelf->core__DOT__issue__DOT__instr_sqN[0]),7);
    bufp->fullCData(oldp+969,(vlSelf->core__DOT__issue__DOT__instr_sqN[1]),7);
    bufp->fullBit(oldp+970,(vlSelf->core__DOT__issue__DOT__instr_valid[0]));
    bufp->fullBit(oldp+971,(vlSelf->core__DOT__issue__DOT__instr_valid[1]));
    bufp->fullBit(oldp+972,((8U == (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__tail))));
    bufp->fullIData(oldp+973,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                              [0U]),32);
    bufp->fullIData(oldp+974,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                              [1U]),32);
    bufp->fullIData(oldp+975,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                              [2U]),32);
    bufp->fullIData(oldp+976,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                              [3U]),32);
    bufp->fullIData(oldp+977,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                              [4U]),32);
    bufp->fullIData(oldp+978,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                              [5U]),32);
    bufp->fullIData(oldp+979,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                              [6U]),32);
    bufp->fullIData(oldp+980,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                              [7U]),32);
    bufp->fullCData(oldp+981,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__tail),4);
    bufp->fullIData(oldp+982,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j),32);
    bufp->fullIData(oldp+983,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                              [0U]),32);
    bufp->fullIData(oldp+984,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                              [1U]),32);
    bufp->fullIData(oldp+985,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                              [2U]),32);
    bufp->fullIData(oldp+986,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                              [3U]),32);
    bufp->fullIData(oldp+987,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                              [4U]),32);
    bufp->fullIData(oldp+988,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                              [5U]),32);
    bufp->fullIData(oldp+989,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                              [6U]),32);
    bufp->fullIData(oldp+990,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                              [7U]),32);
    bufp->fullCData(oldp+991,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail),4);
    bufp->fullIData(oldp+992,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j),32);
    bufp->fullCData(oldp+993,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff),7);
    bufp->fullQData(oldp+994,(vlSelf->core__DOT__lsu__DOT__ldb_mem_resp
                              [0U]),40);
    bufp->fullQData(oldp+996,(vlSelf->core__DOT__lsu__DOT__ldb_mem_resp
                              [1U]),40);
    bufp->fullBit(oldp+998,(vlSelf->core__DOT__rename_busy));
    bufp->fullWData(oldp+999,(vlSelf->core__DOT__fetch_instr
                              [0U]),72);
    bufp->fullWData(oldp+1002,(vlSelf->core__DOT__fetch_instr
                               [1U]),72);
    bufp->fullBit(oldp+1005,(vlSelf->core__DOT__ROB_busy));
    bufp->fullCData(oldp+1006,(vlSelf->core__DOT__ROB__DOT__commit),2);
    bufp->fullCData(oldp+1007,(vlSelf->core__DOT__ROB__DOT__write_en),2);
    bufp->fullCData(oldp+1008,(vlSelf->core__DOT__ROB__DOT__next_count),7);
    bufp->fullCData(oldp+1009,(vlSelf->core__DOT__ROB__DOT__next_head),6);
    bufp->fullCData(oldp+1010,(vlSelf->core__DOT__ROB__DOT__next_tail),6);
    bufp->fullCData(oldp+1011,(vlSelf->core__DOT__ROB__DOT__commit_index[0]),6);
    bufp->fullCData(oldp+1012,(vlSelf->core__DOT__ROB__DOT__commit_index[1]),6);
    bufp->fullBit(oldp+1013,(vlSelf->core__DOT__ROB__DOT__empty));
    bufp->fullWData(oldp+1014,(vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U]),102);
    bufp->fullWData(oldp+1018,(vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U]),102);
    bufp->fullCData(oldp+1022,(vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode[0]),7);
    bufp->fullCData(oldp+1023,(vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode[1]),7);
    bufp->fullIData(oldp+1024,(vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate[0]),32);
    bufp->fullIData(oldp+1025,(vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate[1]),32);
    bufp->fullCData(oldp+1026,(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__funct3),3);
    bufp->fullCData(oldp+1027,(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode),7);
    bufp->fullSData(oldp+1028,(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm12),12);
    bufp->fullSData(oldp+1029,(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm13),13);
    bufp->fullIData(oldp+1030,(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm21),21);
    bufp->fullIData(oldp+1031,(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw),32);
    bufp->fullCData(oldp+1032,(vlSelf->core__DOT__fetch__DOT__FB__DOT__out_count),2);
    bufp->fullBit(oldp+1033,(vlSelf->core__DOT__fetch__DOT__FB__DOT__can_read));
    bufp->fullCData(oldp+1034,(vlSelf->core__DOT__fetch__DOT__FB__DOT__idx_head),4);
    bufp->fullWData(oldp+1035,(vlSelf->core__DOT__lsu__DOT__stb_mem_req
                               [0U]),67);
    bufp->fullWData(oldp+1038,(vlSelf->core__DOT__lsu__DOT__stb_mem_req
                               [1U]),67);
    bufp->fullIData(oldp+1041,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx),32);
    bufp->fullCData(oldp+1042,(vlSelf->core__DOT__rename__DOT__free_CommTag[0]),6);
    bufp->fullCData(oldp+1043,(vlSelf->core__DOT__rename__DOT__free_CommTag[1]),6);
    bufp->fullBit(oldp+1044,(vlSelf->core__DOT__reg_ready
                             [0U][0U]));
    bufp->fullBit(oldp+1045,(vlSelf->core__DOT__reg_ready
                             [0U][1U]));
    bufp->fullBit(oldp+1046,(vlSelf->core__DOT__reg_ready
                             [1U][0U]));
    bufp->fullBit(oldp+1047,(vlSelf->core__DOT__reg_ready
                             [1U][1U]));
    bufp->fullBit(oldp+1048,(vlSelf->core__DOT__reg_ready
                             [2U][0U]));
    bufp->fullBit(oldp+1049,(vlSelf->core__DOT__reg_ready
                             [2U][1U]));
    bufp->fullBit(oldp+1050,(vlSelf->core__DOT__reg_ready
                             [3U][0U]));
    bufp->fullBit(oldp+1051,(vlSelf->core__DOT__reg_ready
                             [3U][1U]));
    bufp->fullCData(oldp+1052,(vlSelf->core__DOT__CDB_tag[0]),6);
    bufp->fullCData(oldp+1053,(vlSelf->core__DOT__CDB_tag[1]),6);
    bufp->fullCData(oldp+1054,(vlSelf->core__DOT__CDB_tag[2]),6);
    bufp->fullCData(oldp+1055,(vlSelf->core__DOT__CDB_tag[3]),6);
    bufp->fullBit(oldp+1056,(vlSelf->core__DOT__CDB_valid[0]));
    bufp->fullBit(oldp+1057,(vlSelf->core__DOT__CDB_valid[1]));
    bufp->fullBit(oldp+1058,(vlSelf->core__DOT__CDB_valid[2]));
    bufp->fullBit(oldp+1059,(vlSelf->core__DOT__CDB_valid[3]));
    bufp->fullBit(oldp+1060,(vlSelf->core__DOT__mul_div_fu_busy[0]));
    bufp->fullBit(oldp+1061,((0U != (IData)(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__state))));
    bufp->fullCData(oldp+1062,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__state),3);
    bufp->fullBit(oldp+1063,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__tag_ready[0]));
    bufp->fullBit(oldp+1064,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__tag_ready[1]));
    bufp->fullBit(oldp+1065,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__tag_ready
                             [0U]));
    bufp->fullBit(oldp+1066,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__tag_ready
                             [1U]));
    bufp->fullBit(oldp+1067,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__tag_ready[0]));
    bufp->fullBit(oldp+1068,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__tag_ready[1]));
    bufp->fullBit(oldp+1069,(((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__is_jump) 
                              | vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__tag_ready
                              [0U])));
    bufp->fullBit(oldp+1070,((1U & (((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__is_jump) 
                                     | (vlSelf->core__DOT__alu_dispatch_instr
                                        [0U][0U] >> 8U)) 
                                    | vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__tag_ready
                                    [1U]))));
    bufp->fullBit(oldp+1071,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__tag_ready[0]));
    bufp->fullBit(oldp+1072,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__tag_ready[1]));
    bufp->fullBit(oldp+1073,(((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__is_jump) 
                              | vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__tag_ready
                              [0U])));
    bufp->fullBit(oldp+1074,((1U & (((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__is_jump) 
                                     | (vlSelf->core__DOT__alu_dispatch_instr
                                        [1U][0U] >> 8U)) 
                                    | vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__tag_ready
                                    [1U]))));
    bufp->fullBit(oldp+1075,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__tag_ready[0]));
    bufp->fullBit(oldp+1076,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__tag_ready[1]));
    bufp->fullCData(oldp+1077,(vlSelf->core__DOT__RF_raddr
                               [0U][0U]),6);
    bufp->fullCData(oldp+1078,(vlSelf->core__DOT__RF_raddr
                               [0U][1U]),6);
    bufp->fullCData(oldp+1079,(vlSelf->core__DOT__RF_raddr
                               [1U][0U]),6);
    bufp->fullCData(oldp+1080,(vlSelf->core__DOT__RF_raddr
                               [1U][1U]),6);
    bufp->fullCData(oldp+1081,(vlSelf->core__DOT__RF_raddr
                               [2U][0U]),6);
    bufp->fullCData(oldp+1082,(vlSelf->core__DOT__RF_raddr
                               [2U][1U]),6);
    bufp->fullCData(oldp+1083,(vlSelf->core__DOT__RF_raddr
                               [3U][0U]),6);
    bufp->fullCData(oldp+1084,(vlSelf->core__DOT__RF_raddr
                               [3U][1U]),6);
    bufp->fullIData(oldp+1085,(vlSelf->core__DOT__RF_read_data
                               [0U][0U]),32);
    bufp->fullIData(oldp+1086,(vlSelf->core__DOT__RF_read_data
                               [0U][1U]),32);
    bufp->fullIData(oldp+1087,(vlSelf->core__DOT__RF_read_data
                               [1U][0U]),32);
    bufp->fullIData(oldp+1088,(vlSelf->core__DOT__RF_read_data
                               [1U][1U]),32);
    bufp->fullIData(oldp+1089,(vlSelf->core__DOT__RF_read_data
                               [2U][0U]),32);
    bufp->fullIData(oldp+1090,(vlSelf->core__DOT__RF_read_data
                               [2U][1U]),32);
    bufp->fullIData(oldp+1091,(vlSelf->core__DOT__RF_read_data
                               [3U][0U]),32);
    bufp->fullIData(oldp+1092,(vlSelf->core__DOT__RF_read_data
                               [3U][1U]),32);
    bufp->fullIData(oldp+1093,(vlSelf->core__DOT__rs1_data[0]),32);
    bufp->fullIData(oldp+1094,(vlSelf->core__DOT__rs1_data[1]),32);
    bufp->fullIData(oldp+1095,(vlSelf->core__DOT__rs1_data[2]),32);
    bufp->fullIData(oldp+1096,(vlSelf->core__DOT__rs1_data[3]),32);
    bufp->fullIData(oldp+1097,(vlSelf->core__DOT__rs2_data[0]),32);
    bufp->fullIData(oldp+1098,(vlSelf->core__DOT__rs2_data[1]),32);
    bufp->fullIData(oldp+1099,(vlSelf->core__DOT__rs2_data[2]),32);
    bufp->fullIData(oldp+1100,(vlSelf->core__DOT__rs2_data[3]),32);
    bufp->fullCData(oldp+1101,(vlSelf->core__DOT__rs1_addr[0]),6);
    bufp->fullCData(oldp+1102,(vlSelf->core__DOT__rs1_addr[1]),6);
    bufp->fullCData(oldp+1103,(vlSelf->core__DOT__rs1_addr[2]),6);
    bufp->fullCData(oldp+1104,(vlSelf->core__DOT__rs1_addr[3]),6);
    bufp->fullCData(oldp+1105,(vlSelf->core__DOT__rs2_addr[0]),6);
    bufp->fullCData(oldp+1106,(vlSelf->core__DOT__rs2_addr[1]),6);
    bufp->fullCData(oldp+1107,(vlSelf->core__DOT__rs2_addr[2]),6);
    bufp->fullCData(oldp+1108,(vlSelf->core__DOT__rs2_addr[3]),6);
    bufp->fullIData(oldp+1109,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__RF_data[0]),32);
    bufp->fullIData(oldp+1110,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__RF_data[1]),32);
    bufp->fullCData(oldp+1111,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__read_tag[0]),6);
    bufp->fullCData(oldp+1112,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__read_tag[1]),6);
    bufp->fullCData(oldp+1113,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask),8);
    bufp->fullCData(oldp+1114,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx),3);
    bufp->fullBit(oldp+1115,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_found));
    bufp->fullIData(oldp+1116,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__pe__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1117,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1));
    bufp->fullBit(oldp+1118,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2));
    bufp->fullIData(oldp+1119,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__RF_data[0]),32);
    bufp->fullIData(oldp+1120,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__RF_data[1]),32);
    bufp->fullCData(oldp+1121,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__read_tag[0]),6);
    bufp->fullCData(oldp+1122,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__read_tag[1]),6);
    bufp->fullCData(oldp+1123,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask),8);
    bufp->fullCData(oldp+1124,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx),3);
    bufp->fullBit(oldp+1125,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_found));
    bufp->fullIData(oldp+1126,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__pe__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1127,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1));
    bufp->fullBit(oldp+1128,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2));
    bufp->fullIData(oldp+1129,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__RF_data[0]),32);
    bufp->fullIData(oldp+1130,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__RF_data[1]),32);
    bufp->fullCData(oldp+1131,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__read_tag[0]),6);
    bufp->fullCData(oldp+1132,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__read_tag[1]),6);
    bufp->fullCData(oldp+1133,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask),8);
    bufp->fullCData(oldp+1134,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx),3);
    bufp->fullBit(oldp+1135,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_found));
    bufp->fullIData(oldp+1136,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__pe__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1137,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1));
    bufp->fullBit(oldp+1138,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2));
    bufp->fullIData(oldp+1139,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__RF_data[0]),32);
    bufp->fullIData(oldp+1140,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__RF_data[1]),32);
    bufp->fullCData(oldp+1141,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__read_tag[0]),6);
    bufp->fullCData(oldp+1142,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__read_tag[1]),6);
    bufp->fullCData(oldp+1143,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask),8);
    bufp->fullCData(oldp+1144,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx),3);
    bufp->fullBit(oldp+1145,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_found));
    bufp->fullIData(oldp+1146,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__pe__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+1147,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1));
    bufp->fullBit(oldp+1148,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2));
    bufp->fullBit(oldp+1149,(vlSelf->clk));
    bufp->fullBit(oldp+1150,(vlSelf->clk_m));
    bufp->fullBit(oldp+1151,(vlSelf->rst));
    bufp->fullBit(oldp+1152,(vlSelf->rst_m));
    bufp->fullCData(oldp+1153,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_alu[0]),2);
    bufp->fullCData(oldp+1154,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_alu[1]),2);
    bufp->fullCData(oldp+1155,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_alu[2]),2);
    bufp->fullCData(oldp+1156,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_mul[0]),2);
    bufp->fullCData(oldp+1157,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_mul[1]),2);
    bufp->fullCData(oldp+1158,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_mul[2]),2);
    bufp->fullCData(oldp+1159,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_lsu[0]),2);
    bufp->fullCData(oldp+1160,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_lsu[1]),2);
    bufp->fullCData(oldp+1161,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_lsu[2]),2);
    bufp->fullCData(oldp+1162,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu[0]),2);
    bufp->fullCData(oldp+1163,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu[1]),2);
    bufp->fullCData(oldp+1164,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu[2]),2);
    bufp->fullBit(oldp+1165,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_mul[0]));
    bufp->fullBit(oldp+1166,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_mul[1]));
    bufp->fullBit(oldp+1167,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_lsu[0]));
    bufp->fullBit(oldp+1168,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_lsu[1]));
    bufp->fullBit(oldp+1169,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__alu_slot[0]));
    bufp->fullBit(oldp+1170,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__alu_slot[1]));
    bufp->fullBit(oldp+1171,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__alu_valid[0]));
    bufp->fullBit(oldp+1172,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__alu_valid[1]));
    bufp->fullBit(oldp+1173,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__mul_slot[0]));
    bufp->fullBit(oldp+1174,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__mul_valid[0]));
    bufp->fullBit(oldp+1175,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__lsu_slot[0]));
    bufp->fullBit(oldp+1176,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__lsu_valid[0]));
    bufp->fullBit(oldp+1177,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__can_dispatch[0]));
    bufp->fullBit(oldp+1178,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__can_dispatch[1]));
    bufp->fullQData(oldp+1179,(vlSelf->core__DOT__execute__DOT__int_fu_out
                               [0U]),46);
    bufp->fullQData(oldp+1181,(vlSelf->core__DOT__execute__DOT__int_fu_out
                               [1U]),46);
    bufp->fullQData(oldp+1183,(vlSelf->core__DOT__execute__DOT__int_fu_out
                               [2U]),46);
    bufp->fullIData(oldp+1185,(((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel1)
                                 ? ((vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0[3U] 
                                     << 0x1fU) | (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0[2U] 
                                                  >> 1U))
                                 : vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected)),32);
    bufp->fullIData(oldp+1186,(((2U & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel2))
                                 ? 4U : ((1U & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel2))
                                          ? ((vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0[1U] 
                                              << 0x15U) 
                                             | (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0[0U] 
                                                >> 0xbU))
                                          : vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected))),32);
    bufp->fullIData(oldp+1187,(((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel1)
                                 ? ((vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0[3U] 
                                     << 0x1fU) | (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0[2U] 
                                                  >> 1U))
                                 : vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected)),32);
    bufp->fullIData(oldp+1188,(((2U & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel2))
                                 ? 4U : ((1U & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel2))
                                          ? ((vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0[1U] 
                                              << 0x15U) 
                                             | (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0[0U] 
                                                >> 0xbU))
                                          : vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected))),32);
    bufp->fullIData(oldp+1189,(((0U == (((IData)(vlSelf->core__DOT__jump2) 
                                         << 1U) | (IData)(vlSelf->core__DOT__jump1)))
                                 ? (VL_SHIFTL_III(32,32,32, 
                                                  (1U 
                                                   & (IData)(vlSelf->core__DOT__consumed)), 2U) 
                                    + vlSelf->core__DOT__prefetch__DOT__PC__DOT__pc_reg)
                                 : ((1U == (((IData)(vlSelf->core__DOT__jump2) 
                                             << 1U) 
                                            | (IData)(vlSelf->core__DOT__jump1)))
                                     ? vlSelf->core__DOT__jta1
                                     : ((2U == (((IData)(vlSelf->core__DOT__jump2) 
                                                 << 1U) 
                                                | (IData)(vlSelf->core__DOT__jump1)))
                                         ? vlSelf->core__DOT__jta2
                                         : (VL_SHIFTL_III(32,32,32, 
                                                          (1U 
                                                           & (IData)(vlSelf->core__DOT__consumed)), 2U) 
                                            + vlSelf->core__DOT__prefetch__DOT__PC__DOT__pc_reg))))),32);
    bufp->fullQData(oldp+1190,(vlSelf->core__DOT__rename__DOT__masked[0]),64);
    bufp->fullQData(oldp+1192,(vlSelf->core__DOT__rename__DOT__masked[1]),64);
    bufp->fullQData(oldp+1194,(vlSelf->core__DOT__rename__DOT__masked[2]),64);
    bufp->fullQData(oldp+1196,(vlSelf->core__DOT__rename__DOT__onehot[0]),64);
    bufp->fullQData(oldp+1198,(vlSelf->core__DOT__rename__DOT__onehot[1]),64);
    bufp->fullCData(oldp+1200,(vlSelf->core__DOT__rename__DOT__chosen[0]),6);
    bufp->fullCData(oldp+1201,(vlSelf->core__DOT__rename__DOT__chosen[1]),6);
}
