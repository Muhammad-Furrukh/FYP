// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vcore__Syms.h"


void Vcore___024root__trace_chg_0_sub_0(Vcore___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vcore___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_chg_0\n"); );
    // Init
    Vcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcore___024root*>(voidSelf);
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcore___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcore___024root__trace_chg_0_sub_0(Vcore___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->core__DOT__read_ready
                               [0U][0U]),6);
        bufp->chgCData(oldp+1,(vlSelf->core__DOT__read_ready
                               [0U][1U]),6);
        bufp->chgCData(oldp+2,(vlSelf->core__DOT__read_ready
                               [1U][0U]),6);
        bufp->chgCData(oldp+3,(vlSelf->core__DOT__read_ready
                               [1U][1U]),6);
        bufp->chgCData(oldp+4,(vlSelf->core__DOT__read_ready
                               [2U][0U]),6);
        bufp->chgCData(oldp+5,(vlSelf->core__DOT__read_ready
                               [2U][1U]),6);
        bufp->chgCData(oldp+6,(vlSelf->core__DOT__read_ready
                               [3U][0U]),6);
        bufp->chgCData(oldp+7,(vlSelf->core__DOT__read_ready
                               [3U][1U]),6);
        bufp->chgCData(oldp+8,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__check_ready[0]),6);
        bufp->chgCData(oldp+9,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__check_ready[1]),6);
        bufp->chgCData(oldp+10,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__check_ready[0]),6);
        bufp->chgCData(oldp+11,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__check_ready[1]),6);
        bufp->chgBit(oldp+12,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__is_jump));
        bufp->chgBit(oldp+13,((1U & ((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__is_jump) 
                                     | (vlSelf->core__DOT__alu_dispatch_instr
                                        [0U][0U] >> 8U)))));
        bufp->chgCData(oldp+14,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__check_ready[0]),6);
        bufp->chgCData(oldp+15,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__check_ready[1]),6);
        bufp->chgBit(oldp+16,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__is_jump));
        bufp->chgBit(oldp+17,((1U & ((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__is_jump) 
                                     | (vlSelf->core__DOT__alu_dispatch_instr
                                        [1U][0U] >> 8U)))));
        bufp->chgCData(oldp+18,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__check_ready[0]),6);
        bufp->chgCData(oldp+19,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__check_ready[1]),6);
        bufp->chgBit(oldp+20,(vlSelf->core__DOT__lsu__DOT__is_store));
        bufp->chgBit(oldp+21,(vlSelf->core__DOT__lsu__DOT__is_load));
        bufp->chgCData(oldp+22,(vlSelf->core__DOT__lsu__DOT__stb_alloc),8);
        bufp->chgSData(oldp+23,(vlSelf->core__DOT__lsu__DOT__ldb_alloc),14);
        bufp->chgIData(oldp+24,(vlSelf->core__DOT__prefetch__DOT__IMEM__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[0xaU]))) {
        bufp->chgBit(oldp+25,(vlSelf->core__DOT__jump1));
        bufp->chgBit(oldp+26,(vlSelf->core__DOT__jump2));
        bufp->chgCData(oldp+27,(vlSelf->core__DOT__consumed),2);
        bufp->chgIData(oldp+28,(vlSelf->core__DOT__jta1),32);
        bufp->chgIData(oldp+29,(vlSelf->core__DOT__jta2),32);
        bufp->chgBit(oldp+30,(vlSelf->core__DOT__flush));
        bufp->chgCData(oldp+31,(vlSelf->core__DOT__restore_specTag[0]),6);
        bufp->chgCData(oldp+32,(vlSelf->core__DOT__restore_specTag[1]),6);
        bufp->chgCData(oldp+33,(vlSelf->core__DOT__restore_specTag[2]),6);
        bufp->chgCData(oldp+34,(vlSelf->core__DOT__restore_specTag[3]),6);
        bufp->chgCData(oldp+35,(vlSelf->core__DOT__restore_specTag[4]),6);
        bufp->chgCData(oldp+36,(vlSelf->core__DOT__restore_specTag[5]),6);
        bufp->chgCData(oldp+37,(vlSelf->core__DOT__restore_specTag[6]),6);
        bufp->chgCData(oldp+38,(vlSelf->core__DOT__restore_specTag[7]),6);
        bufp->chgCData(oldp+39,(vlSelf->core__DOT__restore_specTag[8]),6);
        bufp->chgCData(oldp+40,(vlSelf->core__DOT__restore_specTag[9]),6);
        bufp->chgCData(oldp+41,(vlSelf->core__DOT__restore_specTag[10]),6);
        bufp->chgCData(oldp+42,(vlSelf->core__DOT__restore_specTag[11]),6);
        bufp->chgCData(oldp+43,(vlSelf->core__DOT__restore_specTag[12]),6);
        bufp->chgCData(oldp+44,(vlSelf->core__DOT__restore_specTag[13]),6);
        bufp->chgCData(oldp+45,(vlSelf->core__DOT__restore_specTag[14]),6);
        bufp->chgCData(oldp+46,(vlSelf->core__DOT__restore_specTag[15]),6);
        bufp->chgCData(oldp+47,(vlSelf->core__DOT__restore_specTag[16]),6);
        bufp->chgCData(oldp+48,(vlSelf->core__DOT__restore_specTag[17]),6);
        bufp->chgCData(oldp+49,(vlSelf->core__DOT__restore_specTag[18]),6);
        bufp->chgCData(oldp+50,(vlSelf->core__DOT__restore_specTag[19]),6);
        bufp->chgCData(oldp+51,(vlSelf->core__DOT__restore_specTag[20]),6);
        bufp->chgCData(oldp+52,(vlSelf->core__DOT__restore_specTag[21]),6);
        bufp->chgCData(oldp+53,(vlSelf->core__DOT__restore_specTag[22]),6);
        bufp->chgCData(oldp+54,(vlSelf->core__DOT__restore_specTag[23]),6);
        bufp->chgCData(oldp+55,(vlSelf->core__DOT__restore_specTag[24]),6);
        bufp->chgCData(oldp+56,(vlSelf->core__DOT__restore_specTag[25]),6);
        bufp->chgCData(oldp+57,(vlSelf->core__DOT__restore_specTag[26]),6);
        bufp->chgCData(oldp+58,(vlSelf->core__DOT__restore_specTag[27]),6);
        bufp->chgCData(oldp+59,(vlSelf->core__DOT__restore_specTag[28]),6);
        bufp->chgCData(oldp+60,(vlSelf->core__DOT__restore_specTag[29]),6);
        bufp->chgCData(oldp+61,(vlSelf->core__DOT__restore_specTag[30]),6);
        bufp->chgCData(oldp+62,(vlSelf->core__DOT__restore_specTag[31]),6);
        bufp->chgCData(oldp+63,(vlSelf->core__DOT__flush_sqN),7);
        bufp->chgBit(oldp+64,(vlSelf->core__DOT__br_taken[0]));
        bufp->chgBit(oldp+65,(vlSelf->core__DOT__br_taken[1]));
        bufp->chgBit(oldp+66,(vlSelf->core__DOT__fetch__DOT__invalidate));
        bufp->chgWData(oldp+67,(vlSelf->core__DOT__fetch__DOT__aligner_out
                                [0U]),65);
        bufp->chgWData(oldp+70,(vlSelf->core__DOT__fetch__DOT__aligner_out
                                [1U]),65);
        bufp->chgIData(oldp+73,(vlSelf->core__DOT__fetch__DOT__pc_array[0]),32);
        bufp->chgIData(oldp+74,(vlSelf->core__DOT__fetch__DOT__pc_array[1]),32);
        bufp->chgBit(oldp+75,(vlSelf->core__DOT__fetch__DOT__valid[0]));
        bufp->chgBit(oldp+76,(vlSelf->core__DOT__fetch__DOT__valid[1]));
        bufp->chgCData(oldp+77,(vlSelf->core__DOT__fetch__DOT__opcode[0]),7);
        bufp->chgCData(oldp+78,(vlSelf->core__DOT__fetch__DOT__opcode[1]),7);
        bufp->chgIData(oldp+79,(vlSelf->core__DOT__fetch__DOT__imm[0]),21);
        bufp->chgIData(oldp+80,(vlSelf->core__DOT__fetch__DOT__imm[1]),21);
        bufp->chgIData(oldp+81,(vlSelf->core__DOT__fetch__DOT__iw),32);
        bufp->chgCData(oldp+82,(vlSelf->core__DOT__fetch__DOT__FB__DOT__in_valid_count),2);
        bufp->chgBit(oldp+83,(vlSelf->core__DOT__fetch__DOT__IA__DOT__pc_align));
        bufp->chgBit(oldp+84,(vlSelf->core__DOT__fetch__DOT__IA__DOT__pc_valid[0]));
        bufp->chgBit(oldp+85,(vlSelf->core__DOT__fetch__DOT__IA__DOT__pc_valid[1]));
        bufp->chgBit(oldp+86,(vlSelf->core__DOT__fetch__DOT__JTA1__DOT__jump_valid));
        bufp->chgBit(oldp+87,(vlSelf->core__DOT__fetch__DOT__JTA1__DOT__jump_index));
        bufp->chgBit(oldp+88,(vlSelf->core__DOT____Vcellinp__flush_controller__br_taken[0]));
        bufp->chgBit(oldp+89,(vlSelf->core__DOT____Vcellinp__flush_controller__br_taken[1]));
        bufp->chgBit(oldp+90,(vlSelf->core__DOT__flush_controller__DOT__unnamedblk1__DOT__valid0));
        bufp->chgBit(oldp+91,(vlSelf->core__DOT__flush_controller__DOT__unnamedblk1__DOT__valid1));
        bufp->chgCData(oldp+92,(vlSelf->core__DOT__flush_controller__DOT__unnamedblk1__DOT__diff),7);
        bufp->chgIData(oldp+93,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs1_data_selected),32);
        bufp->chgIData(oldp+94,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs2_data_selected),32);
        bufp->chgBit(oldp+95,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_valid));
        bufp->chgIData(oldp+96,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk4__DOT__j),32);
        bufp->chgIData(oldp+97,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk5__DOT__j),32);
        bufp->chgBit(oldp+98,(((1U & (~ ((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type) 
                                         >> 3U))) && 
                               ((4U & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type))
                                 ? ((2U & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type))
                                     ? ((1U & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type))) 
                                        && (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                                            >= vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected))
                                     : ((1U & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type))
                                         ? (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                                            < vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected)
                                         : VL_GTES_III(32, vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected, vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected)))
                                 : ((2U & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type))
                                     ? ((1U & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type))
                                         ? VL_LTS_III(32, vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected, vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected)
                                         : (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                                            != vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected))
                                     : ((1U & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type)) 
                                        && (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                                            == vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected)))))));
        bufp->chgIData(oldp+99,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected),32);
        bufp->chgIData(oldp+100,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected),32);
        bufp->chgBit(oldp+101,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel1));
        bufp->chgCData(oldp+102,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel2),2);
        bufp->chgBit(oldp+103,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_valid));
        bufp->chgCData(oldp+104,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type),4);
        bufp->chgIData(oldp+105,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk4__DOT__j),32);
        bufp->chgIData(oldp+106,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk5__DOT__j),32);
        bufp->chgBit(oldp+107,(((1U & (~ ((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type) 
                                          >> 3U))) 
                                && ((4U & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type))
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
        bufp->chgIData(oldp+108,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected),32);
        bufp->chgIData(oldp+109,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected),32);
        bufp->chgBit(oldp+110,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel1));
        bufp->chgCData(oldp+111,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel2),2);
        bufp->chgBit(oldp+112,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_valid));
        bufp->chgCData(oldp+113,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type),4);
        bufp->chgIData(oldp+114,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk4__DOT__j),32);
        bufp->chgIData(oldp+115,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk5__DOT__j),32);
        bufp->chgIData(oldp+116,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs1_data_selected),32);
        bufp->chgIData(oldp+117,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs2_data_selected),32);
        bufp->chgBit(oldp+118,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_valid));
        bufp->chgIData(oldp+119,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk4__DOT__j),32);
        bufp->chgIData(oldp+120,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk5__DOT__j),32);
        bufp->chgBit(oldp+121,(vlSelf->core__DOT__issue__DOT__ta_gen2__DOT__oldest_idx));
        bufp->chgCData(oldp+122,(vlSelf->core__DOT__issue__DOT__ta_gen2__DOT__oldest_sqN),7);
        bufp->chgCData(oldp+123,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__new_tail),4);
        bufp->chgSData(oldp+124,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__on_flush_valid),16);
        bufp->chgCData(oldp+125,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__idx),4);
        bufp->chgIData(oldp+126,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i),32);
        bufp->chgBit(oldp+127,((1U & (IData)(vlSelf->core__DOT__consumed))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+128,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync[0]));
        bufp->chgBit(oldp+129,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync[1]));
        bufp->chgBit(oldp+130,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync[0]));
        bufp->chgBit(oldp+131,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync[1]));
        bufp->chgBit(oldp+132,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_resp_valid_mem[0]));
        bufp->chgBit(oldp+133,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_resp_valid_mem[1]));
        bufp->chgBit(oldp+134,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r[0]));
        bufp->chgBit(oldp+135,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r[1]));
        bufp->chgBit(oldp+136,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r[0]));
        bufp->chgBit(oldp+137,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r[1]));
        bufp->chgBit(oldp+138,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_rd_sync__DOT__ff2));
        bufp->chgBit(oldp+139,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_rd_sync__DOT__ff1));
        bufp->chgBit(oldp+140,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_wr_sync__DOT__ff2));
        bufp->chgBit(oldp+141,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_wr_sync__DOT__ff1));
        bufp->chgBit(oldp+142,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_rd_sync__DOT__ff2));
        bufp->chgBit(oldp+143,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_rd_sync__DOT__ff1));
        bufp->chgBit(oldp+144,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_wr_sync__DOT__ff2));
        bufp->chgBit(oldp+145,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_wr_sync__DOT__ff1));
        bufp->chgIData(oldp+146,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+147,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+148,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__i),32);
        bufp->chgCData(oldp+149,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__be),4);
        bufp->chgBit(oldp+150,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__bsel));
        bufp->chgCData(oldp+151,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__boff),7);
        bufp->chgIData(oldp+152,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk7__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgWData(oldp+153,(vlSelf->core__DOT__lsu_issue_instr
                                 [0U]),114);
        bufp->chgCData(oldp+157,(vlSelf->core__DOT__jump_type
                                 [0U]),2);
        bufp->chgCData(oldp+158,(vlSelf->core__DOT__jump_type
                                 [1U]),2);
        bufp->chgCData(oldp+159,(vlSelf->core__DOT__ROB__DOT__count),7);
        bufp->chgCData(oldp+160,(vlSelf->core__DOT__ROB__DOT__head),6);
        bufp->chgCData(oldp+161,(vlSelf->core__DOT__ROB__DOT__tail),6);
        bufp->chgCData(oldp+162,(vlSelf->core__DOT__ROB__DOT__alloc_index[0]),6);
        bufp->chgCData(oldp+163,(vlSelf->core__DOT__ROB__DOT__alloc_index[1]),6);
        bufp->chgBit(oldp+164,((0x40U == (IData)(vlSelf->core__DOT__ROB__DOT__count))));
        bufp->chgIData(oldp+165,(vlSelf->core__DOT__ROB__DOT__unnamedblk5__DOT__i),32);
        bufp->chgIData(oldp+166,(vlSelf->core__DOT__ROB__DOT__unnamedblk6__DOT__i),32);
        bufp->chgIData(oldp+167,(vlSelf->core__DOT__ROB__DOT__unnamedblk7__DOT__i),32);
        bufp->chgIData(oldp+168,(vlSelf->core__DOT__ROB__DOT__unnamedblk8__DOT__i),32);
        bufp->chgIData(oldp+169,(vlSelf->core__DOT__ROB__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j),32);
        bufp->chgWData(oldp+170,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr),114);
        __Vtemp_1[1U] = (((IData)((((QData)((IData)(
                                                    (((vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U] 
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
        __Vtemp_2[0U] = (((IData)((((QData)((IData)(
                                                    (((vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U] 
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
        bufp->chgWData(oldp+174,(__Vtemp_2),77);
        bufp->chgBit(oldp+177,(vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__is_load));
        bufp->chgBit(oldp+178,(vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__is_store));
        bufp->chgCData(oldp+179,(vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__data_size),2);
        bufp->chgBit(oldp+180,(vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__is_unsigned));
        bufp->chgIData(oldp+181,((((vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U] 
                                    << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                                                 >> 0xaU)) 
                                  + ((vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                                      << 0x16U) | (
                                                   vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U] 
                                                   >> 0xaU)))),32);
        bufp->chgWData(oldp+182,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr),82);
        bufp->chgQData(oldp+185,((((QData)((IData)(
                                                   (0xffU 
                                                    & (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                                                       >> 0xaU)))) 
                                   << 0x26U) | (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U]))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->core__DOT__execute__DOT__gen_alu_fu__BRA__0__KET____DOT__ALU_i__DOT__alu_result))))),46);
        bufp->chgIData(oldp+187,(vlSelf->core__DOT__execute__DOT__gen_alu_fu__BRA__0__KET____DOT__ALU_i__DOT__alu_result),32);
        bufp->chgWData(oldp+188,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr),82);
        bufp->chgQData(oldp+191,((((QData)((IData)(
                                                   (0xffU 
                                                    & (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                                                       >> 0xaU)))) 
                                   << 0x26U) | (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U]))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->core__DOT__execute__DOT__gen_alu_fu__BRA__1__KET____DOT__ALU_i__DOT__alu_result))))),46);
        bufp->chgIData(oldp+193,(vlSelf->core__DOT__execute__DOT__gen_alu_fu__BRA__1__KET____DOT__ALU_i__DOT__alu_result),32);
        bufp->chgCData(oldp+194,(vlSelf->core__DOT____Vcellinp__flush_controller__jump_type
                                 [0U]),2);
        bufp->chgCData(oldp+195,(vlSelf->core__DOT____Vcellinp__flush_controller__jump_type
                                 [1U]),2);
        bufp->chgIData(oldp+196,(vlSelf->core__DOT__issue__DOT__pc[0]),32);
        bufp->chgIData(oldp+197,(vlSelf->core__DOT__issue__DOT__pc[1]),32);
        bufp->chgIData(oldp+198,(vlSelf->core__DOT__issue__DOT__alu_rs1_result[0]),32);
        bufp->chgIData(oldp+199,(vlSelf->core__DOT__issue__DOT__alu_rs1_result[1]),32);
        bufp->chgIData(oldp+200,(vlSelf->core__DOT__issue__DOT__alu_imm[0]),32);
        bufp->chgIData(oldp+201,(vlSelf->core__DOT__issue__DOT__alu_imm[1]),32);
        bufp->chgBit(oldp+202,((8U == (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__tail))));
        bufp->chgWData(oldp+203,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                 [0U]),65);
        bufp->chgWData(oldp+206,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                 [1U]),65);
        bufp->chgWData(oldp+209,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                 [2U]),65);
        bufp->chgWData(oldp+212,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                 [3U]),65);
        bufp->chgWData(oldp+215,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                 [4U]),65);
        bufp->chgWData(oldp+218,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                 [5U]),65);
        bufp->chgWData(oldp+221,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                 [6U]),65);
        bufp->chgWData(oldp+224,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                 [7U]),65);
        bufp->chgCData(oldp+227,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__tail),4);
        bufp->chgIData(oldp+228,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j),32);
        bufp->chgIData(oldp+229,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk6__DOT__i),32);
        bufp->chgWData(oldp+230,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                                 [0U]),65);
        bufp->chgWData(oldp+233,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                                 [1U]),65);
        bufp->chgWData(oldp+236,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                                 [2U]),65);
        bufp->chgWData(oldp+239,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                                 [3U]),65);
        bufp->chgWData(oldp+242,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                                 [4U]),65);
        bufp->chgWData(oldp+245,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                                 [5U]),65);
        bufp->chgWData(oldp+248,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                                 [6U]),65);
        bufp->chgWData(oldp+251,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                                 [7U]),65);
        bufp->chgCData(oldp+254,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail),4);
        bufp->chgIData(oldp+255,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk10__DOT__i),32);
        bufp->chgIData(oldp+256,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk11__DOT__i),32);
        bufp->chgIData(oldp+257,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j),32);
        bufp->chgIData(oldp+258,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk13__DOT__i),32);
        bufp->chgIData(oldp+259,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__i),32);
        bufp->chgCData(oldp+260,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff),7);
        bufp->chgCData(oldp+261,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_jump_type),2);
        bufp->chgIData(oldp+262,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_pc),32);
        bufp->chgIData(oldp+263,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__rs1_result),32);
        bufp->chgIData(oldp+264,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__imm),32);
        bufp->chgBit(oldp+265,((7U == (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__tail))));
        bufp->chgWData(oldp+266,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                 [0U]),105);
        bufp->chgWData(oldp+270,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                 [1U]),105);
        bufp->chgWData(oldp+274,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                 [2U]),105);
        bufp->chgWData(oldp+278,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                 [3U]),105);
        bufp->chgWData(oldp+282,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                 [4U]),105);
        bufp->chgWData(oldp+286,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                 [5U]),105);
        bufp->chgWData(oldp+290,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                 [6U]),105);
        bufp->chgWData(oldp+294,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                 [7U]),105);
        bufp->chgCData(oldp+298,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__tail),4);
        bufp->chgIData(oldp+299,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j),32);
        bufp->chgIData(oldp+300,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk6__DOT__i),32);
        bufp->chgWData(oldp+301,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                 [0U]),105);
        bufp->chgWData(oldp+305,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                 [1U]),105);
        bufp->chgWData(oldp+309,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                 [2U]),105);
        bufp->chgWData(oldp+313,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                 [3U]),105);
        bufp->chgWData(oldp+317,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                 [4U]),105);
        bufp->chgWData(oldp+321,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                 [5U]),105);
        bufp->chgWData(oldp+325,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                 [6U]),105);
        bufp->chgWData(oldp+329,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                 [7U]),105);
        bufp->chgCData(oldp+333,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail),4);
        bufp->chgIData(oldp+334,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk10__DOT__i),32);
        bufp->chgIData(oldp+335,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk11__DOT__i),32);
        bufp->chgIData(oldp+336,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j),32);
        bufp->chgIData(oldp+337,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk13__DOT__i),32);
        bufp->chgIData(oldp+338,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__i),32);
        bufp->chgCData(oldp+339,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff),7);
        bufp->chgCData(oldp+340,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_jump_type),2);
        bufp->chgIData(oldp+341,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_pc),32);
        bufp->chgIData(oldp+342,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__rs1_result),32);
        bufp->chgIData(oldp+343,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__imm),32);
        bufp->chgBit(oldp+344,((7U == (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__tail))));
        bufp->chgWData(oldp+345,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                 [0U]),105);
        bufp->chgWData(oldp+349,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                 [1U]),105);
        bufp->chgWData(oldp+353,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                 [2U]),105);
        bufp->chgWData(oldp+357,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                 [3U]),105);
        bufp->chgWData(oldp+361,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                 [4U]),105);
        bufp->chgWData(oldp+365,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                 [5U]),105);
        bufp->chgWData(oldp+369,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                 [6U]),105);
        bufp->chgWData(oldp+373,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                 [7U]),105);
        bufp->chgCData(oldp+377,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__tail),4);
        bufp->chgIData(oldp+378,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j),32);
        bufp->chgIData(oldp+379,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk6__DOT__i),32);
        bufp->chgWData(oldp+380,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                 [0U]),105);
        bufp->chgWData(oldp+384,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                 [1U]),105);
        bufp->chgWData(oldp+388,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                 [2U]),105);
        bufp->chgWData(oldp+392,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                 [3U]),105);
        bufp->chgWData(oldp+396,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                 [4U]),105);
        bufp->chgWData(oldp+400,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                 [5U]),105);
        bufp->chgWData(oldp+404,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                 [6U]),105);
        bufp->chgWData(oldp+408,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                 [7U]),105);
        bufp->chgCData(oldp+412,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail),4);
        bufp->chgIData(oldp+413,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk10__DOT__i),32);
        bufp->chgIData(oldp+414,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk11__DOT__i),32);
        bufp->chgIData(oldp+415,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j),32);
        bufp->chgIData(oldp+416,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk13__DOT__i),32);
        bufp->chgIData(oldp+417,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__i),32);
        bufp->chgCData(oldp+418,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff),7);
        bufp->chgIData(oldp+419,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk6__DOT__i),32);
        bufp->chgIData(oldp+420,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk10__DOT__i),32);
        bufp->chgIData(oldp+421,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk11__DOT__i),32);
        bufp->chgIData(oldp+422,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk13__DOT__i),32);
        bufp->chgIData(oldp+423,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__i),32);
        bufp->chgBit(oldp+424,(vlSelf->core__DOT__lsu__DOT__mem_stall[0]));
        bufp->chgBit(oldp+425,(vlSelf->core__DOT__lsu__DOT__mem_stall[1]));
        bufp->chgBit(oldp+426,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_stall[0]));
        bufp->chgBit(oldp+427,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_stall[1]));
        bufp->chgWData(oldp+428,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held
                                 [0U]),67);
        bufp->chgWData(oldp+431,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held
                                 [1U]),67);
        bufp->chgQData(oldp+434,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held
                                 [0U]),43);
        bufp->chgQData(oldp+436,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held
                                 [1U]),43);
        bufp->chgBit(oldp+438,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_pending[0]));
        bufp->chgBit(oldp+439,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_pending[1]));
        bufp->chgBit(oldp+440,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_pending[0]));
        bufp->chgBit(oldp+441,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_pending[1]));
        bufp->chgBit(oldp+442,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_sync[0]));
        bufp->chgBit(oldp+443,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_sync[1]));
        bufp->chgBit(oldp+444,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_sync[0]));
        bufp->chgBit(oldp+445,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_sync[1]));
        bufp->chgBit(oldp+446,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_rd_ack__DOT__ff2));
        bufp->chgBit(oldp+447,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_rd_ack__DOT__ff1));
        bufp->chgBit(oldp+448,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_wr_ack__DOT__ff2));
        bufp->chgBit(oldp+449,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_wr_ack__DOT__ff1));
        bufp->chgBit(oldp+450,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_rd_ack__DOT__ff2));
        bufp->chgBit(oldp+451,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_rd_ack__DOT__ff1));
        bufp->chgBit(oldp+452,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_wr_ack__DOT__ff2));
        bufp->chgBit(oldp+453,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_wr_ack__DOT__ff1));
        bufp->chgBit(oldp+454,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_pending
                               [0U]));
        bufp->chgBit(oldp+455,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_pending
                               [0U]));
        bufp->chgBit(oldp+456,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_pending
                               [1U]));
        bufp->chgBit(oldp+457,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_pending
                               [1U]));
        bufp->chgIData(oldp+458,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+459,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+460,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk8__DOT__i),32);
        bufp->chgIData(oldp+461,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk9__DOT__i),32);
        bufp->chgIData(oldp+462,(vlSelf->core__DOT__register_file__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+463,(vlSelf->core__DOT__issue_buffer_busy[0]));
        bufp->chgBit(oldp+464,(vlSelf->core__DOT__issue_buffer_busy[1]));
        bufp->chgBit(oldp+465,(vlSelf->core__DOT__issue_buffer_busy[2]));
        bufp->chgBit(oldp+466,(vlSelf->core__DOT__issue_buffer_busy[3]));
        bufp->chgWData(oldp+467,(vlSelf->core__DOT__int_issue_instr
                                 [0U]),82);
        bufp->chgWData(oldp+470,(vlSelf->core__DOT__int_issue_instr
                                 [1U]),82);
        bufp->chgWData(oldp+473,(vlSelf->core__DOT__int_issue_instr
                                 [2U]),82);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+476,((0x1eU < (IData)(vlSelf->core__DOT__fetch__DOT__FB__DOT__count))));
        bufp->chgIData(oldp+477,(vlSelf->core__DOT__prefetch__DOT__PC__DOT__pc_reg),32);
        bufp->chgIData(oldp+478,(vlSelf->core__DOT__prefetch_instr[0]),32);
        bufp->chgIData(oldp+479,(vlSelf->core__DOT__prefetch_instr[1]),32);
        bufp->chgWData(oldp+480,(vlSelf->core__DOT__decode_instr
                                 [0U]),102);
        bufp->chgWData(oldp+484,(vlSelf->core__DOT__decode_instr
                                 [1U]),102);
        bufp->chgBit(oldp+488,((1U & ((IData)(vlSelf->core__DOT__dispatch__DOT__BC__DOT__count) 
                                      >> 4U))));
        bufp->chgWData(oldp+489,(vlSelf->core__DOT__rename_instr
                                 [0U]),105);
        bufp->chgWData(oldp+493,(vlSelf->core__DOT__rename_instr
                                 [1U]),105);
        bufp->chgBit(oldp+497,(vlSelf->core__DOT__chkpt[0]));
        bufp->chgBit(oldp+498,(vlSelf->core__DOT__chkpt[1]));
        bufp->chgCData(oldp+499,(vlSelf->core__DOT__chkpt_sqN[0]),7);
        bufp->chgCData(oldp+500,(vlSelf->core__DOT__chkpt_sqN[1]),7);
        bufp->chgQData(oldp+501,(vlSelf->core__DOT__CDB
                                 [0U]),46);
        bufp->chgQData(oldp+503,(vlSelf->core__DOT__CDB
                                 [1U]),46);
        bufp->chgQData(oldp+505,(vlSelf->core__DOT__CDB
                                 [2U]),46);
        bufp->chgQData(oldp+507,(vlSelf->core__DOT__CDB
                                 [3U]),46);
        bufp->chgIData(oldp+509,(vlSelf->core__DOT__CDB_result[0]),32);
        bufp->chgIData(oldp+510,(vlSelf->core__DOT__CDB_result[1]),32);
        bufp->chgIData(oldp+511,(vlSelf->core__DOT__CDB_result[2]),32);
        bufp->chgIData(oldp+512,(vlSelf->core__DOT__CDB_result[3]),32);
        bufp->chgCData(oldp+513,(vlSelf->core__DOT__CDB_sqN[0]),7);
        bufp->chgCData(oldp+514,(vlSelf->core__DOT__CDB_sqN[1]),7);
        bufp->chgCData(oldp+515,(vlSelf->core__DOT__CDB_sqN[2]),7);
        bufp->chgCData(oldp+516,(vlSelf->core__DOT__CDB_sqN[3]),7);
        bufp->chgCData(oldp+517,(vlSelf->core__DOT__rename_rob_rd[0]),5);
        bufp->chgCData(oldp+518,(vlSelf->core__DOT__rename_rob_rd[1]),5);
        bufp->chgIData(oldp+519,(vlSelf->core__DOT__rename_rob
                                 [0U]),19);
        bufp->chgIData(oldp+520,(vlSelf->core__DOT__rename_rob
                                 [1U]),19);
        bufp->chgBit(oldp+521,((1U & (~ (IData)(vlSelf->core__DOT__dispatch__DOT__DU__DOT__packet_done)))));
        bufp->chgBit(oldp+522,((0xfU == (IData)(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__count))));
        bufp->chgWData(oldp+523,(vlSelf->core__DOT__agu_out
                                 [0U]),77);
        bufp->chgQData(oldp+526,(vlSelf->core__DOT__int_cdb_lines
                                 [0U]),46);
        bufp->chgQData(oldp+528,(vlSelf->core__DOT__int_cdb_lines
                                 [1U]),46);
        bufp->chgQData(oldp+530,(vlSelf->core__DOT__int_cdb_lines
                                 [2U]),46);
        bufp->chgQData(oldp+532,(vlSelf->core__DOT__lsu_cdb_lines
                                 [0U]),46);
        bufp->chgIData(oldp+534,(vlSelf->core__DOT__decode__DOT__unnamedblk1__DOT__i),32);
        bufp->chgWData(oldp+535,(vlSelf->core__DOT__dispatch__DOT__alu_dispatch_out
                                 [0U]),103);
        bufp->chgWData(oldp+539,(vlSelf->core__DOT__dispatch__DOT__alu_dispatch_out
                                 [1U]),103);
        bufp->chgIData(oldp+543,(vlSelf->core__DOT__dispatch__DOT__mul_div_dispatch_out
                                 [0U]),30);
        bufp->chgQData(oldp+544,(vlSelf->core__DOT__dispatch__DOT__lsu_dispatch_out
                                 [0U]),63);
        bufp->chgBit(oldp+546,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[0]));
        bufp->chgBit(oldp+547,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[1]));
        bufp->chgBit(oldp+548,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[2]));
        bufp->chgBit(oldp+549,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[3]));
        bufp->chgBit(oldp+550,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[4]));
        bufp->chgBit(oldp+551,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[5]));
        bufp->chgBit(oldp+552,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[6]));
        bufp->chgBit(oldp+553,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[7]));
        bufp->chgBit(oldp+554,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[8]));
        bufp->chgBit(oldp+555,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[9]));
        bufp->chgBit(oldp+556,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[10]));
        bufp->chgBit(oldp+557,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[11]));
        bufp->chgBit(oldp+558,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[12]));
        bufp->chgBit(oldp+559,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[13]));
        bufp->chgBit(oldp+560,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[14]));
        bufp->chgBit(oldp+561,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[15]));
        bufp->chgCData(oldp+562,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__count),5);
        bufp->chgIData(oldp+563,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+564,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+565,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__unnamedblk4__DOT__i),32);
        bufp->chgIData(oldp+566,(vlSelf->core__DOT__dispatch__DOT__BC__DOT__unnamedblk5__DOT__i),32);
        bufp->chgWData(oldp+567,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__packet
                                 [0U]),105);
        bufp->chgWData(oldp+571,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__packet
                                 [1U]),105);
        bufp->chgBit(oldp+575,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__dispatched[0]));
        bufp->chgBit(oldp+576,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__dispatched[1]));
        bufp->chgBit(oldp+577,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__lsu_ready[0]));
        bufp->chgBit(oldp+578,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__slot_pending[0]));
        bufp->chgBit(oldp+579,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__slot_pending[1]));
        bufp->chgBit(oldp+580,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__slot_is_alu[0]));
        bufp->chgBit(oldp+581,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__slot_is_alu[1]));
        bufp->chgBit(oldp+582,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__slot_is_mul[0]));
        bufp->chgBit(oldp+583,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__slot_is_mul[1]));
        bufp->chgBit(oldp+584,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__slot_is_lsu[0]));
        bufp->chgBit(oldp+585,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__slot_is_lsu[1]));
        bufp->chgBit(oldp+586,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__packet_done));
        bufp->chgIData(oldp+587,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__unnamedblk12__DOT__p),32);
        bufp->chgIData(oldp+588,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__unnamedblk13__DOT__p),32);
        bufp->chgIData(oldp+589,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__unnamedblk14__DOT__p),32);
        bufp->chgIData(oldp+590,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__unnamedblk15__DOT__i),32);
        bufp->chgIData(oldp+591,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__unnamedblk16__DOT__i),32);
        bufp->chgIData(oldp+592,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__unnamedblk17__DOT__i),32);
        bufp->chgIData(oldp+593,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__unnamedblk5__DOT__unnamedblk6__DOT__s),32);
        bufp->chgQData(oldp+594,(vlSelf->core__DOT__execute__DOT____Vcellout__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__OUT_cdb),46);
        bufp->chgWData(oldp+596,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r),82);
        bufp->chgIData(oldp+599,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__result),32);
        bufp->chgCData(oldp+600,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_valid),3);
        bufp->chgCData(oldp+601,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_sqN[0]),7);
        bufp->chgCData(oldp+602,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_sqN[1]),7);
        bufp->chgCData(oldp+603,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_sqN[2]),7);
        bufp->chgCData(oldp+604,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_tag[0]),6);
        bufp->chgCData(oldp+605,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_tag[1]),6);
        bufp->chgCData(oldp+606,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_tag[2]),6);
        bufp->chgCData(oldp+607,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_oper
                                 [0U]),4);
        bufp->chgCData(oldp+608,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_oper
                                 [1U]),4);
        bufp->chgCData(oldp+609,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_oper
                                 [2U]),4);
        bufp->chgIData(oldp+610,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_dividend),32);
        bufp->chgIData(oldp+611,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_divisor),32);
        bufp->chgQData(oldp+612,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_partial),64);
        bufp->chgCData(oldp+614,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_count),6);
        bufp->chgBit(oldp+615,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_quot_sign));
        bufp->chgBit(oldp+616,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_rem_sign));
        bufp->chgBit(oldp+617,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_by_zero));
        bufp->chgQData(oldp+618,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_op1_s),33);
        bufp->chgQData(oldp+620,((((QData)((IData)(
                                                   (1U 
                                                    & (vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[1U] 
                                                       >> 9U)))) 
                                   << 0x20U) | (QData)((IData)(
                                                               ((vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[1U] 
                                                                 << 0x16U) 
                                                                | (vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[0U] 
                                                                   >> 0xaU)))))),33);
        bufp->chgQData(oldp+622,((QData)((IData)(((
                                                   vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[2U] 
                                                   << 0x16U) 
                                                  | (vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[1U] 
                                                     >> 0xaU))))),33);
        bufp->chgQData(oldp+624,((QData)((IData)(((
                                                   vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[1U] 
                                                   << 0x16U) 
                                                  | (vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[0U] 
                                                     >> 0xaU))))),33);
        bufp->chgWData(oldp+626,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_result_ss),66);
        bufp->chgWData(oldp+629,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_result_uu),66);
        bufp->chgWData(oldp+632,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_result_su),66);
        bufp->chgIData(oldp+635,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk1__DOT__s),32);
        bufp->chgIData(oldp+636,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk2__DOT__s),32);
        bufp->chgIData(oldp+637,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__op1),32);
        bufp->chgIData(oldp+638,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__op2),32);
        bufp->chgBit(oldp+639,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__s1));
        bufp->chgBit(oldp+640,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__s2));
        bufp->chgIData(oldp+641,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk4__DOT__q),32);
        bufp->chgIData(oldp+642,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk4__DOT__r),32);
        bufp->chgQData(oldp+643,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk5__DOT__partial_high),33);
        bufp->chgQData(oldp+645,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk5__DOT__sub_result),33);
        bufp->chgIData(oldp+647,(vlSelf->core__DOT__execute__DOT__unnamedblk1__DOT__i),32);
        bufp->chgIData(oldp+648,(vlSelf->core__DOT__execute__DOT__unnamedblk2__DOT__i),32);
        bufp->chgIData(oldp+649,(vlSelf->core__DOT__execute__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+650,(vlSelf->core__DOT__execute__DOT__unnamedblk4__DOT__i),32);
        bufp->chgBit(oldp+651,(vlSelf->core__DOT__fetch__DOT__q));
        bufp->chgWData(oldp+652,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                                 [0U]),71);
        bufp->chgWData(oldp+655,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                                 [1U]),71);
        bufp->chgWData(oldp+658,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                                 [2U]),71);
        bufp->chgWData(oldp+661,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                                 [3U]),71);
        bufp->chgWData(oldp+664,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                                 [4U]),71);
        bufp->chgWData(oldp+667,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                                 [5U]),71);
        bufp->chgWData(oldp+670,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                                 [6U]),71);
        bufp->chgWData(oldp+673,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                                 [7U]),71);
        bufp->chgWData(oldp+676,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                                 [8U]),71);
        bufp->chgWData(oldp+679,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                                 [9U]),71);
        bufp->chgWData(oldp+682,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                                 [0xaU]),71);
        bufp->chgWData(oldp+685,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                                 [0xbU]),71);
        bufp->chgWData(oldp+688,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                                 [0xcU]),71);
        bufp->chgWData(oldp+691,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                                 [0xdU]),71);
        bufp->chgWData(oldp+694,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                                 [0xeU]),71);
        bufp->chgWData(oldp+697,(vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                                 [0xfU]),71);
        bufp->chgCData(oldp+700,(vlSelf->core__DOT__fetch__DOT__FB__DOT__head),4);
        bufp->chgCData(oldp+701,(vlSelf->core__DOT__fetch__DOT__FB__DOT__tail),4);
        bufp->chgCData(oldp+702,(vlSelf->core__DOT__fetch__DOT__FB__DOT__count),5);
        bufp->chgCData(oldp+703,(vlSelf->core__DOT__fetch__DOT__FB__DOT__sqN_counter),7);
        bufp->chgBit(oldp+704,((0x1eU >= (IData)(vlSelf->core__DOT__fetch__DOT__FB__DOT__count))));
        bufp->chgIData(oldp+705,(vlSelf->core__DOT__fetch__DOT__FB__DOT__unnamedblk3__DOT__i),32);
        bufp->chgWData(oldp+706,(vlSelf->core__DOT__agu_out
                                 [0U]),77);
        bufp->chgQData(oldp+709,(vlSelf->core__DOT____Vcellout__lsu__OUT_cdb),46);
        bufp->chgWData(oldp+711,(vlSelf->core__DOT__lsu__DOT__stb_wb),74);
        bufp->chgQData(oldp+714,(vlSelf->core__DOT__lsu__DOT__ldb_addr_wb),43);
        bufp->chgQData(oldp+716,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                 [0U]),43);
        bufp->chgQData(oldp+718,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                 [1U]),43);
        bufp->chgQData(oldp+720,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                 [2U]),43);
        bufp->chgQData(oldp+722,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                 [3U]),43);
        bufp->chgQData(oldp+724,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                 [4U]),43);
        bufp->chgQData(oldp+726,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                 [5U]),43);
        bufp->chgQData(oldp+728,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                 [6U]),43);
        bufp->chgQData(oldp+730,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                 [7U]),43);
        bufp->chgQData(oldp+732,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                 [8U]),43);
        bufp->chgQData(oldp+734,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                 [9U]),43);
        bufp->chgQData(oldp+736,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                 [0xaU]),43);
        bufp->chgQData(oldp+738,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                 [0xbU]),43);
        bufp->chgQData(oldp+740,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                 [0xcU]),43);
        bufp->chgQData(oldp+742,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                 [0xdU]),43);
        bufp->chgQData(oldp+744,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                 [0xeU]),43);
        bufp->chgQData(oldp+746,(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                 [0xfU]),43);
        bufp->chgQData(oldp+748,(vlSelf->core__DOT__lsu__DOT__ldb_mem_req
                                 [0U]),43);
        bufp->chgQData(oldp+750,(vlSelf->core__DOT__lsu__DOT__ldb_mem_req
                                 [1U]),43);
        bufp->chgWData(oldp+752,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                 [0U]),83);
        bufp->chgWData(oldp+755,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                 [1U]),83);
        bufp->chgWData(oldp+758,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                 [2U]),83);
        bufp->chgWData(oldp+761,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                 [3U]),83);
        bufp->chgWData(oldp+764,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                 [4U]),83);
        bufp->chgWData(oldp+767,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                 [5U]),83);
        bufp->chgWData(oldp+770,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                 [6U]),83);
        bufp->chgWData(oldp+773,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                 [7U]),83);
        bufp->chgWData(oldp+776,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                 [8U]),83);
        bufp->chgWData(oldp+779,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                 [9U]),83);
        bufp->chgWData(oldp+782,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                 [0xaU]),83);
        bufp->chgWData(oldp+785,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                 [0xbU]),83);
        bufp->chgWData(oldp+788,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                 [0xcU]),83);
        bufp->chgWData(oldp+791,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                 [0xdU]),83);
        bufp->chgWData(oldp+794,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                 [0xeU]),83);
        bufp->chgWData(oldp+797,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                 [0xfU]),83);
        bufp->chgCData(oldp+800,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx),4);
        bufp->chgCData(oldp+801,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx),4);
        bufp->chgCData(oldp+802,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0]),4);
        bufp->chgCData(oldp+803,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1]),4);
        bufp->chgCData(oldp+804,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx),4);
        bufp->chgCData(oldp+805,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__count),4);
        bufp->chgCData(oldp+806,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall),4);
        bufp->chgIData(oldp+807,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk11__DOT__i),32);
        bufp->chgIData(oldp+808,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j),32);
        bufp->chgIData(oldp+809,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i),32);
        bufp->chgIData(oldp+810,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
        bufp->chgIData(oldp+811,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk8__DOT__i),32);
        bufp->chgIData(oldp+812,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush),32);
        bufp->chgIData(oldp+813,(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i),32);
        bufp->chgWData(oldp+814,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                 [0U]),76);
        bufp->chgWData(oldp+817,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                 [1U]),76);
        bufp->chgWData(oldp+820,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                 [2U]),76);
        bufp->chgWData(oldp+823,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                 [3U]),76);
        bufp->chgWData(oldp+826,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                 [4U]),76);
        bufp->chgWData(oldp+829,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                 [5U]),76);
        bufp->chgWData(oldp+832,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                 [6U]),76);
        bufp->chgWData(oldp+835,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                 [7U]),76);
        bufp->chgWData(oldp+838,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                 [8U]),76);
        bufp->chgWData(oldp+841,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                 [9U]),76);
        bufp->chgWData(oldp+844,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                 [0xaU]),76);
        bufp->chgWData(oldp+847,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                 [0xbU]),76);
        bufp->chgWData(oldp+850,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                 [0xcU]),76);
        bufp->chgWData(oldp+853,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                 [0xdU]),76);
        bufp->chgWData(oldp+856,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                 [0xeU]),76);
        bufp->chgWData(oldp+859,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                 [0xfU]),76);
        bufp->chgCData(oldp+862,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__tail_ptr),4);
        bufp->chgCData(oldp+863,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__drain_ptr),4);
        bufp->chgCData(oldp+864,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__count),5);
        bufp->chgIData(oldp+865,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk6__DOT__i),32);
        bufp->chgCData(oldp+866,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk7__DOT__drain_inc),5);
        bufp->chgIData(oldp+867,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__i),32);
        bufp->chgIData(oldp+868,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__unnamedblk12__DOT__idx),32);
        bufp->chgIData(oldp+869,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__i),32);
        bufp->chgIData(oldp+870,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk7__DOT__unnamedblk9__DOT__c),32);
        bufp->chgIData(oldp+871,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk7__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i),32);
        bufp->chgIData(oldp+872,((0xfffffff8U & vlSelf->core__DOT__prefetch__DOT__PC__DOT__pc_reg)),32);
        bufp->chgCData(oldp+873,((0xf8U & vlSelf->core__DOT__prefetch__DOT__PC__DOT__pc_reg)),8);
        bufp->chgCData(oldp+874,((0x1fU & VL_SHIFTR_III(8,8,32, 
                                                        (0xffU 
                                                         & vlSelf->core__DOT__prefetch__DOT__PC__DOT__pc_reg), 3U))),8);
        bufp->chgCData(oldp+875,((0x3eU & VL_SHIFTR_III(8,8,32, 
                                                        (0xffU 
                                                         & vlSelf->core__DOT__prefetch__DOT__PC__DOT__pc_reg), 2U))),8);
        bufp->chgIData(oldp+876,(vlSelf->core__DOT__prefetch__DOT__IMEM__DOT__unnamedblk2__DOT__i),32);
        bufp->chgSData(oldp+877,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [0U]),12);
        bufp->chgSData(oldp+878,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [1U]),12);
        bufp->chgSData(oldp+879,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [2U]),12);
        bufp->chgSData(oldp+880,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [3U]),12);
        bufp->chgSData(oldp+881,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [4U]),12);
        bufp->chgSData(oldp+882,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [5U]),12);
        bufp->chgSData(oldp+883,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [6U]),12);
        bufp->chgSData(oldp+884,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [7U]),12);
        bufp->chgSData(oldp+885,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [8U]),12);
        bufp->chgSData(oldp+886,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [9U]),12);
        bufp->chgSData(oldp+887,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [0xaU]),12);
        bufp->chgSData(oldp+888,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [0xbU]),12);
        bufp->chgSData(oldp+889,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [0xcU]),12);
        bufp->chgSData(oldp+890,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [0xdU]),12);
        bufp->chgSData(oldp+891,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [0xeU]),12);
        bufp->chgSData(oldp+892,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [0xfU]),12);
        bufp->chgSData(oldp+893,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [0x10U]),12);
        bufp->chgSData(oldp+894,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [0x11U]),12);
        bufp->chgSData(oldp+895,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [0x12U]),12);
        bufp->chgSData(oldp+896,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [0x13U]),12);
        bufp->chgSData(oldp+897,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [0x14U]),12);
        bufp->chgSData(oldp+898,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [0x15U]),12);
        bufp->chgSData(oldp+899,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [0x16U]),12);
        bufp->chgSData(oldp+900,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [0x17U]),12);
        bufp->chgSData(oldp+901,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [0x18U]),12);
        bufp->chgSData(oldp+902,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [0x19U]),12);
        bufp->chgSData(oldp+903,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [0x1aU]),12);
        bufp->chgSData(oldp+904,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [0x1bU]),12);
        bufp->chgSData(oldp+905,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [0x1cU]),12);
        bufp->chgSData(oldp+906,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [0x1dU]),12);
        bufp->chgSData(oldp+907,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [0x1eU]),12);
        bufp->chgSData(oldp+908,(vlSelf->core__DOT__rename__DOT__rename_table
                                 [0x1fU]),12);
        bufp->chgQData(oldp+909,(vlSelf->core__DOT__rename__DOT__ftb),64);
        bufp->chgCData(oldp+911,(vlSelf->core__DOT__rename__DOT__req_valid),2);
        bufp->chgCData(oldp+912,(vlSelf->core__DOT__rename__DOT__req_count[0]),2);
        bufp->chgCData(oldp+913,(vlSelf->core__DOT__rename__DOT__req_count[1]),2);
        bufp->chgBit(oldp+914,(vlSelf->core__DOT__rename__DOT__chkpt_need));
        bufp->chgIData(oldp+915,(vlSelf->core__DOT__rename__DOT__unnamedblk10__DOT__i),32);
        bufp->chgIData(oldp+916,(vlSelf->core__DOT__rename__DOT__unnamedblk11__DOT__i),32);
        bufp->chgIData(oldp+917,(vlSelf->core__DOT__rename__DOT__unnamedblk11__DOT__unnamedblk12__DOT__r),32);
        bufp->chgIData(oldp+918,(vlSelf->core__DOT__rename__DOT__unnamedblk11__DOT__unnamedblk13__DOT__b),32);
        bufp->chgIData(oldp+919,(vlSelf->core__DOT__rename__DOT__unnamedblk14__DOT__i),32);
        bufp->chgIData(oldp+920,(vlSelf->core__DOT__rename__DOT__unnamedblk14__DOT__unnamedblk15__DOT__r),32);
        bufp->chgIData(oldp+921,(vlSelf->core__DOT__rename__DOT__unnamedblk14__DOT__unnamedblk16__DOT__b),32);
        bufp->chgIData(oldp+922,(vlSelf->core__DOT__rename__DOT__unnamedblk17__DOT__i),32);
        bufp->chgIData(oldp+923,(vlSelf->core__DOT__rename__DOT__unnamedblk18__DOT__i),32);
        bufp->chgIData(oldp+924,(vlSelf->core__DOT__rename__DOT__unnamedblk19__DOT__b),32);
        bufp->chgIData(oldp+925,(vlSelf->core__DOT__rename__DOT__unnamedblk20__DOT__i),32);
        bufp->chgIData(oldp+926,(vlSelf->core__DOT__rename__DOT__unnamedblk21__DOT__i),32);
        bufp->chgIData(oldp+927,(vlSelf->core__DOT__rename__DOT__unnamedblk22__DOT__i),32);
        bufp->chgIData(oldp+928,(vlSelf->core__DOT__rename__DOT__unnamedblk23__DOT__r),32);
        bufp->chgIData(oldp+929,(vlSelf->core__DOT__rename__DOT__unnamedblk24__DOT__r),32);
        bufp->chgIData(oldp+930,(vlSelf->core__DOT__rename__DOT__unnamedblk25__DOT__i),32);
        bufp->chgIData(oldp+931,(vlSelf->core__DOT__rename__DOT__unnamedblk26__DOT__r),32);
        bufp->chgIData(oldp+932,(vlSelf->core__DOT__rename__DOT__unnamedblk27__DOT__i),32);
        bufp->chgIData(oldp+933,(vlSelf->core__DOT__rename__DOT__unnamedblk9__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+934,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_mem[0]));
        bufp->chgBit(oldp+935,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_mem[1]));
        bufp->chgBit(oldp+936,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_mem[0]));
        bufp->chgBit(oldp+937,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_mem[1]));
        bufp->chgIData(oldp+938,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_data_mem[0]),32);
        bufp->chgIData(oldp+939,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_data_mem[1]),32);
        bufp->chgBit(oldp+940,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_mem
                               [0U]));
        bufp->chgBit(oldp+941,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_mem
                               [0U]));
        bufp->chgBit(oldp+942,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_mem
                               [1U]));
        bufp->chgBit(oldp+943,(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_mem
                               [1U]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[6U])) {
        bufp->chgIData(oldp+944,(vlSelf->core__DOT__commit_packet
                                 [0U]),19);
        bufp->chgIData(oldp+945,(vlSelf->core__DOT__commit_packet
                                 [1U]),19);
        bufp->chgBit(oldp+946,(vlSelf->core__DOT__alu_buffer_busy[0]));
        bufp->chgBit(oldp+947,(vlSelf->core__DOT__alu_buffer_busy[1]));
        bufp->chgBit(oldp+948,(vlSelf->core__DOT__mul_div_buffer_busy[0]));
        bufp->chgCData(oldp+949,(vlSelf->core__DOT__commit_sqN[0]),7);
        bufp->chgCData(oldp+950,(vlSelf->core__DOT__commit_sqN[1]),7);
        bufp->chgCData(oldp+951,(vlSelf->core__DOT__br_jalr_sqN[0]),7);
        bufp->chgCData(oldp+952,(vlSelf->core__DOT__br_jalr_sqN[1]),7);
        bufp->chgCData(oldp+953,(vlSelf->core__DOT__ROB__DOT__dataout_valid),2);
        bufp->chgBit(oldp+954,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__alu_ready[0]));
        bufp->chgBit(oldp+955,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__alu_ready[1]));
        bufp->chgBit(oldp+956,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__mul_ready[0]));
        bufp->chgIData(oldp+957,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__unnamedblk1__DOT__g_alu_assign__DOT__unnamedblk2__DOT__s),32);
        bufp->chgIData(oldp+958,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__unnamedblk3__DOT__unnamedblk4__DOT__s),32);
        bufp->chgWData(oldp+959,(vlSelf->core__DOT__execute__DOT__next_agu_out
                                 [0U]),77);
        bufp->chgWData(oldp+962,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr),82);
        bufp->chgCData(oldp+965,(vlSelf->core__DOT____Vcellinp__flush_controller__sqN[0]),7);
        bufp->chgCData(oldp+966,(vlSelf->core__DOT____Vcellinp__flush_controller__sqN[1]),7);
        bufp->chgCData(oldp+967,(vlSelf->core__DOT__issue__DOT__instr_sqN[0]),7);
        bufp->chgCData(oldp+968,(vlSelf->core__DOT__issue__DOT__instr_sqN[1]),7);
        bufp->chgBit(oldp+969,(vlSelf->core__DOT__issue__DOT__instr_valid[0]));
        bufp->chgBit(oldp+970,(vlSelf->core__DOT__issue__DOT__instr_valid[1]));
        bufp->chgBit(oldp+971,((8U == (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__tail))));
        bufp->chgIData(oldp+972,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                 [0U]),32);
        bufp->chgIData(oldp+973,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                 [1U]),32);
        bufp->chgIData(oldp+974,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                 [2U]),32);
        bufp->chgIData(oldp+975,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                 [3U]),32);
        bufp->chgIData(oldp+976,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                 [4U]),32);
        bufp->chgIData(oldp+977,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                 [5U]),32);
        bufp->chgIData(oldp+978,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                 [6U]),32);
        bufp->chgIData(oldp+979,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                 [7U]),32);
        bufp->chgCData(oldp+980,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__tail),4);
        bufp->chgIData(oldp+981,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j),32);
        bufp->chgIData(oldp+982,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                                 [0U]),32);
        bufp->chgIData(oldp+983,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                                 [1U]),32);
        bufp->chgIData(oldp+984,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                                 [2U]),32);
        bufp->chgIData(oldp+985,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                                 [3U]),32);
        bufp->chgIData(oldp+986,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                                 [4U]),32);
        bufp->chgIData(oldp+987,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                                 [5U]),32);
        bufp->chgIData(oldp+988,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                                 [6U]),32);
        bufp->chgIData(oldp+989,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                                 [7U]),32);
        bufp->chgCData(oldp+990,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail),4);
        bufp->chgIData(oldp+991,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j),32);
        bufp->chgCData(oldp+992,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff),7);
        bufp->chgQData(oldp+993,(vlSelf->core__DOT__lsu__DOT__ldb_mem_resp
                                 [0U]),40);
        bufp->chgQData(oldp+995,(vlSelf->core__DOT__lsu__DOT__ldb_mem_resp
                                 [1U]),40);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[7U])) {
        bufp->chgBit(oldp+997,(vlSelf->core__DOT__rename_busy));
        bufp->chgWData(oldp+998,(vlSelf->core__DOT__fetch_instr
                                 [0U]),72);
        bufp->chgWData(oldp+1001,(vlSelf->core__DOT__fetch_instr
                                  [1U]),72);
        bufp->chgBit(oldp+1004,(vlSelf->core__DOT__ROB_busy));
        bufp->chgCData(oldp+1005,(vlSelf->core__DOT__ROB__DOT__commit),2);
        bufp->chgCData(oldp+1006,(vlSelf->core__DOT__ROB__DOT__write_en),2);
        bufp->chgCData(oldp+1007,(vlSelf->core__DOT__ROB__DOT__next_count),7);
        bufp->chgCData(oldp+1008,(vlSelf->core__DOT__ROB__DOT__next_head),6);
        bufp->chgCData(oldp+1009,(vlSelf->core__DOT__ROB__DOT__next_tail),6);
        bufp->chgCData(oldp+1010,(vlSelf->core__DOT__ROB__DOT__commit_index[0]),6);
        bufp->chgCData(oldp+1011,(vlSelf->core__DOT__ROB__DOT__commit_index[1]),6);
        bufp->chgBit(oldp+1012,(vlSelf->core__DOT__ROB__DOT__empty));
        bufp->chgWData(oldp+1013,(vlSelf->core__DOT__decode__DOT__decoder_out
                                  [0U]),102);
        bufp->chgWData(oldp+1017,(vlSelf->core__DOT__decode__DOT__decoder_out
                                  [1U]),102);
        bufp->chgCData(oldp+1021,(vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode[0]),7);
        bufp->chgCData(oldp+1022,(vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode[1]),7);
        bufp->chgIData(oldp+1023,(vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate[0]),32);
        bufp->chgIData(oldp+1024,(vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate[1]),32);
        bufp->chgCData(oldp+1025,(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__funct3),3);
        bufp->chgCData(oldp+1026,(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode),7);
        bufp->chgSData(oldp+1027,(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm12),12);
        bufp->chgSData(oldp+1028,(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm13),13);
        bufp->chgIData(oldp+1029,(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm21),21);
        bufp->chgIData(oldp+1030,(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw),32);
        bufp->chgCData(oldp+1031,(vlSelf->core__DOT__fetch__DOT__FB__DOT__out_count),2);
        bufp->chgBit(oldp+1032,(vlSelf->core__DOT__fetch__DOT__FB__DOT__can_read));
        bufp->chgCData(oldp+1033,(vlSelf->core__DOT__fetch__DOT__FB__DOT__idx_head),4);
        bufp->chgWData(oldp+1034,(vlSelf->core__DOT__lsu__DOT__stb_mem_req
                                  [0U]),67);
        bufp->chgWData(oldp+1037,(vlSelf->core__DOT__lsu__DOT__stb_mem_req
                                  [1U]),67);
        bufp->chgIData(oldp+1040,(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx),32);
        bufp->chgCData(oldp+1041,(vlSelf->core__DOT__rename__DOT__free_CommTag[0]),6);
        bufp->chgCData(oldp+1042,(vlSelf->core__DOT__rename__DOT__free_CommTag[1]),6);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[8U])) {
        bufp->chgBit(oldp+1043,(vlSelf->core__DOT__reg_ready
                                [0U][0U]));
        bufp->chgBit(oldp+1044,(vlSelf->core__DOT__reg_ready
                                [0U][1U]));
        bufp->chgBit(oldp+1045,(vlSelf->core__DOT__reg_ready
                                [1U][0U]));
        bufp->chgBit(oldp+1046,(vlSelf->core__DOT__reg_ready
                                [1U][1U]));
        bufp->chgBit(oldp+1047,(vlSelf->core__DOT__reg_ready
                                [2U][0U]));
        bufp->chgBit(oldp+1048,(vlSelf->core__DOT__reg_ready
                                [2U][1U]));
        bufp->chgBit(oldp+1049,(vlSelf->core__DOT__reg_ready
                                [3U][0U]));
        bufp->chgBit(oldp+1050,(vlSelf->core__DOT__reg_ready
                                [3U][1U]));
        bufp->chgCData(oldp+1051,(vlSelf->core__DOT__CDB_tag[0]),6);
        bufp->chgCData(oldp+1052,(vlSelf->core__DOT__CDB_tag[1]),6);
        bufp->chgCData(oldp+1053,(vlSelf->core__DOT__CDB_tag[2]),6);
        bufp->chgCData(oldp+1054,(vlSelf->core__DOT__CDB_tag[3]),6);
        bufp->chgBit(oldp+1055,(vlSelf->core__DOT__CDB_valid[0]));
        bufp->chgBit(oldp+1056,(vlSelf->core__DOT__CDB_valid[1]));
        bufp->chgBit(oldp+1057,(vlSelf->core__DOT__CDB_valid[2]));
        bufp->chgBit(oldp+1058,(vlSelf->core__DOT__CDB_valid[3]));
        bufp->chgBit(oldp+1059,(vlSelf->core__DOT__mul_div_fu_busy[0]));
        bufp->chgBit(oldp+1060,((0U != (IData)(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__state))));
        bufp->chgCData(oldp+1061,(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__state),3);
        bufp->chgBit(oldp+1062,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__tag_ready[0]));
        bufp->chgBit(oldp+1063,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__tag_ready[1]));
        bufp->chgBit(oldp+1064,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__tag_ready
                                [0U]));
        bufp->chgBit(oldp+1065,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__tag_ready
                                [1U]));
        bufp->chgBit(oldp+1066,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__tag_ready[0]));
        bufp->chgBit(oldp+1067,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__tag_ready[1]));
        bufp->chgBit(oldp+1068,(((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__is_jump) 
                                 | vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__tag_ready
                                 [0U])));
        bufp->chgBit(oldp+1069,((1U & (((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__is_jump) 
                                        | (vlSelf->core__DOT__alu_dispatch_instr
                                           [0U][0U] 
                                           >> 8U)) 
                                       | vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__tag_ready
                                       [1U]))));
        bufp->chgBit(oldp+1070,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__tag_ready[0]));
        bufp->chgBit(oldp+1071,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__tag_ready[1]));
        bufp->chgBit(oldp+1072,(((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__is_jump) 
                                 | vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__tag_ready
                                 [0U])));
        bufp->chgBit(oldp+1073,((1U & (((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__is_jump) 
                                        | (vlSelf->core__DOT__alu_dispatch_instr
                                           [1U][0U] 
                                           >> 8U)) 
                                       | vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__tag_ready
                                       [1U]))));
        bufp->chgBit(oldp+1074,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__tag_ready[0]));
        bufp->chgBit(oldp+1075,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__tag_ready[1]));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[9U])) {
        bufp->chgCData(oldp+1076,(vlSelf->core__DOT__RF_raddr
                                  [0U][0U]),6);
        bufp->chgCData(oldp+1077,(vlSelf->core__DOT__RF_raddr
                                  [0U][1U]),6);
        bufp->chgCData(oldp+1078,(vlSelf->core__DOT__RF_raddr
                                  [1U][0U]),6);
        bufp->chgCData(oldp+1079,(vlSelf->core__DOT__RF_raddr
                                  [1U][1U]),6);
        bufp->chgCData(oldp+1080,(vlSelf->core__DOT__RF_raddr
                                  [2U][0U]),6);
        bufp->chgCData(oldp+1081,(vlSelf->core__DOT__RF_raddr
                                  [2U][1U]),6);
        bufp->chgCData(oldp+1082,(vlSelf->core__DOT__RF_raddr
                                  [3U][0U]),6);
        bufp->chgCData(oldp+1083,(vlSelf->core__DOT__RF_raddr
                                  [3U][1U]),6);
        bufp->chgIData(oldp+1084,(vlSelf->core__DOT__RF_read_data
                                  [0U][0U]),32);
        bufp->chgIData(oldp+1085,(vlSelf->core__DOT__RF_read_data
                                  [0U][1U]),32);
        bufp->chgIData(oldp+1086,(vlSelf->core__DOT__RF_read_data
                                  [1U][0U]),32);
        bufp->chgIData(oldp+1087,(vlSelf->core__DOT__RF_read_data
                                  [1U][1U]),32);
        bufp->chgIData(oldp+1088,(vlSelf->core__DOT__RF_read_data
                                  [2U][0U]),32);
        bufp->chgIData(oldp+1089,(vlSelf->core__DOT__RF_read_data
                                  [2U][1U]),32);
        bufp->chgIData(oldp+1090,(vlSelf->core__DOT__RF_read_data
                                  [3U][0U]),32);
        bufp->chgIData(oldp+1091,(vlSelf->core__DOT__RF_read_data
                                  [3U][1U]),32);
        bufp->chgIData(oldp+1092,(vlSelf->core__DOT__rs1_data[0]),32);
        bufp->chgIData(oldp+1093,(vlSelf->core__DOT__rs1_data[1]),32);
        bufp->chgIData(oldp+1094,(vlSelf->core__DOT__rs1_data[2]),32);
        bufp->chgIData(oldp+1095,(vlSelf->core__DOT__rs1_data[3]),32);
        bufp->chgIData(oldp+1096,(vlSelf->core__DOT__rs2_data[0]),32);
        bufp->chgIData(oldp+1097,(vlSelf->core__DOT__rs2_data[1]),32);
        bufp->chgIData(oldp+1098,(vlSelf->core__DOT__rs2_data[2]),32);
        bufp->chgIData(oldp+1099,(vlSelf->core__DOT__rs2_data[3]),32);
        bufp->chgCData(oldp+1100,(vlSelf->core__DOT__rs1_addr[0]),6);
        bufp->chgCData(oldp+1101,(vlSelf->core__DOT__rs1_addr[1]),6);
        bufp->chgCData(oldp+1102,(vlSelf->core__DOT__rs1_addr[2]),6);
        bufp->chgCData(oldp+1103,(vlSelf->core__DOT__rs1_addr[3]),6);
        bufp->chgCData(oldp+1104,(vlSelf->core__DOT__rs2_addr[0]),6);
        bufp->chgCData(oldp+1105,(vlSelf->core__DOT__rs2_addr[1]),6);
        bufp->chgCData(oldp+1106,(vlSelf->core__DOT__rs2_addr[2]),6);
        bufp->chgCData(oldp+1107,(vlSelf->core__DOT__rs2_addr[3]),6);
        bufp->chgIData(oldp+1108,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__RF_data[0]),32);
        bufp->chgIData(oldp+1109,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__RF_data[1]),32);
        bufp->chgCData(oldp+1110,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__read_tag[0]),6);
        bufp->chgCData(oldp+1111,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__read_tag[1]),6);
        bufp->chgCData(oldp+1112,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask),8);
        bufp->chgCData(oldp+1113,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx),3);
        bufp->chgBit(oldp+1114,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_found));
        bufp->chgIData(oldp+1115,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__pe__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+1116,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1));
        bufp->chgBit(oldp+1117,(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2));
        bufp->chgIData(oldp+1118,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__RF_data[0]),32);
        bufp->chgIData(oldp+1119,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__RF_data[1]),32);
        bufp->chgCData(oldp+1120,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__read_tag[0]),6);
        bufp->chgCData(oldp+1121,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__read_tag[1]),6);
        bufp->chgCData(oldp+1122,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask),8);
        bufp->chgCData(oldp+1123,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx),3);
        bufp->chgBit(oldp+1124,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_found));
        bufp->chgIData(oldp+1125,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__pe__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+1126,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1));
        bufp->chgBit(oldp+1127,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2));
        bufp->chgIData(oldp+1128,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__RF_data[0]),32);
        bufp->chgIData(oldp+1129,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__RF_data[1]),32);
        bufp->chgCData(oldp+1130,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__read_tag[0]),6);
        bufp->chgCData(oldp+1131,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__read_tag[1]),6);
        bufp->chgCData(oldp+1132,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask),8);
        bufp->chgCData(oldp+1133,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx),3);
        bufp->chgBit(oldp+1134,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_found));
        bufp->chgIData(oldp+1135,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__pe__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+1136,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1));
        bufp->chgBit(oldp+1137,(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2));
        bufp->chgIData(oldp+1138,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__RF_data[0]),32);
        bufp->chgIData(oldp+1139,(vlSelf->core__DOT__issue__DOT____Vcellinp__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__RF_data[1]),32);
        bufp->chgCData(oldp+1140,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__read_tag[0]),6);
        bufp->chgCData(oldp+1141,(vlSelf->core__DOT__issue__DOT____Vcellout__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__read_tag[1]),6);
        bufp->chgCData(oldp+1142,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask),8);
        bufp->chgCData(oldp+1143,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx),3);
        bufp->chgBit(oldp+1144,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_found));
        bufp->chgIData(oldp+1145,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__pe__DOT__unnamedblk1__DOT__i),32);
        bufp->chgBit(oldp+1146,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1));
        bufp->chgBit(oldp+1147,(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2));
    }
    bufp->chgBit(oldp+1148,(vlSelf->clk));
    bufp->chgBit(oldp+1149,(vlSelf->clk_m));
    bufp->chgBit(oldp+1150,(vlSelf->rst));
    bufp->chgBit(oldp+1151,(vlSelf->rst_m));
    bufp->chgCData(oldp+1152,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_alu[0]),2);
    bufp->chgCData(oldp+1153,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_alu[1]),2);
    bufp->chgCData(oldp+1154,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_alu[2]),2);
    bufp->chgCData(oldp+1155,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_mul[0]),2);
    bufp->chgCData(oldp+1156,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_mul[1]),2);
    bufp->chgCData(oldp+1157,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_mul[2]),2);
    bufp->chgCData(oldp+1158,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_lsu[0]),2);
    bufp->chgCData(oldp+1159,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_lsu[1]),2);
    bufp->chgCData(oldp+1160,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_lsu[2]),2);
    bufp->chgCData(oldp+1161,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu[0]),2);
    bufp->chgCData(oldp+1162,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu[1]),2);
    bufp->chgCData(oldp+1163,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu[2]),2);
    bufp->chgBit(oldp+1164,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_mul[0]));
    bufp->chgBit(oldp+1165,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_mul[1]));
    bufp->chgBit(oldp+1166,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_lsu[0]));
    bufp->chgBit(oldp+1167,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_lsu[1]));
    bufp->chgBit(oldp+1168,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__alu_slot[0]));
    bufp->chgBit(oldp+1169,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__alu_slot[1]));
    bufp->chgBit(oldp+1170,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__alu_valid[0]));
    bufp->chgBit(oldp+1171,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__alu_valid[1]));
    bufp->chgBit(oldp+1172,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__mul_slot[0]));
    bufp->chgBit(oldp+1173,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__mul_valid[0]));
    bufp->chgBit(oldp+1174,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__lsu_slot[0]));
    bufp->chgBit(oldp+1175,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__lsu_valid[0]));
    bufp->chgBit(oldp+1176,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__can_dispatch[0]));
    bufp->chgBit(oldp+1177,(vlSelf->core__DOT__dispatch__DOT__DU__DOT__can_dispatch[1]));
    bufp->chgQData(oldp+1178,(vlSelf->core__DOT__execute__DOT__int_fu_out
                              [0U]),46);
    bufp->chgQData(oldp+1180,(vlSelf->core__DOT__execute__DOT__int_fu_out
                              [1U]),46);
    bufp->chgQData(oldp+1182,(vlSelf->core__DOT__execute__DOT__int_fu_out
                              [2U]),46);
    bufp->chgIData(oldp+1184,(((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel1)
                                ? ((vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0[3U] 
                                    << 0x1fU) | (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0[2U] 
                                                 >> 1U))
                                : vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected)),32);
    bufp->chgIData(oldp+1185,(((2U & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel2))
                                ? 4U : ((1U & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel2))
                                         ? ((vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0[1U] 
                                             << 0x15U) 
                                            | (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0[0U] 
                                               >> 0xbU))
                                         : vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected))),32);
    bufp->chgIData(oldp+1186,(((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel1)
                                ? ((vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0[3U] 
                                    << 0x1fU) | (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0[2U] 
                                                 >> 1U))
                                : vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected)),32);
    bufp->chgIData(oldp+1187,(((2U & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel2))
                                ? 4U : ((1U & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel2))
                                         ? ((vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0[1U] 
                                             << 0x15U) 
                                            | (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0[0U] 
                                               >> 0xbU))
                                         : vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected))),32);
    bufp->chgIData(oldp+1188,(((0U == (((IData)(vlSelf->core__DOT__jump2) 
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
    bufp->chgQData(oldp+1189,(vlSelf->core__DOT__rename__DOT__masked[0]),64);
    bufp->chgQData(oldp+1191,(vlSelf->core__DOT__rename__DOT__masked[1]),64);
    bufp->chgQData(oldp+1193,(vlSelf->core__DOT__rename__DOT__masked[2]),64);
    bufp->chgQData(oldp+1195,(vlSelf->core__DOT__rename__DOT__onehot[0]),64);
    bufp->chgQData(oldp+1197,(vlSelf->core__DOT__rename__DOT__onehot[1]),64);
    bufp->chgCData(oldp+1199,(vlSelf->core__DOT__rename__DOT__chosen[0]),6);
    bufp->chgCData(oldp+1200,(vlSelf->core__DOT__rename__DOT__chosen[1]),6);
}

void Vcore___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_cleanup\n"); );
    // Init
    Vcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcore___024root*>(voidSelf);
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[9U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[0xaU] = 0U;
}
