// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_fst_c.h"
#include "Vcore__Syms.h"


void Vcore___024root__trace_chg_0_sub_0(Vcore___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vcore___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_chg_0\n"); );
    // Body
    Vcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcore___024root*>(voidSelf);
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vcore___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcore___024root__trace_chg_0_sub_0(Vcore___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_chg_0_sub_0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgCData(oldp+0,(vlSelfRef.core__DOT__read_ready[0U][0U]),6);
        bufp->chgCData(oldp+1,(vlSelfRef.core__DOT__read_ready[0U][1U]),6);
        bufp->chgCData(oldp+2,(vlSelfRef.core__DOT__read_ready[1U][0U]),6);
        bufp->chgCData(oldp+3,(vlSelfRef.core__DOT__read_ready[1U][1U]),6);
        bufp->chgCData(oldp+4,(vlSelfRef.core__DOT__read_ready[2U][0U]),6);
        bufp->chgCData(oldp+5,(vlSelfRef.core__DOT__read_ready[2U][1U]),6);
        bufp->chgCData(oldp+6,(vlSelfRef.core__DOT__read_ready[3U][0U]),6);
        bufp->chgCData(oldp+7,(vlSelfRef.core__DOT__read_ready[3U][1U]),6);
        bufp->chgBit(oldp+8,(vlSelfRef.core__DOT__dispatch__DOT__ALU_buffer_busy[0]));
        bufp->chgBit(oldp+9,(vlSelfRef.core__DOT__dispatch__DOT__ALU_buffer_busy[1]));
        bufp->chgBit(oldp+10,(vlSelfRef.core__DOT__dispatch__DOT__MUL_DIV_buffer_busy[0]));
        bufp->chgBit(oldp+11,(vlSelfRef.core__DOT__dispatch__DOT__LSU_buffer_busy[0]));
        bufp->chgWData(oldp+12,(vlSelfRef.core__DOT__dispatch__DOT__OUT_alu_instr[0U]),103);
        bufp->chgWData(oldp+16,(vlSelfRef.core__DOT__dispatch__DOT__OUT_alu_instr[1U]),103);
        bufp->chgIData(oldp+20,(vlSelfRef.core__DOT__dispatch__DOT__OUT_mul_div_instr[0U]),30);
        bufp->chgQData(oldp+21,(vlSelfRef.core__DOT__dispatch__DOT__OUT_lsu_instr[0U]),63);
        bufp->chgBit(oldp+23,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__ALU_buffer_busy[0]));
        bufp->chgBit(oldp+24,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__ALU_buffer_busy[1]));
        bufp->chgBit(oldp+25,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__MUL_DIV_buffer_busy[0]));
        bufp->chgBit(oldp+26,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__LSU_buffer_busy[0]));
        bufp->chgBit(oldp+27,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_ready[0]));
        bufp->chgBit(oldp+28,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_ready[1]));
        bufp->chgBit(oldp+29,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__mul_ready[0]));
        bufp->chgCData(oldp+30,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu[0]),2);
        bufp->chgCData(oldp+31,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu[1]),2);
        bufp->chgCData(oldp+32,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu[2]),2);
        bufp->chgBit(oldp+33,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_ready_mul[0]));
        bufp->chgBit(oldp+34,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_ready_mul[1]));
        bufp->chgWData(oldp+35,(vlSelfRef.core__DOT__issue__DOT__IN_alu_instr[0U]),103);
        bufp->chgWData(oldp+39,(vlSelfRef.core__DOT__issue__DOT__IN_alu_instr[1U]),103);
        bufp->chgIData(oldp+43,(vlSelfRef.core__DOT__issue__DOT__IN_mul_div_instr[0U]),30);
        bufp->chgQData(oldp+44,(vlSelfRef.core__DOT__issue__DOT__IN_lsu_instr[0U]),63);
        bufp->chgCData(oldp+46,(vlSelfRef.core__DOT__issue__DOT__check_ready[0U][0U]),6);
        bufp->chgCData(oldp+47,(vlSelfRef.core__DOT__issue__DOT__check_ready[0U][1U]),6);
        bufp->chgCData(oldp+48,(vlSelfRef.core__DOT__issue__DOT__check_ready[1U][0U]),6);
        bufp->chgCData(oldp+49,(vlSelfRef.core__DOT__issue__DOT__check_ready[1U][1U]),6);
        bufp->chgCData(oldp+50,(vlSelfRef.core__DOT__issue__DOT__check_ready[2U][0U]),6);
        bufp->chgCData(oldp+51,(vlSelfRef.core__DOT__issue__DOT__check_ready[2U][1U]),6);
        bufp->chgCData(oldp+52,(vlSelfRef.core__DOT__issue__DOT__check_ready[3U][0U]),6);
        bufp->chgCData(oldp+53,(vlSelfRef.core__DOT__issue__DOT__check_ready[3U][1U]),6);
        bufp->chgCData(oldp+54,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__check_ready[0]),6);
        bufp->chgCData(oldp+55,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__check_ready[1]),6);
        bufp->chgBit(oldp+56,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__is_jump));
        bufp->chgBit(oldp+57,((1U & ((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__is_jump) 
                                     | (vlSelfRef.core__DOT__alu_dispatch_instr[0U][0U] 
                                        >> 8U)))));
        bufp->chgCData(oldp+58,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__check_ready[0]),6);
        bufp->chgCData(oldp+59,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__check_ready[1]),6);
        bufp->chgBit(oldp+60,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__is_jump));
        bufp->chgBit(oldp+61,((1U & ((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__is_jump) 
                                     | (vlSelfRef.core__DOT__alu_dispatch_instr[1U][0U] 
                                        >> 8U)))));
        bufp->chgCData(oldp+62,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__check_ready[0]),6);
        bufp->chgCData(oldp+63,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__check_ready[1]),6);
        bufp->chgCData(oldp+64,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__check_ready[0]),6);
        bufp->chgCData(oldp+65,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__check_ready[1]),6);
        bufp->chgBit(oldp+66,(vlSelfRef.core__DOT__lsu__DOT__is_store));
        bufp->chgBit(oldp+67,(vlSelfRef.core__DOT__lsu__DOT__is_load));
        bufp->chgCData(oldp+68,(vlSelfRef.core__DOT__lsu__DOT__stb_alloc),8);
        bufp->chgSData(oldp+69,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__alloc),14);
        bufp->chgCData(oldp+70,(vlSelfRef.core__DOT__rename__DOT__read_tag[0U][0U]),6);
        bufp->chgCData(oldp+71,(vlSelfRef.core__DOT__rename__DOT__read_tag[0U][1U]),6);
        bufp->chgCData(oldp+72,(vlSelfRef.core__DOT__rename__DOT__read_tag[1U][0U]),6);
        bufp->chgCData(oldp+73,(vlSelfRef.core__DOT__rename__DOT__read_tag[1U][1U]),6);
        bufp->chgCData(oldp+74,(vlSelfRef.core__DOT__rename__DOT__read_tag[2U][0U]),6);
        bufp->chgCData(oldp+75,(vlSelfRef.core__DOT__rename__DOT__read_tag[2U][1U]),6);
        bufp->chgCData(oldp+76,(vlSelfRef.core__DOT__rename__DOT__read_tag[3U][0U]),6);
        bufp->chgCData(oldp+77,(vlSelfRef.core__DOT__rename__DOT__read_tag[3U][1U]),6);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[8U])))) {
        bufp->chgBit(oldp+78,(vlSelfRef.core__DOT__jump1));
        bufp->chgBit(oldp+79,(vlSelfRef.core__DOT__jump2));
        bufp->chgCData(oldp+80,(vlSelfRef.core__DOT__consumed),2);
        bufp->chgIData(oldp+81,(vlSelfRef.core__DOT__jta1),32);
        bufp->chgIData(oldp+82,(vlSelfRef.core__DOT__jta2),32);
        bufp->chgBit(oldp+83,(vlSelfRef.core__DOT__flush));
        bufp->chgCData(oldp+84,(vlSelfRef.core__DOT__restore_specTag[0]),6);
        bufp->chgCData(oldp+85,(vlSelfRef.core__DOT__restore_specTag[1]),6);
        bufp->chgCData(oldp+86,(vlSelfRef.core__DOT__restore_specTag[2]),6);
        bufp->chgCData(oldp+87,(vlSelfRef.core__DOT__restore_specTag[3]),6);
        bufp->chgCData(oldp+88,(vlSelfRef.core__DOT__restore_specTag[4]),6);
        bufp->chgCData(oldp+89,(vlSelfRef.core__DOT__restore_specTag[5]),6);
        bufp->chgCData(oldp+90,(vlSelfRef.core__DOT__restore_specTag[6]),6);
        bufp->chgCData(oldp+91,(vlSelfRef.core__DOT__restore_specTag[7]),6);
        bufp->chgCData(oldp+92,(vlSelfRef.core__DOT__restore_specTag[8]),6);
        bufp->chgCData(oldp+93,(vlSelfRef.core__DOT__restore_specTag[9]),6);
        bufp->chgCData(oldp+94,(vlSelfRef.core__DOT__restore_specTag[10]),6);
        bufp->chgCData(oldp+95,(vlSelfRef.core__DOT__restore_specTag[11]),6);
        bufp->chgCData(oldp+96,(vlSelfRef.core__DOT__restore_specTag[12]),6);
        bufp->chgCData(oldp+97,(vlSelfRef.core__DOT__restore_specTag[13]),6);
        bufp->chgCData(oldp+98,(vlSelfRef.core__DOT__restore_specTag[14]),6);
        bufp->chgCData(oldp+99,(vlSelfRef.core__DOT__restore_specTag[15]),6);
        bufp->chgCData(oldp+100,(vlSelfRef.core__DOT__restore_specTag[16]),6);
        bufp->chgCData(oldp+101,(vlSelfRef.core__DOT__restore_specTag[17]),6);
        bufp->chgCData(oldp+102,(vlSelfRef.core__DOT__restore_specTag[18]),6);
        bufp->chgCData(oldp+103,(vlSelfRef.core__DOT__restore_specTag[19]),6);
        bufp->chgCData(oldp+104,(vlSelfRef.core__DOT__restore_specTag[20]),6);
        bufp->chgCData(oldp+105,(vlSelfRef.core__DOT__restore_specTag[21]),6);
        bufp->chgCData(oldp+106,(vlSelfRef.core__DOT__restore_specTag[22]),6);
        bufp->chgCData(oldp+107,(vlSelfRef.core__DOT__restore_specTag[23]),6);
        bufp->chgCData(oldp+108,(vlSelfRef.core__DOT__restore_specTag[24]),6);
        bufp->chgCData(oldp+109,(vlSelfRef.core__DOT__restore_specTag[25]),6);
        bufp->chgCData(oldp+110,(vlSelfRef.core__DOT__restore_specTag[26]),6);
        bufp->chgCData(oldp+111,(vlSelfRef.core__DOT__restore_specTag[27]),6);
        bufp->chgCData(oldp+112,(vlSelfRef.core__DOT__restore_specTag[28]),6);
        bufp->chgCData(oldp+113,(vlSelfRef.core__DOT__restore_specTag[29]),6);
        bufp->chgCData(oldp+114,(vlSelfRef.core__DOT__restore_specTag[30]),6);
        bufp->chgCData(oldp+115,(vlSelfRef.core__DOT__restore_specTag[31]),6);
        bufp->chgCData(oldp+116,(vlSelfRef.core__DOT__flush_sqN),7);
        bufp->chgBit(oldp+117,(vlSelfRef.core__DOT__br_taken[0]));
        bufp->chgBit(oldp+118,(vlSelfRef.core__DOT__br_taken[1]));
        bufp->chgCData(oldp+119,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[0]),6);
        bufp->chgCData(oldp+120,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[1]),6);
        bufp->chgCData(oldp+121,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[2]),6);
        bufp->chgCData(oldp+122,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[3]),6);
        bufp->chgCData(oldp+123,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[4]),6);
        bufp->chgCData(oldp+124,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[5]),6);
        bufp->chgCData(oldp+125,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[6]),6);
        bufp->chgCData(oldp+126,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[7]),6);
        bufp->chgCData(oldp+127,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[8]),6);
        bufp->chgCData(oldp+128,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[9]),6);
        bufp->chgCData(oldp+129,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[10]),6);
        bufp->chgCData(oldp+130,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[11]),6);
        bufp->chgCData(oldp+131,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[12]),6);
        bufp->chgCData(oldp+132,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[13]),6);
        bufp->chgCData(oldp+133,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[14]),6);
        bufp->chgCData(oldp+134,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[15]),6);
        bufp->chgCData(oldp+135,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[16]),6);
        bufp->chgCData(oldp+136,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[17]),6);
        bufp->chgCData(oldp+137,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[18]),6);
        bufp->chgCData(oldp+138,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[19]),6);
        bufp->chgCData(oldp+139,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[20]),6);
        bufp->chgCData(oldp+140,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[21]),6);
        bufp->chgCData(oldp+141,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[22]),6);
        bufp->chgCData(oldp+142,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[23]),6);
        bufp->chgCData(oldp+143,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[24]),6);
        bufp->chgCData(oldp+144,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[25]),6);
        bufp->chgCData(oldp+145,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[26]),6);
        bufp->chgCData(oldp+146,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[27]),6);
        bufp->chgCData(oldp+147,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[28]),6);
        bufp->chgCData(oldp+148,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[29]),6);
        bufp->chgCData(oldp+149,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[30]),6);
        bufp->chgCData(oldp+150,(vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[31]),6);
        bufp->chgCData(oldp+151,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[0]),6);
        bufp->chgCData(oldp+152,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[1]),6);
        bufp->chgCData(oldp+153,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[2]),6);
        bufp->chgCData(oldp+154,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[3]),6);
        bufp->chgCData(oldp+155,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[4]),6);
        bufp->chgCData(oldp+156,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[5]),6);
        bufp->chgCData(oldp+157,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[6]),6);
        bufp->chgCData(oldp+158,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[7]),6);
        bufp->chgCData(oldp+159,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[8]),6);
        bufp->chgCData(oldp+160,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[9]),6);
        bufp->chgCData(oldp+161,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[10]),6);
        bufp->chgCData(oldp+162,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[11]),6);
        bufp->chgCData(oldp+163,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[12]),6);
        bufp->chgCData(oldp+164,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[13]),6);
        bufp->chgCData(oldp+165,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[14]),6);
        bufp->chgCData(oldp+166,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[15]),6);
        bufp->chgCData(oldp+167,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[16]),6);
        bufp->chgCData(oldp+168,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[17]),6);
        bufp->chgCData(oldp+169,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[18]),6);
        bufp->chgCData(oldp+170,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[19]),6);
        bufp->chgCData(oldp+171,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[20]),6);
        bufp->chgCData(oldp+172,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[21]),6);
        bufp->chgCData(oldp+173,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[22]),6);
        bufp->chgCData(oldp+174,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[23]),6);
        bufp->chgCData(oldp+175,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[24]),6);
        bufp->chgCData(oldp+176,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[25]),6);
        bufp->chgCData(oldp+177,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[26]),6);
        bufp->chgCData(oldp+178,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[27]),6);
        bufp->chgCData(oldp+179,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[28]),6);
        bufp->chgCData(oldp+180,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[29]),6);
        bufp->chgCData(oldp+181,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[30]),6);
        bufp->chgCData(oldp+182,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[31]),6);
        bufp->chgBit(oldp+183,(vlSelfRef.core__DOT__fetch__DOT__IA__DOT__invalidate));
        bufp->chgWData(oldp+184,(vlSelfRef.core__DOT__fetch__DOT__aligner_out[0U]),65);
        bufp->chgWData(oldp+187,(vlSelfRef.core__DOT__fetch__DOT__aligner_out[1U]),65);
        bufp->chgIData(oldp+190,(vlSelfRef.core__DOT__fetch__DOT__pc_array[0]),32);
        bufp->chgIData(oldp+191,(vlSelfRef.core__DOT__fetch__DOT__pc_array[1]),32);
        bufp->chgBit(oldp+192,(vlSelfRef.core__DOT__fetch__DOT__valid[0]));
        bufp->chgBit(oldp+193,(vlSelfRef.core__DOT__fetch__DOT__valid[1]));
        bufp->chgCData(oldp+194,(vlSelfRef.core__DOT__fetch__DOT__opcode[0]),7);
        bufp->chgCData(oldp+195,(vlSelfRef.core__DOT__fetch__DOT__opcode[1]),7);
        bufp->chgIData(oldp+196,(vlSelfRef.core__DOT__fetch__DOT__imm[0]),21);
        bufp->chgIData(oldp+197,(vlSelfRef.core__DOT__fetch__DOT__imm[1]),21);
        bufp->chgIData(oldp+198,(vlSelfRef.core__DOT__fetch__DOT__iw),32);
        bufp->chgWData(oldp+199,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__IN_instr[0U]),65);
        bufp->chgWData(oldp+202,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__IN_instr[1U]),65);
        bufp->chgCData(oldp+205,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__in_valid_count),2);
        bufp->chgWData(oldp+206,(vlSelfRef.core__DOT__fetch__DOT__IA__DOT__OUT_instr[0U]),65);
        bufp->chgWData(oldp+209,(vlSelfRef.core__DOT__fetch__DOT__IA__DOT__OUT_instr[1U]),65);
        bufp->chgBit(oldp+212,(vlSelfRef.core__DOT__fetch__DOT__IA__DOT__pc_align));
        bufp->chgBit(oldp+213,(vlSelfRef.core__DOT__fetch__DOT__IA__DOT__pc_valid[0]));
        bufp->chgBit(oldp+214,(vlSelfRef.core__DOT__fetch__DOT__IA__DOT__pc_valid[1]));
        bufp->chgIData(oldp+215,(vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__pc[0]),32);
        bufp->chgIData(oldp+216,(vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__pc[1]),32);
        bufp->chgBit(oldp+217,(vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__valid[0]));
        bufp->chgBit(oldp+218,(vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__valid[1]));
        bufp->chgCData(oldp+219,(vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__opcode[0]),7);
        bufp->chgCData(oldp+220,(vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__opcode[1]),7);
        bufp->chgIData(oldp+221,(vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__imm[0]),21);
        bufp->chgIData(oldp+222,(vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__imm[1]),21);
        bufp->chgBit(oldp+223,(vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__jump_valid));
        bufp->chgBit(oldp+224,(vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__jump_index));
        bufp->chgBit(oldp+225,(vlSelfRef.core__DOT__flush_controller__DOT__br_taken[0]));
        bufp->chgBit(oldp+226,(vlSelfRef.core__DOT__flush_controller__DOT__br_taken[1]));
        bufp->chgBit(oldp+227,(vlSelfRef.core__DOT__flush_controller__DOT__unnamedblk1__DOT__valid0));
        bufp->chgBit(oldp+228,(vlSelfRef.core__DOT__flush_controller__DOT__unnamedblk1__DOT__valid1));
        bufp->chgCData(oldp+229,(vlSelfRef.core__DOT__flush_controller__DOT__unnamedblk1__DOT__diff),7);
        bufp->chgBit(oldp+230,(vlSelfRef.core__DOT__issue__DOT__OUT_br_taken[0]));
        bufp->chgBit(oldp+231,(vlSelfRef.core__DOT__issue__DOT__OUT_br_taken[1]));
        bufp->chgBit(oldp+232,(((~ ((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type) 
                                    >> 3U)) & ((4U 
                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type))
                                                ? (
                                                   (2U 
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
                                                : (
                                                   (2U 
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
        bufp->chgIData(oldp+233,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected),32);
        bufp->chgIData(oldp+234,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected),32);
        bufp->chgBit(oldp+235,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel1));
        bufp->chgCData(oldp+236,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel2),2);
        bufp->chgBit(oldp+237,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_valid));
        bufp->chgCData(oldp+238,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type),4);
        bufp->chgBit(oldp+239,(((~ ((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type) 
                                    >> 3U)) & ((4U 
                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type))
                                                ? (
                                                   (2U 
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
                                                : (
                                                   (2U 
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
        bufp->chgIData(oldp+240,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected),32);
        bufp->chgIData(oldp+241,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected),32);
        bufp->chgBit(oldp+242,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel1));
        bufp->chgCData(oldp+243,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel2),2);
        bufp->chgBit(oldp+244,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_valid));
        bufp->chgCData(oldp+245,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type),4);
        bufp->chgIData(oldp+246,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs1_data_selected),32);
        bufp->chgIData(oldp+247,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs2_data_selected),32);
        bufp->chgBit(oldp+248,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_valid));
        bufp->chgIData(oldp+249,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs1_data_selected),32);
        bufp->chgIData(oldp+250,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs2_data_selected),32);
        bufp->chgBit(oldp+251,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_valid));
        bufp->chgBit(oldp+252,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__br_taken[0]));
        bufp->chgBit(oldp+253,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__br_taken[1]));
        bufp->chgBit(oldp+254,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__oldest_idx));
        bufp->chgCData(oldp+255,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__oldest_sqN),7);
        bufp->chgCData(oldp+256,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__new_tail),4);
        bufp->chgSData(oldp+257,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__on_flush_valid),16);
        bufp->chgCData(oldp+258,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__idx),4);
        bufp->chgBit(oldp+259,((1U & (IData)(vlSelfRef.core__DOT__consumed))));
        bufp->chgIData(oldp+260,(((0U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                   ? vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1
                                   : ((1U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                       ? vlSelfRef.core__DOT__jta1
                                       : ((2U == (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0))
                                           ? vlSelfRef.core__DOT__jta2
                                           : vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1)))),32);
        bufp->chgCData(oldp+261,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[0]),6);
        bufp->chgCData(oldp+262,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[1]),6);
        bufp->chgCData(oldp+263,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[2]),6);
        bufp->chgCData(oldp+264,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[3]),6);
        bufp->chgCData(oldp+265,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[4]),6);
        bufp->chgCData(oldp+266,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[5]),6);
        bufp->chgCData(oldp+267,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[6]),6);
        bufp->chgCData(oldp+268,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[7]),6);
        bufp->chgCData(oldp+269,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[8]),6);
        bufp->chgCData(oldp+270,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[9]),6);
        bufp->chgCData(oldp+271,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[10]),6);
        bufp->chgCData(oldp+272,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[11]),6);
        bufp->chgCData(oldp+273,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[12]),6);
        bufp->chgCData(oldp+274,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[13]),6);
        bufp->chgCData(oldp+275,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[14]),6);
        bufp->chgCData(oldp+276,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[15]),6);
        bufp->chgCData(oldp+277,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[16]),6);
        bufp->chgCData(oldp+278,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[17]),6);
        bufp->chgCData(oldp+279,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[18]),6);
        bufp->chgCData(oldp+280,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[19]),6);
        bufp->chgCData(oldp+281,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[20]),6);
        bufp->chgCData(oldp+282,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[21]),6);
        bufp->chgCData(oldp+283,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[22]),6);
        bufp->chgCData(oldp+284,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[23]),6);
        bufp->chgCData(oldp+285,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[24]),6);
        bufp->chgCData(oldp+286,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[25]),6);
        bufp->chgCData(oldp+287,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[26]),6);
        bufp->chgCData(oldp+288,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[27]),6);
        bufp->chgCData(oldp+289,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[28]),6);
        bufp->chgCData(oldp+290,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[29]),6);
        bufp->chgCData(oldp+291,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[30]),6);
        bufp->chgCData(oldp+292,(vlSelfRef.core__DOT__rename__DOT__IN_specTag[31]),6);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+293,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync[0]));
        bufp->chgBit(oldp+294,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync[1]));
        bufp->chgBit(oldp+295,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync[0]));
        bufp->chgBit(oldp+296,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync[1]));
        bufp->chgBit(oldp+297,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_resp_valid_mem[0]));
        bufp->chgBit(oldp+298,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_resp_valid_mem[1]));
        bufp->chgBit(oldp+299,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r[0]));
        bufp->chgBit(oldp+300,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r[1]));
        bufp->chgBit(oldp+301,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r[0]));
        bufp->chgBit(oldp+302,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r[1]));
        bufp->chgBit(oldp+303,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_rd_sync__DOT__ff2));
        bufp->chgBit(oldp+304,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_rd_sync__DOT__ff1));
        bufp->chgBit(oldp+305,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_wr_sync__DOT__ff2));
        bufp->chgBit(oldp+306,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_wr_sync__DOT__ff1));
        bufp->chgBit(oldp+307,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_rd_sync__DOT__ff2));
        bufp->chgBit(oldp+308,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_rd_sync__DOT__ff1));
        bufp->chgBit(oldp+309,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_wr_sync__DOT__ff2));
        bufp->chgBit(oldp+310,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_wr_sync__DOT__ff1));
        bufp->chgCData(oldp+311,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__be),4);
        bufp->chgBit(oldp+312,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__bsel));
        bufp->chgCData(oldp+313,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__boff),7);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+314,((0x0eU < (IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__count))));
        bufp->chgIData(oldp+315,(vlSelfRef.core__DOT__prefetch__DOT__PC__DOT__pc_reg),32);
        bufp->chgIData(oldp+316,(vlSelfRef.core__DOT__prefetch_instr[0]),32);
        bufp->chgIData(oldp+317,(vlSelfRef.core__DOT__prefetch_instr[1]),32);
        bufp->chgWData(oldp+318,(vlSelfRef.core__DOT__decode_instr[0U]),102);
        bufp->chgWData(oldp+322,(vlSelfRef.core__DOT__decode_instr[1U]),102);
        bufp->chgBit(oldp+326,((1U & ((IData)(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count) 
                                      >> 4U))));
        bufp->chgBit(oldp+327,(vlSelfRef.core__DOT__reg_ready[0U][0U]));
        bufp->chgBit(oldp+328,(vlSelfRef.core__DOT__reg_ready[0U][1U]));
        bufp->chgBit(oldp+329,(vlSelfRef.core__DOT__reg_ready[1U][0U]));
        bufp->chgBit(oldp+330,(vlSelfRef.core__DOT__reg_ready[1U][1U]));
        bufp->chgBit(oldp+331,(vlSelfRef.core__DOT__reg_ready[2U][0U]));
        bufp->chgBit(oldp+332,(vlSelfRef.core__DOT__reg_ready[2U][1U]));
        bufp->chgBit(oldp+333,(vlSelfRef.core__DOT__reg_ready[3U][0U]));
        bufp->chgBit(oldp+334,(vlSelfRef.core__DOT__reg_ready[3U][1U]));
        bufp->chgWData(oldp+335,(vlSelfRef.core__DOT__rename_instr[0U]),105);
        bufp->chgWData(oldp+339,(vlSelfRef.core__DOT__rename_instr[1U]),105);
        bufp->chgBit(oldp+343,(vlSelfRef.core__DOT__chkpt[0]));
        bufp->chgBit(oldp+344,(vlSelfRef.core__DOT__chkpt[1]));
        bufp->chgCData(oldp+345,(vlSelfRef.core__DOT__chkpt_sqN[0]),7);
        bufp->chgCData(oldp+346,(vlSelfRef.core__DOT__chkpt_sqN[1]),7);
        bufp->chgQData(oldp+347,(vlSelfRef.core__DOT__CDB[0U]),46);
        bufp->chgQData(oldp+349,(vlSelfRef.core__DOT__CDB[1U]),46);
        bufp->chgQData(oldp+351,(vlSelfRef.core__DOT__CDB[2U]),46);
        bufp->chgQData(oldp+353,(vlSelfRef.core__DOT__CDB[3U]),46);
        bufp->chgCData(oldp+355,(vlSelfRef.core__DOT__CDB_tag[0]),6);
        bufp->chgCData(oldp+356,(vlSelfRef.core__DOT__CDB_tag[1]),6);
        bufp->chgCData(oldp+357,(vlSelfRef.core__DOT__CDB_tag[2]),6);
        bufp->chgCData(oldp+358,(vlSelfRef.core__DOT__CDB_tag[3]),6);
        bufp->chgIData(oldp+359,(vlSelfRef.core__DOT__CDB_result[0]),32);
        bufp->chgIData(oldp+360,(vlSelfRef.core__DOT__CDB_result[1]),32);
        bufp->chgIData(oldp+361,(vlSelfRef.core__DOT__CDB_result[2]),32);
        bufp->chgIData(oldp+362,(vlSelfRef.core__DOT__CDB_result[3]),32);
        bufp->chgCData(oldp+363,(vlSelfRef.core__DOT__rename_rob_rd[0]),5);
        bufp->chgCData(oldp+364,(vlSelfRef.core__DOT__rename_rob_rd[1]),5);
        bufp->chgBit(oldp+365,((1U & (~ (IData)(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet_done)))));
        bufp->chgBit(oldp+366,((0x0fU == (IData)(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__count))));
        bufp->chgBit(oldp+367,(vlSelfRef.core__DOT__mul_div_fu_busy[0]));
        bufp->chgWData(oldp+368,(vlSelfRef.core__DOT__int_issue_instr[0U]),82);
        bufp->chgWData(oldp+371,(vlSelfRef.core__DOT__int_issue_instr[1U]),82);
        bufp->chgWData(oldp+374,(vlSelfRef.core__DOT__int_issue_instr[2U]),82);
        bufp->chgWData(oldp+377,(vlSelfRef.core__DOT__lsu_issue_instr[0U]),114);
        bufp->chgCData(oldp+381,(vlSelfRef.core__DOT__jump_type[0U]),2);
        bufp->chgCData(oldp+382,(vlSelfRef.core__DOT__jump_type[1U]),2);
        bufp->chgCData(oldp+383,(vlSelfRef.core__DOT__br_jalr_sqN[0]),7);
        bufp->chgCData(oldp+384,(vlSelfRef.core__DOT__br_jalr_sqN[1]),7);
        bufp->chgWData(oldp+385,(vlSelfRef.core__DOT__agu_out[0U]),77);
        bufp->chgQData(oldp+388,(vlSelfRef.core__DOT__int_cdb_lines[0U]),46);
        bufp->chgQData(oldp+390,(vlSelfRef.core__DOT__int_cdb_lines[1U]),46);
        bufp->chgQData(oldp+392,(vlSelfRef.core__DOT__int_cdb_lines[2U]),46);
        bufp->chgQData(oldp+394,(vlSelfRef.core__DOT__lsu_cdb_lines[0U]),46);
        bufp->chgWData(oldp+396,(vlSelfRef.core__DOT__decode__DOT__OUT_instr[0U]),102);
        bufp->chgWData(oldp+400,(vlSelfRef.core__DOT__decode__DOT__OUT_instr[1U]),102);
        bufp->chgCData(oldp+404,(vlSelfRef.core__DOT__dispatch__DOT__instr_sqN[0]),7);
        bufp->chgCData(oldp+405,(vlSelfRef.core__DOT__dispatch__DOT__instr_sqN[1]),7);
        bufp->chgWData(oldp+406,(vlSelfRef.core__DOT__dispatch__DOT__IN_instr[0U]),105);
        bufp->chgWData(oldp+410,(vlSelfRef.core__DOT__dispatch__DOT__IN_instr[1U]),105);
        bufp->chgBit(oldp+414,(vlSelfRef.core__DOT__dispatch__DOT__checkpoint[0]));
        bufp->chgBit(oldp+415,(vlSelfRef.core__DOT__dispatch__DOT__checkpoint[1]));
        bufp->chgWData(oldp+416,(vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U]),103);
        bufp->chgWData(oldp+420,(vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U]),103);
        bufp->chgIData(oldp+424,(vlSelfRef.core__DOT__dispatch__DOT__mul_div_dispatch_out[0U]),30);
        bufp->chgQData(oldp+425,(vlSelfRef.core__DOT__dispatch__DOT__lsu_dispatch_out[0U]),63);
        bufp->chgCData(oldp+427,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__instr_sqN[0]),7);
        bufp->chgCData(oldp+428,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__instr_sqN[1]),7);
        bufp->chgBit(oldp+429,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__chk_valid[0]));
        bufp->chgBit(oldp+430,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__chk_valid[1]));
        bufp->chgBit(oldp+431,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[0]));
        bufp->chgBit(oldp+432,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[1]));
        bufp->chgBit(oldp+433,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[2]));
        bufp->chgBit(oldp+434,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[3]));
        bufp->chgBit(oldp+435,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[4]));
        bufp->chgBit(oldp+436,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[5]));
        bufp->chgBit(oldp+437,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[6]));
        bufp->chgBit(oldp+438,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[7]));
        bufp->chgBit(oldp+439,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[8]));
        bufp->chgBit(oldp+440,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[9]));
        bufp->chgBit(oldp+441,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[10]));
        bufp->chgBit(oldp+442,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[11]));
        bufp->chgBit(oldp+443,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[12]));
        bufp->chgBit(oldp+444,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[13]));
        bufp->chgBit(oldp+445,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[14]));
        bufp->chgBit(oldp+446,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[15]));
        bufp->chgCData(oldp+447,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count),5);
        bufp->chgWData(oldp+448,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__IN_instr[0U]),105);
        bufp->chgWData(oldp+452,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__IN_instr[1U]),105);
        bufp->chgWData(oldp+456,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__OUT_alu_instr[0U]),103);
        bufp->chgWData(oldp+460,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__OUT_alu_instr[1U]),103);
        bufp->chgIData(oldp+464,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__OUT_mul_div_instr[0U]),30);
        bufp->chgQData(oldp+465,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__OUT_lsu_instr[0U]),63);
        bufp->chgWData(oldp+467,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[0U]),105);
        bufp->chgWData(oldp+471,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[1U]),105);
        bufp->chgBit(oldp+475,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__dispatched[0]));
        bufp->chgBit(oldp+476,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__dispatched[1]));
        bufp->chgBit(oldp+477,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__lsu_ready[0]));
        bufp->chgBit(oldp+478,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_pending[0]));
        bufp->chgBit(oldp+479,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_pending[1]));
        bufp->chgBit(oldp+480,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_is_alu[0]));
        bufp->chgBit(oldp+481,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_is_alu[1]));
        bufp->chgBit(oldp+482,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_is_mul[0]));
        bufp->chgBit(oldp+483,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_is_mul[1]));
        bufp->chgBit(oldp+484,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_is_lsu[0]));
        bufp->chgBit(oldp+485,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_is_lsu[1]));
        bufp->chgCData(oldp+486,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_alu[0]),2);
        bufp->chgCData(oldp+487,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_alu[1]),2);
        bufp->chgCData(oldp+488,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_alu[2]),2);
        bufp->chgCData(oldp+489,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_mul[0]),2);
        bufp->chgCData(oldp+490,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_mul[1]),2);
        bufp->chgCData(oldp+491,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_mul[2]),2);
        bufp->chgCData(oldp+492,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_lsu[0]),2);
        bufp->chgCData(oldp+493,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_lsu[1]),2);
        bufp->chgCData(oldp+494,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_lsu[2]),2);
        bufp->chgBit(oldp+495,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_ready_lsu[0]));
        bufp->chgBit(oldp+496,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_ready_lsu[1]));
        bufp->chgBit(oldp+497,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[0]));
        bufp->chgBit(oldp+498,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[1]));
        bufp->chgBit(oldp+499,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_valid[0]));
        bufp->chgBit(oldp+500,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_valid[1]));
        bufp->chgBit(oldp+501,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__mul_slot[0]));
        bufp->chgBit(oldp+502,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__mul_valid[0]));
        bufp->chgBit(oldp+503,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__lsu_slot[0]));
        bufp->chgBit(oldp+504,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__lsu_valid[0]));
        bufp->chgBit(oldp+505,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__can_dispatch[0]));
        bufp->chgBit(oldp+506,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__can_dispatch[1]));
        bufp->chgBit(oldp+507,(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet_done));
        bufp->chgWData(oldp+508,(vlSelfRef.core__DOT__execute__DOT__int_issue_instr[0U]),82);
        bufp->chgWData(oldp+511,(vlSelfRef.core__DOT__execute__DOT__int_issue_instr[1U]),82);
        bufp->chgWData(oldp+514,(vlSelfRef.core__DOT__execute__DOT__int_issue_instr[2U]),82);
        bufp->chgWData(oldp+517,(vlSelfRef.core__DOT__execute__DOT__lsu_issue_instr[0U]),114);
        bufp->chgQData(oldp+521,(vlSelfRef.core__DOT__execute__DOT__CDB_line[0U]),46);
        bufp->chgQData(oldp+523,(vlSelfRef.core__DOT__execute__DOT__CDB_line[1U]),46);
        bufp->chgQData(oldp+525,(vlSelfRef.core__DOT__execute__DOT__CDB_line[2U]),46);
        bufp->chgWData(oldp+527,(vlSelfRef.core__DOT__execute__DOT__agu_out[0U]),77);
        bufp->chgBit(oldp+530,(vlSelfRef.core__DOT__execute__DOT__mul_div_busy[0]));
        bufp->chgQData(oldp+531,(vlSelfRef.core__DOT__execute__DOT__int_fu_out[0U]),46);
        bufp->chgQData(oldp+533,(vlSelfRef.core__DOT__execute__DOT__int_fu_out[1U]),46);
        bufp->chgQData(oldp+535,(vlSelfRef.core__DOT__execute__DOT__int_fu_out[2U]),46);
        bufp->chgWData(oldp+537,(vlSelfRef.core__DOT__execute__DOT__next_agu_out[0U]),77);
        bufp->chgWData(oldp+540,(vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr),82);
        bufp->chgQData(oldp+543,((((QData)((IData)(
                                                   (0x000000ffU 
                                                    & (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                                                       >> 0x0000000aU)))) 
                                   << 0x00000026U) 
                                  | (((QData)((IData)(
                                                      (0x0000003fU 
                                                       & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U]))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(vlSelfRef.core__DOT__execute__DOT__genblk1__BRA__0__KET____DOT__ALU_i__DOT__alu_result))))),46);
        bufp->chgIData(oldp+545,(vlSelfRef.core__DOT__execute__DOT__genblk1__BRA__0__KET____DOT__ALU_i__DOT__alu_result),32);
        bufp->chgWData(oldp+546,(vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr),82);
        bufp->chgQData(oldp+549,((((QData)((IData)(
                                                   (0x000000ffU 
                                                    & (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                                                       >> 0x0000000aU)))) 
                                   << 0x00000026U) 
                                  | (((QData)((IData)(
                                                      (0x0000003fU 
                                                       & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U]))) 
                                      << 0x00000020U) 
                                     | (QData)((IData)(vlSelfRef.core__DOT__execute__DOT__genblk1__BRA__1__KET____DOT__ALU_i__DOT__alu_result))))),46);
        bufp->chgIData(oldp+551,(vlSelfRef.core__DOT__execute__DOT__genblk1__BRA__1__KET____DOT__ALU_i__DOT__alu_result),32);
        bufp->chgWData(oldp+552,(vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr),82);
        bufp->chgBit(oldp+555,((0U != (IData)(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__state))));
        bufp->chgQData(oldp+556,(vlSelfRef.core__DOT__execute__DOT____Vcellout__genblk2__BRA__0__KET____DOT__MUL_DIV_i__OUT_cdb),46);
        bufp->chgCData(oldp+558,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__state),3);
        bufp->chgWData(oldp+559,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r),82);
        bufp->chgIData(oldp+562,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__result),32);
        bufp->chgCData(oldp+563,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_valid),3);
        bufp->chgCData(oldp+564,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_sqN[0]),7);
        bufp->chgCData(oldp+565,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_sqN[1]),7);
        bufp->chgCData(oldp+566,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_sqN[2]),7);
        bufp->chgCData(oldp+567,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_tag[0]),6);
        bufp->chgCData(oldp+568,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_tag[1]),6);
        bufp->chgCData(oldp+569,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_tag[2]),6);
        bufp->chgCData(oldp+570,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_oper[0U]),4);
        bufp->chgCData(oldp+571,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_oper[1U]),4);
        bufp->chgCData(oldp+572,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_oper[2U]),4);
        bufp->chgIData(oldp+573,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_dividend),32);
        bufp->chgIData(oldp+574,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_divisor),32);
        bufp->chgQData(oldp+575,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_partial),64);
        bufp->chgCData(oldp+577,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_count),6);
        bufp->chgBit(oldp+578,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_quot_sign));
        bufp->chgBit(oldp+579,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_rem_sign));
        bufp->chgBit(oldp+580,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_by_zero));
        bufp->chgQData(oldp+581,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_op1_s),33);
        bufp->chgQData(oldp+583,((((QData)((IData)(
                                                   (1U 
                                                    & (vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[1U] 
                                                       >> 9U)))) 
                                   << 0x00000020U) 
                                  | (QData)((IData)(
                                                    ((vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[1U] 
                                                      << 0x00000016U) 
                                                     | (vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[0U] 
                                                        >> 0x0000000aU)))))),33);
        bufp->chgQData(oldp+585,((QData)((IData)(((vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[2U] 
                                                   << 0x00000016U) 
                                                  | (vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[1U] 
                                                     >> 0x0000000aU))))),33);
        bufp->chgQData(oldp+587,((QData)((IData)(((vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[1U] 
                                                   << 0x00000016U) 
                                                  | (vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[0U] 
                                                     >> 0x0000000aU))))),33);
        bufp->chgWData(oldp+589,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_result_ss),66);
        bufp->chgWData(oldp+592,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_result_uu),66);
        bufp->chgWData(oldp+595,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_result_su),66);
        bufp->chgIData(oldp+598,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__op1),32);
        bufp->chgIData(oldp+599,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__op2),32);
        bufp->chgBit(oldp+600,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__s1));
        bufp->chgBit(oldp+601,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__s2));
        bufp->chgIData(oldp+602,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk4__DOT__q),32);
        bufp->chgIData(oldp+603,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk4__DOT__r),32);
        bufp->chgQData(oldp+604,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk5__DOT__partial_high),33);
        bufp->chgQData(oldp+606,(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk5__DOT__sub_result),33);
        bufp->chgWData(oldp+608,(vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr),114);
        __Vtemp_1[1U] = (((IData)((((QData)((IData)(
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
                                                         >> 0x0000000aU)))))) 
                          >> 0x0000001bU) | ((IData)(
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
                                             << 5U));
        __Vtemp_2[0U] = (((IData)((((QData)((IData)(
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
                                                         >> 0x0000000aU)))))) 
                          << 5U) | ((((IData)(vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__is_store)
                                       ? 0U : 1U) << 3U) 
                                    | (((IData)(vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__data_size) 
                                        << 1U) | (IData)(vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__is_unsigned))));
        __Vtemp_2[1U] = __Vtemp_1[1U];
        __Vtemp_2[2U] = ((0x00001fe0U & (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U] 
                                         >> 5U)) | 
                         ((IData)(((((QData)((IData)(
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
        bufp->chgWData(oldp+612,(__Vtemp_2),77);
        bufp->chgBit(oldp+615,(vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__is_load));
        bufp->chgBit(oldp+616,(vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__is_store));
        bufp->chgCData(oldp+617,(vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__data_size),2);
        bufp->chgBit(oldp+618,(vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__is_unsigned));
        bufp->chgIData(oldp+619,((((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U] 
                                    << 0x00000016U) 
                                   | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                                      >> 0x0000000aU)) 
                                  + ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                                      << 0x00000016U) 
                                     | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U] 
                                        >> 0x0000000aU)))),32);
        bufp->chgIData(oldp+620,(vlSelfRef.core__DOT__fetch__DOT__IN_instr[0]),32);
        bufp->chgIData(oldp+621,(vlSelfRef.core__DOT__fetch__DOT__IN_instr[1]),32);
        bufp->chgBit(oldp+622,(vlSelfRef.core__DOT__fetch__DOT__q));
        bufp->chgWData(oldp+623,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[0U]),71);
        bufp->chgWData(oldp+626,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[1U]),71);
        bufp->chgWData(oldp+629,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[2U]),71);
        bufp->chgWData(oldp+632,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[3U]),71);
        bufp->chgWData(oldp+635,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[4U]),71);
        bufp->chgWData(oldp+638,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[5U]),71);
        bufp->chgWData(oldp+641,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[6U]),71);
        bufp->chgWData(oldp+644,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[7U]),71);
        bufp->chgWData(oldp+647,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[8U]),71);
        bufp->chgWData(oldp+650,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[9U]),71);
        bufp->chgWData(oldp+653,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[10U]),71);
        bufp->chgWData(oldp+656,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[11U]),71);
        bufp->chgWData(oldp+659,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[12U]),71);
        bufp->chgWData(oldp+662,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[13U]),71);
        bufp->chgWData(oldp+665,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[14U]),71);
        bufp->chgWData(oldp+668,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[15U]),71);
        bufp->chgCData(oldp+671,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__head),4);
        bufp->chgCData(oldp+672,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__tail),4);
        bufp->chgCData(oldp+673,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__count),5);
        bufp->chgCData(oldp+674,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__sqN_counter),7);
        bufp->chgBit(oldp+675,((0x0eU >= (IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__count))));
        bufp->chgCData(oldp+676,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__idx_tail),4);
        bufp->chgIData(oldp+677,(vlSelfRef.core__DOT__fetch__DOT__IA__DOT__IN_instr[0]),32);
        bufp->chgIData(oldp+678,(vlSelfRef.core__DOT__fetch__DOT__IA__DOT__IN_instr[1]),32);
        bufp->chgCData(oldp+679,(vlSelfRef.core__DOT__flush_controller__DOT__sqN[0]),7);
        bufp->chgCData(oldp+680,(vlSelfRef.core__DOT__flush_controller__DOT__sqN[1]),7);
        bufp->chgCData(oldp+681,(vlSelfRef.core__DOT__flush_controller__DOT__jump_type[0U]),2);
        bufp->chgCData(oldp+682,(vlSelfRef.core__DOT__flush_controller__DOT__jump_type[1U]),2);
        bufp->chgBit(oldp+683,(vlSelfRef.core__DOT__issue__DOT__tag_ready[0U][0U]));
        bufp->chgBit(oldp+684,(vlSelfRef.core__DOT__issue__DOT__tag_ready[0U][1U]));
        bufp->chgBit(oldp+685,(vlSelfRef.core__DOT__issue__DOT__tag_ready[1U][0U]));
        bufp->chgBit(oldp+686,(vlSelfRef.core__DOT__issue__DOT__tag_ready[1U][1U]));
        bufp->chgBit(oldp+687,(vlSelfRef.core__DOT__issue__DOT__tag_ready[2U][0U]));
        bufp->chgBit(oldp+688,(vlSelfRef.core__DOT__issue__DOT__tag_ready[2U][1U]));
        bufp->chgBit(oldp+689,(vlSelfRef.core__DOT__issue__DOT__tag_ready[3U][0U]));
        bufp->chgBit(oldp+690,(vlSelfRef.core__DOT__issue__DOT__tag_ready[3U][1U]));
        bufp->chgBit(oldp+691,(vlSelfRef.core__DOT__issue__DOT__IN_busy[0]));
        bufp->chgIData(oldp+692,(vlSelfRef.core__DOT__issue__DOT__CDB_result[0]),32);
        bufp->chgIData(oldp+693,(vlSelfRef.core__DOT__issue__DOT__CDB_result[1]),32);
        bufp->chgIData(oldp+694,(vlSelfRef.core__DOT__issue__DOT__CDB_result[2]),32);
        bufp->chgIData(oldp+695,(vlSelfRef.core__DOT__issue__DOT__CDB_result[3]),32);
        bufp->chgCData(oldp+696,(vlSelfRef.core__DOT__issue__DOT__CDB_tag[0]),6);
        bufp->chgCData(oldp+697,(vlSelfRef.core__DOT__issue__DOT__CDB_tag[1]),6);
        bufp->chgCData(oldp+698,(vlSelfRef.core__DOT__issue__DOT__CDB_tag[2]),6);
        bufp->chgCData(oldp+699,(vlSelfRef.core__DOT__issue__DOT__CDB_tag[3]),6);
        bufp->chgWData(oldp+700,(vlSelfRef.core__DOT__issue__DOT__OUT_instr[0U]),82);
        bufp->chgWData(oldp+703,(vlSelfRef.core__DOT__issue__DOT__OUT_instr[1U]),82);
        bufp->chgWData(oldp+706,(vlSelfRef.core__DOT__issue__DOT__OUT_instr[2U]),82);
        bufp->chgWData(oldp+709,(vlSelfRef.core__DOT__issue__DOT__OUT_lsu_instr[0U]),114);
        bufp->chgCData(oldp+713,(vlSelfRef.core__DOT__issue__DOT__OUT_jump_type[0U]),2);
        bufp->chgCData(oldp+714,(vlSelfRef.core__DOT__issue__DOT__OUT_jump_type[1U]),2);
        bufp->chgIData(oldp+715,(vlSelfRef.core__DOT__issue__DOT__pc[0]),32);
        bufp->chgIData(oldp+716,(vlSelfRef.core__DOT__issue__DOT__pc[1]),32);
        bufp->chgCData(oldp+717,(vlSelfRef.core__DOT__issue__DOT__instr_sqN[0]),7);
        bufp->chgCData(oldp+718,(vlSelfRef.core__DOT__issue__DOT__instr_sqN[1]),7);
        bufp->chgBit(oldp+719,(vlSelfRef.core__DOT__issue__DOT__instr_valid[0]));
        bufp->chgBit(oldp+720,(vlSelfRef.core__DOT__issue__DOT__instr_valid[1]));
        bufp->chgIData(oldp+721,(vlSelfRef.core__DOT__issue__DOT__alu_rs1_result[0]),32);
        bufp->chgIData(oldp+722,(vlSelfRef.core__DOT__issue__DOT__alu_rs1_result[1]),32);
        bufp->chgIData(oldp+723,(vlSelfRef.core__DOT__issue__DOT__alu_imm[0]),32);
        bufp->chgIData(oldp+724,(vlSelfRef.core__DOT__issue__DOT__alu_imm[1]),32);
        bufp->chgBit(oldp+725,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__tag_ready[0]));
        bufp->chgBit(oldp+726,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__tag_ready[1]));
        bufp->chgIData(oldp+727,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_result[0]),32);
        bufp->chgIData(oldp+728,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_result[1]),32);
        bufp->chgIData(oldp+729,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_result[2]),32);
        bufp->chgIData(oldp+730,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_result[3]),32);
        bufp->chgCData(oldp+731,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_tag[0]),6);
        bufp->chgCData(oldp+732,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_tag[1]),6);
        bufp->chgCData(oldp+733,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_tag[2]),6);
        bufp->chgCData(oldp+734,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_tag[3]),6);
        bufp->chgCData(oldp+735,(vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_jump_type),2);
        bufp->chgIData(oldp+736,(vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_pc),32);
        bufp->chgIData(oldp+737,(vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__rs1_result),32);
        bufp->chgIData(oldp+738,(vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__imm),32);
        bufp->chgBit(oldp+739,((7U == (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__tail))));
        bufp->chgWData(oldp+740,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[0U]),105);
        bufp->chgWData(oldp+744,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[1U]),105);
        bufp->chgWData(oldp+748,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[2U]),105);
        bufp->chgWData(oldp+752,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[3U]),105);
        bufp->chgWData(oldp+756,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[4U]),105);
        bufp->chgWData(oldp+760,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[5U]),105);
        bufp->chgWData(oldp+764,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[6U]),105);
        bufp->chgWData(oldp+768,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[7U]),105);
        bufp->chgCData(oldp+772,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__tail),4);
        bufp->chgBit(oldp+773,(((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__is_jump) 
                                | vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__tag_ready[0U])));
        bufp->chgBit(oldp+774,((1U & (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__is_jump) 
                                       | (vlSelfRef.core__DOT__alu_dispatch_instr[0U][0U] 
                                          >> 8U)) | vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__tag_ready[1U]))));
        bufp->chgWData(oldp+775,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U]),105);
        bufp->chgWData(oldp+779,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U]),105);
        bufp->chgWData(oldp+783,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U]),105);
        bufp->chgWData(oldp+787,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U]),105);
        bufp->chgWData(oldp+791,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U]),105);
        bufp->chgWData(oldp+795,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U]),105);
        bufp->chgWData(oldp+799,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U]),105);
        bufp->chgWData(oldp+803,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U]),105);
        bufp->chgCData(oldp+807,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail),4);
        bufp->chgBit(oldp+808,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__tag_ready[0]));
        bufp->chgBit(oldp+809,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__tag_ready[1]));
        bufp->chgIData(oldp+810,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_result[0]),32);
        bufp->chgIData(oldp+811,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_result[1]),32);
        bufp->chgIData(oldp+812,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_result[2]),32);
        bufp->chgIData(oldp+813,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_result[3]),32);
        bufp->chgCData(oldp+814,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_tag[0]),6);
        bufp->chgCData(oldp+815,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_tag[1]),6);
        bufp->chgCData(oldp+816,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_tag[2]),6);
        bufp->chgCData(oldp+817,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_tag[3]),6);
        bufp->chgCData(oldp+818,(vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_jump_type),2);
        bufp->chgIData(oldp+819,(vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_pc),32);
        bufp->chgIData(oldp+820,(vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__rs1_result),32);
        bufp->chgIData(oldp+821,(vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__imm),32);
        bufp->chgBit(oldp+822,((7U == (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__tail))));
        bufp->chgWData(oldp+823,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[0U]),105);
        bufp->chgWData(oldp+827,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[1U]),105);
        bufp->chgWData(oldp+831,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[2U]),105);
        bufp->chgWData(oldp+835,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[3U]),105);
        bufp->chgWData(oldp+839,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[4U]),105);
        bufp->chgWData(oldp+843,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[5U]),105);
        bufp->chgWData(oldp+847,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[6U]),105);
        bufp->chgWData(oldp+851,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[7U]),105);
        bufp->chgCData(oldp+855,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__tail),4);
        bufp->chgBit(oldp+856,(((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__is_jump) 
                                | vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__tag_ready[0U])));
        bufp->chgBit(oldp+857,((1U & (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__is_jump) 
                                       | (vlSelfRef.core__DOT__alu_dispatch_instr[1U][0U] 
                                          >> 8U)) | vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__tag_ready[1U]))));
        bufp->chgWData(oldp+858,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U]),105);
        bufp->chgWData(oldp+862,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U]),105);
        bufp->chgWData(oldp+866,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U]),105);
        bufp->chgWData(oldp+870,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U]),105);
        bufp->chgWData(oldp+874,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U]),105);
        bufp->chgWData(oldp+878,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U]),105);
        bufp->chgWData(oldp+882,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U]),105);
        bufp->chgWData(oldp+886,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U]),105);
        bufp->chgCData(oldp+890,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail),4);
        bufp->chgBit(oldp+891,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__tag_ready[0]));
        bufp->chgBit(oldp+892,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__tag_ready[1]));
        bufp->chgIData(oldp+893,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_result[0]),32);
        bufp->chgIData(oldp+894,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_result[1]),32);
        bufp->chgIData(oldp+895,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_result[2]),32);
        bufp->chgIData(oldp+896,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_result[3]),32);
        bufp->chgCData(oldp+897,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_tag[0]),6);
        bufp->chgCData(oldp+898,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_tag[1]),6);
        bufp->chgCData(oldp+899,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_tag[2]),6);
        bufp->chgCData(oldp+900,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_tag[3]),6);
        bufp->chgBit(oldp+901,((8U == (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__tail))));
        bufp->chgIData(oldp+902,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[0U]),32);
        bufp->chgIData(oldp+903,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[1U]),32);
        bufp->chgIData(oldp+904,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[2U]),32);
        bufp->chgIData(oldp+905,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[3U]),32);
        bufp->chgIData(oldp+906,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[4U]),32);
        bufp->chgIData(oldp+907,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[5U]),32);
        bufp->chgIData(oldp+908,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[6U]),32);
        bufp->chgIData(oldp+909,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[7U]),32);
        bufp->chgCData(oldp+910,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__tail),4);
        bufp->chgIData(oldp+911,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U]),32);
        bufp->chgIData(oldp+912,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U]),32);
        bufp->chgIData(oldp+913,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U]),32);
        bufp->chgIData(oldp+914,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U]),32);
        bufp->chgIData(oldp+915,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U]),32);
        bufp->chgIData(oldp+916,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U]),32);
        bufp->chgIData(oldp+917,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U]),32);
        bufp->chgIData(oldp+918,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U]),32);
        bufp->chgCData(oldp+919,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail),4);
        bufp->chgBit(oldp+920,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__tag_ready[0]));
        bufp->chgBit(oldp+921,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__tag_ready[1]));
        bufp->chgIData(oldp+922,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_result[0]),32);
        bufp->chgIData(oldp+923,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_result[1]),32);
        bufp->chgIData(oldp+924,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_result[2]),32);
        bufp->chgIData(oldp+925,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_result[3]),32);
        bufp->chgCData(oldp+926,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_tag[0]),6);
        bufp->chgCData(oldp+927,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_tag[1]),6);
        bufp->chgCData(oldp+928,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_tag[2]),6);
        bufp->chgCData(oldp+929,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_tag[3]),6);
        bufp->chgBit(oldp+930,((8U == (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__tail))));
        bufp->chgWData(oldp+931,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[0U]),65);
        bufp->chgWData(oldp+934,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[1U]),65);
        bufp->chgWData(oldp+937,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[2U]),65);
        bufp->chgWData(oldp+940,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[3U]),65);
        bufp->chgWData(oldp+943,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[4U]),65);
        bufp->chgWData(oldp+946,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[5U]),65);
        bufp->chgWData(oldp+949,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[6U]),65);
        bufp->chgWData(oldp+952,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[7U]),65);
        bufp->chgCData(oldp+955,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__tail),4);
        bufp->chgBit(oldp+956,(vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__tag_ready[0U]));
        bufp->chgBit(oldp+957,(vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__tag_ready[1U]));
        bufp->chgWData(oldp+958,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U]),65);
        bufp->chgWData(oldp+961,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U]),65);
        bufp->chgWData(oldp+964,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U]),65);
        bufp->chgWData(oldp+967,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U]),65);
        bufp->chgWData(oldp+970,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U]),65);
        bufp->chgWData(oldp+973,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U]),65);
        bufp->chgWData(oldp+976,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U]),65);
        bufp->chgWData(oldp+979,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U]),65);
        bufp->chgCData(oldp+982,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail),4);
        bufp->chgBit(oldp+983,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__IN_valid[0]));
        bufp->chgBit(oldp+984,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__IN_valid[1]));
        bufp->chgCData(oldp+985,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__jump_type[0U]),2);
        bufp->chgCData(oldp+986,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__jump_type[1U]),2);
        bufp->chgCData(oldp+987,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__instr_sqN[0]),7);
        bufp->chgCData(oldp+988,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__instr_sqN[1]),7);
        bufp->chgIData(oldp+989,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__pc[0]),32);
        bufp->chgIData(oldp+990,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__pc[1]),32);
        bufp->chgIData(oldp+991,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__alu_rs1_result[0]),32);
        bufp->chgIData(oldp+992,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__alu_rs1_result[1]),32);
        bufp->chgIData(oldp+993,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__imm[0]),32);
        bufp->chgIData(oldp+994,(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__imm[1]),32);
        bufp->chgWData(oldp+995,(vlSelfRef.core__DOT__agu_out[0U]),77);
        bufp->chgQData(oldp+998,(vlSelfRef.core__DOT____Vcellout__lsu__OUT_cdb),46);
        bufp->chgWData(oldp+1000,(vlSelfRef.core__DOT__lsu__DOT__stb_wb),74);
        bufp->chgQData(oldp+1003,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__addr_wb),43);
        bufp->chgWData(oldp+1005,(vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[0U]),67);
        bufp->chgWData(oldp+1008,(vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[1U]),67);
        bufp->chgBit(oldp+1011,(vlSelfRef.core__DOT__lsu__DOT__mem_stall[0]));
        bufp->chgBit(oldp+1012,(vlSelfRef.core__DOT__lsu__DOT__mem_stall[1]));
        bufp->chgQData(oldp+1013,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U]),43);
        bufp->chgQData(oldp+1015,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U]),43);
        bufp->chgQData(oldp+1017,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U]),43);
        bufp->chgQData(oldp+1019,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U]),43);
        bufp->chgQData(oldp+1021,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U]),43);
        bufp->chgQData(oldp+1023,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U]),43);
        bufp->chgQData(oldp+1025,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U]),43);
        bufp->chgQData(oldp+1027,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U]),43);
        bufp->chgQData(oldp+1029,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U]),43);
        bufp->chgQData(oldp+1031,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U]),43);
        bufp->chgQData(oldp+1033,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U]),43);
        bufp->chgQData(oldp+1035,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U]),43);
        bufp->chgQData(oldp+1037,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U]),43);
        bufp->chgQData(oldp+1039,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U]),43);
        bufp->chgQData(oldp+1041,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U]),43);
        bufp->chgQData(oldp+1043,(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U]),43);
        bufp->chgQData(oldp+1045,(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[0U]),43);
        bufp->chgQData(oldp+1047,(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[1U]),43);
        bufp->chgQData(oldp+1049,(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U]),40);
        bufp->chgQData(oldp+1051,(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U]),40);
        bufp->chgWData(oldp+1053,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req[0U]),67);
        bufp->chgWData(oldp+1056,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req[1U]),67);
        bufp->chgBit(oldp+1059,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_stall[0]));
        bufp->chgBit(oldp+1060,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_stall[1]));
        bufp->chgQData(oldp+1061,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_req[0U]),43);
        bufp->chgQData(oldp+1063,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_req[1U]),43);
        bufp->chgQData(oldp+1065,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_resp[0U]),40);
        bufp->chgQData(oldp+1067,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_resp[1U]),40);
        bufp->chgBit(oldp+1069,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_stall[0]));
        bufp->chgBit(oldp+1070,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_stall[1]));
        bufp->chgWData(oldp+1071,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[0U]),67);
        bufp->chgWData(oldp+1074,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[1U]),67);
        bufp->chgQData(oldp+1077,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held[0U]),43);
        bufp->chgQData(oldp+1079,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held[1U]),43);
        bufp->chgBit(oldp+1081,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_pending[0]));
        bufp->chgBit(oldp+1082,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_pending[1]));
        bufp->chgBit(oldp+1083,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_pending[0]));
        bufp->chgBit(oldp+1084,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_pending[1]));
        bufp->chgBit(oldp+1085,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_sync[0]));
        bufp->chgBit(oldp+1086,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_sync[1]));
        bufp->chgBit(oldp+1087,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_sync[0]));
        bufp->chgBit(oldp+1088,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_sync[1]));
        bufp->chgBit(oldp+1089,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_rd_ack__DOT__ff2));
        bufp->chgBit(oldp+1090,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_rd_ack__DOT__ff1));
        bufp->chgBit(oldp+1091,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_wr_ack__DOT__ff2));
        bufp->chgBit(oldp+1092,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_wr_ack__DOT__ff1));
        bufp->chgBit(oldp+1093,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_rd_ack__DOT__ff2));
        bufp->chgBit(oldp+1094,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_rd_ack__DOT__ff1));
        bufp->chgBit(oldp+1095,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_wr_ack__DOT__ff2));
        bufp->chgBit(oldp+1096,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_wr_ack__DOT__ff1));
        bufp->chgBit(oldp+1097,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_pending[0U]));
        bufp->chgBit(oldp+1098,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_pending[0U]));
        bufp->chgBit(oldp+1099,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_pending[1U]));
        bufp->chgBit(oldp+1100,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_pending[1U]));
        bufp->chgQData(oldp+1101,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[0U]),43);
        bufp->chgQData(oldp+1103,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[1U]),43);
        bufp->chgQData(oldp+1105,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[2U]),43);
        bufp->chgQData(oldp+1107,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[3U]),43);
        bufp->chgQData(oldp+1109,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[4U]),43);
        bufp->chgQData(oldp+1111,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[5U]),43);
        bufp->chgQData(oldp+1113,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[6U]),43);
        bufp->chgQData(oldp+1115,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[7U]),43);
        bufp->chgQData(oldp+1117,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[8U]),43);
        bufp->chgQData(oldp+1119,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[9U]),43);
        bufp->chgQData(oldp+1121,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[10U]),43);
        bufp->chgQData(oldp+1123,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[11U]),43);
        bufp->chgQData(oldp+1125,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[12U]),43);
        bufp->chgQData(oldp+1127,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[13U]),43);
        bufp->chgQData(oldp+1129,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[14U]),43);
        bufp->chgQData(oldp+1131,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[15U]),43);
        bufp->chgQData(oldp+1133,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__mem_resp[0U]),40);
        bufp->chgQData(oldp+1135,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__mem_resp[1U]),40);
        bufp->chgQData(oldp+1137,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__mem_req[0U]),43);
        bufp->chgQData(oldp+1139,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__mem_req[1U]),43);
        bufp->chgWData(oldp+1141,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U]),83);
        bufp->chgWData(oldp+1144,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U]),83);
        bufp->chgWData(oldp+1147,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U]),83);
        bufp->chgWData(oldp+1150,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U]),83);
        bufp->chgWData(oldp+1153,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U]),83);
        bufp->chgWData(oldp+1156,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U]),83);
        bufp->chgWData(oldp+1159,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U]),83);
        bufp->chgWData(oldp+1162,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U]),83);
        bufp->chgWData(oldp+1165,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U]),83);
        bufp->chgWData(oldp+1168,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U]),83);
        bufp->chgWData(oldp+1171,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U]),83);
        bufp->chgWData(oldp+1174,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U]),83);
        bufp->chgWData(oldp+1177,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U]),83);
        bufp->chgWData(oldp+1180,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U]),83);
        bufp->chgWData(oldp+1183,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U]),83);
        bufp->chgWData(oldp+1186,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U]),83);
        bufp->chgCData(oldp+1189,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx),4);
        bufp->chgCData(oldp+1190,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx),4);
        bufp->chgCData(oldp+1191,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0]),4);
        bufp->chgCData(oldp+1192,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1]),4);
        bufp->chgCData(oldp+1193,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx),4);
        bufp->chgCData(oldp+1194,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__count),4);
        bufp->chgCData(oldp+1195,(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall),4);
        bufp->chgWData(oldp+1196,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__mem_req[0U]),67);
        bufp->chgWData(oldp+1199,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__mem_req[1U]),67);
        bufp->chgBit(oldp+1202,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__mem_stall[0]));
        bufp->chgBit(oldp+1203,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__mem_stall[1]));
        bufp->chgQData(oldp+1204,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[0U]),43);
        bufp->chgQData(oldp+1206,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[1U]),43);
        bufp->chgQData(oldp+1208,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[2U]),43);
        bufp->chgQData(oldp+1210,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[3U]),43);
        bufp->chgQData(oldp+1212,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[4U]),43);
        bufp->chgQData(oldp+1214,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[5U]),43);
        bufp->chgQData(oldp+1216,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[6U]),43);
        bufp->chgQData(oldp+1218,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[7U]),43);
        bufp->chgQData(oldp+1220,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[8U]),43);
        bufp->chgQData(oldp+1222,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[9U]),43);
        bufp->chgQData(oldp+1224,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[10U]),43);
        bufp->chgQData(oldp+1226,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[11U]),43);
        bufp->chgQData(oldp+1228,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[12U]),43);
        bufp->chgQData(oldp+1230,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[13U]),43);
        bufp->chgQData(oldp+1232,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[14U]),43);
        bufp->chgQData(oldp+1234,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[15U]),43);
        bufp->chgWData(oldp+1236,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[0U]),76);
        bufp->chgWData(oldp+1239,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[1U]),76);
        bufp->chgWData(oldp+1242,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[2U]),76);
        bufp->chgWData(oldp+1245,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[3U]),76);
        bufp->chgWData(oldp+1248,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[4U]),76);
        bufp->chgWData(oldp+1251,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[5U]),76);
        bufp->chgWData(oldp+1254,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[6U]),76);
        bufp->chgWData(oldp+1257,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[7U]),76);
        bufp->chgWData(oldp+1260,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[8U]),76);
        bufp->chgWData(oldp+1263,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[9U]),76);
        bufp->chgWData(oldp+1266,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[10U]),76);
        bufp->chgWData(oldp+1269,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[11U]),76);
        bufp->chgWData(oldp+1272,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[12U]),76);
        bufp->chgWData(oldp+1275,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[13U]),76);
        bufp->chgWData(oldp+1278,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[14U]),76);
        bufp->chgWData(oldp+1281,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[15U]),76);
        bufp->chgCData(oldp+1284,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__tail_ptr),4);
        bufp->chgCData(oldp+1285,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__drain_ptr),4);
        bufp->chgCData(oldp+1286,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__count),5);
        bufp->chgCData(oldp+1287,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__unnamedblk7__DOT__drain_inc),5);
        bufp->chgIData(oldp+1288,(vlSelfRef.core__DOT__prefetch__DOT__OUT_instr[0]),32);
        bufp->chgIData(oldp+1289,(vlSelfRef.core__DOT__prefetch__DOT__OUT_instr[1]),32);
        bufp->chgIData(oldp+1290,((0xfffffff8U & vlSelfRef.core__DOT__prefetch__DOT__PC__DOT__pc_reg)),32);
        bufp->chgCData(oldp+1291,((0xf8U & vlSelfRef.core__DOT__prefetch__DOT__PC__DOT__pc_reg)),8);
        bufp->chgIData(oldp+1292,(vlSelfRef.core__DOT__prefetch__DOT__IMEM__DOT__data[0]),32);
        bufp->chgIData(oldp+1293,(vlSelfRef.core__DOT__prefetch__DOT__IMEM__DOT__data[1]),32);
        bufp->chgCData(oldp+1294,(vlSelfRef.core__DOT__prefetch__DOT__IMEM__DOT__block_idx),8);
        bufp->chgCData(oldp+1295,(vlSelfRef.core__DOT__prefetch__DOT__IMEM__DOT__base_word),8);
        bufp->chgCData(oldp+1296,(vlSelfRef.core__DOT__prefetch__DOT__IMEM__DOT__word_index),8);
        bufp->chgCData(oldp+1297,(vlSelfRef.core__DOT__register_file__DOT__rd_addr[0]),6);
        bufp->chgCData(oldp+1298,(vlSelfRef.core__DOT__register_file__DOT__rd_addr[1]),6);
        bufp->chgCData(oldp+1299,(vlSelfRef.core__DOT__register_file__DOT__rd_addr[2]),6);
        bufp->chgCData(oldp+1300,(vlSelfRef.core__DOT__register_file__DOT__rd_addr[3]),6);
        bufp->chgIData(oldp+1301,(vlSelfRef.core__DOT__register_file__DOT__rd_data[0]),32);
        bufp->chgIData(oldp+1302,(vlSelfRef.core__DOT__register_file__DOT__rd_data[1]),32);
        bufp->chgIData(oldp+1303,(vlSelfRef.core__DOT__register_file__DOT__rd_data[2]),32);
        bufp->chgIData(oldp+1304,(vlSelfRef.core__DOT__register_file__DOT__rd_data[3]),32);
        bufp->chgIData(oldp+1305,(vlSelfRef.core__DOT__register_file__DOT__i),32);
        bufp->chgWData(oldp+1306,(vlSelfRef.core__DOT__rename__DOT__IN_instr[0U]),102);
        bufp->chgWData(oldp+1310,(vlSelfRef.core__DOT__rename__DOT__IN_instr[1U]),102);
        bufp->chgCData(oldp+1314,(vlSelfRef.core__DOT__rename__DOT__CDB_tag[0]),6);
        bufp->chgCData(oldp+1315,(vlSelfRef.core__DOT__rename__DOT__CDB_tag[1]),6);
        bufp->chgCData(oldp+1316,(vlSelfRef.core__DOT__rename__DOT__CDB_tag[2]),6);
        bufp->chgCData(oldp+1317,(vlSelfRef.core__DOT__rename__DOT__CDB_tag[3]),6);
        bufp->chgWData(oldp+1318,(vlSelfRef.core__DOT__rename__DOT__OUT_instr[0U]),105);
        bufp->chgWData(oldp+1322,(vlSelfRef.core__DOT__rename__DOT__OUT_instr[1U]),105);
        bufp->chgBit(oldp+1326,(vlSelfRef.core__DOT__rename__DOT__reg_ready[0U][0U]));
        bufp->chgBit(oldp+1327,(vlSelfRef.core__DOT__rename__DOT__reg_ready[0U][1U]));
        bufp->chgBit(oldp+1328,(vlSelfRef.core__DOT__rename__DOT__reg_ready[1U][0U]));
        bufp->chgBit(oldp+1329,(vlSelfRef.core__DOT__rename__DOT__reg_ready[1U][1U]));
        bufp->chgBit(oldp+1330,(vlSelfRef.core__DOT__rename__DOT__reg_ready[2U][0U]));
        bufp->chgBit(oldp+1331,(vlSelfRef.core__DOT__rename__DOT__reg_ready[2U][1U]));
        bufp->chgBit(oldp+1332,(vlSelfRef.core__DOT__rename__DOT__reg_ready[3U][0U]));
        bufp->chgBit(oldp+1333,(vlSelfRef.core__DOT__rename__DOT__reg_ready[3U][1U]));
        bufp->chgBit(oldp+1334,(vlSelfRef.core__DOT__rename__DOT__chkpt[0]));
        bufp->chgBit(oldp+1335,(vlSelfRef.core__DOT__rename__DOT__chkpt[1]));
        bufp->chgCData(oldp+1336,(vlSelfRef.core__DOT__rename__DOT__chkpt_sqN[0]),7);
        bufp->chgCData(oldp+1337,(vlSelfRef.core__DOT__rename__DOT__chkpt_sqN[1]),7);
        bufp->chgCData(oldp+1338,(vlSelfRef.core__DOT__rename__DOT__OUT_rd[0]),5);
        bufp->chgCData(oldp+1339,(vlSelfRef.core__DOT__rename__DOT__OUT_rd[1]),5);
        bufp->chgSData(oldp+1340,(vlSelfRef.core__DOT__rename__DOT__rename_table[0U]),12);
        bufp->chgSData(oldp+1341,(vlSelfRef.core__DOT__rename__DOT__rename_table[1U]),12);
        bufp->chgSData(oldp+1342,(vlSelfRef.core__DOT__rename__DOT__rename_table[2U]),12);
        bufp->chgSData(oldp+1343,(vlSelfRef.core__DOT__rename__DOT__rename_table[3U]),12);
        bufp->chgSData(oldp+1344,(vlSelfRef.core__DOT__rename__DOT__rename_table[4U]),12);
        bufp->chgSData(oldp+1345,(vlSelfRef.core__DOT__rename__DOT__rename_table[5U]),12);
        bufp->chgSData(oldp+1346,(vlSelfRef.core__DOT__rename__DOT__rename_table[6U]),12);
        bufp->chgSData(oldp+1347,(vlSelfRef.core__DOT__rename__DOT__rename_table[7U]),12);
        bufp->chgSData(oldp+1348,(vlSelfRef.core__DOT__rename__DOT__rename_table[8U]),12);
        bufp->chgSData(oldp+1349,(vlSelfRef.core__DOT__rename__DOT__rename_table[9U]),12);
        bufp->chgSData(oldp+1350,(vlSelfRef.core__DOT__rename__DOT__rename_table[10U]),12);
        bufp->chgSData(oldp+1351,(vlSelfRef.core__DOT__rename__DOT__rename_table[11U]),12);
        bufp->chgSData(oldp+1352,(vlSelfRef.core__DOT__rename__DOT__rename_table[12U]),12);
        bufp->chgSData(oldp+1353,(vlSelfRef.core__DOT__rename__DOT__rename_table[13U]),12);
        bufp->chgSData(oldp+1354,(vlSelfRef.core__DOT__rename__DOT__rename_table[14U]),12);
        bufp->chgSData(oldp+1355,(vlSelfRef.core__DOT__rename__DOT__rename_table[15U]),12);
        bufp->chgSData(oldp+1356,(vlSelfRef.core__DOT__rename__DOT__rename_table[16U]),12);
        bufp->chgSData(oldp+1357,(vlSelfRef.core__DOT__rename__DOT__rename_table[17U]),12);
        bufp->chgSData(oldp+1358,(vlSelfRef.core__DOT__rename__DOT__rename_table[18U]),12);
        bufp->chgSData(oldp+1359,(vlSelfRef.core__DOT__rename__DOT__rename_table[19U]),12);
        bufp->chgSData(oldp+1360,(vlSelfRef.core__DOT__rename__DOT__rename_table[20U]),12);
        bufp->chgSData(oldp+1361,(vlSelfRef.core__DOT__rename__DOT__rename_table[21U]),12);
        bufp->chgSData(oldp+1362,(vlSelfRef.core__DOT__rename__DOT__rename_table[22U]),12);
        bufp->chgSData(oldp+1363,(vlSelfRef.core__DOT__rename__DOT__rename_table[23U]),12);
        bufp->chgSData(oldp+1364,(vlSelfRef.core__DOT__rename__DOT__rename_table[24U]),12);
        bufp->chgSData(oldp+1365,(vlSelfRef.core__DOT__rename__DOT__rename_table[25U]),12);
        bufp->chgSData(oldp+1366,(vlSelfRef.core__DOT__rename__DOT__rename_table[26U]),12);
        bufp->chgSData(oldp+1367,(vlSelfRef.core__DOT__rename__DOT__rename_table[27U]),12);
        bufp->chgSData(oldp+1368,(vlSelfRef.core__DOT__rename__DOT__rename_table[28U]),12);
        bufp->chgSData(oldp+1369,(vlSelfRef.core__DOT__rename__DOT__rename_table[29U]),12);
        bufp->chgSData(oldp+1370,(vlSelfRef.core__DOT__rename__DOT__rename_table[30U]),12);
        bufp->chgSData(oldp+1371,(vlSelfRef.core__DOT__rename__DOT__rename_table[31U]),12);
        bufp->chgQData(oldp+1372,(vlSelfRef.core__DOT__rename__DOT__ftb),64);
        bufp->chgCData(oldp+1374,(vlSelfRef.core__DOT__rename__DOT__req_valid),2);
        bufp->chgQData(oldp+1375,(vlSelfRef.core__DOT__rename__DOT__masked[0]),64);
        bufp->chgQData(oldp+1377,(vlSelfRef.core__DOT__rename__DOT__masked[1]),64);
        bufp->chgQData(oldp+1379,(vlSelfRef.core__DOT__rename__DOT__masked[2]),64);
        bufp->chgQData(oldp+1381,(vlSelfRef.core__DOT__rename__DOT__onehot[0]),64);
        bufp->chgQData(oldp+1383,(vlSelfRef.core__DOT__rename__DOT__onehot[1]),64);
        bufp->chgCData(oldp+1385,(vlSelfRef.core__DOT__rename__DOT__chosen[0]),6);
        bufp->chgCData(oldp+1386,(vlSelfRef.core__DOT__rename__DOT__chosen[1]),6);
        bufp->chgCData(oldp+1387,(vlSelfRef.core__DOT__rename__DOT__req_count[0]),2);
        bufp->chgCData(oldp+1388,(vlSelfRef.core__DOT__rename__DOT__req_count[1]),2);
        bufp->chgBit(oldp+1389,(vlSelfRef.core__DOT__rename__DOT__chkpt_need));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[4U]))) {
        bufp->chgIData(oldp+1390,(vlSelfRef.core__DOT__commit_packet[0U]),19);
        bufp->chgIData(oldp+1391,(vlSelfRef.core__DOT__commit_packet[1U]),19);
        bufp->chgCData(oldp+1392,(vlSelfRef.core__DOT__commit_sqN[0]),7);
        bufp->chgCData(oldp+1393,(vlSelfRef.core__DOT__commit_sqN[1]),7);
        bufp->chgIData(oldp+1394,(vlSelfRef.core__DOT__ROB__DOT__OUT_commit[0U]),19);
        bufp->chgIData(oldp+1395,(vlSelfRef.core__DOT__ROB__DOT__OUT_commit[1U]),19);
        bufp->chgCData(oldp+1396,(vlSelfRef.core__DOT__ROB__DOT__dataout_valid),2);
        bufp->chgCData(oldp+1397,(vlSelfRef.core__DOT__ROB__DOT__count),7);
        bufp->chgCData(oldp+1398,(vlSelfRef.core__DOT__ROB__DOT__head),6);
        bufp->chgCData(oldp+1399,(vlSelfRef.core__DOT__ROB__DOT__tail),6);
        bufp->chgCData(oldp+1400,(vlSelfRef.core__DOT__ROB__DOT__alloc_index[0]),6);
        bufp->chgCData(oldp+1401,(vlSelfRef.core__DOT__ROB__DOT__alloc_index[1]),6);
        bufp->chgBit(oldp+1402,((0x40U == (IData)(vlSelfRef.core__DOT__ROB__DOT__count))));
        bufp->chgCData(oldp+1403,(vlSelfRef.core__DOT__dispatch__DOT__commit_sqN[0]),7);
        bufp->chgCData(oldp+1404,(vlSelfRef.core__DOT__dispatch__DOT__commit_sqN[1]),7);
        bufp->chgCData(oldp+1405,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__commit_sqN[0]),7);
        bufp->chgCData(oldp+1406,(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__commit_sqN[1]),7);
        bufp->chgCData(oldp+1407,(vlSelfRef.core__DOT__lsu__DOT__commit_sqN[0]),7);
        bufp->chgCData(oldp+1408,(vlSelfRef.core__DOT__lsu__DOT__commit_sqN[1]),7);
        bufp->chgCData(oldp+1409,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__commit_sqN[0]),7);
        bufp->chgCData(oldp+1410,(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__commit_sqN[1]),7);
        bufp->chgIData(oldp+1411,(vlSelfRef.core__DOT__rename__DOT__commit_packet[0U]),19);
        bufp->chgIData(oldp+1412,(vlSelfRef.core__DOT__rename__DOT__commit_packet[1U]),19);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+1413,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_mem[0]));
        bufp->chgBit(oldp+1414,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_mem[1]));
        bufp->chgBit(oldp+1415,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_mem[0]));
        bufp->chgBit(oldp+1416,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_mem[1]));
        bufp->chgIData(oldp+1417,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_data_mem[0]),32);
        bufp->chgIData(oldp+1418,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_data_mem[1]),32);
        bufp->chgBit(oldp+1419,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_mem[0U]));
        bufp->chgBit(oldp+1420,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_mem[0U]));
        bufp->chgBit(oldp+1421,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_mem[1U]));
        bufp->chgBit(oldp+1422,(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_mem[1U]));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+1423,(vlSelfRef.core__DOT__CDB_valid[0]));
        bufp->chgBit(oldp+1424,(vlSelfRef.core__DOT__CDB_valid[1]));
        bufp->chgBit(oldp+1425,(vlSelfRef.core__DOT__CDB_valid[2]));
        bufp->chgBit(oldp+1426,(vlSelfRef.core__DOT__CDB_valid[3]));
        bufp->chgCData(oldp+1427,(vlSelfRef.core__DOT__CDB_sqN[0]),7);
        bufp->chgCData(oldp+1428,(vlSelfRef.core__DOT__CDB_sqN[1]),7);
        bufp->chgCData(oldp+1429,(vlSelfRef.core__DOT__CDB_sqN[2]),7);
        bufp->chgCData(oldp+1430,(vlSelfRef.core__DOT__CDB_sqN[3]),7);
        bufp->chgIData(oldp+1431,(vlSelfRef.core__DOT__rename_rob[0U]),19);
        bufp->chgIData(oldp+1432,(vlSelfRef.core__DOT__rename_rob[1U]),19);
        bufp->chgCData(oldp+1433,(vlSelfRef.core__DOT__RF_raddr[0U][0U]),6);
        bufp->chgCData(oldp+1434,(vlSelfRef.core__DOT__RF_raddr[0U][1U]),6);
        bufp->chgCData(oldp+1435,(vlSelfRef.core__DOT__RF_raddr[1U][0U]),6);
        bufp->chgCData(oldp+1436,(vlSelfRef.core__DOT__RF_raddr[1U][1U]),6);
        bufp->chgCData(oldp+1437,(vlSelfRef.core__DOT__RF_raddr[2U][0U]),6);
        bufp->chgCData(oldp+1438,(vlSelfRef.core__DOT__RF_raddr[2U][1U]),6);
        bufp->chgCData(oldp+1439,(vlSelfRef.core__DOT__RF_raddr[3U][0U]),6);
        bufp->chgCData(oldp+1440,(vlSelfRef.core__DOT__RF_raddr[3U][1U]),6);
        bufp->chgIData(oldp+1441,(vlSelfRef.core__DOT__RF_read_data[0U][0U]),32);
        bufp->chgIData(oldp+1442,(vlSelfRef.core__DOT__RF_read_data[0U][1U]),32);
        bufp->chgIData(oldp+1443,(vlSelfRef.core__DOT__RF_read_data[1U][0U]),32);
        bufp->chgIData(oldp+1444,(vlSelfRef.core__DOT__RF_read_data[1U][1U]),32);
        bufp->chgIData(oldp+1445,(vlSelfRef.core__DOT__RF_read_data[2U][0U]),32);
        bufp->chgIData(oldp+1446,(vlSelfRef.core__DOT__RF_read_data[2U][1U]),32);
        bufp->chgIData(oldp+1447,(vlSelfRef.core__DOT__RF_read_data[3U][0U]),32);
        bufp->chgIData(oldp+1448,(vlSelfRef.core__DOT__RF_read_data[3U][1U]),32);
        bufp->chgIData(oldp+1449,(vlSelfRef.core__DOT__rs1_data[0]),32);
        bufp->chgIData(oldp+1450,(vlSelfRef.core__DOT__rs1_data[1]),32);
        bufp->chgIData(oldp+1451,(vlSelfRef.core__DOT__rs1_data[2]),32);
        bufp->chgIData(oldp+1452,(vlSelfRef.core__DOT__rs1_data[3]),32);
        bufp->chgIData(oldp+1453,(vlSelfRef.core__DOT__rs2_data[0]),32);
        bufp->chgIData(oldp+1454,(vlSelfRef.core__DOT__rs2_data[1]),32);
        bufp->chgIData(oldp+1455,(vlSelfRef.core__DOT__rs2_data[2]),32);
        bufp->chgIData(oldp+1456,(vlSelfRef.core__DOT__rs2_data[3]),32);
        bufp->chgCData(oldp+1457,(vlSelfRef.core__DOT__rs1_addr[0]),6);
        bufp->chgCData(oldp+1458,(vlSelfRef.core__DOT__rs1_addr[1]),6);
        bufp->chgCData(oldp+1459,(vlSelfRef.core__DOT__rs1_addr[2]),6);
        bufp->chgCData(oldp+1460,(vlSelfRef.core__DOT__rs1_addr[3]),6);
        bufp->chgCData(oldp+1461,(vlSelfRef.core__DOT__rs2_addr[0]),6);
        bufp->chgCData(oldp+1462,(vlSelfRef.core__DOT__rs2_addr[1]),6);
        bufp->chgCData(oldp+1463,(vlSelfRef.core__DOT__rs2_addr[2]),6);
        bufp->chgCData(oldp+1464,(vlSelfRef.core__DOT__rs2_addr[3]),6);
        bufp->chgIData(oldp+1465,(vlSelfRef.core__DOT__ROB__DOT__rename_rob[0U]),19);
        bufp->chgIData(oldp+1466,(vlSelfRef.core__DOT__ROB__DOT__rename_rob[1U]),19);
        bufp->chgBit(oldp+1467,(vlSelfRef.core__DOT__ROB__DOT__CDB_valid[0]));
        bufp->chgBit(oldp+1468,(vlSelfRef.core__DOT__ROB__DOT__CDB_valid[1]));
        bufp->chgBit(oldp+1469,(vlSelfRef.core__DOT__ROB__DOT__CDB_valid[2]));
        bufp->chgBit(oldp+1470,(vlSelfRef.core__DOT__ROB__DOT__CDB_valid[3]));
        bufp->chgCData(oldp+1471,(vlSelfRef.core__DOT__ROB__DOT__CDB_sqN[0]),7);
        bufp->chgCData(oldp+1472,(vlSelfRef.core__DOT__ROB__DOT__CDB_sqN[1]),7);
        bufp->chgCData(oldp+1473,(vlSelfRef.core__DOT__ROB__DOT__CDB_sqN[2]),7);
        bufp->chgCData(oldp+1474,(vlSelfRef.core__DOT__ROB__DOT__CDB_sqN[3]),7);
        bufp->chgIData(oldp+1475,(vlSelfRef.core__DOT__issue__DOT__RF_data[0U][0U]),32);
        bufp->chgIData(oldp+1476,(vlSelfRef.core__DOT__issue__DOT__RF_data[0U][1U]),32);
        bufp->chgIData(oldp+1477,(vlSelfRef.core__DOT__issue__DOT__RF_data[1U][0U]),32);
        bufp->chgIData(oldp+1478,(vlSelfRef.core__DOT__issue__DOT__RF_data[1U][1U]),32);
        bufp->chgIData(oldp+1479,(vlSelfRef.core__DOT__issue__DOT__RF_data[2U][0U]),32);
        bufp->chgIData(oldp+1480,(vlSelfRef.core__DOT__issue__DOT__RF_data[2U][1U]),32);
        bufp->chgIData(oldp+1481,(vlSelfRef.core__DOT__issue__DOT__RF_data[3U][0U]),32);
        bufp->chgIData(oldp+1482,(vlSelfRef.core__DOT__issue__DOT__RF_data[3U][1U]),32);
        bufp->chgBit(oldp+1483,(vlSelfRef.core__DOT__issue__DOT__CDB_valid[0]));
        bufp->chgBit(oldp+1484,(vlSelfRef.core__DOT__issue__DOT__CDB_valid[1]));
        bufp->chgBit(oldp+1485,(vlSelfRef.core__DOT__issue__DOT__CDB_valid[2]));
        bufp->chgBit(oldp+1486,(vlSelfRef.core__DOT__issue__DOT__CDB_valid[3]));
        bufp->chgCData(oldp+1487,(vlSelfRef.core__DOT__issue__DOT__read_tag[0U][0U]),6);
        bufp->chgCData(oldp+1488,(vlSelfRef.core__DOT__issue__DOT__read_tag[0U][1U]),6);
        bufp->chgCData(oldp+1489,(vlSelfRef.core__DOT__issue__DOT__read_tag[1U][0U]),6);
        bufp->chgCData(oldp+1490,(vlSelfRef.core__DOT__issue__DOT__read_tag[1U][1U]),6);
        bufp->chgCData(oldp+1491,(vlSelfRef.core__DOT__issue__DOT__read_tag[2U][0U]),6);
        bufp->chgCData(oldp+1492,(vlSelfRef.core__DOT__issue__DOT__read_tag[2U][1U]),6);
        bufp->chgCData(oldp+1493,(vlSelfRef.core__DOT__issue__DOT__read_tag[3U][0U]),6);
        bufp->chgCData(oldp+1494,(vlSelfRef.core__DOT__issue__DOT__read_tag[3U][1U]),6);
        bufp->chgIData(oldp+1495,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__RF_data[0]),32);
        bufp->chgIData(oldp+1496,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__RF_data[1]),32);
        bufp->chgBit(oldp+1497,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_valid[0]));
        bufp->chgBit(oldp+1498,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_valid[1]));
        bufp->chgBit(oldp+1499,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_valid[2]));
        bufp->chgBit(oldp+1500,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_valid[3]));
        bufp->chgCData(oldp+1501,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__read_tag[0]),6);
        bufp->chgCData(oldp+1502,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__read_tag[1]),6);
        bufp->chgCData(oldp+1503,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask),8);
        bufp->chgCData(oldp+1504,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx),3);
        bufp->chgBit(oldp+1505,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_found));
        bufp->chgBit(oldp+1506,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1));
        bufp->chgBit(oldp+1507,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2));
        bufp->chgIData(oldp+1508,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__RF_data[0]),32);
        bufp->chgIData(oldp+1509,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__RF_data[1]),32);
        bufp->chgBit(oldp+1510,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_valid[0]));
        bufp->chgBit(oldp+1511,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_valid[1]));
        bufp->chgBit(oldp+1512,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_valid[2]));
        bufp->chgBit(oldp+1513,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_valid[3]));
        bufp->chgCData(oldp+1514,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__read_tag[0]),6);
        bufp->chgCData(oldp+1515,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__read_tag[1]),6);
        bufp->chgCData(oldp+1516,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask),8);
        bufp->chgCData(oldp+1517,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx),3);
        bufp->chgBit(oldp+1518,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_found));
        bufp->chgBit(oldp+1519,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1));
        bufp->chgBit(oldp+1520,(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2));
        bufp->chgIData(oldp+1521,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__RF_data[0]),32);
        bufp->chgIData(oldp+1522,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__RF_data[1]),32);
        bufp->chgBit(oldp+1523,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_valid[0]));
        bufp->chgBit(oldp+1524,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_valid[1]));
        bufp->chgBit(oldp+1525,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_valid[2]));
        bufp->chgBit(oldp+1526,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_valid[3]));
        bufp->chgCData(oldp+1527,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__read_tag[0]),6);
        bufp->chgCData(oldp+1528,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__read_tag[1]),6);
        bufp->chgCData(oldp+1529,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask),8);
        bufp->chgCData(oldp+1530,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx),3);
        bufp->chgBit(oldp+1531,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_found));
        bufp->chgBit(oldp+1532,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1));
        bufp->chgBit(oldp+1533,(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2));
        bufp->chgIData(oldp+1534,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__RF_data[0]),32);
        bufp->chgIData(oldp+1535,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__RF_data[1]),32);
        bufp->chgBit(oldp+1536,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_valid[0]));
        bufp->chgBit(oldp+1537,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_valid[1]));
        bufp->chgBit(oldp+1538,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_valid[2]));
        bufp->chgBit(oldp+1539,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_valid[3]));
        bufp->chgCData(oldp+1540,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__read_tag[0]),6);
        bufp->chgCData(oldp+1541,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__read_tag[1]),6);
        bufp->chgCData(oldp+1542,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask),8);
        bufp->chgCData(oldp+1543,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx),3);
        bufp->chgBit(oldp+1544,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_found));
        bufp->chgBit(oldp+1545,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1));
        bufp->chgBit(oldp+1546,(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2));
        bufp->chgCData(oldp+1547,(vlSelfRef.core__DOT__register_file__DOT__rs1_addr[0]),6);
        bufp->chgCData(oldp+1548,(vlSelfRef.core__DOT__register_file__DOT__rs1_addr[1]),6);
        bufp->chgCData(oldp+1549,(vlSelfRef.core__DOT__register_file__DOT__rs1_addr[2]),6);
        bufp->chgCData(oldp+1550,(vlSelfRef.core__DOT__register_file__DOT__rs1_addr[3]),6);
        bufp->chgCData(oldp+1551,(vlSelfRef.core__DOT__register_file__DOT__rs2_addr[0]),6);
        bufp->chgCData(oldp+1552,(vlSelfRef.core__DOT__register_file__DOT__rs2_addr[1]),6);
        bufp->chgCData(oldp+1553,(vlSelfRef.core__DOT__register_file__DOT__rs2_addr[2]),6);
        bufp->chgCData(oldp+1554,(vlSelfRef.core__DOT__register_file__DOT__rs2_addr[3]),6);
        bufp->chgBit(oldp+1555,(vlSelfRef.core__DOT__register_file__DOT__rd_write_en[0]));
        bufp->chgBit(oldp+1556,(vlSelfRef.core__DOT__register_file__DOT__rd_write_en[1]));
        bufp->chgBit(oldp+1557,(vlSelfRef.core__DOT__register_file__DOT__rd_write_en[2]));
        bufp->chgBit(oldp+1558,(vlSelfRef.core__DOT__register_file__DOT__rd_write_en[3]));
        bufp->chgIData(oldp+1559,(vlSelfRef.core__DOT__register_file__DOT__rs1_data[0]),32);
        bufp->chgIData(oldp+1560,(vlSelfRef.core__DOT__register_file__DOT__rs1_data[1]),32);
        bufp->chgIData(oldp+1561,(vlSelfRef.core__DOT__register_file__DOT__rs1_data[2]),32);
        bufp->chgIData(oldp+1562,(vlSelfRef.core__DOT__register_file__DOT__rs1_data[3]),32);
        bufp->chgIData(oldp+1563,(vlSelfRef.core__DOT__register_file__DOT__rs2_data[0]),32);
        bufp->chgIData(oldp+1564,(vlSelfRef.core__DOT__register_file__DOT__rs2_data[1]),32);
        bufp->chgIData(oldp+1565,(vlSelfRef.core__DOT__register_file__DOT__rs2_data[2]),32);
        bufp->chgIData(oldp+1566,(vlSelfRef.core__DOT__register_file__DOT__rs2_data[3]),32);
        bufp->chgBit(oldp+1567,(vlSelfRef.core__DOT__rename__DOT__CDB_valid[0]));
        bufp->chgBit(oldp+1568,(vlSelfRef.core__DOT__rename__DOT__CDB_valid[1]));
        bufp->chgBit(oldp+1569,(vlSelfRef.core__DOT__rename__DOT__CDB_valid[2]));
        bufp->chgBit(oldp+1570,(vlSelfRef.core__DOT__rename__DOT__CDB_valid[3]));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[7U]))) {
        bufp->chgBit(oldp+1571,(vlSelfRef.core__DOT__rename__DOT__OUT_busy));
        bufp->chgWData(oldp+1572,(vlSelfRef.core__DOT__fetch_instr[0U]),72);
        bufp->chgWData(oldp+1575,(vlSelfRef.core__DOT__fetch_instr[1U]),72);
        bufp->chgBit(oldp+1578,(vlSelfRef.core__DOT__ROB_busy));
        bufp->chgCData(oldp+1579,(vlSelfRef.core__DOT__ROB__DOT__commit),2);
        bufp->chgCData(oldp+1580,(vlSelfRef.core__DOT__ROB__DOT__write_en),2);
        bufp->chgCData(oldp+1581,(vlSelfRef.core__DOT__ROB__DOT__next_count),7);
        bufp->chgCData(oldp+1582,(vlSelfRef.core__DOT__ROB__DOT__commit_index[0]),6);
        bufp->chgCData(oldp+1583,(vlSelfRef.core__DOT__ROB__DOT__commit_index[1]),6);
        bufp->chgBit(oldp+1584,(vlSelfRef.core__DOT__ROB__DOT__empty));
        bufp->chgCData(oldp+1585,(vlSelfRef.core__DOT__ROB__DOT__unnamedblk1__DOT__next_head),6);
        bufp->chgCData(oldp+1586,(vlSelfRef.core__DOT__ROB__DOT__unnamedblk1__DOT__next_tail),6);
        bufp->chgWData(oldp+1587,(vlSelfRef.core__DOT__decode__DOT__IN_instr[0U]),72);
        bufp->chgWData(oldp+1590,(vlSelfRef.core__DOT__decode__DOT__IN_instr[1U]),72);
        bufp->chgWData(oldp+1593,(vlSelfRef.core__DOT__decode__DOT__decoder_out[0U]),102);
        bufp->chgWData(oldp+1597,(vlSelfRef.core__DOT__decode__DOT__decoder_out[1U]),102);
        bufp->chgWData(oldp+1601,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IN_instr[0U]),72);
        bufp->chgWData(oldp+1604,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IN_instr[1U]),72);
        bufp->chgWData(oldp+1607,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__OUT_instr[0U]),102);
        bufp->chgWData(oldp+1611,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__OUT_instr[1U]),102);
        bufp->chgCData(oldp+1615,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[0]),7);
        bufp->chgCData(oldp+1616,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[1]),7);
        bufp->chgIData(oldp+1617,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0]),32);
        bufp->chgIData(oldp+1618,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1]),32);
        bufp->chgWData(oldp+1619,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__IN_instr[0U]),72);
        bufp->chgWData(oldp+1622,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__IN_instr[1U]),72);
        bufp->chgIData(oldp+1625,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__immediate[0]),32);
        bufp->chgIData(oldp+1626,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__immediate[1]),32);
        bufp->chgCData(oldp+1627,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__funct3),3);
        bufp->chgCData(oldp+1628,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode),7);
        bufp->chgSData(oldp+1629,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm12),12);
        bufp->chgSData(oldp+1630,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm13),13);
        bufp->chgIData(oldp+1631,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm21),21);
        bufp->chgIData(oldp+1632,(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw),32);
        bufp->chgWData(oldp+1633,(vlSelfRef.core__DOT__fetch__DOT__OUT_instr[0U]),72);
        bufp->chgWData(oldp+1636,(vlSelfRef.core__DOT__fetch__DOT__OUT_instr[1U]),72);
        bufp->chgWData(oldp+1639,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__OUT_instr[0U]),72);
        bufp->chgWData(oldp+1642,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__OUT_instr[1U]),72);
        bufp->chgCData(oldp+1645,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__out_count),2);
        bufp->chgBit(oldp+1646,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__can_read));
        bufp->chgCData(oldp+1647,(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__idx_head),4);
        bufp->chgCData(oldp+1648,(vlSelfRef.core__DOT__rename__DOT__free_CommTag[0]),6);
        bufp->chgCData(oldp+1649,(vlSelfRef.core__DOT__rename__DOT__free_CommTag[1]),6);
    }
    bufp->chgBit(oldp+1650,(vlSelfRef.clk));
    bufp->chgBit(oldp+1651,(vlSelfRef.clk_m));
    bufp->chgBit(oldp+1652,(vlSelfRef.rst));
    bufp->chgBit(oldp+1653,(vlSelfRef.rst_m));
    bufp->chgIData(oldp+1654,(((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel1)
                                ? ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                    [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][3U] 
                                    << 0x0000001fU) 
                                   | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                      [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][2U] 
                                      >> 1U)) : vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected)),32);
    bufp->chgIData(oldp+1655,(((2U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel2))
                                ? 4U : ((1U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel2))
                                         ? ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                             [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                                             << 0x00000015U) 
                                            | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                               [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                               >> 0x0000000bU))
                                         : vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected))),32);
    bufp->chgIData(oldp+1656,(((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel1)
                                ? ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                    [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][3U] 
                                    << 0x0000001fU) 
                                   | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                      [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][2U] 
                                      >> 1U)) : vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected)),32);
    bufp->chgIData(oldp+1657,(((2U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel2))
                                ? 4U : ((1U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel2))
                                         ? ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                             [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                                             << 0x00000015U) 
                                            | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                               [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                               >> 0x0000000bU))
                                         : vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected))),32);
}

void Vcore___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root__trace_cleanup\n"); );
    // Body
    Vcore___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcore___024root*>(voidSelf);
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
}
