// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vcore__Syms.h"


VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__include_pkg__0(Vcore___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__0(Vcore___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1650,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1651,0,"clk_m",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1652,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1653,0,"rst_m",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1650,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1651,0,"clk_m",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1652,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1653,0,"rst_m",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"fb_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"jump1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"jump2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"consumed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+81,0,"jta1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"jta2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+315,0,"pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("prefetch_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+316+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+1571,0,"rename_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"flush",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fetch_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1572,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declArray(c+1575,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->popPrefix();
    tracep->pushPrefix("decode_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+318,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 101,0);
    tracep->declArray(c+322,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 101,0);
    tracep->popPrefix();
    tracep->declBit(c+1578,0,"ROB_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1658,0,"dispatch_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"chkpt_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("restore_specTag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+84+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("commit_packet", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1390,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+1391,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->popPrefix();
    tracep->pushPrefix("read_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+0,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+2,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+3,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+4,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+5,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+6,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+7,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("reg_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+327,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+328,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+329,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+331,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+333,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+334,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("rename_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+335,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+339,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->popPrefix();
    tracep->pushPrefix("chkpt", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+343+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("chkpt_sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+345+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+347,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+349,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+351,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+353,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->popPrefix();
    tracep->pushPrefix("CDB_tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+355+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+1423+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+359+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1427+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rename_rob_rd", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+363+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rename_rob", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1431,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+1432,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->popPrefix();
    tracep->pushPrefix("alu_buffer_busy", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1659+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("mul_div_buffer_busy", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+1661+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("lsu_buffer_busy", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+1662+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBit(c+365,0,"dispatch_unit_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+366,0,"lsu_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"flush_sqN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("commit_sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1392+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("alu_dispatch_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1663,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 102,0);
    tracep->declArray(c+1667,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 102,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul_div_dispatch_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1671,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->popPrefix();
    tracep->pushPrefix("lsu_dispatch_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+1672,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 62,0);
    tracep->popPrefix();
    tracep->pushPrefix("RF_raddr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1433,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1434,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1435,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1436,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1437,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1438,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1439,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1440,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("RF_read_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1441,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1442,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1443,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1444,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1445,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1446,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1447,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1448,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("mul_div_fu_busy", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+367+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("int_issue_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+368,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->declArray(c+371,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->declArray(c+374,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->popPrefix();
    tracep->pushPrefix("lsu_issue_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+377,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 113,0);
    tracep->popPrefix();
    tracep->pushPrefix("br_taken", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+117+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("jump_type", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+381,0,"[0]",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+382,0,"[1]",1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("br_jalr_sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+383+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("agu_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+385,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->popPrefix();
    tracep->pushPrefix("int_cdb_lines", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+388,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+390,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+392,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->popPrefix();
    tracep->pushPrefix("lsu_cdb_lines", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+394,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->popPrefix();
    tracep->pushPrefix("rs1_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1449+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs2_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1453+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs1_addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1457+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs2_addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1461+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ROB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1650,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1652,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rename_rob", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1465,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+1466,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->popPrefix();
    tracep->declBit(c+83,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"flush_sqN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("CDB_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+1467+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1471+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+1578,0,"OUT_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("OUT_commit", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1394,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+1395,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->popPrefix();
    tracep->declBus(c+1579,0,"commit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1396,0,"dataout_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1580,0,"write_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1397,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1581,0,"next_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1398,0,"head",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1399,0,"tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1674,0,"next_head",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1675,0,"next_tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->pushPrefix("alloc_index", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1400+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("commit_index", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1582+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1676,0,"num_wr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1677,0,"num_commit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+1402,0,"full",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1584,0,"empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1585,0,"next_head",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1586,0,"next_tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("decode", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1650,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1652,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1571,0,"IN_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("IN_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1587,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declArray(c+1590,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->popPrefix();
    tracep->pushPrefix("OUT_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+396,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 101,0);
    tracep->declArray(c+400,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 101,0);
    tracep->popPrefix();
    tracep->pushPrefix("decoder_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1593,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 101,0);
    tracep->declArray(c+1597,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 101,0);
    tracep->popPrefix();
    tracep->pushPrefix("Decoder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("IN_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1601,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declArray(c+1604,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->popPrefix();
    tracep->pushPrefix("OUT_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1607,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 101,0);
    tracep->declArray(c+1611,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 101,0);
    tracep->popPrefix();
    tracep->pushPrefix("opcode", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1615+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("immediate", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1617+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("IG", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("IN_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1619,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declArray(c+1622,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->popPrefix();
    tracep->pushPrefix("immediate", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1625+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1627,0,"funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1628,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+1629,0,"imm12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1630,0,"imm13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+1631,0,"imm21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declBus(c+1632,0,"iw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dispatch", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1650,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1652,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ALU_buffer_busy", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+8+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("MUL_DIV_buffer_busy", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+10+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("LSU_buffer_busy", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+11+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBit(c+366,0,"LSU_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"flush_sqN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("commit_sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1403+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("instr_sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+404+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("IN_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+406,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+410,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->popPrefix();
    tracep->pushPrefix("checkpoint", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+414+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("OUT_specTag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+119+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+365,0,"d_unit_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"check_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("OUT_alu_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+12,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 102,0);
    tracep->declArray(c+16,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 102,0);
    tracep->popPrefix();
    tracep->pushPrefix("OUT_mul_div_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+20,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->popPrefix();
    tracep->pushPrefix("OUT_lsu_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+21,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 62,0);
    tracep->popPrefix();
    tracep->pushPrefix("alu_dispatch_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+416,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 102,0);
    tracep->declArray(c+420,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 102,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul_div_dispatch_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+424,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->popPrefix();
    tracep->pushPrefix("lsu_dispatch_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+425,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 62,0);
    tracep->popPrefix();
    tracep->pushPrefix("BC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1650,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1652,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"flush_sqN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("commit_sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1405+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("instr_sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+427+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("chk_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+429+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBit(c+326,0,"check_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("OUT_specTag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+151+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1678,0,"NUM_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1679,0,"NUM_CHKPT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1680,0,"CHKPT_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBit(c+431+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBus(c+447,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->pushPrefix("DU", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1650,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1652,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("IN_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+448,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+452,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->popPrefix();
    tracep->pushPrefix("ALU_buffer_busy", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+23+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("MUL_DIV_buffer_busy", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+25+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("LSU_buffer_busy", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+26+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBit(c+366,0,"LSU_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+365,0,"OUT_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("OUT_alu_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+456,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 102,0);
    tracep->declArray(c+460,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 102,0);
    tracep->popPrefix();
    tracep->pushPrefix("OUT_mul_div_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+464,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->popPrefix();
    tracep->pushPrefix("OUT_lsu_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+465,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 62,0);
    tracep->popPrefix();
    tracep->pushPrefix("packet", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+467,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+471,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->popPrefix();
    tracep->pushPrefix("dispatched", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+475+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("alu_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+27+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("mul_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+29+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("lsu_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+477+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("slot_pending", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+478+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("slot_is_alu", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+480+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("slot_is_mul", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+482+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("slot_is_lsu", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+484+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("prefix_alu", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+486+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("prefix_mul", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+489+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("prefix_lsu", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+492+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("prefix_ready_alu", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+30+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("prefix_ready_mul", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+33+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("prefix_ready_lsu", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+495+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("alu_slot", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+497+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("alu_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+499+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("mul_slot", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+501+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("mul_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+502+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("lsu_slot", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+503+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("lsu_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+504+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("can_dispatch", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+505+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBit(c+507,0,"packet_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("execute", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1650,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1652,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"flush_sqN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("int_issue_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+508,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->declArray(c+511,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->declArray(c+514,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->popPrefix();
    tracep->pushPrefix("lsu_issue_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+517,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 113,0);
    tracep->popPrefix();
    tracep->pushPrefix("CDB_line", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+521,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+523,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+525,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->popPrefix();
    tracep->pushPrefix("agu_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+527,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->popPrefix();
    tracep->pushPrefix("mul_div_busy", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+530+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("int_fu_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+531,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+533,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declQuad(c+535,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->popPrefix();
    tracep->pushPrefix("next_agu_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+537,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("ALU_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+540,0,"IN_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->declQuad(c+543,0,"OUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBus(c+545,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("ALU_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+546,0,"IN_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->declQuad(c+549,0,"OUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBus(c+551,0,"alu_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk2[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("MUL_DIV_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1650,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1652,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"flush_sqN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declArray(c+552,0,"IN_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->declBit(c+555,0,"OUT_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+556,0,"OUT_cdb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBus(c+558,0,"state",2, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declArray(c+559,0,"instr_r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->declBus(c+562,0,"result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("mul_pipe", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+1681+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+563,0,"mul_pipe_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("mul_pipe_sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+564+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("mul_pipe_tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+567+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("mul_pipe_oper", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+570,0,"[0]",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+571,0,"[1]",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+572,0,"[2]",3, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->declBus(c+573,0,"div_dividend",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+574,0,"div_divisor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1687,0,"div_quotient",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1688,0,"div_remainder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+575,0,"div_partial",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+577,0,"div_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+578,0,"div_quot_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+579,0,"div_rem_sign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+580,0,"div_by_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+581,0,"mul_op1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+583,0,"mul_op2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+585,0,"mul_op1_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+587,0,"mul_op2_u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declArray(c+589,0,"mul_result_ss",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+592,0,"mul_result_uu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declArray(c+595,0,"mul_result_su",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+598,0,"op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+599,0,"op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+600,0,"s1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+601,0,"s2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+602,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+603,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+604,0,"partial_high",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+606,0,"sub_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk3[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("AGU_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+608,0,"IN_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 113,0);
    tracep->declArray(c+612,0,"OUT",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->declBit(c+615,0,"is_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+616,0,"is_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+617,0,"data_size",4, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+618,0,"is_unsigned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+619,0,"target_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("fetch", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1650,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1652,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1571,0,"IN_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"jump2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"flush_sqN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+315,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("IN_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+620+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+314,0,"OUT_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"jump1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+80,0,"consumed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+81,0,"jta1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("OUT_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1633,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declArray(c+1636,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->popPrefix();
    tracep->declBit(c+622,0,"q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"invalidate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("aligner_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+184,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+187,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_array", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+190+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+192+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("opcode", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+194+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("imm", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+196+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 20,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+198,0,"iw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("FB", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1650,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1652,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1571,0,"IN_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"flush_sqN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("IN_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+199,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+202,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->popPrefix();
    tracep->declBit(c+314,0,"OUT_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("OUT_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1639,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declArray(c+1642,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->popPrefix();
    tracep->declBus(c+1680,0,"PTR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("buffer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+623,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+626,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+629,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+632,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+635,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+638,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+641,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+644,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+647,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+650,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+653,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+656,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+659,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+662,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+665,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->declArray(c+668,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 70,0);
    tracep->popPrefix();
    tracep->declBus(c+671,0,"head",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+672,0,"tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+673,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+674,0,"sqN_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+205,0,"in_valid_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1645,0,"out_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+675,0,"can_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1646,0,"can_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1647,0,"idx_head",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+676,0,"idx_tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("IA", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("IN_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+677+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+315,0,"pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+183,0,"invalidate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("OUT_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+206,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+209,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->popPrefix();
    tracep->declBus(c+80,0,"consumed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+212,0,"pc_align",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("pc_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+213+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("JTA1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("pc", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+215+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+217+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("opcode", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+219+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("imm", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+221+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 20,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+314,0,"IN_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"jump1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"jta1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+223,0,"jump_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+224,0,"jump_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("flush_controller", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("br_taken", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+225+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+679+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("jump_type", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+681,0,"[0]",1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+682,0,"[1]",1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->declBit(c+83,0,"flush",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"flush_sqN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+227,0,"valid0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+228,0,"valid1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+229,0,"diff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("issue", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1650,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1652,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("IN_alu_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+35,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 102,0);
    tracep->declArray(c+39,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 102,0);
    tracep->popPrefix();
    tracep->pushPrefix("IN_mul_div_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+43,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->popPrefix();
    tracep->pushPrefix("IN_lsu_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+44,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 62,0);
    tracep->popPrefix();
    tracep->declBit(c+83,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"flush_sqN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("tag_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+683,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+684,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+685,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+686,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+687,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+688,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+689,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+690,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("RF_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1475,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1476,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1477,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1478,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1479,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1480,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1481,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1482,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("IN_busy", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+691+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+692+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+696+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+1483+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("OUT_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+700,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->declArray(c+703,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->declArray(c+706,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->popPrefix();
    tracep->pushPrefix("OUT_lsu_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+709,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 113,0);
    tracep->popPrefix();
    tracep->pushPrefix("OUT_br_taken", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+230+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("OUT_jump_type", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+713,0,"[0]",1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+714,0,"[1]",1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("check_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+46,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+47,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+48,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+49,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+50,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+51,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+52,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+53,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("read_tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1487,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1488,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1489,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1490,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1491,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1492,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1493,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+1494,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+82,0,"jta2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+79,0,"jump2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("pc", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+715+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("instr_sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+717+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("instr_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+719+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("alu_rs1_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+721+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("alu_imm", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+723+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("alu_issue_buffer_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1689,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1690,0,"NUM_INT_FU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1650,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1652,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1691,0,"IN_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 102,0);
    tracep->declBit(c+83,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"flush_sqN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("tag_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+725+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("RF_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1495+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+727+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+731+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+1497+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declArray(c+540,0,"OUT_instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->declBit(c+232,0,"OUT_br_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+735,0,"OUT_jump_type",1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+736,0,"OUT_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+737,0,"rs1_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+738,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("check_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+54+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("read_tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1501+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+739,0,"OUT_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("queue", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+740,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+744,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+748,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+752,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+756,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+760,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+764,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+768,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->popPrefix();
    tracep->declBus(c+772,0,"tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1503,0,"ready_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1504,0,"issue_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1505,0,"issue_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+233,0,"rs1_data_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"rs2_data_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+235,0,"sel1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+236,0,"sel2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1654,0,"op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1655,0,"op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+56,0,"is_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"sel_ready2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+773,0,"dispatch_ready_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+774,0,"dispatch_ready_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+237,0,"issue_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+233,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"br_type",5, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+232,0,"br_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1689,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1503,0,"req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1504,0,"grant_idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1505,0,"grant_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1506,0,"r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1507,0,"r2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("next_queue", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+775,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+779,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+783,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+787,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+791,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+795,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+799,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+803,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->popPrefix();
    tracep->declBus(c+807,0,"next_tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("alu_issue_buffer_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1689,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1690,0,"NUM_INT_FU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1650,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1652,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1695,0,"IN_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 102,0);
    tracep->declBit(c+83,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"flush_sqN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("tag_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+808+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("RF_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1508+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+810+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+814+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+1510+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declArray(c+546,0,"OUT_instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->declBit(c+239,0,"OUT_br_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+818,0,"OUT_jump_type",1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+819,0,"OUT_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+820,0,"rs1_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+821,0,"imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("check_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+58+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("read_tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1514+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+822,0,"OUT_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("queue", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+823,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+827,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+831,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+835,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+839,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+843,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+847,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+851,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->popPrefix();
    tracep->declBus(c+855,0,"tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1516,0,"ready_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1517,0,"issue_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1518,0,"issue_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+240,0,"rs1_data_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"rs2_data_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+242,0,"sel1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+243,0,"sel2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1656,0,"op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1657,0,"op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+60,0,"is_jump",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"sel_ready2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"dispatch_ready_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+857,0,"dispatch_ready_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+244,0,"issue_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+240,0,"rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"br_type",5, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+239,0,"br_taken",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1689,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1516,0,"req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1517,0,"grant_idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1518,0,"grant_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1519,0,"r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1520,0,"r2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("next_queue", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+858,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+862,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+866,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+870,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+874,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+878,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+882,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+886,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->popPrefix();
    tracep->declBus(c+890,0,"next_tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk2[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("mul_div_issue_buffer_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1689,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1690,0,"NUM_INT_FU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1650,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1652,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1699,0,"IN_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBit(c+83,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"flush_sqN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("tag_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+891+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("RF_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1521+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+555,0,"IN_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("CDB_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+893+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+897+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+1523+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declArray(c+552,0,"OUT_instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 81,0);
    tracep->pushPrefix("check_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+62+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("read_tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1527+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+901,0,"OUT_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("queue", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+902,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+903,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+904,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+905,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+906,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+907,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+908,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+909,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->declBus(c+910,0,"tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1529,0,"ready_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1530,0,"issue_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1531,0,"issue_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+246,0,"rs1_data_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+247,0,"rs2_data_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+248,0,"issue_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1689,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1529,0,"req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1530,0,"grant_idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1531,0,"grant_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1532,0,"r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1533,0,"r2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("v_queue", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+911,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+912,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+913,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+914,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+915,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+916,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+917,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+918,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->declBus(c+919,0,"v_tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk3[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("lsu_issue_buffer_i", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1689,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBit(c+1650,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1652,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1700,0,"IN_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 62,0);
    tracep->declBit(c+83,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"flush_sqN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("tag_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+920+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("RF_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1534+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+922+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+926+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+1536+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declArray(c+608,0,"OUT_instr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 113,0);
    tracep->pushPrefix("check_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+64+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("read_tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1540+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+930,0,"OUT_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("queue", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+931,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+934,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+937,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+940,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+943,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+946,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+949,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+952,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->popPrefix();
    tracep->declBus(c+955,0,"tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1542,0,"ready_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1543,0,"issue_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1544,0,"issue_found",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+249,0,"rs1_data_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+250,0,"rs2_data_selected",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+251,0,"issue_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+956,0,"dispatch_ready_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+957,0,"dispatch_ready_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("pe", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1689,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1542,0,"req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1543,0,"grant_idx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+1544,0,"grant_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1545,0,"r1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1546,0,"r2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("v_queue", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+958,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+961,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+964,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+967,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+970,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+973,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+976,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->declArray(c+979,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 64,0);
    tracep->popPrefix();
    tracep->declBus(c+982,0,"v_tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ta_gen2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("IN_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+983+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("br_taken", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+252+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("jump_type", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+985,0,"[0]",1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+986,0,"[1]",1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("instr_sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+987+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("pc", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+989+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("alu_rs1_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+991+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("imm", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+993+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+82,0,"jta2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+79,0,"jump2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+254,0,"oldest_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+255,0,"oldest_sqN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("lsu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1650,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1651,0,"clk_m",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1652,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1653,0,"rst_m",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+1700,0,"dispatch_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 62,0);
    tracep->declArray(c+995,0,"agu_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->pushPrefix("commit_sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1407+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+83,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"flush_sqN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+366,0,"OUT_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+998,0,"OUT_cdb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBit(c+66,0,"is_store",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"is_load",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"stb_alloc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+1000,0,"stb_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 73,0);
    tracep->declBus(c+69,0,"ldb_alloc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declQuad(c+1003,0,"ldb_addr_wb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->pushPrefix("stb_mem_req", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1005,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 66,0);
    tracep->declArray(c+1008,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 66,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem_stall", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1011+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("stb_fwd", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+1013,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1015,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1017,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1019,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1021,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1023,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1025,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1027,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1029,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1031,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1033,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1035,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1037,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1039,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1041,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1043,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->popPrefix();
    tracep->declBit(c+366,0,"str_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ldb_mem_req", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+1045,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1047,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->popPrefix();
    tracep->pushPrefix("ldb_mem_resp", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+1049,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+1051,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->popPrefix();
    tracep->declBit(c+1702,0,"ld_busy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("u_dmem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1650,0,"clk_cpu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1652,0,"rst_cpu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1651,0,"clk_mem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1653,0,"rst_mem",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("wr_req", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1053,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 66,0);
    tracep->declArray(c+1056,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 66,0);
    tracep->popPrefix();
    tracep->pushPrefix("wr_stall", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1059+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_req", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+1061,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1063,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->popPrefix();
    tracep->pushPrefix("rd_resp", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+1065,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+1067,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->popPrefix();
    tracep->pushPrefix("rd_stall", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1069+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("wr_req_held", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1071,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 66,0);
    tracep->declArray(c+1074,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 66,0);
    tracep->popPrefix();
    tracep->pushPrefix("rd_req_held", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+1077,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1079,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->popPrefix();
    tracep->pushPrefix("wr_pending", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1081+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_pending", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1083+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("wr_ack_sync", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1085+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_ack_sync", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1087+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("wr_valid_sync", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+293+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_valid_sync", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+295+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBus(c+1703,0,"DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1704,0,"BANK_DEPTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1705,0,"BANK_AW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("wr_ack_mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1413+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_ack_mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1415+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_data_mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1417+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_tag_mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1706+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_resp_valid_mem", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+297+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("wr_valid_sync_r", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+299+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_valid_sync_r", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+301+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("g_ack_sync[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_rd_ack", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1708,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1650,0,"clk_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1652,0,"rst_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1419,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1089,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1090,0,"ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1089,0,"ff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_wr_ack", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1708,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1650,0,"clk_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1652,0,"rst_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1420,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1091,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1092,0,"ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1091,0,"ff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_ack_sync[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_rd_ack", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1708,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1650,0,"clk_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1652,0,"rst_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1421,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1093,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1094,0,"ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1093,0,"ff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_wr_ack", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1708,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1650,0,"clk_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1652,0,"rst_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1422,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1095,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1096,0,"ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1095,0,"ff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_req_sync[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_rd_sync", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1708,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1651,0,"clk_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1653,0,"rst_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1097,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+303,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+304,0,"ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+303,0,"ff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_wr_sync", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1708,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1651,0,"clk_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1653,0,"rst_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1098,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+305,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+306,0,"ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+305,0,"ff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("g_req_sync[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("u_rd_sync", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1708,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1651,0,"clk_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1653,0,"rst_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1099,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+307,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+308,0,"ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+307,0,"ff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_wr_sync", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1708,0,"W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1651,0,"clk_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1653,0,"rst_dst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1100,0,"d",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+309,0,"q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+310,0,"ff1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+309,0,"ff2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+311,0,"be",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+312,0,"bsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+313,0,"boff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("u_ldb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1650,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1652,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"alloc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declQuad(c+1003,0,"addr_wb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->pushPrefix("stb_fwd", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+1101,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1103,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1105,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1107,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1109,0,"[4]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1111,0,"[5]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1113,0,"[6]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1115,0,"[7]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1117,0,"[8]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1119,0,"[9]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1121,0,"[10]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1123,0,"[11]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1125,0,"[12]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1127,0,"[13]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1129,0,"[14]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1131,0,"[15]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->popPrefix();
    tracep->declBit(c+83,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"flush_sqN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("mem_resp", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+1133,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+1135,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem_req", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+1137,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1139,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->popPrefix();
    tracep->declQuad(c+998,0,"cdb_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 45,0);
    tracep->declBit(c+1702,0,"ld_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("entries", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1141,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+1144,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+1147,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+1150,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+1153,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+1156,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+1159,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+1162,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+1165,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+1168,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+1171,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+1174,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+1177,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+1180,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+1183,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->declArray(c+1186,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 82,0);
    tracep->popPrefix();
    tracep->declBus(c+1189,0,"alloc_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1190,0,"ta_wb_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("req_idx", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1191+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1193,0,"broadcast_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1194,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1195,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("u_stb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1650,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1652,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"alloc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+1000,0,"wb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 73,0);
    tracep->pushPrefix("commit_sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1409+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+83,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"flush_sqN",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->pushPrefix("mem_req", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1196,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 66,0);
    tracep->declArray(c+1199,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 66,0);
    tracep->popPrefix();
    tracep->pushPrefix("mem_stall", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1202+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("fwd", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declQuad(c+1204,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1206,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1208,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1210,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1212,0,"[4]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1214,0,"[5]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1216,0,"[6]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1218,0,"[7]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1220,0,"[8]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1222,0,"[9]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1224,0,"[10]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1226,0,"[11]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1228,0,"[12]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1230,0,"[13]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1232,0,"[14]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->declQuad(c+1234,0,"[15]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 42,0);
    tracep->popPrefix();
    tracep->declBit(c+366,0,"str_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1709,0,"PTR_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1710,0,"PTR_MASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("entries", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1236,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+1239,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+1242,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+1245,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+1248,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+1251,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+1254,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+1257,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+1260,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+1263,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+1266,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+1269,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+1272,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+1275,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+1278,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->declArray(c+1281,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 75,0);
    tracep->popPrefix();
    tracep->declBus(c+1284,0,"tail_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1285,0,"drain_ptr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1286,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+256,0,"new_tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+257,0,"on_flush_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+258,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1287,0,"drain_inc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("prefetch", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1650,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1652,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"IN_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+81,0,"jta1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"jta2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+78,0,"jump1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"jump2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"consumed",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("OUT_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1288+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+315,0,"out_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1290,0,"fetch_base",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+260,0,"in_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("IMEM", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1650,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1291,0,"addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1292+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1711,0,"WORD_ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1678,0,"MEM_WORDS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1294,0,"block_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1295,0,"base_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1296,0,"word_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("PC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1650,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1652,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+260,0,"IN_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+675,0,"wr_en",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+315,0,"OUT_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+315,0,"pc_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("register_file", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1650,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1652,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("rs1_addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1547+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs2_addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1551+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_addr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1297+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_write_en", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+1555+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("rd_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1301+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs1_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1559+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs2_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1563+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1305,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("rename", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1650,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1652,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1578,0,"ROB_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1658,0,"dispatch_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"flush",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"chkpt_busy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("IN_specTag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+261+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("commit_packet", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1411,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->declBus(c+1412,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 18,0);
    tracep->popPrefix();
    tracep->pushPrefix("IN_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1306,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 101,0);
    tracep->declArray(c+1310,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 101,0);
    tracep->popPrefix();
    tracep->pushPrefix("CDB_tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1314+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("CDB_valid", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBit(c+1567+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("read_tag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+70,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+71,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+72,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+73,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+74,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+75,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+76,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+77,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("OUT_instr", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declArray(c+1318,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->declArray(c+1322,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 104,0);
    tracep->popPrefix();
    tracep->pushPrefix("reg_ready", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+1326,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1327,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+1328,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1329,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+1330,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1331,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBit(c+1332,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1333,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("chkpt", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+1334+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->pushPrefix("chkpt_sqN", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1336+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+1571,0,"OUT_busy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("OUT_rd", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1338+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1678,0,"NUM_REG",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("rename_table", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+1340,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1341,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1342,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1343,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1344,0,"[4]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1345,0,"[5]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1346,0,"[6]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1347,0,"[7]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1348,0,"[8]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1349,0,"[9]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1350,0,"[10]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1351,0,"[11]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1352,0,"[12]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1353,0,"[13]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1354,0,"[14]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1355,0,"[15]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1356,0,"[16]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1357,0,"[17]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1358,0,"[18]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1359,0,"[19]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1360,0,"[20]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1361,0,"[21]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1362,0,"[22]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1363,0,"[23]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1364,0,"[24]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1365,0,"[25]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1366,0,"[26]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1367,0,"[27]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1368,0,"[28]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1369,0,"[29]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1370,0,"[30]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+1371,0,"[31]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->popPrefix();
    tracep->declQuad(c+1372,0,"ftb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+1374,0,"req_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("masked", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 3; ++i) {
        tracep->declQuad(c+1375+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("onehot", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+1381+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("chosen", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1385+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("req_count", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1387+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+1389,0,"chkpt_need",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1571,0,"stall",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("free_CommTag", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1648+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 5,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("include_pkg", VerilatedTracePrefixType::SCOPE_MODULE);
    Vcore___024root__trace_init_sub__TOP__include_pkg__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vcore___024root__trace_init_sub__TOP__include_pkg__0(Vcore___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_sub__TOP__include_pkg__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+1712,0,"XLEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1713,0,"FETCH_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1713,0,"DECODE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1713,0,"RENAME_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1714,0,"ISSUE_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1713,0,"COMMIT_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1715,0,"REG_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1716,0,"DMEM_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1717,0,"IMEM_ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1718,0,"ROB_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1719,0,"FETCHB_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1717,0,"ISSUEB_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1719,0,"STOREB_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1719,0,"LOADB_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1713,0,"NUM_ALU_FU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1720,0,"NUM_MUL_DIV_FU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1720,0,"NUM_AGU_FU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1720,0,"NUM_LD_BUFFER_WR_PORTS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1721,0,"NUM_INT_FU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1714,0,"NUM_CDB_LINES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1722,0,"SQN_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->declBus(c+1723,0,"SQN_MASK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vcore___024root__trace_init_top(Vcore___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_init_top\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcore___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcore___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vcore___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vcore___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vcore___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vcore___024root__trace_register(Vcore___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_register\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vcore___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vcore___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vcore___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vcore___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcore___024root__trace_const_0_sub_0(Vcore___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vcore___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_const_0\n"); );
    // Body
    Vcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcore___024root*>(voidSelf);
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vcore___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcore___024root__trace_const_0_sub_0(Vcore___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_const_0_sub_0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullBit(oldp+1658,(vlSelfRef.core__DOT__dispatch_busy));
    bufp->fullBit(oldp+1659,(vlSelfRef.core__DOT__alu_buffer_busy[0]));
    bufp->fullBit(oldp+1660,(vlSelfRef.core__DOT__alu_buffer_busy[1]));
    bufp->fullBit(oldp+1661,(vlSelfRef.core__DOT__mul_div_buffer_busy[0]));
    bufp->fullBit(oldp+1662,(vlSelfRef.core__DOT__lsu_buffer_busy[0]));
    bufp->fullWData(oldp+1663,(vlSelfRef.core__DOT__alu_dispatch_instr[0U]),103);
    bufp->fullWData(oldp+1667,(vlSelfRef.core__DOT__alu_dispatch_instr[1U]),103);
    bufp->fullIData(oldp+1671,(vlSelfRef.core__DOT__mul_div_dispatch_instr[0U]),30);
    bufp->fullQData(oldp+1672,(vlSelfRef.core__DOT__lsu_dispatch_instr[0U]),63);
    bufp->fullCData(oldp+1674,(vlSelfRef.core__DOT__ROB__DOT__next_head),6);
    bufp->fullCData(oldp+1675,(vlSelfRef.core__DOT__ROB__DOT__next_tail),6);
    bufp->fullCData(oldp+1676,(vlSelfRef.core__DOT__ROB__DOT__num_wr),2);
    bufp->fullCData(oldp+1677,(vlSelfRef.core__DOT__ROB__DOT__num_commit),2);
    bufp->fullIData(oldp+1678,(0x00000040U),32);
    bufp->fullIData(oldp+1679,(0x00000010U),32);
    bufp->fullIData(oldp+1680,(4U),32);
    bufp->fullQData(oldp+1681,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe[0]),64);
    bufp->fullQData(oldp+1683,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe[1]),64);
    bufp->fullQData(oldp+1685,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe[2]),64);
    bufp->fullIData(oldp+1687,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_quotient),32);
    bufp->fullIData(oldp+1688,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_remainder),32);
    bufp->fullIData(oldp+1689,(8U),32);
    bufp->fullIData(oldp+1690,(3U),32);
    bufp->fullWData(oldp+1691,(vlSelfRef.core__DOT__alu_dispatch_instr[0U]),103);
    bufp->fullWData(oldp+1695,(vlSelfRef.core__DOT__alu_dispatch_instr[1U]),103);
    bufp->fullIData(oldp+1699,(vlSelfRef.core__DOT__mul_div_dispatch_instr[0U]),30);
    bufp->fullQData(oldp+1700,(vlSelfRef.core__DOT__lsu_dispatch_instr[0U]),63);
    bufp->fullBit(oldp+1702,(0U));
    bufp->fullIData(oldp+1703,(0x00000100U),32);
    bufp->fullIData(oldp+1704,(0x00000080U),32);
    bufp->fullIData(oldp+1705,(7U),32);
    bufp->fullCData(oldp+1706,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_tag_mem[0]),6);
    bufp->fullCData(oldp+1707,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_tag_mem[1]),6);
    bufp->fullIData(oldp+1708,(1U),32);
    bufp->fullIData(oldp+1709,(4U),32);
    bufp->fullCData(oldp+1710,(0x0fU),4);
    bufp->fullIData(oldp+1711,(6U),32);
    bufp->fullIData(oldp+1712,(0x00000020U),32);
    bufp->fullIData(oldp+1713,(2U),32);
    bufp->fullIData(oldp+1714,(4U),32);
    bufp->fullIData(oldp+1715,(6U),32);
    bufp->fullIData(oldp+1716,(0x0000000aU),32);
    bufp->fullIData(oldp+1717,(8U),32);
    bufp->fullIData(oldp+1718,(0x00000040U),32);
    bufp->fullIData(oldp+1719,(0x00000010U),32);
    bufp->fullIData(oldp+1720,(1U),32);
    bufp->fullIData(oldp+1721,(3U),32);
    bufp->fullIData(oldp+1722,(7U),32);
    bufp->fullCData(oldp+1723,(0x7fU),8);
}

VL_ATTR_COLD void Vcore___024root__trace_full_0_sub_0(Vcore___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vcore___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_full_0\n"); );
    // Body
    Vcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcore___024root*>(voidSelf);
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vcore___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcore___024root__trace_full_0_sub_0(Vcore___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_full_0_sub_0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+0,(vlSelfRef.core__DOT__read_ready[0U][0U]),6);
    bufp->fullCData(oldp+1,(vlSelfRef.core__DOT__read_ready[0U][1U]),6);
    bufp->fullCData(oldp+2,(vlSelfRef.core__DOT__read_ready[1U][0U]),6);
    bufp->fullCData(oldp+3,(vlSelfRef.core__DOT__read_ready[1U][1U]),6);
    bufp->fullCData(oldp+4,(vlSelfRef.core__DOT__read_ready[2U][0U]),6);
    bufp->fullCData(oldp+5,(vlSelfRef.core__DOT__read_ready[2U][1U]),6);
    bufp->fullCData(oldp+6,(vlSelfRef.core__DOT__read_ready[3U][0U]),6);
    bufp->fullCData(oldp+7,(vlSelfRef.core__DOT__read_ready[3U][1U]),6);
    bufp->fullBit(oldp+8,(vlSelfRef.core__DOT__dispatch__DOT__ALU_buffer_busy[0]));
    bufp->fullBit(oldp+9,(vlSelfRef.core__DOT__dispatch__DOT__ALU_buffer_busy[1]));
    bufp->fullBit(oldp+10,(vlSelfRef.core__DOT__dispatch__DOT__MUL_DIV_buffer_busy[0]));
    bufp->fullBit(oldp+11,(vlSelfRef.core__DOT__dispatch__DOT__LSU_buffer_busy[0]));
    bufp->fullWData(oldp+12,(vlSelfRef.core__DOT__dispatch__DOT__OUT_alu_instr[0U]),103);
    bufp->fullWData(oldp+16,(vlSelfRef.core__DOT__dispatch__DOT__OUT_alu_instr[1U]),103);
    bufp->fullIData(oldp+20,(vlSelfRef.core__DOT__dispatch__DOT__OUT_mul_div_instr[0U]),30);
    bufp->fullQData(oldp+21,(vlSelfRef.core__DOT__dispatch__DOT__OUT_lsu_instr[0U]),63);
    bufp->fullBit(oldp+23,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__ALU_buffer_busy[0]));
    bufp->fullBit(oldp+24,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__ALU_buffer_busy[1]));
    bufp->fullBit(oldp+25,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__MUL_DIV_buffer_busy[0]));
    bufp->fullBit(oldp+26,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__LSU_buffer_busy[0]));
    bufp->fullBit(oldp+27,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_ready[0]));
    bufp->fullBit(oldp+28,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_ready[1]));
    bufp->fullBit(oldp+29,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__mul_ready[0]));
    bufp->fullCData(oldp+30,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu[0]),2);
    bufp->fullCData(oldp+31,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu[1]),2);
    bufp->fullCData(oldp+32,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu[2]),2);
    bufp->fullBit(oldp+33,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_ready_mul[0]));
    bufp->fullBit(oldp+34,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_ready_mul[1]));
    bufp->fullWData(oldp+35,(vlSelfRef.core__DOT__issue__DOT__IN_alu_instr[0U]),103);
    bufp->fullWData(oldp+39,(vlSelfRef.core__DOT__issue__DOT__IN_alu_instr[1U]),103);
    bufp->fullIData(oldp+43,(vlSelfRef.core__DOT__issue__DOT__IN_mul_div_instr[0U]),30);
    bufp->fullQData(oldp+44,(vlSelfRef.core__DOT__issue__DOT__IN_lsu_instr[0U]),63);
    bufp->fullCData(oldp+46,(vlSelfRef.core__DOT__issue__DOT__check_ready[0U][0U]),6);
    bufp->fullCData(oldp+47,(vlSelfRef.core__DOT__issue__DOT__check_ready[0U][1U]),6);
    bufp->fullCData(oldp+48,(vlSelfRef.core__DOT__issue__DOT__check_ready[1U][0U]),6);
    bufp->fullCData(oldp+49,(vlSelfRef.core__DOT__issue__DOT__check_ready[1U][1U]),6);
    bufp->fullCData(oldp+50,(vlSelfRef.core__DOT__issue__DOT__check_ready[2U][0U]),6);
    bufp->fullCData(oldp+51,(vlSelfRef.core__DOT__issue__DOT__check_ready[2U][1U]),6);
    bufp->fullCData(oldp+52,(vlSelfRef.core__DOT__issue__DOT__check_ready[3U][0U]),6);
    bufp->fullCData(oldp+53,(vlSelfRef.core__DOT__issue__DOT__check_ready[3U][1U]),6);
    bufp->fullCData(oldp+54,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__check_ready[0]),6);
    bufp->fullCData(oldp+55,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__check_ready[1]),6);
    bufp->fullBit(oldp+56,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__is_jump));
    bufp->fullBit(oldp+57,((1U & ((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__is_jump) 
                                  | (vlSelfRef.core__DOT__alu_dispatch_instr[0U][0U] 
                                     >> 8U)))));
    bufp->fullCData(oldp+58,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__check_ready[0]),6);
    bufp->fullCData(oldp+59,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__check_ready[1]),6);
    bufp->fullBit(oldp+60,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__is_jump));
    bufp->fullBit(oldp+61,((1U & ((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__is_jump) 
                                  | (vlSelfRef.core__DOT__alu_dispatch_instr[1U][0U] 
                                     >> 8U)))));
    bufp->fullCData(oldp+62,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__check_ready[0]),6);
    bufp->fullCData(oldp+63,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__check_ready[1]),6);
    bufp->fullCData(oldp+64,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__check_ready[0]),6);
    bufp->fullCData(oldp+65,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__check_ready[1]),6);
    bufp->fullBit(oldp+66,(vlSelfRef.core__DOT__lsu__DOT__is_store));
    bufp->fullBit(oldp+67,(vlSelfRef.core__DOT__lsu__DOT__is_load));
    bufp->fullCData(oldp+68,(vlSelfRef.core__DOT__lsu__DOT__stb_alloc),8);
    bufp->fullSData(oldp+69,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__alloc),14);
    bufp->fullCData(oldp+70,(vlSelfRef.core__DOT__rename__DOT__read_tag[0U][0U]),6);
    bufp->fullCData(oldp+71,(vlSelfRef.core__DOT__rename__DOT__read_tag[0U][1U]),6);
    bufp->fullCData(oldp+72,(vlSelfRef.core__DOT__rename__DOT__read_tag[1U][0U]),6);
    bufp->fullCData(oldp+73,(vlSelfRef.core__DOT__rename__DOT__read_tag[1U][1U]),6);
    bufp->fullCData(oldp+74,(vlSelfRef.core__DOT__rename__DOT__read_tag[2U][0U]),6);
    bufp->fullCData(oldp+75,(vlSelfRef.core__DOT__rename__DOT__read_tag[2U][1U]),6);
    bufp->fullCData(oldp+76,(vlSelfRef.core__DOT__rename__DOT__read_tag[3U][0U]),6);
    bufp->fullCData(oldp+77,(vlSelfRef.core__DOT__rename__DOT__read_tag[3U][1U]),6);
    bufp->fullBit(oldp+78,(vlSelfRef.core__DOT__jump1));
    bufp->fullBit(oldp+79,(vlSelfRef.core__DOT__jump2));
    bufp->fullCData(oldp+80,(vlSelfRef.core__DOT__consumed),2);
    bufp->fullIData(oldp+81,(vlSelfRef.core__DOT__jta1),32);
    bufp->fullIData(oldp+82,(vlSelfRef.core__DOT__jta2),32);
    bufp->fullBit(oldp+83,(vlSelfRef.core__DOT__flush));
    bufp->fullCData(oldp+84,(vlSelfRef.core__DOT__restore_specTag[0]),6);
    bufp->fullCData(oldp+85,(vlSelfRef.core__DOT__restore_specTag[1]),6);
    bufp->fullCData(oldp+86,(vlSelfRef.core__DOT__restore_specTag[2]),6);
    bufp->fullCData(oldp+87,(vlSelfRef.core__DOT__restore_specTag[3]),6);
    bufp->fullCData(oldp+88,(vlSelfRef.core__DOT__restore_specTag[4]),6);
    bufp->fullCData(oldp+89,(vlSelfRef.core__DOT__restore_specTag[5]),6);
    bufp->fullCData(oldp+90,(vlSelfRef.core__DOT__restore_specTag[6]),6);
    bufp->fullCData(oldp+91,(vlSelfRef.core__DOT__restore_specTag[7]),6);
    bufp->fullCData(oldp+92,(vlSelfRef.core__DOT__restore_specTag[8]),6);
    bufp->fullCData(oldp+93,(vlSelfRef.core__DOT__restore_specTag[9]),6);
    bufp->fullCData(oldp+94,(vlSelfRef.core__DOT__restore_specTag[10]),6);
    bufp->fullCData(oldp+95,(vlSelfRef.core__DOT__restore_specTag[11]),6);
    bufp->fullCData(oldp+96,(vlSelfRef.core__DOT__restore_specTag[12]),6);
    bufp->fullCData(oldp+97,(vlSelfRef.core__DOT__restore_specTag[13]),6);
    bufp->fullCData(oldp+98,(vlSelfRef.core__DOT__restore_specTag[14]),6);
    bufp->fullCData(oldp+99,(vlSelfRef.core__DOT__restore_specTag[15]),6);
    bufp->fullCData(oldp+100,(vlSelfRef.core__DOT__restore_specTag[16]),6);
    bufp->fullCData(oldp+101,(vlSelfRef.core__DOT__restore_specTag[17]),6);
    bufp->fullCData(oldp+102,(vlSelfRef.core__DOT__restore_specTag[18]),6);
    bufp->fullCData(oldp+103,(vlSelfRef.core__DOT__restore_specTag[19]),6);
    bufp->fullCData(oldp+104,(vlSelfRef.core__DOT__restore_specTag[20]),6);
    bufp->fullCData(oldp+105,(vlSelfRef.core__DOT__restore_specTag[21]),6);
    bufp->fullCData(oldp+106,(vlSelfRef.core__DOT__restore_specTag[22]),6);
    bufp->fullCData(oldp+107,(vlSelfRef.core__DOT__restore_specTag[23]),6);
    bufp->fullCData(oldp+108,(vlSelfRef.core__DOT__restore_specTag[24]),6);
    bufp->fullCData(oldp+109,(vlSelfRef.core__DOT__restore_specTag[25]),6);
    bufp->fullCData(oldp+110,(vlSelfRef.core__DOT__restore_specTag[26]),6);
    bufp->fullCData(oldp+111,(vlSelfRef.core__DOT__restore_specTag[27]),6);
    bufp->fullCData(oldp+112,(vlSelfRef.core__DOT__restore_specTag[28]),6);
    bufp->fullCData(oldp+113,(vlSelfRef.core__DOT__restore_specTag[29]),6);
    bufp->fullCData(oldp+114,(vlSelfRef.core__DOT__restore_specTag[30]),6);
    bufp->fullCData(oldp+115,(vlSelfRef.core__DOT__restore_specTag[31]),6);
    bufp->fullCData(oldp+116,(vlSelfRef.core__DOT__flush_sqN),7);
    bufp->fullBit(oldp+117,(vlSelfRef.core__DOT__br_taken[0]));
    bufp->fullBit(oldp+118,(vlSelfRef.core__DOT__br_taken[1]));
    bufp->fullCData(oldp+119,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[0]),6);
    bufp->fullCData(oldp+120,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[1]),6);
    bufp->fullCData(oldp+121,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[2]),6);
    bufp->fullCData(oldp+122,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[3]),6);
    bufp->fullCData(oldp+123,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[4]),6);
    bufp->fullCData(oldp+124,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[5]),6);
    bufp->fullCData(oldp+125,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[6]),6);
    bufp->fullCData(oldp+126,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[7]),6);
    bufp->fullCData(oldp+127,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[8]),6);
    bufp->fullCData(oldp+128,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[9]),6);
    bufp->fullCData(oldp+129,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[10]),6);
    bufp->fullCData(oldp+130,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[11]),6);
    bufp->fullCData(oldp+131,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[12]),6);
    bufp->fullCData(oldp+132,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[13]),6);
    bufp->fullCData(oldp+133,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[14]),6);
    bufp->fullCData(oldp+134,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[15]),6);
    bufp->fullCData(oldp+135,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[16]),6);
    bufp->fullCData(oldp+136,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[17]),6);
    bufp->fullCData(oldp+137,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[18]),6);
    bufp->fullCData(oldp+138,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[19]),6);
    bufp->fullCData(oldp+139,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[20]),6);
    bufp->fullCData(oldp+140,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[21]),6);
    bufp->fullCData(oldp+141,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[22]),6);
    bufp->fullCData(oldp+142,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[23]),6);
    bufp->fullCData(oldp+143,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[24]),6);
    bufp->fullCData(oldp+144,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[25]),6);
    bufp->fullCData(oldp+145,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[26]),6);
    bufp->fullCData(oldp+146,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[27]),6);
    bufp->fullCData(oldp+147,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[28]),6);
    bufp->fullCData(oldp+148,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[29]),6);
    bufp->fullCData(oldp+149,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[30]),6);
    bufp->fullCData(oldp+150,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[31]),6);
    bufp->fullCData(oldp+151,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[0]),6);
    bufp->fullCData(oldp+152,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[1]),6);
    bufp->fullCData(oldp+153,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[2]),6);
    bufp->fullCData(oldp+154,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[3]),6);
    bufp->fullCData(oldp+155,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[4]),6);
    bufp->fullCData(oldp+156,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[5]),6);
    bufp->fullCData(oldp+157,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[6]),6);
    bufp->fullCData(oldp+158,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[7]),6);
    bufp->fullCData(oldp+159,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[8]),6);
    bufp->fullCData(oldp+160,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[9]),6);
    bufp->fullCData(oldp+161,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[10]),6);
    bufp->fullCData(oldp+162,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[11]),6);
    bufp->fullCData(oldp+163,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[12]),6);
    bufp->fullCData(oldp+164,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[13]),6);
    bufp->fullCData(oldp+165,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[14]),6);
    bufp->fullCData(oldp+166,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[15]),6);
    bufp->fullCData(oldp+167,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[16]),6);
    bufp->fullCData(oldp+168,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[17]),6);
    bufp->fullCData(oldp+169,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[18]),6);
    bufp->fullCData(oldp+170,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[19]),6);
    bufp->fullCData(oldp+171,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[20]),6);
    bufp->fullCData(oldp+172,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[21]),6);
    bufp->fullCData(oldp+173,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[22]),6);
    bufp->fullCData(oldp+174,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[23]),6);
    bufp->fullCData(oldp+175,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[24]),6);
    bufp->fullCData(oldp+176,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[25]),6);
    bufp->fullCData(oldp+177,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[26]),6);
    bufp->fullCData(oldp+178,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[27]),6);
    bufp->fullCData(oldp+179,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[28]),6);
    bufp->fullCData(oldp+180,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[29]),6);
    bufp->fullCData(oldp+181,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[30]),6);
    bufp->fullCData(oldp+182,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[31]),6);
    bufp->fullBit(oldp+183,(vlSelfRef.core__DOT__fetch__DOT__IA__DOT__invalidate));
    bufp->fullWData(oldp+184,(vlSelfRef.core__DOT__fetch__DOT__aligner_out[0U]),65);
    bufp->fullWData(oldp+187,(vlSelfRef.core__DOT__fetch__DOT__aligner_out[1U]),65);
    bufp->fullIData(oldp+190,(vlSelfRef.core__DOT__fetch__DOT__pc_array[0]),32);
    bufp->fullIData(oldp+191,(vlSelfRef.core__DOT__fetch__DOT__pc_array[1]),32);
    bufp->fullBit(oldp+192,(vlSelfRef.core__DOT__fetch__DOT__valid[0]));
    bufp->fullBit(oldp+193,(vlSelfRef.core__DOT__fetch__DOT__valid[1]));
    bufp->fullCData(oldp+194,(vlSelfRef.core__DOT__fetch__DOT__opcode[0]),7);
    bufp->fullCData(oldp+195,(vlSelfRef.core__DOT__fetch__DOT__opcode[1]),7);
    bufp->fullIData(oldp+196,(vlSelfRef.core__DOT__fetch__DOT__imm[0]),21);
    bufp->fullIData(oldp+197,(vlSelfRef.core__DOT__fetch__DOT__imm[1]),21);
    bufp->fullIData(oldp+198,(vlSelfRef.core__DOT__fetch__DOT__iw),32);
    bufp->fullWData(oldp+199,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__IN_instr[0U]),65);
    bufp->fullWData(oldp+202,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__IN_instr[1U]),65);
    bufp->fullCData(oldp+205,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__in_valid_count),2);
    bufp->fullWData(oldp+206,(vlSelfRef.core__DOT__fetch__DOT__IA__DOT__OUT_instr[0U]),65);
    bufp->fullWData(oldp+209,(vlSelfRef.core__DOT__fetch__DOT__IA__DOT__OUT_instr[1U]),65);
    bufp->fullBit(oldp+212,(vlSelfRef.core__DOT__fetch__DOT__IA__DOT__pc_align));
    bufp->fullBit(oldp+213,(vlSelfRef.core__DOT__fetch__DOT__IA__DOT__pc_valid[0]));
    bufp->fullBit(oldp+214,(vlSelfRef.core__DOT__fetch__DOT__IA__DOT__pc_valid[1]));
    bufp->fullIData(oldp+215,(vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__pc[0]),32);
    bufp->fullIData(oldp+216,(vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__pc[1]),32);
    bufp->fullBit(oldp+217,(vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__valid[0]));
    bufp->fullBit(oldp+218,(vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__valid[1]));
    bufp->fullCData(oldp+219,(vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__opcode[0]),7);
    bufp->fullCData(oldp+220,(vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__opcode[1]),7);
    bufp->fullIData(oldp+221,(vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__imm[0]),21);
    bufp->fullIData(oldp+222,(vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__imm[1]),21);
    bufp->fullBit(oldp+223,(vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__jump_valid));
    bufp->fullBit(oldp+224,(vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__jump_index));
    bufp->fullBit(oldp+225,(vlSelfRef.core__DOT__flush_controller__DOT__br_taken[0]));
    bufp->fullBit(oldp+226,(vlSelfRef.core__DOT__flush_controller__DOT__br_taken[1]));
    bufp->fullBit(oldp+227,(vlSelfRef.core__DOT__flush_controller__DOT__unnamedblk1__DOT__valid0));
    bufp->fullBit(oldp+228,(vlSelfRef.core__DOT__flush_controller__DOT__unnamedblk1__DOT__valid1));
    bufp->fullCData(oldp+229,(vlSelfRef.core__DOT__flush_controller__DOT__unnamedblk1__DOT__diff),7);
    bufp->fullBit(oldp+230,(vlSelfRef.core__DOT__issue__DOT__OUT_br_taken[0]));
    bufp->fullBit(oldp+231,(vlSelfRef.core__DOT__issue__DOT__OUT_br_taken[1]));
    bufp->fullBit(oldp+232,(((~ ((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type) 
                                 >> 3U)) & ((4U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type))
                                             ? ((2U 
                                                 & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type))
                                                 ? 
                                                ((~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type)) 
                                                 & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                                                    >= vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type))
                                                  ? 
                                                 (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                                                  < vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected)
                                                  : 
                                                 VL_GTES_III(32, vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected, vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected)))
                                             : ((2U 
                                                 & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type))
                                                  ? 
                                                 VL_LTS_III(32, vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected, vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected)
                                                  : 
                                                 (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                                                  != vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected))
                                                 : 
                                                ((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type) 
                                                 & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                                                    == vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected)))))));
    bufp->fullIData(oldp+233,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected),32);
    bufp->fullIData(oldp+234,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected),32);
    bufp->fullBit(oldp+235,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel1));
    bufp->fullCData(oldp+236,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel2),2);
    bufp->fullBit(oldp+237,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_valid));
    bufp->fullCData(oldp+238,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type),4);
    bufp->fullBit(oldp+239,(((~ ((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type) 
                                 >> 3U)) & ((4U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type))
                                             ? ((2U 
                                                 & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type))
                                                 ? 
                                                ((~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type)) 
                                                 & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                                                    >= vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type))
                                                  ? 
                                                 (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                                                  < vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected)
                                                  : 
                                                 VL_GTES_III(32, vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected, vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected)))
                                             : ((2U 
                                                 & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type))
                                                  ? 
                                                 VL_LTS_III(32, vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected, vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected)
                                                  : 
                                                 (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                                                  != vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected))
                                                 : 
                                                ((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type) 
                                                 & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                                                    == vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected)))))));
    bufp->fullIData(oldp+240,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected),32);
    bufp->fullIData(oldp+241,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected),32);
    bufp->fullBit(oldp+242,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel1));
    bufp->fullCData(oldp+243,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel2),2);
    bufp->fullBit(oldp+244,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_valid));
    bufp->fullCData(oldp+245,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type),4);
    bufp->fullIData(oldp+246,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs1_data_selected),32);
    bufp->fullIData(oldp+247,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs2_data_selected),32);
    bufp->fullBit(oldp+248,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_valid));
    bufp->fullIData(oldp+249,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs1_data_selected),32);
    bufp->fullIData(oldp+250,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs2_data_selected),32);
    bufp->fullBit(oldp+251,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_valid));
    bufp->fullBit(oldp+252,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__br_taken[0]));
    bufp->fullBit(oldp+253,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__br_taken[1]));
    bufp->fullBit(oldp+254,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__oldest_idx));
    bufp->fullCData(oldp+255,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__oldest_sqN),7);
    bufp->fullCData(oldp+256,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__new_tail),4);
    bufp->fullSData(oldp+257,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__on_flush_valid),16);
    bufp->fullCData(oldp+258,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__idx),4);
    bufp->fullBit(oldp+259,((1U & (IData)(vlSelfRef.core__DOT__consumed))));
    bufp->fullIData(oldp+260,(((0U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                                : ((1U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                    ? vlSelfRef.core__DOT__jta1
                                    : ((2U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                        ? vlSelfRef.core__DOT__jta2
                                        : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)))),32);
    bufp->fullCData(oldp+261,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[0]),6);
    bufp->fullCData(oldp+262,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[1]),6);
    bufp->fullCData(oldp+263,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[2]),6);
    bufp->fullCData(oldp+264,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[3]),6);
    bufp->fullCData(oldp+265,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[4]),6);
    bufp->fullCData(oldp+266,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[5]),6);
    bufp->fullCData(oldp+267,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[6]),6);
    bufp->fullCData(oldp+268,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[7]),6);
    bufp->fullCData(oldp+269,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[8]),6);
    bufp->fullCData(oldp+270,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[9]),6);
    bufp->fullCData(oldp+271,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[10]),6);
    bufp->fullCData(oldp+272,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[11]),6);
    bufp->fullCData(oldp+273,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[12]),6);
    bufp->fullCData(oldp+274,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[13]),6);
    bufp->fullCData(oldp+275,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[14]),6);
    bufp->fullCData(oldp+276,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[15]),6);
    bufp->fullCData(oldp+277,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[16]),6);
    bufp->fullCData(oldp+278,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[17]),6);
    bufp->fullCData(oldp+279,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[18]),6);
    bufp->fullCData(oldp+280,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[19]),6);
    bufp->fullCData(oldp+281,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[20]),6);
    bufp->fullCData(oldp+282,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[21]),6);
    bufp->fullCData(oldp+283,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[22]),6);
    bufp->fullCData(oldp+284,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[23]),6);
    bufp->fullCData(oldp+285,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[24]),6);
    bufp->fullCData(oldp+286,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[25]),6);
    bufp->fullCData(oldp+287,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[26]),6);
    bufp->fullCData(oldp+288,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[27]),6);
    bufp->fullCData(oldp+289,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[28]),6);
    bufp->fullCData(oldp+290,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[29]),6);
    bufp->fullCData(oldp+291,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[30]),6);
    bufp->fullCData(oldp+292,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[31]),6);
    bufp->fullBit(oldp+293,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync[0]));
    bufp->fullBit(oldp+294,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync[1]));
    bufp->fullBit(oldp+295,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync[0]));
    bufp->fullBit(oldp+296,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync[1]));
    bufp->fullBit(oldp+297,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_resp_valid_mem[0]));
    bufp->fullBit(oldp+298,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_resp_valid_mem[1]));
    bufp->fullBit(oldp+299,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r[0]));
    bufp->fullBit(oldp+300,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r[1]));
    bufp->fullBit(oldp+301,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r[0]));
    bufp->fullBit(oldp+302,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r[1]));
    bufp->fullBit(oldp+303,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_rd_sync__DOT__ff2));
    bufp->fullBit(oldp+304,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_rd_sync__DOT__ff1));
    bufp->fullBit(oldp+305,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_wr_sync__DOT__ff2));
    bufp->fullBit(oldp+306,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_wr_sync__DOT__ff1));
    bufp->fullBit(oldp+307,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_rd_sync__DOT__ff2));
    bufp->fullBit(oldp+308,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_rd_sync__DOT__ff1));
    bufp->fullBit(oldp+309,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_wr_sync__DOT__ff2));
    bufp->fullBit(oldp+310,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_wr_sync__DOT__ff1));
    bufp->fullCData(oldp+311,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__be),4);
    bufp->fullBit(oldp+312,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__bsel));
    bufp->fullCData(oldp+313,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__boff),7);
    bufp->fullBit(oldp+314,((0x0eU < (IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__count))));
    bufp->fullIData(oldp+315,(vlSelfRef.core__DOT__prefetch__DOT__PC__DOT__pc_reg),32);
    bufp->fullIData(oldp+316,(vlSelfRef.core__DOT__prefetch_instr[0]),32);
    bufp->fullIData(oldp+317,(vlSelfRef.core__DOT__prefetch_instr[1]),32);
    bufp->fullWData(oldp+318,(vlSelfRef.core__DOT__decode_instr[0U]),102);
    bufp->fullWData(oldp+322,(vlSelfRef.core__DOT__decode_instr[1U]),102);
    bufp->fullBit(oldp+326,((1U & ((IData)(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count) 
                                   >> 4U))));
    bufp->fullBit(oldp+327,(vlSelfRef.core__DOT__reg_ready[0U][0U]));
    bufp->fullBit(oldp+328,(vlSelfRef.core__DOT__reg_ready[0U][1U]));
    bufp->fullBit(oldp+329,(vlSelfRef.core__DOT__reg_ready[1U][0U]));
    bufp->fullBit(oldp+330,(vlSelfRef.core__DOT__reg_ready[1U][1U]));
    bufp->fullBit(oldp+331,(vlSelfRef.core__DOT__reg_ready[2U][0U]));
    bufp->fullBit(oldp+332,(vlSelfRef.core__DOT__reg_ready[2U][1U]));
    bufp->fullBit(oldp+333,(vlSelfRef.core__DOT__reg_ready[3U][0U]));
    bufp->fullBit(oldp+334,(vlSelfRef.core__DOT__reg_ready[3U][1U]));
    bufp->fullWData(oldp+335,(vlSelfRef.core__DOT__rename_instr[0U]),105);
    bufp->fullWData(oldp+339,(vlSelfRef.core__DOT__rename_instr[1U]),105);
    bufp->fullBit(oldp+343,(vlSelfRef.core__DOT__chkpt[0]));
    bufp->fullBit(oldp+344,(vlSelfRef.core__DOT__chkpt[1]));
    bufp->fullCData(oldp+345,(vlSelfRef.core__DOT__chkpt_sqN[0]),7);
    bufp->fullCData(oldp+346,(vlSelfRef.core__DOT__chkpt_sqN[1]),7);
    bufp->fullQData(oldp+347,(vlSelfRef.core__DOT__CDB[0U]),46);
    bufp->fullQData(oldp+349,(vlSelfRef.core__DOT__CDB[1U]),46);
    bufp->fullQData(oldp+351,(vlSelfRef.core__DOT__CDB[2U]),46);
    bufp->fullQData(oldp+353,(vlSelfRef.core__DOT__CDB[3U]),46);
    bufp->fullCData(oldp+355,(vlSelfRef.core__DOT__CDB_tag[0]),6);
    bufp->fullCData(oldp+356,(vlSelfRef.core__DOT__CDB_tag[1]),6);
    bufp->fullCData(oldp+357,(vlSelfRef.core__DOT__CDB_tag[2]),6);
    bufp->fullCData(oldp+358,(vlSelfRef.core__DOT__CDB_tag[3]),6);
    bufp->fullIData(oldp+359,(vlSelfRef.core__DOT__CDB_result[0]),32);
    bufp->fullIData(oldp+360,(vlSelfRef.core__DOT__CDB_result[1]),32);
    bufp->fullIData(oldp+361,(vlSelfRef.core__DOT__CDB_result[2]),32);
    bufp->fullIData(oldp+362,(vlSelfRef.core__DOT__CDB_result[3]),32);
    bufp->fullCData(oldp+363,(vlSelfRef.core__DOT__rename_rob_rd[0]),5);
    bufp->fullCData(oldp+364,(vlSelfRef.core__DOT__rename_rob_rd[1]),5);
    bufp->fullBit(oldp+365,((1U & (~ (IData)(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet_done)))));
    bufp->fullBit(oldp+366,((0x0fU == (IData)(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__count))));
    bufp->fullBit(oldp+367,(vlSelfRef.core__DOT__mul_div_fu_busy[0]));
    bufp->fullWData(oldp+368,(vlSelfRef.core__DOT__int_issue_instr[0U]),82);
    bufp->fullWData(oldp+371,(vlSelfRef.core__DOT__int_issue_instr[1U]),82);
    bufp->fullWData(oldp+374,(vlSelfRef.core__DOT__int_issue_instr[2U]),82);
    bufp->fullWData(oldp+377,(vlSelfRef.core__DOT__lsu_issue_instr[0U]),114);
    bufp->fullCData(oldp+381,(vlSelfRef.core__DOT__jump_type[0U]),2);
    bufp->fullCData(oldp+382,(vlSelfRef.core__DOT__jump_type[1U]),2);
    bufp->fullCData(oldp+383,(vlSelfRef.core__DOT__br_jalr_sqN[0]),7);
    bufp->fullCData(oldp+384,(vlSelfRef.core__DOT__br_jalr_sqN[1]),7);
    bufp->fullWData(oldp+385,(vlSelfRef.core__DOT__agu_out[0U]),77);
    bufp->fullQData(oldp+388,(vlSelfRef.core__DOT__int_cdb_lines[0U]),46);
    bufp->fullQData(oldp+390,(vlSelfRef.core__DOT__int_cdb_lines[1U]),46);
    bufp->fullQData(oldp+392,(vlSelfRef.core__DOT__int_cdb_lines[2U]),46);
    bufp->fullQData(oldp+394,(vlSelfRef.core__DOT__lsu_cdb_lines[0U]),46);
    bufp->fullWData(oldp+396,(vlSelfRef.core__DOT__decode__DOT__OUT_instr[0U]),102);
    bufp->fullWData(oldp+400,(vlSelfRef.core__DOT__decode__DOT__OUT_instr[1U]),102);
    bufp->fullCData(oldp+404,(vlSelfRef.core__DOT__dispatch__DOT__instr_sqN[0]),7);
    bufp->fullCData(oldp+405,(vlSelfRef.core__DOT__dispatch__DOT__instr_sqN[1]),7);
    bufp->fullWData(oldp+406,(vlSelfRef.core__DOT__dispatch__DOT__IN_instr[0U]),105);
    bufp->fullWData(oldp+410,(vlSelfRef.core__DOT__dispatch__DOT__IN_instr[1U]),105);
    bufp->fullBit(oldp+414,(vlSelfRef.core__DOT__dispatch__DOT__checkpoint[0]));
    bufp->fullBit(oldp+415,(vlSelfRef.core__DOT__dispatch__DOT__checkpoint[1]));
    bufp->fullWData(oldp+416,(vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U]),103);
    bufp->fullWData(oldp+420,(vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U]),103);
    bufp->fullIData(oldp+424,(vlSelfRef.core__DOT__dispatch__DOT__mul_div_dispatch_out[0U]),30);
    bufp->fullQData(oldp+425,(vlSelfRef.core__DOT__dispatch__DOT__lsu_dispatch_out[0U]),63);
    bufp->fullCData(oldp+427,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__instr_sqN[0]),7);
    bufp->fullCData(oldp+428,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__instr_sqN[1]),7);
    bufp->fullBit(oldp+429,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__chk_valid[0]));
    bufp->fullBit(oldp+430,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__chk_valid[1]));
    bufp->fullBit(oldp+431,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[0]));
    bufp->fullBit(oldp+432,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[1]));
    bufp->fullBit(oldp+433,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[2]));
    bufp->fullBit(oldp+434,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[3]));
    bufp->fullBit(oldp+435,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[4]));
    bufp->fullBit(oldp+436,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[5]));
    bufp->fullBit(oldp+437,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[6]));
    bufp->fullBit(oldp+438,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[7]));
    bufp->fullBit(oldp+439,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[8]));
    bufp->fullBit(oldp+440,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[9]));
    bufp->fullBit(oldp+441,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[10]));
    bufp->fullBit(oldp+442,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[11]));
    bufp->fullBit(oldp+443,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[12]));
    bufp->fullBit(oldp+444,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[13]));
    bufp->fullBit(oldp+445,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[14]));
    bufp->fullBit(oldp+446,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[15]));
    bufp->fullCData(oldp+447,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count),5);
    bufp->fullWData(oldp+448,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__IN_instr[0U]),105);
    bufp->fullWData(oldp+452,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__IN_instr[1U]),105);
    bufp->fullWData(oldp+456,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__OUT_alu_instr[0U]),103);
    bufp->fullWData(oldp+460,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__OUT_alu_instr[1U]),103);
    bufp->fullIData(oldp+464,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__OUT_mul_div_instr[0U]),30);
    bufp->fullQData(oldp+465,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__OUT_lsu_instr[0U]),63);
    bufp->fullWData(oldp+467,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[0U]),105);
    bufp->fullWData(oldp+471,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[1U]),105);
    bufp->fullBit(oldp+475,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__dispatched[0]));
    bufp->fullBit(oldp+476,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__dispatched[1]));
    bufp->fullBit(oldp+477,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__lsu_ready[0]));
    bufp->fullBit(oldp+478,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_pending[0]));
    bufp->fullBit(oldp+479,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_pending[1]));
    bufp->fullBit(oldp+480,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_is_alu[0]));
    bufp->fullBit(oldp+481,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_is_alu[1]));
    bufp->fullBit(oldp+482,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_is_mul[0]));
    bufp->fullBit(oldp+483,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_is_mul[1]));
    bufp->fullBit(oldp+484,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_is_lsu[0]));
    bufp->fullBit(oldp+485,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_is_lsu[1]));
    bufp->fullCData(oldp+486,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_alu[0]),2);
    bufp->fullCData(oldp+487,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_alu[1]),2);
    bufp->fullCData(oldp+488,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_alu[2]),2);
    bufp->fullCData(oldp+489,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_mul[0]),2);
    bufp->fullCData(oldp+490,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_mul[1]),2);
    bufp->fullCData(oldp+491,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_mul[2]),2);
    bufp->fullCData(oldp+492,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_lsu[0]),2);
    bufp->fullCData(oldp+493,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_lsu[1]),2);
    bufp->fullCData(oldp+494,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_lsu[2]),2);
    bufp->fullBit(oldp+495,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_ready_lsu[0]));
    bufp->fullBit(oldp+496,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_ready_lsu[1]));
    bufp->fullBit(oldp+497,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[0]));
    bufp->fullBit(oldp+498,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[1]));
    bufp->fullBit(oldp+499,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_valid[0]));
    bufp->fullBit(oldp+500,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_valid[1]));
    bufp->fullBit(oldp+501,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__mul_slot[0]));
    bufp->fullBit(oldp+502,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__mul_valid[0]));
    bufp->fullBit(oldp+503,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__lsu_slot[0]));
    bufp->fullBit(oldp+504,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__lsu_valid[0]));
    bufp->fullBit(oldp+505,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__can_dispatch[0]));
    bufp->fullBit(oldp+506,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__can_dispatch[1]));
    bufp->fullBit(oldp+507,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet_done));
    bufp->fullWData(oldp+508,(vlSelfRef.core__DOT__execute__DOT__int_issue_instr[0U]),82);
    bufp->fullWData(oldp+511,(vlSelfRef.core__DOT__execute__DOT__int_issue_instr[1U]),82);
    bufp->fullWData(oldp+514,(vlSelfRef.core__DOT__execute__DOT__int_issue_instr[2U]),82);
    bufp->fullWData(oldp+517,(vlSelfRef.core__DOT__execute__DOT__lsu_issue_instr[0U]),114);
    bufp->fullQData(oldp+521,(vlSelfRef.core__DOT__execute__DOT__CDB_line[0U]),46);
    bufp->fullQData(oldp+523,(vlSelfRef.core__DOT__execute__DOT__CDB_line[1U]),46);
    bufp->fullQData(oldp+525,(vlSelfRef.core__DOT__execute__DOT__CDB_line[2U]),46);
    bufp->fullWData(oldp+527,(vlSelfRef.core__DOT__execute__DOT__agu_out[0U]),77);
    bufp->fullBit(oldp+530,(vlSelfRef.core__DOT__execute__DOT__mul_div_busy[0]));
    bufp->fullQData(oldp+531,(vlSelfRef.core__DOT__execute__DOT__int_fu_out[0U]),46);
    bufp->fullQData(oldp+533,(vlSelfRef.core__DOT__execute__DOT__int_fu_out[1U]),46);
    bufp->fullQData(oldp+535,(vlSelfRef.core__DOT__execute__DOT__int_fu_out[2U]),46);
    bufp->fullWData(oldp+537,(vlSelfRef.core__DOT__execute__DOT__next_agu_out[0U]),77);
    bufp->fullWData(oldp+540,(vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr),82);
    bufp->fullQData(oldp+543,((((QData)((IData)((0x000000ffU 
                                                 & (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                                                    >> 0x0000000aU)))) 
                                << 0x00000026U) | (
                                                   ((QData)((IData)(
                                                                    (0x0000003fU 
                                                                     & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U]))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.core__DOT__execute__DOT__genblk1__BRA__0__KET____DOT__ALU_i__DOT__alu_result))))),46);
    bufp->fullIData(oldp+545,(vlSelfRef.core__DOT__execute__DOT__genblk1__BRA__0__KET____DOT__ALU_i__DOT__alu_result),32);
    bufp->fullWData(oldp+546,(vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr),82);
    bufp->fullQData(oldp+549,((((QData)((IData)((0x000000ffU 
                                                 & (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                                                    >> 0x0000000aU)))) 
                                << 0x00000026U) | (
                                                   ((QData)((IData)(
                                                                    (0x0000003fU 
                                                                     & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U]))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(vlSelfRef.core__DOT__execute__DOT__genblk1__BRA__1__KET____DOT__ALU_i__DOT__alu_result))))),46);
    bufp->fullIData(oldp+551,(vlSelfRef.core__DOT__execute__DOT__genblk1__BRA__1__KET____DOT__ALU_i__DOT__alu_result),32);
    bufp->fullWData(oldp+552,(vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr),82);
    bufp->fullBit(oldp+555,((0U != (IData)(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__state))));
    bufp->fullQData(oldp+556,(vlSelfRef.core__DOT__execute__DOT____Vcellout__genblk2__BRA__0__KET____DOT__MUL_DIV_i__OUT_cdb),46);
    bufp->fullCData(oldp+558,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__state),3);
    bufp->fullWData(oldp+559,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r),82);
    bufp->fullIData(oldp+562,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__result),32);
    bufp->fullCData(oldp+563,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_valid),3);
    bufp->fullCData(oldp+564,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_sqN[0]),7);
    bufp->fullCData(oldp+565,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_sqN[1]),7);
    bufp->fullCData(oldp+566,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_sqN[2]),7);
    bufp->fullCData(oldp+567,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_tag[0]),6);
    bufp->fullCData(oldp+568,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_tag[1]),6);
    bufp->fullCData(oldp+569,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_tag[2]),6);
    bufp->fullCData(oldp+570,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_oper[0U]),4);
    bufp->fullCData(oldp+571,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_oper[1U]),4);
    bufp->fullCData(oldp+572,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_oper[2U]),4);
    bufp->fullIData(oldp+573,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_dividend),32);
    bufp->fullIData(oldp+574,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_divisor),32);
    bufp->fullQData(oldp+575,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_partial),64);
    bufp->fullCData(oldp+577,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_count),6);
    bufp->fullBit(oldp+578,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_quot_sign));
    bufp->fullBit(oldp+579,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_rem_sign));
    bufp->fullBit(oldp+580,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_by_zero));
    bufp->fullQData(oldp+581,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_op1_s),33);
    bufp->fullQData(oldp+583,((((QData)((IData)((1U 
                                                 & (vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[1U] 
                                                    >> 9U)))) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  ((vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[1U] 
                                                                    << 0x00000016U) 
                                                                   | (vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[0U] 
                                                                      >> 0x0000000aU)))))),33);
    bufp->fullQData(oldp+585,((QData)((IData)(((vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[2U] 
                                                << 0x00000016U) 
                                               | (vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[1U] 
                                                  >> 0x0000000aU))))),33);
    bufp->fullQData(oldp+587,((QData)((IData)(((vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[1U] 
                                                << 0x00000016U) 
                                               | (vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[0U] 
                                                  >> 0x0000000aU))))),33);
    bufp->fullWData(oldp+589,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_result_ss),66);
    bufp->fullWData(oldp+592,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_result_uu),66);
    bufp->fullWData(oldp+595,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_result_su),66);
    bufp->fullIData(oldp+598,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__op1),32);
    bufp->fullIData(oldp+599,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__op2),32);
    bufp->fullBit(oldp+600,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__s1));
    bufp->fullBit(oldp+601,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__s2));
    bufp->fullIData(oldp+602,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk4__DOT__q),32);
    bufp->fullIData(oldp+603,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk4__DOT__r),32);
    bufp->fullQData(oldp+604,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk5__DOT__partial_high),33);
    bufp->fullQData(oldp+606,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk5__DOT__sub_result),33);
    bufp->fullWData(oldp+608,(vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr),114);
    __Vtemp_1[1U] = (((IData)((((QData)((IData)((((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U] 
                                                   << 0x00000016U) 
                                                  | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                                                     >> 0x0000000aU)) 
                                                 + 
                                                 ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                                                   << 0x00000016U) 
                                                  | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U] 
                                                     >> 0x0000000aU))))) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U] 
                                                                    << 0x00000016U) 
                                                                   | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U] 
                                                                      >> 0x0000000aU)))))) 
                      >> 0x0000001bU) | ((IData)(((
                                                   ((QData)((IData)(
                                                                    (((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U] 
                                                                       << 0x00000016U) 
                                                                      | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                                                                         >> 0x0000000aU)) 
                                                                     + 
                                                                     ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                                                                       << 0x00000016U) 
                                                                      | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U] 
                                                                         >> 0x0000000aU))))) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(
                                                                     ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U] 
                                                                       << 0x00000016U) 
                                                                      | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U] 
                                                                         >> 0x0000000aU))))) 
                                                  >> 0x00000020U)) 
                                         << 5U));
    __Vtemp_2[0U] = (((IData)((((QData)((IData)((((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U] 
                                                   << 0x00000016U) 
                                                  | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                                                     >> 0x0000000aU)) 
                                                 + 
                                                 ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                                                   << 0x00000016U) 
                                                  | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U] 
                                                     >> 0x0000000aU))))) 
                                << 0x00000020U) | (QData)((IData)(
                                                                  ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U] 
                                                                    << 0x00000016U) 
                                                                   | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U] 
                                                                      >> 0x0000000aU)))))) 
                      << 5U) | ((((IData)(vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__is_store)
                                   ? 0U : 1U) << 3U) 
                                | (((IData)(vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__data_size) 
                                    << 1U) | (IData)(vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__is_unsigned))));
    __Vtemp_2[1U] = __Vtemp_1[1U];
    __Vtemp_2[2U] = ((0x00001fe0U & (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U] 
                                     >> 5U)) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           (((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U] 
                                                                              << 0x00000016U) 
                                                                             | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                                                                                >> 0x0000000aU)) 
                                                                            + 
                                                                            ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                                                                              << 0x00000016U) 
                                                                             | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U] 
                                                                                >> 0x0000000aU))))) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(
                                                                            ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U] 
                                                                              << 0x00000016U) 
                                                                             | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U] 
                                                                                >> 0x0000000aU))))) 
                                                         >> 0x00000020U)) 
                                                >> 0x0000001bU));
    bufp->fullWData(oldp+612,(__Vtemp_2),77);
    bufp->fullBit(oldp+615,(vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__is_load));
    bufp->fullBit(oldp+616,(vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__is_store));
    bufp->fullCData(oldp+617,(vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__data_size),2);
    bufp->fullBit(oldp+618,(vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__is_unsigned));
    bufp->fullIData(oldp+619,((((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U] 
                                 << 0x00000016U) | 
                                (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                                 >> 0x0000000aU)) + 
                               ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                                 << 0x00000016U) | 
                                (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U] 
                                 >> 0x0000000aU)))),32);
    bufp->fullIData(oldp+620,(vlSelfRef.core__DOT__fetch__DOT__IN_instr[0]),32);
    bufp->fullIData(oldp+621,(vlSelfRef.core__DOT__fetch__DOT__IN_instr[1]),32);
    bufp->fullBit(oldp+622,(vlSelfRef.core__DOT__fetch__DOT__q));
    bufp->fullWData(oldp+623,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[0U]),71);
    bufp->fullWData(oldp+626,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[1U]),71);
    bufp->fullWData(oldp+629,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[2U]),71);
    bufp->fullWData(oldp+632,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[3U]),71);
    bufp->fullWData(oldp+635,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[4U]),71);
    bufp->fullWData(oldp+638,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[5U]),71);
    bufp->fullWData(oldp+641,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[6U]),71);
    bufp->fullWData(oldp+644,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[7U]),71);
    bufp->fullWData(oldp+647,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[8U]),71);
    bufp->fullWData(oldp+650,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[9U]),71);
    bufp->fullWData(oldp+653,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[10U]),71);
    bufp->fullWData(oldp+656,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[11U]),71);
    bufp->fullWData(oldp+659,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[12U]),71);
    bufp->fullWData(oldp+662,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[13U]),71);
    bufp->fullWData(oldp+665,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[14U]),71);
    bufp->fullWData(oldp+668,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[15U]),71);
    bufp->fullCData(oldp+671,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__head),4);
    bufp->fullCData(oldp+672,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__tail),4);
    bufp->fullCData(oldp+673,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__count),5);
    bufp->fullCData(oldp+674,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__sqN_counter),7);
    bufp->fullBit(oldp+675,((0x0eU >= (IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__count))));
    bufp->fullCData(oldp+676,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__idx_tail),4);
    bufp->fullIData(oldp+677,(vlSelfRef.core__DOT__fetch__DOT__IA__DOT__IN_instr[0]),32);
    bufp->fullIData(oldp+678,(vlSelfRef.core__DOT__fetch__DOT__IA__DOT__IN_instr[1]),32);
    bufp->fullCData(oldp+679,(vlSelfRef.core__DOT__flush_controller__DOT__sqN[0]),7);
    bufp->fullCData(oldp+680,(vlSelfRef.core__DOT__flush_controller__DOT__sqN[1]),7);
    bufp->fullCData(oldp+681,(vlSelfRef.core__DOT__flush_controller__DOT__jump_type[0U]),2);
    bufp->fullCData(oldp+682,(vlSelfRef.core__DOT__flush_controller__DOT__jump_type[1U]),2);
    bufp->fullBit(oldp+683,(vlSelfRef.core__DOT__issue__DOT__tag_ready[0U][0U]));
    bufp->fullBit(oldp+684,(vlSelfRef.core__DOT__issue__DOT__tag_ready[0U][1U]));
    bufp->fullBit(oldp+685,(vlSelfRef.core__DOT__issue__DOT__tag_ready[1U][0U]));
    bufp->fullBit(oldp+686,(vlSelfRef.core__DOT__issue__DOT__tag_ready[1U][1U]));
    bufp->fullBit(oldp+687,(vlSelfRef.core__DOT__issue__DOT__tag_ready[2U][0U]));
    bufp->fullBit(oldp+688,(vlSelfRef.core__DOT__issue__DOT__tag_ready[2U][1U]));
    bufp->fullBit(oldp+689,(vlSelfRef.core__DOT__issue__DOT__tag_ready[3U][0U]));
    bufp->fullBit(oldp+690,(vlSelfRef.core__DOT__issue__DOT__tag_ready[3U][1U]));
    bufp->fullBit(oldp+691,(vlSelfRef.core__DOT__issue__DOT__IN_busy[0]));
    bufp->fullIData(oldp+692,(vlSelfRef.core__DOT__issue__DOT__CDB_result[0]),32);
    bufp->fullIData(oldp+693,(vlSelfRef.core__DOT__issue__DOT__CDB_result[1]),32);
    bufp->fullIData(oldp+694,(vlSelfRef.core__DOT__issue__DOT__CDB_result[2]),32);
    bufp->fullIData(oldp+695,(vlSelfRef.core__DOT__issue__DOT__CDB_result[3]),32);
    bufp->fullCData(oldp+696,(vlSelfRef.core__DOT__issue__DOT__CDB_tag[0]),6);
    bufp->fullCData(oldp+697,(vlSelfRef.core__DOT__issue__DOT__CDB_tag[1]),6);
    bufp->fullCData(oldp+698,(vlSelfRef.core__DOT__issue__DOT__CDB_tag[2]),6);
    bufp->fullCData(oldp+699,(vlSelfRef.core__DOT__issue__DOT__CDB_tag[3]),6);
    bufp->fullWData(oldp+700,(vlSelfRef.core__DOT__issue__DOT__OUT_instr[0U]),82);
    bufp->fullWData(oldp+703,(vlSelfRef.core__DOT__issue__DOT__OUT_instr[1U]),82);
    bufp->fullWData(oldp+706,(vlSelfRef.core__DOT__issue__DOT__OUT_instr[2U]),82);
    bufp->fullWData(oldp+709,(vlSelfRef.core__DOT__issue__DOT__OUT_lsu_instr[0U]),114);
    bufp->fullCData(oldp+713,(vlSelfRef.core__DOT__issue__DOT__OUT_jump_type[0U]),2);
    bufp->fullCData(oldp+714,(vlSelfRef.core__DOT__issue__DOT__OUT_jump_type[1U]),2);
    bufp->fullIData(oldp+715,(vlSelfRef.core__DOT__issue__DOT__pc[0]),32);
    bufp->fullIData(oldp+716,(vlSelfRef.core__DOT__issue__DOT__pc[1]),32);
    bufp->fullCData(oldp+717,(vlSelfRef.core__DOT__issue__DOT__instr_sqN[0]),7);
    bufp->fullCData(oldp+718,(vlSelfRef.core__DOT__issue__DOT__instr_sqN[1]),7);
    bufp->fullBit(oldp+719,(vlSelfRef.core__DOT__issue__DOT__instr_valid[0]));
    bufp->fullBit(oldp+720,(vlSelfRef.core__DOT__issue__DOT__instr_valid[1]));
    bufp->fullIData(oldp+721,(vlSelfRef.core__DOT__issue__DOT__alu_rs1_result[0]),32);
    bufp->fullIData(oldp+722,(vlSelfRef.core__DOT__issue__DOT__alu_rs1_result[1]),32);
    bufp->fullIData(oldp+723,(vlSelfRef.core__DOT__issue__DOT__alu_imm[0]),32);
    bufp->fullIData(oldp+724,(vlSelfRef.core__DOT__issue__DOT__alu_imm[1]),32);
    bufp->fullBit(oldp+725,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__tag_ready[0]));
    bufp->fullBit(oldp+726,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__tag_ready[1]));
    bufp->fullIData(oldp+727,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_result[0]),32);
    bufp->fullIData(oldp+728,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_result[1]),32);
    bufp->fullIData(oldp+729,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_result[2]),32);
    bufp->fullIData(oldp+730,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_result[3]),32);
    bufp->fullCData(oldp+731,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_tag[0]),6);
    bufp->fullCData(oldp+732,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_tag[1]),6);
    bufp->fullCData(oldp+733,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_tag[2]),6);
    bufp->fullCData(oldp+734,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_tag[3]),6);
    bufp->fullCData(oldp+735,(vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_jump_type),2);
    bufp->fullIData(oldp+736,(vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_pc),32);
    bufp->fullIData(oldp+737,(vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__rs1_result),32);
    bufp->fullIData(oldp+738,(vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__imm),32);
    bufp->fullBit(oldp+739,((7U == (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__tail))));
    bufp->fullWData(oldp+740,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[0U]),105);
    bufp->fullWData(oldp+744,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[1U]),105);
    bufp->fullWData(oldp+748,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[2U]),105);
    bufp->fullWData(oldp+752,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[3U]),105);
    bufp->fullWData(oldp+756,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[4U]),105);
    bufp->fullWData(oldp+760,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[5U]),105);
    bufp->fullWData(oldp+764,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[6U]),105);
    bufp->fullWData(oldp+768,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[7U]),105);
    bufp->fullCData(oldp+772,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__tail),4);
    bufp->fullBit(oldp+773,(((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__is_jump) 
                             | vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__tag_ready[0U])));
    bufp->fullBit(oldp+774,((1U & (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__is_jump) 
                                    | (vlSelfRef.core__DOT__alu_dispatch_instr[0U][0U] 
                                       >> 8U)) | vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__tag_ready[1U]))));
    bufp->fullWData(oldp+775,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U]),105);
    bufp->fullWData(oldp+779,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U]),105);
    bufp->fullWData(oldp+783,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U]),105);
    bufp->fullWData(oldp+787,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U]),105);
    bufp->fullWData(oldp+791,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U]),105);
    bufp->fullWData(oldp+795,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U]),105);
    bufp->fullWData(oldp+799,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U]),105);
    bufp->fullWData(oldp+803,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U]),105);
    bufp->fullCData(oldp+807,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail),4);
    bufp->fullBit(oldp+808,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__tag_ready[0]));
    bufp->fullBit(oldp+809,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__tag_ready[1]));
    bufp->fullIData(oldp+810,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_result[0]),32);
    bufp->fullIData(oldp+811,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_result[1]),32);
    bufp->fullIData(oldp+812,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_result[2]),32);
    bufp->fullIData(oldp+813,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_result[3]),32);
    bufp->fullCData(oldp+814,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_tag[0]),6);
    bufp->fullCData(oldp+815,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_tag[1]),6);
    bufp->fullCData(oldp+816,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_tag[2]),6);
    bufp->fullCData(oldp+817,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_tag[3]),6);
    bufp->fullCData(oldp+818,(vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_jump_type),2);
    bufp->fullIData(oldp+819,(vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_pc),32);
    bufp->fullIData(oldp+820,(vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__rs1_result),32);
    bufp->fullIData(oldp+821,(vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__imm),32);
    bufp->fullBit(oldp+822,((7U == (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__tail))));
    bufp->fullWData(oldp+823,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[0U]),105);
    bufp->fullWData(oldp+827,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[1U]),105);
    bufp->fullWData(oldp+831,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[2U]),105);
    bufp->fullWData(oldp+835,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[3U]),105);
    bufp->fullWData(oldp+839,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[4U]),105);
    bufp->fullWData(oldp+843,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[5U]),105);
    bufp->fullWData(oldp+847,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[6U]),105);
    bufp->fullWData(oldp+851,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[7U]),105);
    bufp->fullCData(oldp+855,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__tail),4);
    bufp->fullBit(oldp+856,(((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__is_jump) 
                             | vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__tag_ready[0U])));
    bufp->fullBit(oldp+857,((1U & (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__is_jump) 
                                    | (vlSelfRef.core__DOT__alu_dispatch_instr[1U][0U] 
                                       >> 8U)) | vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__tag_ready[1U]))));
    bufp->fullWData(oldp+858,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U]),105);
    bufp->fullWData(oldp+862,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U]),105);
    bufp->fullWData(oldp+866,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U]),105);
    bufp->fullWData(oldp+870,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U]),105);
    bufp->fullWData(oldp+874,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U]),105);
    bufp->fullWData(oldp+878,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U]),105);
    bufp->fullWData(oldp+882,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U]),105);
    bufp->fullWData(oldp+886,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U]),105);
    bufp->fullCData(oldp+890,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail),4);
    bufp->fullBit(oldp+891,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__tag_ready[0]));
    bufp->fullBit(oldp+892,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__tag_ready[1]));
    bufp->fullIData(oldp+893,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_result[0]),32);
    bufp->fullIData(oldp+894,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_result[1]),32);
    bufp->fullIData(oldp+895,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_result[2]),32);
    bufp->fullIData(oldp+896,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_result[3]),32);
    bufp->fullCData(oldp+897,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_tag[0]),6);
    bufp->fullCData(oldp+898,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_tag[1]),6);
    bufp->fullCData(oldp+899,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_tag[2]),6);
    bufp->fullCData(oldp+900,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_tag[3]),6);
    bufp->fullBit(oldp+901,((8U == (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__tail))));
    bufp->fullIData(oldp+902,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[0U]),32);
    bufp->fullIData(oldp+903,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[1U]),32);
    bufp->fullIData(oldp+904,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[2U]),32);
    bufp->fullIData(oldp+905,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[3U]),32);
    bufp->fullIData(oldp+906,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[4U]),32);
    bufp->fullIData(oldp+907,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[5U]),32);
    bufp->fullIData(oldp+908,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[6U]),32);
    bufp->fullIData(oldp+909,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[7U]),32);
    bufp->fullCData(oldp+910,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__tail),4);
    bufp->fullIData(oldp+911,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U]),32);
    bufp->fullIData(oldp+912,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U]),32);
    bufp->fullIData(oldp+913,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U]),32);
    bufp->fullIData(oldp+914,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U]),32);
    bufp->fullIData(oldp+915,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U]),32);
    bufp->fullIData(oldp+916,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U]),32);
    bufp->fullIData(oldp+917,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U]),32);
    bufp->fullIData(oldp+918,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U]),32);
    bufp->fullCData(oldp+919,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail),4);
    bufp->fullBit(oldp+920,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__tag_ready[0]));
    bufp->fullBit(oldp+921,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__tag_ready[1]));
    bufp->fullIData(oldp+922,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_result[0]),32);
    bufp->fullIData(oldp+923,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_result[1]),32);
    bufp->fullIData(oldp+924,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_result[2]),32);
    bufp->fullIData(oldp+925,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_result[3]),32);
    bufp->fullCData(oldp+926,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_tag[0]),6);
    bufp->fullCData(oldp+927,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_tag[1]),6);
    bufp->fullCData(oldp+928,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_tag[2]),6);
    bufp->fullCData(oldp+929,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_tag[3]),6);
    bufp->fullBit(oldp+930,((8U == (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__tail))));
    bufp->fullWData(oldp+931,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[0U]),65);
    bufp->fullWData(oldp+934,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[1U]),65);
    bufp->fullWData(oldp+937,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[2U]),65);
    bufp->fullWData(oldp+940,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[3U]),65);
    bufp->fullWData(oldp+943,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[4U]),65);
    bufp->fullWData(oldp+946,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[5U]),65);
    bufp->fullWData(oldp+949,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[6U]),65);
    bufp->fullWData(oldp+952,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[7U]),65);
    bufp->fullCData(oldp+955,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__tail),4);
    bufp->fullBit(oldp+956,(vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__tag_ready[0U]));
    bufp->fullBit(oldp+957,(vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__tag_ready[1U]));
    bufp->fullWData(oldp+958,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U]),65);
    bufp->fullWData(oldp+961,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U]),65);
    bufp->fullWData(oldp+964,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U]),65);
    bufp->fullWData(oldp+967,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U]),65);
    bufp->fullWData(oldp+970,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U]),65);
    bufp->fullWData(oldp+973,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U]),65);
    bufp->fullWData(oldp+976,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U]),65);
    bufp->fullWData(oldp+979,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U]),65);
    bufp->fullCData(oldp+982,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail),4);
    bufp->fullBit(oldp+983,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__IN_valid[0]));
    bufp->fullBit(oldp+984,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__IN_valid[1]));
    bufp->fullCData(oldp+985,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__jump_type[0U]),2);
    bufp->fullCData(oldp+986,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__jump_type[1U]),2);
    bufp->fullCData(oldp+987,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__instr_sqN[0]),7);
    bufp->fullCData(oldp+988,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__instr_sqN[1]),7);
    bufp->fullIData(oldp+989,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__pc[0]),32);
    bufp->fullIData(oldp+990,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__pc[1]),32);
    bufp->fullIData(oldp+991,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__alu_rs1_result[0]),32);
    bufp->fullIData(oldp+992,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__alu_rs1_result[1]),32);
    bufp->fullIData(oldp+993,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__imm[0]),32);
    bufp->fullIData(oldp+994,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__imm[1]),32);
    bufp->fullWData(oldp+995,(vlSelfRef.core__DOT__agu_out[0U]),77);
    bufp->fullQData(oldp+998,(vlSelfRef.core__DOT____Vcellout__lsu__OUT_cdb),46);
    bufp->fullWData(oldp+1000,(vlSelfRef.core__DOT__lsu__DOT__stb_wb),74);
    bufp->fullQData(oldp+1003,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__addr_wb),43);
    bufp->fullWData(oldp+1005,(vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[0U]),67);
    bufp->fullWData(oldp+1008,(vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[1U]),67);
    bufp->fullBit(oldp+1011,(vlSelfRef.core__DOT__lsu__DOT__mem_stall[0]));
    bufp->fullBit(oldp+1012,(vlSelfRef.core__DOT__lsu__DOT__mem_stall[1]));
    bufp->fullQData(oldp+1013,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U]),43);
    bufp->fullQData(oldp+1015,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U]),43);
    bufp->fullQData(oldp+1017,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U]),43);
    bufp->fullQData(oldp+1019,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U]),43);
    bufp->fullQData(oldp+1021,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U]),43);
    bufp->fullQData(oldp+1023,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U]),43);
    bufp->fullQData(oldp+1025,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U]),43);
    bufp->fullQData(oldp+1027,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U]),43);
    bufp->fullQData(oldp+1029,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U]),43);
    bufp->fullQData(oldp+1031,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U]),43);
    bufp->fullQData(oldp+1033,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U]),43);
    bufp->fullQData(oldp+1035,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U]),43);
    bufp->fullQData(oldp+1037,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U]),43);
    bufp->fullQData(oldp+1039,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U]),43);
    bufp->fullQData(oldp+1041,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U]),43);
    bufp->fullQData(oldp+1043,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U]),43);
    bufp->fullQData(oldp+1045,(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[0U]),43);
    bufp->fullQData(oldp+1047,(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[1U]),43);
    bufp->fullQData(oldp+1049,(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U]),40);
    bufp->fullQData(oldp+1051,(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U]),40);
    bufp->fullWData(oldp+1053,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req[0U]),67);
    bufp->fullWData(oldp+1056,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req[1U]),67);
    bufp->fullBit(oldp+1059,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_stall[0]));
    bufp->fullBit(oldp+1060,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_stall[1]));
    bufp->fullQData(oldp+1061,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_req[0U]),43);
    bufp->fullQData(oldp+1063,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_req[1U]),43);
    bufp->fullQData(oldp+1065,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_resp[0U]),40);
    bufp->fullQData(oldp+1067,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_resp[1U]),40);
    bufp->fullBit(oldp+1069,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_stall[0]));
    bufp->fullBit(oldp+1070,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_stall[1]));
    bufp->fullWData(oldp+1071,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[0U]),67);
    bufp->fullWData(oldp+1074,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[1U]),67);
    bufp->fullQData(oldp+1077,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held[0U]),43);
    bufp->fullQData(oldp+1079,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held[1U]),43);
    bufp->fullBit(oldp+1081,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_pending[0]));
    bufp->fullBit(oldp+1082,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_pending[1]));
    bufp->fullBit(oldp+1083,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_pending[0]));
    bufp->fullBit(oldp+1084,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_pending[1]));
    bufp->fullBit(oldp+1085,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_sync[0]));
    bufp->fullBit(oldp+1086,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_sync[1]));
    bufp->fullBit(oldp+1087,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_sync[0]));
    bufp->fullBit(oldp+1088,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_sync[1]));
    bufp->fullBit(oldp+1089,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_rd_ack__DOT__ff2));
    bufp->fullBit(oldp+1090,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_rd_ack__DOT__ff1));
    bufp->fullBit(oldp+1091,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_wr_ack__DOT__ff2));
    bufp->fullBit(oldp+1092,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_wr_ack__DOT__ff1));
    bufp->fullBit(oldp+1093,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_rd_ack__DOT__ff2));
    bufp->fullBit(oldp+1094,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_rd_ack__DOT__ff1));
    bufp->fullBit(oldp+1095,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_wr_ack__DOT__ff2));
    bufp->fullBit(oldp+1096,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_wr_ack__DOT__ff1));
    bufp->fullBit(oldp+1097,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_pending[0U]));
    bufp->fullBit(oldp+1098,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_pending[0U]));
    bufp->fullBit(oldp+1099,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_pending[1U]));
    bufp->fullBit(oldp+1100,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_pending[1U]));
    bufp->fullQData(oldp+1101,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[0U]),43);
    bufp->fullQData(oldp+1103,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[1U]),43);
    bufp->fullQData(oldp+1105,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[2U]),43);
    bufp->fullQData(oldp+1107,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[3U]),43);
    bufp->fullQData(oldp+1109,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[4U]),43);
    bufp->fullQData(oldp+1111,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[5U]),43);
    bufp->fullQData(oldp+1113,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[6U]),43);
    bufp->fullQData(oldp+1115,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[7U]),43);
    bufp->fullQData(oldp+1117,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[8U]),43);
    bufp->fullQData(oldp+1119,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[9U]),43);
    bufp->fullQData(oldp+1121,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[10U]),43);
    bufp->fullQData(oldp+1123,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[11U]),43);
    bufp->fullQData(oldp+1125,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[12U]),43);
    bufp->fullQData(oldp+1127,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[13U]),43);
    bufp->fullQData(oldp+1129,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[14U]),43);
    bufp->fullQData(oldp+1131,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[15U]),43);
    bufp->fullQData(oldp+1133,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__mem_resp[0U]),40);
    bufp->fullQData(oldp+1135,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__mem_resp[1U]),40);
    bufp->fullQData(oldp+1137,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__mem_req[0U]),43);
    bufp->fullQData(oldp+1139,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__mem_req[1U]),43);
    bufp->fullWData(oldp+1141,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U]),83);
    bufp->fullWData(oldp+1144,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U]),83);
    bufp->fullWData(oldp+1147,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U]),83);
    bufp->fullWData(oldp+1150,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U]),83);
    bufp->fullWData(oldp+1153,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U]),83);
    bufp->fullWData(oldp+1156,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U]),83);
    bufp->fullWData(oldp+1159,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U]),83);
    bufp->fullWData(oldp+1162,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U]),83);
    bufp->fullWData(oldp+1165,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U]),83);
    bufp->fullWData(oldp+1168,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U]),83);
    bufp->fullWData(oldp+1171,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U]),83);
    bufp->fullWData(oldp+1174,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U]),83);
    bufp->fullWData(oldp+1177,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U]),83);
    bufp->fullWData(oldp+1180,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U]),83);
    bufp->fullWData(oldp+1183,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U]),83);
    bufp->fullWData(oldp+1186,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U]),83);
    bufp->fullCData(oldp+1189,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx),4);
    bufp->fullCData(oldp+1190,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx),4);
    bufp->fullCData(oldp+1191,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0]),4);
    bufp->fullCData(oldp+1192,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1]),4);
    bufp->fullCData(oldp+1193,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx),4);
    bufp->fullCData(oldp+1194,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__count),4);
    bufp->fullCData(oldp+1195,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall),4);
    bufp->fullWData(oldp+1196,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__mem_req[0U]),67);
    bufp->fullWData(oldp+1199,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__mem_req[1U]),67);
    bufp->fullBit(oldp+1202,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__mem_stall[0]));
    bufp->fullBit(oldp+1203,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__mem_stall[1]));
    bufp->fullQData(oldp+1204,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[0U]),43);
    bufp->fullQData(oldp+1206,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[1U]),43);
    bufp->fullQData(oldp+1208,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[2U]),43);
    bufp->fullQData(oldp+1210,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[3U]),43);
    bufp->fullQData(oldp+1212,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[4U]),43);
    bufp->fullQData(oldp+1214,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[5U]),43);
    bufp->fullQData(oldp+1216,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[6U]),43);
    bufp->fullQData(oldp+1218,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[7U]),43);
    bufp->fullQData(oldp+1220,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[8U]),43);
    bufp->fullQData(oldp+1222,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[9U]),43);
    bufp->fullQData(oldp+1224,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[10U]),43);
    bufp->fullQData(oldp+1226,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[11U]),43);
    bufp->fullQData(oldp+1228,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[12U]),43);
    bufp->fullQData(oldp+1230,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[13U]),43);
    bufp->fullQData(oldp+1232,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[14U]),43);
    bufp->fullQData(oldp+1234,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[15U]),43);
    bufp->fullWData(oldp+1236,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[0U]),76);
    bufp->fullWData(oldp+1239,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[1U]),76);
    bufp->fullWData(oldp+1242,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[2U]),76);
    bufp->fullWData(oldp+1245,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[3U]),76);
    bufp->fullWData(oldp+1248,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[4U]),76);
    bufp->fullWData(oldp+1251,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[5U]),76);
    bufp->fullWData(oldp+1254,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[6U]),76);
    bufp->fullWData(oldp+1257,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[7U]),76);
    bufp->fullWData(oldp+1260,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[8U]),76);
    bufp->fullWData(oldp+1263,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[9U]),76);
    bufp->fullWData(oldp+1266,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[10U]),76);
    bufp->fullWData(oldp+1269,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[11U]),76);
    bufp->fullWData(oldp+1272,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[12U]),76);
    bufp->fullWData(oldp+1275,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[13U]),76);
    bufp->fullWData(oldp+1278,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[14U]),76);
    bufp->fullWData(oldp+1281,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[15U]),76);
    bufp->fullCData(oldp+1284,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__tail_ptr),4);
    bufp->fullCData(oldp+1285,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__drain_ptr),4);
    bufp->fullCData(oldp+1286,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__count),5);
    bufp->fullCData(oldp+1287,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__unnamedblk7__DOT__drain_inc),5);
    bufp->fullIData(oldp+1288,(vlSelfRef.core__DOT__prefetch__DOT__OUT_instr[0]),32);
    bufp->fullIData(oldp+1289,(vlSelfRef.core__DOT__prefetch__DOT__OUT_instr[1]),32);
    bufp->fullIData(oldp+1290,((0xfffffff8U & vlSelfRef.core__DOT__prefetch__DOT__PC__DOT__pc_reg)),32);
    bufp->fullCData(oldp+1291,((0xf8U & vlSelfRef.core__DOT__prefetch__DOT__PC__DOT__pc_reg)),8);
    bufp->fullIData(oldp+1292,(vlSelfRef.core__DOT__prefetch__DOT__IMEM__DOT__data[0]),32);
    bufp->fullIData(oldp+1293,(vlSelfRef.core__DOT__prefetch__DOT__IMEM__DOT__data[1]),32);
    bufp->fullCData(oldp+1294,(vlSelfRef.core__DOT__prefetch__DOT__IMEM__DOT__block_idx),8);
    bufp->fullCData(oldp+1295,(vlSelfRef.core__DOT__prefetch__DOT__IMEM__DOT__base_word),8);
    bufp->fullCData(oldp+1296,(vlSelfRef.core__DOT__prefetch__DOT__IMEM__DOT__word_index),8);
    bufp->fullCData(oldp+1297,(vlSelfRef.core__DOT__register_file__DOT__rd_addr[0]),6);
    bufp->fullCData(oldp+1298,(vlSelfRef.core__DOT__register_file__DOT__rd_addr[1]),6);
    bufp->fullCData(oldp+1299,(vlSelfRef.core__DOT__register_file__DOT__rd_addr[2]),6);
    bufp->fullCData(oldp+1300,(vlSelfRef.core__DOT__register_file__DOT__rd_addr[3]),6);
    bufp->fullIData(oldp+1301,(vlSelfRef.core__DOT__register_file__DOT__rd_data[0]),32);
    bufp->fullIData(oldp+1302,(vlSelfRef.core__DOT__register_file__DOT__rd_data[1]),32);
    bufp->fullIData(oldp+1303,(vlSelfRef.core__DOT__register_file__DOT__rd_data[2]),32);
    bufp->fullIData(oldp+1304,(vlSelfRef.core__DOT__register_file__DOT__rd_data[3]),32);
    bufp->fullIData(oldp+1305,(vlSelfRef.core__DOT__register_file__DOT__i),32);
    bufp->fullWData(oldp+1306,(vlSelfRef.core__DOT__rename__DOT__IN_instr[0U]),102);
    bufp->fullWData(oldp+1310,(vlSelfRef.core__DOT__rename__DOT__IN_instr[1U]),102);
    bufp->fullCData(oldp+1314,(vlSelfRef.core__DOT__rename__DOT__CDB_tag[0]),6);
    bufp->fullCData(oldp+1315,(vlSelfRef.core__DOT__rename__DOT__CDB_tag[1]),6);
    bufp->fullCData(oldp+1316,(vlSelfRef.core__DOT__rename__DOT__CDB_tag[2]),6);
    bufp->fullCData(oldp+1317,(vlSelfRef.core__DOT__rename__DOT__CDB_tag[3]),6);
    bufp->fullWData(oldp+1318,(vlSelfRef.core__DOT__rename__DOT__OUT_instr[0U]),105);
    bufp->fullWData(oldp+1322,(vlSelfRef.core__DOT__rename__DOT__OUT_instr[1U]),105);
    bufp->fullBit(oldp+1326,(vlSelfRef.core__DOT__rename__DOT__reg_ready[0U][0U]));
    bufp->fullBit(oldp+1327,(vlSelfRef.core__DOT__rename__DOT__reg_ready[0U][1U]));
    bufp->fullBit(oldp+1328,(vlSelfRef.core__DOT__rename__DOT__reg_ready[1U][0U]));
    bufp->fullBit(oldp+1329,(vlSelfRef.core__DOT__rename__DOT__reg_ready[1U][1U]));
    bufp->fullBit(oldp+1330,(vlSelfRef.core__DOT__rename__DOT__reg_ready[2U][0U]));
    bufp->fullBit(oldp+1331,(vlSelfRef.core__DOT__rename__DOT__reg_ready[2U][1U]));
    bufp->fullBit(oldp+1332,(vlSelfRef.core__DOT__rename__DOT__reg_ready[3U][0U]));
    bufp->fullBit(oldp+1333,(vlSelfRef.core__DOT__rename__DOT__reg_ready[3U][1U]));
    bufp->fullBit(oldp+1334,(vlSelfRef.core__DOT__rename__DOT__chkpt[0]));
    bufp->fullBit(oldp+1335,(vlSelfRef.core__DOT__rename__DOT__chkpt[1]));
    bufp->fullCData(oldp+1336,(vlSelfRef.core__DOT__rename__DOT__chkpt_sqN[0]),7);
    bufp->fullCData(oldp+1337,(vlSelfRef.core__DOT__rename__DOT__chkpt_sqN[1]),7);
    bufp->fullCData(oldp+1338,(vlSelfRef.core__DOT__rename__DOT__OUT_rd[0]),5);
    bufp->fullCData(oldp+1339,(vlSelfRef.core__DOT__rename__DOT__OUT_rd[1]),5);
    bufp->fullSData(oldp+1340,(vlSelfRef.core__DOT__rename__DOT__rename_table[0U]),12);
    bufp->fullSData(oldp+1341,(vlSelfRef.core__DOT__rename__DOT__rename_table[1U]),12);
    bufp->fullSData(oldp+1342,(vlSelfRef.core__DOT__rename__DOT__rename_table[2U]),12);
    bufp->fullSData(oldp+1343,(vlSelfRef.core__DOT__rename__DOT__rename_table[3U]),12);
    bufp->fullSData(oldp+1344,(vlSelfRef.core__DOT__rename__DOT__rename_table[4U]),12);
    bufp->fullSData(oldp+1345,(vlSelfRef.core__DOT__rename__DOT__rename_table[5U]),12);
    bufp->fullSData(oldp+1346,(vlSelfRef.core__DOT__rename__DOT__rename_table[6U]),12);
    bufp->fullSData(oldp+1347,(vlSelfRef.core__DOT__rename__DOT__rename_table[7U]),12);
    bufp->fullSData(oldp+1348,(vlSelfRef.core__DOT__rename__DOT__rename_table[8U]),12);
    bufp->fullSData(oldp+1349,(vlSelfRef.core__DOT__rename__DOT__rename_table[9U]),12);
    bufp->fullSData(oldp+1350,(vlSelfRef.core__DOT__rename__DOT__rename_table[10U]),12);
    bufp->fullSData(oldp+1351,(vlSelfRef.core__DOT__rename__DOT__rename_table[11U]),12);
    bufp->fullSData(oldp+1352,(vlSelfRef.core__DOT__rename__DOT__rename_table[12U]),12);
    bufp->fullSData(oldp+1353,(vlSelfRef.core__DOT__rename__DOT__rename_table[13U]),12);
    bufp->fullSData(oldp+1354,(vlSelfRef.core__DOT__rename__DOT__rename_table[14U]),12);
    bufp->fullSData(oldp+1355,(vlSelfRef.core__DOT__rename__DOT__rename_table[15U]),12);
    bufp->fullSData(oldp+1356,(vlSelfRef.core__DOT__rename__DOT__rename_table[16U]),12);
    bufp->fullSData(oldp+1357,(vlSelfRef.core__DOT__rename__DOT__rename_table[17U]),12);
    bufp->fullSData(oldp+1358,(vlSelfRef.core__DOT__rename__DOT__rename_table[18U]),12);
    bufp->fullSData(oldp+1359,(vlSelfRef.core__DOT__rename__DOT__rename_table[19U]),12);
    bufp->fullSData(oldp+1360,(vlSelfRef.core__DOT__rename__DOT__rename_table[20U]),12);
    bufp->fullSData(oldp+1361,(vlSelfRef.core__DOT__rename__DOT__rename_table[21U]),12);
    bufp->fullSData(oldp+1362,(vlSelfRef.core__DOT__rename__DOT__rename_table[22U]),12);
    bufp->fullSData(oldp+1363,(vlSelfRef.core__DOT__rename__DOT__rename_table[23U]),12);
    bufp->fullSData(oldp+1364,(vlSelfRef.core__DOT__rename__DOT__rename_table[24U]),12);
    bufp->fullSData(oldp+1365,(vlSelfRef.core__DOT__rename__DOT__rename_table[25U]),12);
    bufp->fullSData(oldp+1366,(vlSelfRef.core__DOT__rename__DOT__rename_table[26U]),12);
    bufp->fullSData(oldp+1367,(vlSelfRef.core__DOT__rename__DOT__rename_table[27U]),12);
    bufp->fullSData(oldp+1368,(vlSelfRef.core__DOT__rename__DOT__rename_table[28U]),12);
    bufp->fullSData(oldp+1369,(vlSelfRef.core__DOT__rename__DOT__rename_table[29U]),12);
    bufp->fullSData(oldp+1370,(vlSelfRef.core__DOT__rename__DOT__rename_table[30U]),12);
    bufp->fullSData(oldp+1371,(vlSelfRef.core__DOT__rename__DOT__rename_table[31U]),12);
    bufp->fullQData(oldp+1372,(vlSelfRef.core__DOT__rename__DOT__ftb),64);
    bufp->fullCData(oldp+1374,(vlSelfRef.core__DOT__rename__DOT__req_valid),2);
    bufp->fullQData(oldp+1375,(vlSelfRef.core__DOT__rename__DOT__masked[0]),64);
    bufp->fullQData(oldp+1377,(vlSelfRef.core__DOT__rename__DOT__masked[1]),64);
    bufp->fullQData(oldp+1379,(vlSelfRef.core__DOT__rename__DOT__masked[2]),64);
    bufp->fullQData(oldp+1381,(vlSelfRef.core__DOT__rename__DOT__onehot[0]),64);
    bufp->fullQData(oldp+1383,(vlSelfRef.core__DOT__rename__DOT__onehot[1]),64);
    bufp->fullCData(oldp+1385,(vlSelfRef.core__DOT__rename__DOT__chosen[0]),6);
    bufp->fullCData(oldp+1386,(vlSelfRef.core__DOT__rename__DOT__chosen[1]),6);
    bufp->fullCData(oldp+1387,(vlSelfRef.core__DOT__rename__DOT__req_count[0]),2);
    bufp->fullCData(oldp+1388,(vlSelfRef.core__DOT__rename__DOT__req_count[1]),2);
    bufp->fullBit(oldp+1389,(vlSelfRef.core__DOT__rename__DOT__chkpt_need));
    bufp->fullIData(oldp+1390,(vlSelfRef.core__DOT__commit_packet[0U]),19);
    bufp->fullIData(oldp+1391,(vlSelfRef.core__DOT__commit_packet[1U]),19);
    bufp->fullCData(oldp+1392,(vlSelfRef.core__DOT__commit_sqN[0]),7);
    bufp->fullCData(oldp+1393,(vlSelfRef.core__DOT__commit_sqN[1]),7);
    bufp->fullIData(oldp+1394,(vlSelfRef.core__DOT__ROB__DOT__OUT_commit[0U]),19);
    bufp->fullIData(oldp+1395,(vlSelfRef.core__DOT__ROB__DOT__OUT_commit[1U]),19);
    bufp->fullCData(oldp+1396,(vlSelfRef.core__DOT__ROB__DOT__dataout_valid),2);
    bufp->fullCData(oldp+1397,(vlSelfRef.core__DOT__ROB__DOT__count),7);
    bufp->fullCData(oldp+1398,(vlSelfRef.core__DOT__ROB__DOT__head),6);
    bufp->fullCData(oldp+1399,(vlSelfRef.core__DOT__ROB__DOT__tail),6);
    bufp->fullCData(oldp+1400,(vlSelfRef.core__DOT__ROB__DOT__alloc_index[0]),6);
    bufp->fullCData(oldp+1401,(vlSelfRef.core__DOT__ROB__DOT__alloc_index[1]),6);
    bufp->fullBit(oldp+1402,((0x40U == (IData)(vlSelfRef.core__DOT__ROB__DOT__count))));
    bufp->fullCData(oldp+1403,(vlSelfRef.core__DOT__dispatch__DOT__commit_sqN[0]),7);
    bufp->fullCData(oldp+1404,(vlSelfRef.core__DOT__dispatch__DOT__commit_sqN[1]),7);
    bufp->fullCData(oldp+1405,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__commit_sqN[0]),7);
    bufp->fullCData(oldp+1406,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__commit_sqN[1]),7);
    bufp->fullCData(oldp+1407,(vlSelfRef.core__DOT__lsu__DOT__commit_sqN[0]),7);
    bufp->fullCData(oldp+1408,(vlSelfRef.core__DOT__lsu__DOT__commit_sqN[1]),7);
    bufp->fullCData(oldp+1409,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__commit_sqN[0]),7);
    bufp->fullCData(oldp+1410,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__commit_sqN[1]),7);
    bufp->fullIData(oldp+1411,(vlSelfRef.core__DOT__rename__DOT__commit_packet[0U]),19);
    bufp->fullIData(oldp+1412,(vlSelfRef.core__DOT__rename__DOT__commit_packet[1U]),19);
    bufp->fullBit(oldp+1413,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_mem[0]));
    bufp->fullBit(oldp+1414,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_mem[1]));
    bufp->fullBit(oldp+1415,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_mem[0]));
    bufp->fullBit(oldp+1416,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_mem[1]));
    bufp->fullIData(oldp+1417,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_data_mem[0]),32);
    bufp->fullIData(oldp+1418,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_data_mem[1]),32);
    bufp->fullBit(oldp+1419,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_mem[0U]));
    bufp->fullBit(oldp+1420,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_mem[0U]));
    bufp->fullBit(oldp+1421,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_mem[1U]));
    bufp->fullBit(oldp+1422,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_mem[1U]));
    bufp->fullBit(oldp+1423,(vlSelfRef.core__DOT__CDB_valid[0]));
    bufp->fullBit(oldp+1424,(vlSelfRef.core__DOT__CDB_valid[1]));
    bufp->fullBit(oldp+1425,(vlSelfRef.core__DOT__CDB_valid[2]));
    bufp->fullBit(oldp+1426,(vlSelfRef.core__DOT__CDB_valid[3]));
    bufp->fullCData(oldp+1427,(vlSelfRef.core__DOT__CDB_sqN[0]),7);
    bufp->fullCData(oldp+1428,(vlSelfRef.core__DOT__CDB_sqN[1]),7);
    bufp->fullCData(oldp+1429,(vlSelfRef.core__DOT__CDB_sqN[2]),7);
    bufp->fullCData(oldp+1430,(vlSelfRef.core__DOT__CDB_sqN[3]),7);
    bufp->fullIData(oldp+1431,(vlSelfRef.core__DOT__rename_rob[0U]),19);
    bufp->fullIData(oldp+1432,(vlSelfRef.core__DOT__rename_rob[1U]),19);
    bufp->fullCData(oldp+1433,(vlSelfRef.core__DOT__RF_raddr[0U][0U]),6);
    bufp->fullCData(oldp+1434,(vlSelfRef.core__DOT__RF_raddr[0U][1U]),6);
    bufp->fullCData(oldp+1435,(vlSelfRef.core__DOT__RF_raddr[1U][0U]),6);
    bufp->fullCData(oldp+1436,(vlSelfRef.core__DOT__RF_raddr[1U][1U]),6);
    bufp->fullCData(oldp+1437,(vlSelfRef.core__DOT__RF_raddr[2U][0U]),6);
    bufp->fullCData(oldp+1438,(vlSelfRef.core__DOT__RF_raddr[2U][1U]),6);
    bufp->fullCData(oldp+1439,(vlSelfRef.core__DOT__RF_raddr[3U][0U]),6);
    bufp->fullCData(oldp+1440,(vlSelfRef.core__DOT__RF_raddr[3U][1U]),6);
    bufp->fullIData(oldp+1441,(vlSelfRef.core__DOT__RF_read_data[0U][0U]),32);
    bufp->fullIData(oldp+1442,(vlSelfRef.core__DOT__RF_read_data[0U][1U]),32);
    bufp->fullIData(oldp+1443,(vlSelfRef.core__DOT__RF_read_data[1U][0U]),32);
    bufp->fullIData(oldp+1444,(vlSelfRef.core__DOT__RF_read_data[1U][1U]),32);
    bufp->fullIData(oldp+1445,(vlSelfRef.core__DOT__RF_read_data[2U][0U]),32);
    bufp->fullIData(oldp+1446,(vlSelfRef.core__DOT__RF_read_data[2U][1U]),32);
    bufp->fullIData(oldp+1447,(vlSelfRef.core__DOT__RF_read_data[3U][0U]),32);
    bufp->fullIData(oldp+1448,(vlSelfRef.core__DOT__RF_read_data[3U][1U]),32);
    bufp->fullIData(oldp+1449,(vlSelfRef.core__DOT__rs1_data[0]),32);
    bufp->fullIData(oldp+1450,(vlSelfRef.core__DOT__rs1_data[1]),32);
    bufp->fullIData(oldp+1451,(vlSelfRef.core__DOT__rs1_data[2]),32);
    bufp->fullIData(oldp+1452,(vlSelfRef.core__DOT__rs1_data[3]),32);
    bufp->fullIData(oldp+1453,(vlSelfRef.core__DOT__rs2_data[0]),32);
    bufp->fullIData(oldp+1454,(vlSelfRef.core__DOT__rs2_data[1]),32);
    bufp->fullIData(oldp+1455,(vlSelfRef.core__DOT__rs2_data[2]),32);
    bufp->fullIData(oldp+1456,(vlSelfRef.core__DOT__rs2_data[3]),32);
    bufp->fullCData(oldp+1457,(vlSelfRef.core__DOT__rs1_addr[0]),6);
    bufp->fullCData(oldp+1458,(vlSelfRef.core__DOT__rs1_addr[1]),6);
    bufp->fullCData(oldp+1459,(vlSelfRef.core__DOT__rs1_addr[2]),6);
    bufp->fullCData(oldp+1460,(vlSelfRef.core__DOT__rs1_addr[3]),6);
    bufp->fullCData(oldp+1461,(vlSelfRef.core__DOT__rs2_addr[0]),6);
    bufp->fullCData(oldp+1462,(vlSelfRef.core__DOT__rs2_addr[1]),6);
    bufp->fullCData(oldp+1463,(vlSelfRef.core__DOT__rs2_addr[2]),6);
    bufp->fullCData(oldp+1464,(vlSelfRef.core__DOT__rs2_addr[3]),6);
    bufp->fullIData(oldp+1465,(vlSelfRef.core__DOT__ROB__DOT__rename_rob[0U]),19);
    bufp->fullIData(oldp+1466,(vlSelfRef.core__DOT__ROB__DOT__rename_rob[1U]),19);
    bufp->fullBit(oldp+1467,(vlSelfRef.core__DOT__ROB__DOT__CDB_valid[0]));
    bufp->fullBit(oldp+1468,(vlSelfRef.core__DOT__ROB__DOT__CDB_valid[1]));
    bufp->fullBit(oldp+1469,(vlSelfRef.core__DOT__ROB__DOT__CDB_valid[2]));
    bufp->fullBit(oldp+1470,(vlSelfRef.core__DOT__ROB__DOT__CDB_valid[3]));
    bufp->fullCData(oldp+1471,(vlSelfRef.core__DOT__ROB__DOT__CDB_sqN[0]),7);
    bufp->fullCData(oldp+1472,(vlSelfRef.core__DOT__ROB__DOT__CDB_sqN[1]),7);
    bufp->fullCData(oldp+1473,(vlSelfRef.core__DOT__ROB__DOT__CDB_sqN[2]),7);
    bufp->fullCData(oldp+1474,(vlSelfRef.core__DOT__ROB__DOT__CDB_sqN[3]),7);
    bufp->fullIData(oldp+1475,(vlSelfRef.core__DOT__issue__DOT__RF_data[0U][0U]),32);
    bufp->fullIData(oldp+1476,(vlSelfRef.core__DOT__issue__DOT__RF_data[0U][1U]),32);
    bufp->fullIData(oldp+1477,(vlSelfRef.core__DOT__issue__DOT__RF_data[1U][0U]),32);
    bufp->fullIData(oldp+1478,(vlSelfRef.core__DOT__issue__DOT__RF_data[1U][1U]),32);
    bufp->fullIData(oldp+1479,(vlSelfRef.core__DOT__issue__DOT__RF_data[2U][0U]),32);
    bufp->fullIData(oldp+1480,(vlSelfRef.core__DOT__issue__DOT__RF_data[2U][1U]),32);
    bufp->fullIData(oldp+1481,(vlSelfRef.core__DOT__issue__DOT__RF_data[3U][0U]),32);
    bufp->fullIData(oldp+1482,(vlSelfRef.core__DOT__issue__DOT__RF_data[3U][1U]),32);
    bufp->fullBit(oldp+1483,(vlSelfRef.core__DOT__issue__DOT__CDB_valid[0]));
    bufp->fullBit(oldp+1484,(vlSelfRef.core__DOT__issue__DOT__CDB_valid[1]));
    bufp->fullBit(oldp+1485,(vlSelfRef.core__DOT__issue__DOT__CDB_valid[2]));
    bufp->fullBit(oldp+1486,(vlSelfRef.core__DOT__issue__DOT__CDB_valid[3]));
    bufp->fullCData(oldp+1487,(vlSelfRef.core__DOT__issue__DOT__read_tag[0U][0U]),6);
    bufp->fullCData(oldp+1488,(vlSelfRef.core__DOT__issue__DOT__read_tag[0U][1U]),6);
    bufp->fullCData(oldp+1489,(vlSelfRef.core__DOT__issue__DOT__read_tag[1U][0U]),6);
    bufp->fullCData(oldp+1490,(vlSelfRef.core__DOT__issue__DOT__read_tag[1U][1U]),6);
    bufp->fullCData(oldp+1491,(vlSelfRef.core__DOT__issue__DOT__read_tag[2U][0U]),6);
    bufp->fullCData(oldp+1492,(vlSelfRef.core__DOT__issue__DOT__read_tag[2U][1U]),6);
    bufp->fullCData(oldp+1493,(vlSelfRef.core__DOT__issue__DOT__read_tag[3U][0U]),6);
    bufp->fullCData(oldp+1494,(vlSelfRef.core__DOT__issue__DOT__read_tag[3U][1U]),6);
    bufp->fullIData(oldp+1495,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__RF_data[0]),32);
    bufp->fullIData(oldp+1496,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__RF_data[1]),32);
    bufp->fullBit(oldp+1497,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_valid[0]));
    bufp->fullBit(oldp+1498,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_valid[1]));
    bufp->fullBit(oldp+1499,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_valid[2]));
    bufp->fullBit(oldp+1500,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_valid[3]));
    bufp->fullCData(oldp+1501,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__read_tag[0]),6);
    bufp->fullCData(oldp+1502,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__read_tag[1]),6);
    bufp->fullCData(oldp+1503,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask),8);
    bufp->fullCData(oldp+1504,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx),3);
    bufp->fullBit(oldp+1505,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_found));
    bufp->fullBit(oldp+1506,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1));
    bufp->fullBit(oldp+1507,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2));
    bufp->fullIData(oldp+1508,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__RF_data[0]),32);
    bufp->fullIData(oldp+1509,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__RF_data[1]),32);
    bufp->fullBit(oldp+1510,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_valid[0]));
    bufp->fullBit(oldp+1511,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_valid[1]));
    bufp->fullBit(oldp+1512,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_valid[2]));
    bufp->fullBit(oldp+1513,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_valid[3]));
    bufp->fullCData(oldp+1514,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__read_tag[0]),6);
    bufp->fullCData(oldp+1515,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__read_tag[1]),6);
    bufp->fullCData(oldp+1516,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask),8);
    bufp->fullCData(oldp+1517,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx),3);
    bufp->fullBit(oldp+1518,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_found));
    bufp->fullBit(oldp+1519,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1));
    bufp->fullBit(oldp+1520,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2));
    bufp->fullIData(oldp+1521,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__RF_data[0]),32);
    bufp->fullIData(oldp+1522,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__RF_data[1]),32);
    bufp->fullBit(oldp+1523,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_valid[0]));
    bufp->fullBit(oldp+1524,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_valid[1]));
    bufp->fullBit(oldp+1525,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_valid[2]));
    bufp->fullBit(oldp+1526,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_valid[3]));
    bufp->fullCData(oldp+1527,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__read_tag[0]),6);
    bufp->fullCData(oldp+1528,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__read_tag[1]),6);
    bufp->fullCData(oldp+1529,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask),8);
    bufp->fullCData(oldp+1530,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx),3);
    bufp->fullBit(oldp+1531,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_found));
    bufp->fullBit(oldp+1532,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1));
    bufp->fullBit(oldp+1533,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2));
    bufp->fullIData(oldp+1534,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__RF_data[0]),32);
    bufp->fullIData(oldp+1535,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__RF_data[1]),32);
    bufp->fullBit(oldp+1536,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_valid[0]));
    bufp->fullBit(oldp+1537,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_valid[1]));
    bufp->fullBit(oldp+1538,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_valid[2]));
    bufp->fullBit(oldp+1539,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_valid[3]));
    bufp->fullCData(oldp+1540,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__read_tag[0]),6);
    bufp->fullCData(oldp+1541,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__read_tag[1]),6);
    bufp->fullCData(oldp+1542,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask),8);
    bufp->fullCData(oldp+1543,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx),3);
    bufp->fullBit(oldp+1544,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_found));
    bufp->fullBit(oldp+1545,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1));
    bufp->fullBit(oldp+1546,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2));
    bufp->fullCData(oldp+1547,(vlSelfRef.core__DOT__register_file__DOT__rs1_addr[0]),6);
    bufp->fullCData(oldp+1548,(vlSelfRef.core__DOT__register_file__DOT__rs1_addr[1]),6);
    bufp->fullCData(oldp+1549,(vlSelfRef.core__DOT__register_file__DOT__rs1_addr[2]),6);
    bufp->fullCData(oldp+1550,(vlSelfRef.core__DOT__register_file__DOT__rs1_addr[3]),6);
    bufp->fullCData(oldp+1551,(vlSelfRef.core__DOT__register_file__DOT__rs2_addr[0]),6);
    bufp->fullCData(oldp+1552,(vlSelfRef.core__DOT__register_file__DOT__rs2_addr[1]),6);
    bufp->fullCData(oldp+1553,(vlSelfRef.core__DOT__register_file__DOT__rs2_addr[2]),6);
    bufp->fullCData(oldp+1554,(vlSelfRef.core__DOT__register_file__DOT__rs2_addr[3]),6);
    bufp->fullBit(oldp+1555,(vlSelfRef.core__DOT__register_file__DOT__rd_write_en[0]));
    bufp->fullBit(oldp+1556,(vlSelfRef.core__DOT__register_file__DOT__rd_write_en[1]));
    bufp->fullBit(oldp+1557,(vlSelfRef.core__DOT__register_file__DOT__rd_write_en[2]));
    bufp->fullBit(oldp+1558,(vlSelfRef.core__DOT__register_file__DOT__rd_write_en[3]));
    bufp->fullIData(oldp+1559,(vlSelfRef.core__DOT__register_file__DOT__rs1_data[0]),32);
    bufp->fullIData(oldp+1560,(vlSelfRef.core__DOT__register_file__DOT__rs1_data[1]),32);
    bufp->fullIData(oldp+1561,(vlSelfRef.core__DOT__register_file__DOT__rs1_data[2]),32);
    bufp->fullIData(oldp+1562,(vlSelfRef.core__DOT__register_file__DOT__rs1_data[3]),32);
    bufp->fullIData(oldp+1563,(vlSelfRef.core__DOT__register_file__DOT__rs2_data[0]),32);
    bufp->fullIData(oldp+1564,(vlSelfRef.core__DOT__register_file__DOT__rs2_data[1]),32);
    bufp->fullIData(oldp+1565,(vlSelfRef.core__DOT__register_file__DOT__rs2_data[2]),32);
    bufp->fullIData(oldp+1566,(vlSelfRef.core__DOT__register_file__DOT__rs2_data[3]),32);
    bufp->fullBit(oldp+1567,(vlSelfRef.core__DOT__rename__DOT__CDB_valid[0]));
    bufp->fullBit(oldp+1568,(vlSelfRef.core__DOT__rename__DOT__CDB_valid[1]));
    bufp->fullBit(oldp+1569,(vlSelfRef.core__DOT__rename__DOT__CDB_valid[2]));
    bufp->fullBit(oldp+1570,(vlSelfRef.core__DOT__rename__DOT__CDB_valid[3]));
    bufp->fullBit(oldp+1571,(vlSelfRef.core__DOT__rename__DOT__OUT_busy));
    bufp->fullWData(oldp+1572,(vlSelfRef.core__DOT__fetch_instr[0U]),72);
    bufp->fullWData(oldp+1575,(vlSelfRef.core__DOT__fetch_instr[1U]),72);
    bufp->fullBit(oldp+1578,(vlSelfRef.core__DOT__ROB_busy));
    bufp->fullCData(oldp+1579,(vlSelfRef.core__DOT__ROB__DOT__commit),2);
    bufp->fullCData(oldp+1580,(vlSelfRef.core__DOT__ROB__DOT__write_en),2);
    bufp->fullCData(oldp+1581,(vlSelfRef.core__DOT__ROB__DOT__next_count),7);
    bufp->fullCData(oldp+1582,(vlSelfRef.core__DOT__ROB__DOT__commit_index[0]),6);
    bufp->fullCData(oldp+1583,(vlSelfRef.core__DOT__ROB__DOT__commit_index[1]),6);
    bufp->fullBit(oldp+1584,(vlSelfRef.core__DOT__ROB__DOT__empty));
    bufp->fullCData(oldp+1585,(vlSelfRef.core__DOT__ROB__DOT__unnamedblk1__DOT__next_head),6);
    bufp->fullCData(oldp+1586,(vlSelfRef.core__DOT__ROB__DOT__unnamedblk1__DOT__next_tail),6);
    bufp->fullWData(oldp+1587,(vlSelfRef.core__DOT__decode__DOT__IN_instr[0U]),72);
    bufp->fullWData(oldp+1590,(vlSelfRef.core__DOT__decode__DOT__IN_instr[1U]),72);
    bufp->fullWData(oldp+1593,(vlSelfRef.core__DOT__decode__DOT__decoder_out[0U]),102);
    bufp->fullWData(oldp+1597,(vlSelfRef.core__DOT__decode__DOT__decoder_out[1U]),102);
    bufp->fullWData(oldp+1601,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IN_instr[0U]),72);
    bufp->fullWData(oldp+1604,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IN_instr[1U]),72);
    bufp->fullWData(oldp+1607,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__OUT_instr[0U]),102);
    bufp->fullWData(oldp+1611,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__OUT_instr[1U]),102);
    bufp->fullCData(oldp+1615,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[0]),7);
    bufp->fullCData(oldp+1616,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[1]),7);
    bufp->fullIData(oldp+1617,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0]),32);
    bufp->fullIData(oldp+1618,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1]),32);
    bufp->fullWData(oldp+1619,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__IN_instr[0U]),72);
    bufp->fullWData(oldp+1622,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__IN_instr[1U]),72);
    bufp->fullIData(oldp+1625,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__immediate[0]),32);
    bufp->fullIData(oldp+1626,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__immediate[1]),32);
    bufp->fullCData(oldp+1627,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__funct3),3);
    bufp->fullCData(oldp+1628,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode),7);
    bufp->fullSData(oldp+1629,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm12),12);
    bufp->fullSData(oldp+1630,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm13),13);
    bufp->fullIData(oldp+1631,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm21),21);
    bufp->fullIData(oldp+1632,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw),32);
    bufp->fullWData(oldp+1633,(vlSelfRef.core__DOT__fetch__DOT__OUT_instr[0U]),72);
    bufp->fullWData(oldp+1636,(vlSelfRef.core__DOT__fetch__DOT__OUT_instr[1U]),72);
    bufp->fullWData(oldp+1639,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__OUT_instr[0U]),72);
    bufp->fullWData(oldp+1642,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__OUT_instr[1U]),72);
    bufp->fullCData(oldp+1645,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__out_count),2);
    bufp->fullBit(oldp+1646,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__can_read));
    bufp->fullCData(oldp+1647,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__idx_head),4);
    bufp->fullCData(oldp+1648,(vlSelfRef.core__DOT__rename__DOT__free_CommTag[0]),6);
    bufp->fullCData(oldp+1649,(vlSelfRef.core__DOT__rename__DOT__free_CommTag[1]),6);
    bufp->fullBit(oldp+1650,(vlSelfRef.clk));
    bufp->fullBit(oldp+1651,(vlSelfRef.clk_m));
    bufp->fullBit(oldp+1652,(vlSelfRef.rst));
    bufp->fullBit(oldp+1653,(vlSelfRef.rst_m));
    bufp->fullIData(oldp+1654,(((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel1)
                                 ? ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                     [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][3U] 
                                     << 0x0000001fU) 
                                    | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                       [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][2U] 
                                       >> 1U)) : vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected)),32);
    bufp->fullIData(oldp+1655,(((2U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel2))
                                 ? 4U : ((1U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel2))
                                          ? ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                              [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                                              << 0x00000015U) 
                                             | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                                >> 0x0000000bU))
                                          : vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected))),32);
    bufp->fullIData(oldp+1656,(((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel1)
                                 ? ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                     [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][3U] 
                                     << 0x0000001fU) 
                                    | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                       [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][2U] 
                                       >> 1U)) : vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected)),32);
    bufp->fullIData(oldp+1657,(((2U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel2))
                                 ? 4U : ((1U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel2))
                                          ? ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                              [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                                              << 0x00000015U) 
                                             | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                                >> 0x0000000bU))
                                          : vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected))),32);
}
