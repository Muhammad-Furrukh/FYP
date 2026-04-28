// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"
#include "Vcore___024root.h"

VL_INLINE_OPT void Vcore___024root___nba_sequent__TOP__7(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___nba_sequent__TOP__7\n"); );
    // Body
    vlSelf->core__DOT__reg_ready[0U][0U] = (1U & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                  [
                                                  vlSelf->core__DOT__read_ready
                                                  [0U]
                                                  [0U]] 
                                                  >> 1U));
    vlSelf->core__DOT__reg_ready[0U][1U] = (1U & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                  [
                                                  vlSelf->core__DOT__read_ready
                                                  [0U]
                                                  [1U]] 
                                                  >> 1U));
    vlSelf->core__DOT__reg_ready[1U][0U] = (1U & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                  [
                                                  vlSelf->core__DOT__read_ready
                                                  [1U]
                                                  [0U]] 
                                                  >> 1U));
    vlSelf->core__DOT__reg_ready[1U][1U] = (1U & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                  [
                                                  vlSelf->core__DOT__read_ready
                                                  [1U]
                                                  [1U]] 
                                                  >> 1U));
    vlSelf->core__DOT__reg_ready[2U][0U] = (1U & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                  [
                                                  vlSelf->core__DOT__read_ready
                                                  [2U]
                                                  [0U]] 
                                                  >> 1U));
    vlSelf->core__DOT__reg_ready[2U][1U] = (1U & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                  [
                                                  vlSelf->core__DOT__read_ready
                                                  [2U]
                                                  [1U]] 
                                                  >> 1U));
    vlSelf->core__DOT__reg_ready[3U][0U] = (1U & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                  [
                                                  vlSelf->core__DOT__read_ready
                                                  [3U]
                                                  [0U]] 
                                                  >> 1U));
    vlSelf->core__DOT__reg_ready[3U][1U] = (1U & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                  [
                                                  vlSelf->core__DOT__read_ready
                                                  [3U]
                                                  [1U]] 
                                                  >> 1U));
    vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__state 
        = vlSelf->__Vdly__core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__state;
    vlSelf->core__DOT__CDB_tag[0U] = (0x3fU & (IData)(
                                                      (vlSelf->core__DOT__CDB
                                                       [0U] 
                                                       >> 0x20U)));
    vlSelf->core__DOT__CDB_tag[1U] = (0x3fU & (IData)(
                                                      (vlSelf->core__DOT__CDB
                                                       [1U] 
                                                       >> 0x20U)));
    vlSelf->core__DOT__CDB_tag[2U] = (0x3fU & (IData)(
                                                      (vlSelf->core__DOT__CDB
                                                       [2U] 
                                                       >> 0x20U)));
    vlSelf->core__DOT__CDB_tag[3U] = (0x3fU & (IData)(
                                                      (vlSelf->core__DOT__CDB
                                                       [3U] 
                                                       >> 0x20U)));
    vlSelf->core__DOT__CDB_valid[0U] = (1U & (IData)(
                                                     (vlSelf->core__DOT__CDB
                                                      [0U] 
                                                      >> 0x2dU)));
    vlSelf->core__DOT__CDB_valid[1U] = (1U & (IData)(
                                                     (vlSelf->core__DOT__CDB
                                                      [1U] 
                                                      >> 0x2dU)));
    vlSelf->core__DOT__CDB_valid[2U] = (1U & (IData)(
                                                     (vlSelf->core__DOT__CDB
                                                      [2U] 
                                                      >> 0x2dU)));
    vlSelf->core__DOT__CDB_valid[3U] = (1U & (IData)(
                                                     (vlSelf->core__DOT__CDB
                                                      [3U] 
                                                      >> 0x2dU)));
    vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__tag_ready[0U] 
        = vlSelf->core__DOT__reg_ready[0U][0U];
    vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__tag_ready[1U] 
        = vlSelf->core__DOT__reg_ready[0U][1U];
    vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__tag_ready[0U] 
        = vlSelf->core__DOT__reg_ready[1U][0U];
    vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__tag_ready[1U] 
        = vlSelf->core__DOT__reg_ready[1U][1U];
    vlSelf->core__DOT__issue__DOT____Vcellinp__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__tag_ready[0U] 
        = vlSelf->core__DOT__reg_ready[3U][0U];
    vlSelf->core__DOT__issue__DOT____Vcellinp__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__tag_ready[1U] 
        = vlSelf->core__DOT__reg_ready[3U][1U];
    vlSelf->core__DOT__issue__DOT____Vcellinp__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__tag_ready[0U] 
        = vlSelf->core__DOT__reg_ready[2U][0U];
    vlSelf->core__DOT__issue__DOT____Vcellinp__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__tag_ready[1U] 
        = vlSelf->core__DOT__reg_ready[2U][1U];
    vlSelf->core__DOT__mul_div_fu_busy[0U] = (0U != (IData)(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__state));
}

extern const VlUnpacked<CData/*2:0*/, 256> Vcore__ConstPool__TABLE_h571c794b_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vcore__ConstPool__TABLE_hf049cce3_0;
extern const VlUnpacked<IData/*31:0*/, 256> Vcore__ConstPool__TABLE_h159da5ed_0;

VL_INLINE_OPT void Vcore___024root___nba_comb__TOP__9(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___nba_comb__TOP__9\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*7:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask = 0U;
    if ((vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
         [0U] >> 0x1fU)) {
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                     [0U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
               [0U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [0U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [0U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [0U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [0U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [0U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [0U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [0U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [0U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask 
            = ((0xfeU & (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask)) 
               | ((IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                  & (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)));
    }
    if ((vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
         [1U] >> 0x1fU)) {
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                     [1U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
               [1U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [1U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [1U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [1U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [1U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [1U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [1U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [1U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [1U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask 
            = ((0xfdU & (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 1U));
    }
    if ((vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
         [2U] >> 0x1fU)) {
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                     [2U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
               [2U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [2U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [2U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [2U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [2U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [2U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [2U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [2U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [2U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask 
            = ((0xfbU & (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 2U));
    }
    if ((vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
         [3U] >> 0x1fU)) {
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                     [3U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
               [3U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [3U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [3U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [3U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [3U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [3U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [3U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [3U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [3U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask 
            = ((0xf7U & (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 3U));
    }
    if ((vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
         [4U] >> 0x1fU)) {
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                     [4U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
               [4U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [4U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [4U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [4U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [4U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [4U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [4U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [4U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [4U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask 
            = ((0xefU & (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 4U));
    }
    if ((vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
         [5U] >> 0x1fU)) {
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                     [5U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
               [5U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [5U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [5U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [5U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [5U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [5U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [5U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [5U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [5U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask 
            = ((0xdfU & (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 5U));
    }
    if ((vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
         [6U] >> 0x1fU)) {
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                     [6U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
               [6U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [6U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [6U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [6U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [6U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [6U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [6U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [6U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [6U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask 
            = ((0xbfU & (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 6U));
    }
    if ((vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
         [7U] >> 0x1fU)) {
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                     [7U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
               [7U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [7U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [7U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [7U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [7U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [7U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [7U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [7U] 
                                                      >> 0xeU))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                      [7U] 
                                                      >> 8U))))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask 
            = ((0x7fU & (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 7U));
    }
    vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask = 0U;
    if ((1U & vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
         [0U][2U])) {
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                     [0U][0U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
               [0U][0U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [0U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [0U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [0U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [0U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [0U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [0U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [0U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [0U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask 
            = ((0xfeU & (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask)) 
               | ((IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                  & (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)));
    }
    if ((1U & vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
         [1U][2U])) {
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                     [1U][0U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
               [1U][0U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [1U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [1U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [1U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [1U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [1U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [1U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [1U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [1U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask 
            = ((0xfdU & (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 1U));
    }
    if ((1U & vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
         [2U][2U])) {
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                     [2U][0U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
               [2U][0U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [2U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [2U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [2U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [2U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [2U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [2U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [2U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [2U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask 
            = ((0xfbU & (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 2U));
    }
    if ((1U & vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
         [3U][2U])) {
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                     [3U][0U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
               [3U][0U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [3U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [3U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [3U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [3U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [3U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [3U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [3U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [3U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask 
            = ((0xf7U & (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 3U));
    }
    if ((1U & vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
         [4U][2U])) {
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                     [4U][0U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
               [4U][0U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [4U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [4U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [4U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [4U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [4U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [4U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [4U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [4U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask 
            = ((0xefU & (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 4U));
    }
    if ((1U & vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
         [5U][2U])) {
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                     [5U][0U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
               [5U][0U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [5U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [5U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [5U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [5U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [5U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [5U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [5U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [5U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask 
            = ((0xdfU & (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 5U));
    }
    if ((1U & vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
         [6U][2U])) {
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                     [6U][0U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
               [6U][0U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [6U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [6U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [6U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [6U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [6U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [6U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [6U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [6U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask 
            = ((0xbfU & (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 6U));
    }
    if ((1U & vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
         [7U][2U])) {
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                     [7U][0U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
               [7U][0U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [7U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [7U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [7U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [7U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [7U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [7U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [7U][1U] 
                                                      >> 0xfU))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                      [7U][1U] 
                                                      >> 9U))))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask 
            = ((0x7fU & (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 7U));
    }
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask = 0U;
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
         [0U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                     [0U][0U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
               [0U][0U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [0U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [0U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [0U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [0U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [0U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [0U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [0U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [0U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0xfeU & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | ((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                  & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)));
    }
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
         [1U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                     [1U][0U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
               [1U][0U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [1U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [1U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [1U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [1U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [1U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [1U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [1U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [1U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0xfdU & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 1U));
    }
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
         [2U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                     [2U][0U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
               [2U][0U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [2U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [2U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [2U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [2U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [2U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [2U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [2U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [2U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0xfbU & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 2U));
    }
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
         [3U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                     [3U][0U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
               [3U][0U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [3U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [3U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [3U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [3U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [3U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [3U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [3U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [3U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0xf7U & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 3U));
    }
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
         [4U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                     [4U][0U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
               [4U][0U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [4U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [4U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [4U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [4U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [4U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [4U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [4U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [4U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0xefU & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 4U));
    }
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
         [5U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                     [5U][0U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
               [5U][0U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [5U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [5U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [5U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [5U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [5U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [5U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [5U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [5U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0xdfU & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 5U));
    }
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
         [6U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                     [6U][0U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
               [6U][0U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [6U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [6U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [6U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [6U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [6U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [6U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [6U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [6U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0xbfU & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 6U));
    }
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
         [7U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                     [7U][0U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
               [7U][0U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [7U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [7U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [7U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [7U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [7U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [7U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [7U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [7U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0x7fU & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 7U));
    }
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask = 0U;
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
         [0U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                     [0U][0U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
               [0U][0U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [0U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [0U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [0U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [0U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [0U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [0U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [0U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [0U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0xfeU & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | ((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                  & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)));
    }
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
         [1U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                     [1U][0U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
               [1U][0U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [1U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [1U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [1U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [1U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [1U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [1U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [1U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [1U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0xfdU & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 1U));
    }
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
         [2U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                     [2U][0U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
               [2U][0U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [2U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [2U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [2U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [2U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [2U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [2U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [2U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [2U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0xfbU & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 2U));
    }
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
         [3U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                     [3U][0U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
               [3U][0U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [3U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [3U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [3U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [3U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [3U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [3U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [3U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [3U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0xf7U & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 3U));
    }
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
         [4U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                     [4U][0U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
               [4U][0U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [4U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [4U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [4U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [4U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [4U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [4U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [4U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [4U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0xefU & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 4U));
    }
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
         [5U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                     [5U][0U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
               [5U][0U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [5U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [5U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [5U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [5U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [5U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [5U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [5U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [5U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0xdfU & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 5U));
    }
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
         [6U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                     [6U][0U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
               [6U][0U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [6U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [6U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [6U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [6U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [6U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [6U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [6U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [6U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0xbfU & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 6U));
    }
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
         [7U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                     [7U][0U] >> 1U));
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
               [7U][0U]);
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [7U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[0U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [7U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [7U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[1U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [7U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [7U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[2U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [7U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [7U][1U] 
                                                      >> 0x17U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelf->core__DOT__CDB_tag[3U] == (0x3fU 
                                                   & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                      [7U][1U] 
                                                      >> 0x11U))))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0x7fU & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 7U));
    }
    __Vtableidx3 = vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask;
    vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx 
        = Vcore__ConstPool__TABLE_h571c794b_0[__Vtableidx3];
    vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_found 
        = Vcore__ConstPool__TABLE_hf049cce3_0[__Vtableidx3];
    vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__pe__DOT__unnamedblk1__DOT__i 
        = Vcore__ConstPool__TABLE_h159da5ed_0[__Vtableidx3];
    __Vtableidx4 = vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask;
    vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx 
        = Vcore__ConstPool__TABLE_h571c794b_0[__Vtableidx4];
    vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_found 
        = Vcore__ConstPool__TABLE_hf049cce3_0[__Vtableidx4];
    vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__pe__DOT__unnamedblk1__DOT__i 
        = Vcore__ConstPool__TABLE_h159da5ed_0[__Vtableidx4];
    __Vtableidx1 = vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask;
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx 
        = Vcore__ConstPool__TABLE_h571c794b_0[__Vtableidx1];
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_found 
        = Vcore__ConstPool__TABLE_hf049cce3_0[__Vtableidx1];
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__pe__DOT__unnamedblk1__DOT__i 
        = Vcore__ConstPool__TABLE_h159da5ed_0[__Vtableidx1];
    __Vtableidx2 = vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask;
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx 
        = Vcore__ConstPool__TABLE_h571c794b_0[__Vtableidx2];
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_found 
        = Vcore__ConstPool__TABLE_hf049cce3_0[__Vtableidx2];
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__pe__DOT__unnamedblk1__DOT__i 
        = Vcore__ConstPool__TABLE_h159da5ed_0[__Vtableidx2];
    vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT____VdfgTmp_h256a4fc8__0 
        = vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
        [vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx];
    vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT____VdfgTmp_h25684f9f__0[0U] 
        = vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
        [vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][0U];
    vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT____VdfgTmp_h25684f9f__0[1U] 
        = vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
        [vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][1U];
    vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT____VdfgTmp_h25684f9f__0[2U] 
        = vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
        [vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][2U];
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0[0U] 
        = vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
        [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U];
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0[1U] 
        = vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
        [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U];
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0[2U] 
        = vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
        [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][2U];
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0[3U] 
        = vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
        [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][3U];
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0[0U] 
        = vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
        [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U];
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0[1U] 
        = vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
        [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U];
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0[2U] 
        = vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
        [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][2U];
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0[3U] 
        = vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
        [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][3U];
    vlSelf->core__DOT__issue__DOT____Vcellout__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__read_tag[0U] 
        = (0x3fU & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT____VdfgTmp_h256a4fc8__0 
                    >> 0xeU));
    vlSelf->core__DOT__issue__DOT____Vcellout__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__read_tag[1U] 
        = (0x3fU & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT____VdfgTmp_h256a4fc8__0 
                    >> 8U));
    vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__read_tag[0U] 
        = (0x3fU & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT____VdfgTmp_h25684f9f__0[1U] 
                    >> 0xfU));
    vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__read_tag[1U] 
        = (0x3fU & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT____VdfgTmp_h25684f9f__0[1U] 
                    >> 9U));
    vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__read_tag[0U] 
        = (0x3fU & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0[1U] 
                    >> 0x17U));
    vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__read_tag[1U] 
        = (0x3fU & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0[1U] 
                    >> 0x11U));
    vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__read_tag[0U] 
        = (0x3fU & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0[1U] 
                    >> 0x17U));
    vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__read_tag[1U] 
        = (0x3fU & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0[1U] 
                    >> 0x11U));
    vlSelf->core__DOT__RF_raddr[2U][0U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__read_tag
        [0U];
    vlSelf->core__DOT__RF_raddr[2U][1U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__read_tag
        [1U];
    vlSelf->core__DOT__RF_raddr[3U][0U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__read_tag
        [0U];
    vlSelf->core__DOT__RF_raddr[3U][1U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__read_tag
        [1U];
    vlSelf->core__DOT__RF_raddr[0U][0U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__read_tag
        [0U];
    vlSelf->core__DOT__RF_raddr[0U][1U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__read_tag
        [1U];
    vlSelf->core__DOT__RF_raddr[1U][0U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__read_tag
        [0U];
    vlSelf->core__DOT__RF_raddr[1U][1U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__read_tag
        [1U];
    vlSelf->core__DOT__rs1_addr[0U] = vlSelf->core__DOT__RF_raddr
        [0U][0U];
    vlSelf->core__DOT__rs1_addr[1U] = vlSelf->core__DOT__RF_raddr
        [1U][0U];
    vlSelf->core__DOT__rs1_addr[2U] = vlSelf->core__DOT__RF_raddr
        [2U][0U];
    vlSelf->core__DOT__rs1_addr[3U] = vlSelf->core__DOT__RF_raddr
        [3U][0U];
    vlSelf->core__DOT__rs2_addr[0U] = vlSelf->core__DOT__RF_raddr
        [0U][1U];
    vlSelf->core__DOT__rs2_addr[1U] = vlSelf->core__DOT__RF_raddr
        [1U][1U];
    vlSelf->core__DOT__rs2_addr[2U] = vlSelf->core__DOT__RF_raddr
        [2U][1U];
    vlSelf->core__DOT__rs2_addr[3U] = vlSelf->core__DOT__RF_raddr
        [3U][1U];
    vlSelf->core__DOT__rs1_data[0U] = vlSelf->core__DOT__register_file__DOT__registers
        [vlSelf->core__DOT__rs1_addr[0U]];
    vlSelf->core__DOT__rs1_data[1U] = vlSelf->core__DOT__register_file__DOT__registers
        [vlSelf->core__DOT__rs1_addr[1U]];
    vlSelf->core__DOT__rs1_data[2U] = vlSelf->core__DOT__register_file__DOT__registers
        [vlSelf->core__DOT__rs1_addr[2U]];
    vlSelf->core__DOT__rs1_data[3U] = vlSelf->core__DOT__register_file__DOT__registers
        [vlSelf->core__DOT__rs1_addr[3U]];
    vlSelf->core__DOT__rs2_data[0U] = vlSelf->core__DOT__register_file__DOT__registers
        [vlSelf->core__DOT__rs2_addr[0U]];
    vlSelf->core__DOT__rs2_data[1U] = vlSelf->core__DOT__register_file__DOT__registers
        [vlSelf->core__DOT__rs2_addr[1U]];
    vlSelf->core__DOT__rs2_data[2U] = vlSelf->core__DOT__register_file__DOT__registers
        [vlSelf->core__DOT__rs2_addr[2U]];
    vlSelf->core__DOT__rs2_data[3U] = vlSelf->core__DOT__register_file__DOT__registers
        [vlSelf->core__DOT__rs2_addr[3U]];
    vlSelf->core__DOT__RF_read_data[0U][0U] = vlSelf->core__DOT__rs1_data
        [0U];
    vlSelf->core__DOT__RF_read_data[0U][1U] = vlSelf->core__DOT__rs2_data
        [0U];
    vlSelf->core__DOT__RF_read_data[1U][0U] = vlSelf->core__DOT__rs1_data
        [1U];
    vlSelf->core__DOT__RF_read_data[1U][1U] = vlSelf->core__DOT__rs2_data
        [1U];
    vlSelf->core__DOT__RF_read_data[2U][0U] = vlSelf->core__DOT__rs1_data
        [2U];
    vlSelf->core__DOT__RF_read_data[2U][1U] = vlSelf->core__DOT__rs2_data
        [2U];
    vlSelf->core__DOT__RF_read_data[3U][0U] = vlSelf->core__DOT__rs1_data
        [3U];
    vlSelf->core__DOT__RF_read_data[3U][1U] = vlSelf->core__DOT__rs2_data
        [3U];
    vlSelf->core__DOT__issue__DOT____Vcellinp__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__RF_data[0U] 
        = vlSelf->core__DOT__RF_read_data[2U][0U];
    vlSelf->core__DOT__issue__DOT____Vcellinp__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__RF_data[1U] 
        = vlSelf->core__DOT__RF_read_data[2U][1U];
    vlSelf->core__DOT__issue__DOT____Vcellinp__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__RF_data[0U] 
        = vlSelf->core__DOT__RF_read_data[3U][0U];
    vlSelf->core__DOT__issue__DOT____Vcellinp__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__RF_data[1U] 
        = vlSelf->core__DOT__RF_read_data[3U][1U];
    vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__RF_data[0U] 
        = vlSelf->core__DOT__RF_read_data[0U][0U];
    vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__RF_data[1U] 
        = vlSelf->core__DOT__RF_read_data[0U][1U];
    vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__RF_data[0U] 
        = vlSelf->core__DOT__RF_read_data[1U][0U];
    vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__RF_data[1U] 
        = vlSelf->core__DOT__RF_read_data[1U][1U];
}

VL_INLINE_OPT void Vcore___024root___nba_comb__TOP__12(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___nba_comb__TOP__12\n"); );
    // Body
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_valid 
        = ((~ (IData)(vlSelf->core__DOT__flush)) & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_found));
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_valid 
        = ((~ (IData)(vlSelf->core__DOT__flush)) & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_found));
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel1 = 0U;
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel2 = 0U;
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected = 0U;
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected = 0U;
    if (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_valid) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk4__DOT__j = 4U;
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk5__DOT__j = 4U;
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel1 
            = (((2U == (3U & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                              [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                              >> 8U))) | (1U == (3U 
                                                 & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                    [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                                    >> 8U)))) 
               | (1U == (3U & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                               [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                               >> 2U))));
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel2 
            = ((1U & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel2)) 
               | (((1U == (3U & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                 [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                 >> 8U))) | (2U == 
                                             (3U & 
                                              (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                               [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                               >> 8U)))) 
                  << 1U));
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel2 
            = ((2U & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel2)) 
               | (1U & (((((2U == (3U & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                         [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                         >> 2U))) | 
                           (1U == (3U & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                         [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                         >> 2U)))) 
                          | (1U == (3U & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                          [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                          >> 8U)))) 
                         | (2U == (3U & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                         [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                         >> 8U)))) 
                        | (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                           [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                           >> 0xaU))));
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type 
            = (0xfU & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0[0U] 
                       >> 4U));
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
            = vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__RF_data
            [0U];
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ 
                                                  (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                   [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                                   >> 1U))) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                          >> 0x17U)) == vlSelf->core__DOT__CDB_tag
                [0U]))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelf->core__DOT__CDB_result[0U];
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ 
                                                  (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                   [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                                   >> 1U))) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                          >> 0x17U)) == vlSelf->core__DOT__CDB_tag
                [1U]))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelf->core__DOT__CDB_result[1U];
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ 
                                                  (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                   [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                                   >> 1U))) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                          >> 0x17U)) == vlSelf->core__DOT__CDB_tag
                [2U]))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelf->core__DOT__CDB_result[2U];
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ 
                                                  (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                   [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                                   >> 1U))) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                          >> 0x17U)) == vlSelf->core__DOT__CDB_tag
                [3U]))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelf->core__DOT__CDB_result[3U];
        }
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected 
            = vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__RF_data
            [1U];
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ 
                                                  vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                  [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U])) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                          >> 0x11U)) == vlSelf->core__DOT__CDB_tag
                [0U]))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelf->core__DOT__CDB_result[0U];
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ 
                                                  vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                  [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U])) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                          >> 0x11U)) == vlSelf->core__DOT__CDB_tag
                [1U]))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelf->core__DOT__CDB_result[1U];
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ 
                                                  vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                  [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U])) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                          >> 0x11U)) == vlSelf->core__DOT__CDB_tag
                [2U]))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelf->core__DOT__CDB_result[2U];
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ 
                                                  vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                  [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U])) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                          >> 0x11U)) == vlSelf->core__DOT__CDB_tag
                [3U]))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelf->core__DOT__CDB_result[3U];
        }
    } else {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type = 0U;
    }
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel1 = 0U;
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel2 = 0U;
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected = 0U;
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected = 0U;
    if (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_valid) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk4__DOT__j = 4U;
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk5__DOT__j = 4U;
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel1 
            = (((2U == (3U & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                              [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                              >> 8U))) | (1U == (3U 
                                                 & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                    [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                                    >> 8U)))) 
               | (1U == (3U & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                               [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                               >> 2U))));
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel2 
            = ((1U & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel2)) 
               | (((1U == (3U & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                 [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                 >> 8U))) | (2U == 
                                             (3U & 
                                              (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                               [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                               >> 8U)))) 
                  << 1U));
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel2 
            = ((2U & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel2)) 
               | (1U & (((((2U == (3U & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                         [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                         >> 2U))) | 
                           (1U == (3U & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                         [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                         >> 2U)))) 
                          | (1U == (3U & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                          [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                          >> 8U)))) 
                         | (2U == (3U & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                         [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                         >> 8U)))) 
                        | (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                           [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                           >> 0xaU))));
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type 
            = (0xfU & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0[0U] 
                       >> 4U));
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
            = vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__RF_data
            [0U];
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ 
                                                  (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                   [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                                   >> 1U))) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                          >> 0x17U)) == vlSelf->core__DOT__CDB_tag
                [0U]))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelf->core__DOT__CDB_result[0U];
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ 
                                                  (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                   [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                                   >> 1U))) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                          >> 0x17U)) == vlSelf->core__DOT__CDB_tag
                [1U]))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelf->core__DOT__CDB_result[1U];
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ 
                                                  (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                   [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                                   >> 1U))) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                          >> 0x17U)) == vlSelf->core__DOT__CDB_tag
                [2U]))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelf->core__DOT__CDB_result[2U];
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ 
                                                  (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                   [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                                   >> 1U))) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                          >> 0x17U)) == vlSelf->core__DOT__CDB_tag
                [3U]))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelf->core__DOT__CDB_result[3U];
        }
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected 
            = vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__RF_data
            [1U];
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ 
                                                  vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                  [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U])) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                          >> 0x11U)) == vlSelf->core__DOT__CDB_tag
                [0U]))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelf->core__DOT__CDB_result[0U];
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ 
                                                  vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                  [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U])) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                          >> 0x11U)) == vlSelf->core__DOT__CDB_tag
                [1U]))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelf->core__DOT__CDB_result[1U];
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ 
                                                  vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                  [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U])) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                          >> 0x11U)) == vlSelf->core__DOT__CDB_tag
                [2U]))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelf->core__DOT__CDB_result[2U];
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ 
                                                  vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                  [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U])) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                          >> 0x11U)) == vlSelf->core__DOT__CDB_tag
                [3U]))) {
            vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelf->core__DOT__CDB_result[3U];
        }
    } else {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type = 0U;
    }
    vlSelf->core__DOT__br_taken[0U] = ((1U & (~ ((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type) 
                                                 >> 3U))) 
                                       && ((4U & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type))
                                            ? ((2U 
                                                & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type))
                                                ? (
                                                   (1U 
                                                    & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type))) 
                                                   && (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                                                       >= vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type))
                                                    ? 
                                                   (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                                                    < vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected)
                                                    : 
                                                   VL_GTES_III(32, vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected, vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected)))
                                            : ((2U 
                                                & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type))
                                                    ? 
                                                   VL_LTS_III(32, vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected, vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected)
                                                    : 
                                                   (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                                                    != vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type)) 
                                                   && (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                                                       == vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected)))));
    vlSelf->core__DOT__br_taken[1U] = ((1U & (~ ((IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type) 
                                                 >> 3U))) 
                                       && ((4U & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type))
                                            ? ((2U 
                                                & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type))
                                                ? (
                                                   (1U 
                                                    & (~ (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type))) 
                                                   && (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                                                       >= vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type))
                                                    ? 
                                                   (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                                                    < vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected)
                                                    : 
                                                   VL_GTES_III(32, vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected, vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected)))
                                            : ((2U 
                                                & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type))
                                                    ? 
                                                   VL_LTS_III(32, vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected, vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected)
                                                    : 
                                                   (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                                                    != vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type)) 
                                                   && (vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                                                       == vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected)))));
    vlSelf->core__DOT__issue__DOT__ta_gen2__DOT__oldest_idx = 0U;
    vlSelf->core__DOT__issue__DOT__ta_gen2__DOT__oldest_sqN = 0x7fU;
    if (((vlSelf->core__DOT__issue__DOT__instr_valid
          [0U] & (vlSelf->core__DOT__br_taken[0U] | 
                  (2U == vlSelf->core__DOT__jump_type
                   [0U]))) & (0x7fU > vlSelf->core__DOT__issue__DOT__instr_sqN
                              [0U]))) {
        vlSelf->core__DOT__issue__DOT__ta_gen2__DOT__oldest_sqN 
            = vlSelf->core__DOT__issue__DOT__instr_sqN
            [0U];
        vlSelf->core__DOT__issue__DOT__ta_gen2__DOT__oldest_idx = 0U;
    }
    if (((vlSelf->core__DOT__issue__DOT__instr_valid
          [1U] & (vlSelf->core__DOT__br_taken[1U] | 
                  (2U == vlSelf->core__DOT__jump_type
                   [1U]))) & (vlSelf->core__DOT__issue__DOT__instr_sqN
                              [1U] < (IData)(vlSelf->core__DOT__issue__DOT__ta_gen2__DOT__oldest_sqN)))) {
        vlSelf->core__DOT__issue__DOT__ta_gen2__DOT__oldest_sqN 
            = vlSelf->core__DOT__issue__DOT__instr_sqN
            [1U];
        vlSelf->core__DOT__issue__DOT__ta_gen2__DOT__oldest_idx = 1U;
    }
    if (vlSelf->core__DOT__issue__DOT__instr_valid[vlSelf->core__DOT__issue__DOT__ta_gen2__DOT__oldest_idx]) {
        if (vlSelf->core__DOT__br_taken[vlSelf->core__DOT__issue__DOT__ta_gen2__DOT__oldest_idx]) {
            vlSelf->core__DOT__jump2 = 1U;
            vlSelf->core__DOT__jta2 = (vlSelf->core__DOT__issue__DOT__pc
                                       [vlSelf->core__DOT__issue__DOT__ta_gen2__DOT__oldest_idx] 
                                       + vlSelf->core__DOT__issue__DOT__alu_imm
                                       [vlSelf->core__DOT__issue__DOT__ta_gen2__DOT__oldest_idx]);
        } else if ((2U == vlSelf->core__DOT__jump_type
                    [vlSelf->core__DOT__issue__DOT__ta_gen2__DOT__oldest_idx])) {
            vlSelf->core__DOT__jump2 = 1U;
            vlSelf->core__DOT__jta2 = (vlSelf->core__DOT__issue__DOT__alu_rs1_result
                                       [vlSelf->core__DOT__issue__DOT__ta_gen2__DOT__oldest_idx] 
                                       + vlSelf->core__DOT__issue__DOT__alu_imm
                                       [vlSelf->core__DOT__issue__DOT__ta_gen2__DOT__oldest_idx]);
        } else {
            vlSelf->core__DOT__jump2 = 0U;
        }
    } else {
        vlSelf->core__DOT__jump2 = 0U;
    }
    vlSelf->core__DOT____Vcellinp__flush_controller__br_taken[0U] 
        = vlSelf->core__DOT__br_taken[0U];
    vlSelf->core__DOT____Vcellinp__flush_controller__br_taken[1U] 
        = vlSelf->core__DOT__br_taken[1U];
    vlSelf->core__DOT__flush = 0U;
    vlSelf->core__DOT__flush_sqN = 0U;
    vlSelf->core__DOT__flush_controller__DOT__unnamedblk1__DOT__valid0 
        = (vlSelf->core__DOT____Vcellinp__flush_controller__br_taken
           [0U] | (2U == vlSelf->core__DOT____Vcellinp__flush_controller__jump_type
                   [0U]));
    vlSelf->core__DOT__flush_controller__DOT__unnamedblk1__DOT__valid1 
        = (vlSelf->core__DOT____Vcellinp__flush_controller__br_taken
           [1U] | (2U == vlSelf->core__DOT____Vcellinp__flush_controller__jump_type
                   [1U]));
    if (((IData)(vlSelf->core__DOT__flush_controller__DOT__unnamedblk1__DOT__valid0) 
         & (IData)(vlSelf->core__DOT__flush_controller__DOT__unnamedblk1__DOT__valid1))) {
        vlSelf->core__DOT__flush_controller__DOT__unnamedblk1__DOT__diff 
            = (0x7fU & (vlSelf->core__DOT____Vcellinp__flush_controller__sqN
                        [0U] - vlSelf->core__DOT____Vcellinp__flush_controller__sqN
                        [1U]));
        vlSelf->core__DOT__flush = 1U;
        vlSelf->core__DOT__flush_sqN = ((0x40U & (IData)(vlSelf->core__DOT__flush_controller__DOT__unnamedblk1__DOT__diff))
                                         ? vlSelf->core__DOT____Vcellinp__flush_controller__sqN
                                        [0U] : vlSelf->core__DOT____Vcellinp__flush_controller__sqN
                                        [1U]);
    } else if (vlSelf->core__DOT__flush_controller__DOT__unnamedblk1__DOT__valid0) {
        vlSelf->core__DOT__flush = 1U;
        vlSelf->core__DOT__flush_sqN = vlSelf->core__DOT____Vcellinp__flush_controller__sqN
            [0U];
    } else if (vlSelf->core__DOT__flush_controller__DOT__unnamedblk1__DOT__valid1) {
        vlSelf->core__DOT__flush = 1U;
        vlSelf->core__DOT__flush_sqN = vlSelf->core__DOT____Vcellinp__flush_controller__sqN
            [1U];
    }
    if (((IData)(vlSelf->core__DOT__flush) & vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid
         [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))])) {
        vlSelf->core__DOT__restore_free[0U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0U];
        vlSelf->core__DOT__restore_free[1U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [1U];
        vlSelf->core__DOT__restore_free[2U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [2U];
        vlSelf->core__DOT__restore_free[3U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [3U];
        vlSelf->core__DOT__restore_free[4U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [4U];
        vlSelf->core__DOT__restore_free[5U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [5U];
        vlSelf->core__DOT__restore_free[6U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [6U];
        vlSelf->core__DOT__restore_free[7U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [7U];
        vlSelf->core__DOT__restore_free[8U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [8U];
        vlSelf->core__DOT__restore_free[9U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [9U];
        vlSelf->core__DOT__restore_free[0xaU] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0xaU];
        vlSelf->core__DOT__restore_free[0xbU] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0xbU];
        vlSelf->core__DOT__restore_free[0xcU] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0xcU];
        vlSelf->core__DOT__restore_free[0xdU] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0xdU];
        vlSelf->core__DOT__restore_free[0xeU] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0xeU];
        vlSelf->core__DOT__restore_free[0xfU] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0xfU];
        vlSelf->core__DOT__restore_free[0x10U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x10U];
        vlSelf->core__DOT__restore_free[0x11U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x11U];
        vlSelf->core__DOT__restore_free[0x12U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x12U];
        vlSelf->core__DOT__restore_free[0x13U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x13U];
        vlSelf->core__DOT__restore_free[0x14U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x14U];
        vlSelf->core__DOT__restore_free[0x15U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x15U];
        vlSelf->core__DOT__restore_free[0x16U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x16U];
        vlSelf->core__DOT__restore_free[0x17U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x17U];
        vlSelf->core__DOT__restore_free[0x18U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x18U];
        vlSelf->core__DOT__restore_free[0x19U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x19U];
        vlSelf->core__DOT__restore_free[0x1aU] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x1aU];
        vlSelf->core__DOT__restore_free[0x1bU] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x1bU];
        vlSelf->core__DOT__restore_free[0x1cU] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x1cU];
        vlSelf->core__DOT__restore_free[0x1dU] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x1dU];
        vlSelf->core__DOT__restore_free[0x1eU] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x1eU];
        vlSelf->core__DOT__restore_free[0x1fU] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x1fU];
        vlSelf->core__DOT__restore_free[0x20U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x20U];
        vlSelf->core__DOT__restore_free[0x21U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x21U];
        vlSelf->core__DOT__restore_free[0x22U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x22U];
        vlSelf->core__DOT__restore_free[0x23U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x23U];
        vlSelf->core__DOT__restore_free[0x24U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x24U];
        vlSelf->core__DOT__restore_free[0x25U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x25U];
        vlSelf->core__DOT__restore_free[0x26U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x26U];
        vlSelf->core__DOT__restore_free[0x27U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x27U];
        vlSelf->core__DOT__restore_free[0x28U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x28U];
        vlSelf->core__DOT__restore_free[0x29U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x29U];
        vlSelf->core__DOT__restore_free[0x2aU] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x2aU];
        vlSelf->core__DOT__restore_free[0x2bU] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x2bU];
        vlSelf->core__DOT__restore_free[0x2cU] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x2cU];
        vlSelf->core__DOT__restore_free[0x2dU] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x2dU];
        vlSelf->core__DOT__restore_free[0x2eU] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x2eU];
        vlSelf->core__DOT__restore_free[0x2fU] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x2fU];
        vlSelf->core__DOT__restore_free[0x30U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x30U];
        vlSelf->core__DOT__restore_free[0x31U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x31U];
        vlSelf->core__DOT__restore_free[0x32U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x32U];
        vlSelf->core__DOT__restore_free[0x33U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x33U];
        vlSelf->core__DOT__restore_free[0x34U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x34U];
        vlSelf->core__DOT__restore_free[0x35U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x35U];
        vlSelf->core__DOT__restore_free[0x36U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x36U];
        vlSelf->core__DOT__restore_free[0x37U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x37U];
        vlSelf->core__DOT__restore_free[0x38U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x38U];
        vlSelf->core__DOT__restore_free[0x39U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x39U];
        vlSelf->core__DOT__restore_free[0x3aU] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x3aU];
        vlSelf->core__DOT__restore_free[0x3bU] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x3bU];
        vlSelf->core__DOT__restore_free[0x3cU] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x3cU];
        vlSelf->core__DOT__restore_free[0x3dU] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x3dU];
        vlSelf->core__DOT__restore_free[0x3eU] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x3eU];
        vlSelf->core__DOT__restore_free[0x3fU] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__free
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x3fU];
        vlSelf->core__DOT__restore_specTag[0U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0U];
        vlSelf->core__DOT__restore_specTag[1U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [1U];
        vlSelf->core__DOT__restore_specTag[2U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [2U];
        vlSelf->core__DOT__restore_specTag[3U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [3U];
        vlSelf->core__DOT__restore_specTag[4U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [4U];
        vlSelf->core__DOT__restore_specTag[5U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [5U];
        vlSelf->core__DOT__restore_specTag[6U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [6U];
        vlSelf->core__DOT__restore_specTag[7U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [7U];
        vlSelf->core__DOT__restore_specTag[8U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [8U];
        vlSelf->core__DOT__restore_specTag[9U] = vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [9U];
        vlSelf->core__DOT__restore_specTag[0xaU] = 
            vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0xaU];
        vlSelf->core__DOT__restore_specTag[0xbU] = 
            vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0xbU];
        vlSelf->core__DOT__restore_specTag[0xcU] = 
            vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0xcU];
        vlSelf->core__DOT__restore_specTag[0xdU] = 
            vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0xdU];
        vlSelf->core__DOT__restore_specTag[0xeU] = 
            vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0xeU];
        vlSelf->core__DOT__restore_specTag[0xfU] = 
            vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0xfU];
        vlSelf->core__DOT__restore_specTag[0x10U] = 
            vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x10U];
        vlSelf->core__DOT__restore_specTag[0x11U] = 
            vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x11U];
        vlSelf->core__DOT__restore_specTag[0x12U] = 
            vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x12U];
        vlSelf->core__DOT__restore_specTag[0x13U] = 
            vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x13U];
        vlSelf->core__DOT__restore_specTag[0x14U] = 
            vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x14U];
        vlSelf->core__DOT__restore_specTag[0x15U] = 
            vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x15U];
        vlSelf->core__DOT__restore_specTag[0x16U] = 
            vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x16U];
        vlSelf->core__DOT__restore_specTag[0x17U] = 
            vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x17U];
        vlSelf->core__DOT__restore_specTag[0x18U] = 
            vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x18U];
        vlSelf->core__DOT__restore_specTag[0x19U] = 
            vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x19U];
        vlSelf->core__DOT__restore_specTag[0x1aU] = 
            vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x1aU];
        vlSelf->core__DOT__restore_specTag[0x1bU] = 
            vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x1bU];
        vlSelf->core__DOT__restore_specTag[0x1cU] = 
            vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x1cU];
        vlSelf->core__DOT__restore_specTag[0x1dU] = 
            vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x1dU];
        vlSelf->core__DOT__restore_specTag[0x1eU] = 
            vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x1eU];
        vlSelf->core__DOT__restore_specTag[0x1fU] = 
            vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0xfU & (IData)(vlSelf->core__DOT__flush_sqN))]
            [0x1fU];
    } else {
        vlSelf->core__DOT__restore_free[0U] = vlSelf->core__DOT__store_free
            [1U][0U];
        vlSelf->core__DOT__restore_free[1U] = vlSelf->core__DOT__store_free
            [1U][1U];
        vlSelf->core__DOT__restore_free[2U] = vlSelf->core__DOT__store_free
            [1U][2U];
        vlSelf->core__DOT__restore_free[3U] = vlSelf->core__DOT__store_free
            [1U][3U];
        vlSelf->core__DOT__restore_free[4U] = vlSelf->core__DOT__store_free
            [1U][4U];
        vlSelf->core__DOT__restore_free[5U] = vlSelf->core__DOT__store_free
            [1U][5U];
        vlSelf->core__DOT__restore_free[6U] = vlSelf->core__DOT__store_free
            [1U][6U];
        vlSelf->core__DOT__restore_free[7U] = vlSelf->core__DOT__store_free
            [1U][7U];
        vlSelf->core__DOT__restore_free[8U] = vlSelf->core__DOT__store_free
            [1U][8U];
        vlSelf->core__DOT__restore_free[9U] = vlSelf->core__DOT__store_free
            [1U][9U];
        vlSelf->core__DOT__restore_free[0xaU] = vlSelf->core__DOT__store_free
            [1U][0xaU];
        vlSelf->core__DOT__restore_free[0xbU] = vlSelf->core__DOT__store_free
            [1U][0xbU];
        vlSelf->core__DOT__restore_free[0xcU] = vlSelf->core__DOT__store_free
            [1U][0xcU];
        vlSelf->core__DOT__restore_free[0xdU] = vlSelf->core__DOT__store_free
            [1U][0xdU];
        vlSelf->core__DOT__restore_free[0xeU] = vlSelf->core__DOT__store_free
            [1U][0xeU];
        vlSelf->core__DOT__restore_free[0xfU] = vlSelf->core__DOT__store_free
            [1U][0xfU];
        vlSelf->core__DOT__restore_free[0x10U] = vlSelf->core__DOT__store_free
            [1U][0x10U];
        vlSelf->core__DOT__restore_free[0x11U] = vlSelf->core__DOT__store_free
            [1U][0x11U];
        vlSelf->core__DOT__restore_free[0x12U] = vlSelf->core__DOT__store_free
            [1U][0x12U];
        vlSelf->core__DOT__restore_free[0x13U] = vlSelf->core__DOT__store_free
            [1U][0x13U];
        vlSelf->core__DOT__restore_free[0x14U] = vlSelf->core__DOT__store_free
            [1U][0x14U];
        vlSelf->core__DOT__restore_free[0x15U] = vlSelf->core__DOT__store_free
            [1U][0x15U];
        vlSelf->core__DOT__restore_free[0x16U] = vlSelf->core__DOT__store_free
            [1U][0x16U];
        vlSelf->core__DOT__restore_free[0x17U] = vlSelf->core__DOT__store_free
            [1U][0x17U];
        vlSelf->core__DOT__restore_free[0x18U] = vlSelf->core__DOT__store_free
            [1U][0x18U];
        vlSelf->core__DOT__restore_free[0x19U] = vlSelf->core__DOT__store_free
            [1U][0x19U];
        vlSelf->core__DOT__restore_free[0x1aU] = vlSelf->core__DOT__store_free
            [1U][0x1aU];
        vlSelf->core__DOT__restore_free[0x1bU] = vlSelf->core__DOT__store_free
            [1U][0x1bU];
        vlSelf->core__DOT__restore_free[0x1cU] = vlSelf->core__DOT__store_free
            [1U][0x1cU];
        vlSelf->core__DOT__restore_free[0x1dU] = vlSelf->core__DOT__store_free
            [1U][0x1dU];
        vlSelf->core__DOT__restore_free[0x1eU] = vlSelf->core__DOT__store_free
            [1U][0x1eU];
        vlSelf->core__DOT__restore_free[0x1fU] = vlSelf->core__DOT__store_free
            [1U][0x1fU];
        vlSelf->core__DOT__restore_free[0x20U] = vlSelf->core__DOT__store_free
            [1U][0x20U];
        vlSelf->core__DOT__restore_free[0x21U] = vlSelf->core__DOT__store_free
            [1U][0x21U];
        vlSelf->core__DOT__restore_free[0x22U] = vlSelf->core__DOT__store_free
            [1U][0x22U];
        vlSelf->core__DOT__restore_free[0x23U] = vlSelf->core__DOT__store_free
            [1U][0x23U];
        vlSelf->core__DOT__restore_free[0x24U] = vlSelf->core__DOT__store_free
            [1U][0x24U];
        vlSelf->core__DOT__restore_free[0x25U] = vlSelf->core__DOT__store_free
            [1U][0x25U];
        vlSelf->core__DOT__restore_free[0x26U] = vlSelf->core__DOT__store_free
            [1U][0x26U];
        vlSelf->core__DOT__restore_free[0x27U] = vlSelf->core__DOT__store_free
            [1U][0x27U];
        vlSelf->core__DOT__restore_free[0x28U] = vlSelf->core__DOT__store_free
            [1U][0x28U];
        vlSelf->core__DOT__restore_free[0x29U] = vlSelf->core__DOT__store_free
            [1U][0x29U];
        vlSelf->core__DOT__restore_free[0x2aU] = vlSelf->core__DOT__store_free
            [1U][0x2aU];
        vlSelf->core__DOT__restore_free[0x2bU] = vlSelf->core__DOT__store_free
            [1U][0x2bU];
        vlSelf->core__DOT__restore_free[0x2cU] = vlSelf->core__DOT__store_free
            [1U][0x2cU];
        vlSelf->core__DOT__restore_free[0x2dU] = vlSelf->core__DOT__store_free
            [1U][0x2dU];
        vlSelf->core__DOT__restore_free[0x2eU] = vlSelf->core__DOT__store_free
            [1U][0x2eU];
        vlSelf->core__DOT__restore_free[0x2fU] = vlSelf->core__DOT__store_free
            [1U][0x2fU];
        vlSelf->core__DOT__restore_free[0x30U] = vlSelf->core__DOT__store_free
            [1U][0x30U];
        vlSelf->core__DOT__restore_free[0x31U] = vlSelf->core__DOT__store_free
            [1U][0x31U];
        vlSelf->core__DOT__restore_free[0x32U] = vlSelf->core__DOT__store_free
            [1U][0x32U];
        vlSelf->core__DOT__restore_free[0x33U] = vlSelf->core__DOT__store_free
            [1U][0x33U];
        vlSelf->core__DOT__restore_free[0x34U] = vlSelf->core__DOT__store_free
            [1U][0x34U];
        vlSelf->core__DOT__restore_free[0x35U] = vlSelf->core__DOT__store_free
            [1U][0x35U];
        vlSelf->core__DOT__restore_free[0x36U] = vlSelf->core__DOT__store_free
            [1U][0x36U];
        vlSelf->core__DOT__restore_free[0x37U] = vlSelf->core__DOT__store_free
            [1U][0x37U];
        vlSelf->core__DOT__restore_free[0x38U] = vlSelf->core__DOT__store_free
            [1U][0x38U];
        vlSelf->core__DOT__restore_free[0x39U] = vlSelf->core__DOT__store_free
            [1U][0x39U];
        vlSelf->core__DOT__restore_free[0x3aU] = vlSelf->core__DOT__store_free
            [1U][0x3aU];
        vlSelf->core__DOT__restore_free[0x3bU] = vlSelf->core__DOT__store_free
            [1U][0x3bU];
        vlSelf->core__DOT__restore_free[0x3cU] = vlSelf->core__DOT__store_free
            [1U][0x3cU];
        vlSelf->core__DOT__restore_free[0x3dU] = vlSelf->core__DOT__store_free
            [1U][0x3dU];
        vlSelf->core__DOT__restore_free[0x3eU] = vlSelf->core__DOT__store_free
            [1U][0x3eU];
        vlSelf->core__DOT__restore_free[0x3fU] = vlSelf->core__DOT__store_free
            [1U][0x3fU];
        vlSelf->core__DOT__restore_specTag[0U] = vlSelf->core__DOT__store_specTag
            [1U][0U];
        vlSelf->core__DOT__restore_specTag[1U] = vlSelf->core__DOT__store_specTag
            [1U][1U];
        vlSelf->core__DOT__restore_specTag[2U] = vlSelf->core__DOT__store_specTag
            [1U][2U];
        vlSelf->core__DOT__restore_specTag[3U] = vlSelf->core__DOT__store_specTag
            [1U][3U];
        vlSelf->core__DOT__restore_specTag[4U] = vlSelf->core__DOT__store_specTag
            [1U][4U];
        vlSelf->core__DOT__restore_specTag[5U] = vlSelf->core__DOT__store_specTag
            [1U][5U];
        vlSelf->core__DOT__restore_specTag[6U] = vlSelf->core__DOT__store_specTag
            [1U][6U];
        vlSelf->core__DOT__restore_specTag[7U] = vlSelf->core__DOT__store_specTag
            [1U][7U];
        vlSelf->core__DOT__restore_specTag[8U] = vlSelf->core__DOT__store_specTag
            [1U][8U];
        vlSelf->core__DOT__restore_specTag[9U] = vlSelf->core__DOT__store_specTag
            [1U][9U];
        vlSelf->core__DOT__restore_specTag[0xaU] = 
            vlSelf->core__DOT__store_specTag[1U][0xaU];
        vlSelf->core__DOT__restore_specTag[0xbU] = 
            vlSelf->core__DOT__store_specTag[1U][0xbU];
        vlSelf->core__DOT__restore_specTag[0xcU] = 
            vlSelf->core__DOT__store_specTag[1U][0xcU];
        vlSelf->core__DOT__restore_specTag[0xdU] = 
            vlSelf->core__DOT__store_specTag[1U][0xdU];
        vlSelf->core__DOT__restore_specTag[0xeU] = 
            vlSelf->core__DOT__store_specTag[1U][0xeU];
        vlSelf->core__DOT__restore_specTag[0xfU] = 
            vlSelf->core__DOT__store_specTag[1U][0xfU];
        vlSelf->core__DOT__restore_specTag[0x10U] = 
            vlSelf->core__DOT__store_specTag[1U][0x10U];
        vlSelf->core__DOT__restore_specTag[0x11U] = 
            vlSelf->core__DOT__store_specTag[1U][0x11U];
        vlSelf->core__DOT__restore_specTag[0x12U] = 
            vlSelf->core__DOT__store_specTag[1U][0x12U];
        vlSelf->core__DOT__restore_specTag[0x13U] = 
            vlSelf->core__DOT__store_specTag[1U][0x13U];
        vlSelf->core__DOT__restore_specTag[0x14U] = 
            vlSelf->core__DOT__store_specTag[1U][0x14U];
        vlSelf->core__DOT__restore_specTag[0x15U] = 
            vlSelf->core__DOT__store_specTag[1U][0x15U];
        vlSelf->core__DOT__restore_specTag[0x16U] = 
            vlSelf->core__DOT__store_specTag[1U][0x16U];
        vlSelf->core__DOT__restore_specTag[0x17U] = 
            vlSelf->core__DOT__store_specTag[1U][0x17U];
        vlSelf->core__DOT__restore_specTag[0x18U] = 
            vlSelf->core__DOT__store_specTag[1U][0x18U];
        vlSelf->core__DOT__restore_specTag[0x19U] = 
            vlSelf->core__DOT__store_specTag[1U][0x19U];
        vlSelf->core__DOT__restore_specTag[0x1aU] = 
            vlSelf->core__DOT__store_specTag[1U][0x1aU];
        vlSelf->core__DOT__restore_specTag[0x1bU] = 
            vlSelf->core__DOT__store_specTag[1U][0x1bU];
        vlSelf->core__DOT__restore_specTag[0x1cU] = 
            vlSelf->core__DOT__store_specTag[1U][0x1cU];
        vlSelf->core__DOT__restore_specTag[0x1dU] = 
            vlSelf->core__DOT__store_specTag[1U][0x1dU];
        vlSelf->core__DOT__restore_specTag[0x1eU] = 
            vlSelf->core__DOT__store_specTag[1U][0x1eU];
        vlSelf->core__DOT__restore_specTag[0x1fU] = 
            vlSelf->core__DOT__store_specTag[1U][0x1fU];
    }
    vlSelf->core__DOT__lsu__DOT__u_stb__DOT__new_tail 
        = vlSelf->core__DOT__lsu__DOT__u_stb__DOT__tail_ptr;
    vlSelf->core__DOT__lsu__DOT__u_stb__DOT__on_flush_valid = 0U;
    if (vlSelf->core__DOT__flush) {
        vlSelf->core__DOT__lsu__DOT__u_stb__DOT__new_tail 
            = vlSelf->core__DOT__lsu__DOT__u_stb__DOT__drain_ptr;
        vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i = 0U;
        {
            while ((0x10U > vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i)) {
                vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__idx 
                    = (0xfU & ((IData)(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__drain_ptr) 
                               + vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i));
                if (((IData)(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__idx) 
                     == (IData)(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__tail_ptr))) {
                    goto __Vlabel2;
                }
                if (((vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                      [vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__idx][2U] 
                      >> 0xbU) & (0x40U > (0x7fU & 
                                           ((IData)(vlSelf->core__DOT__flush_sqN) 
                                            - (0x7fU 
                                               & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                  [vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__idx][2U] 
                                                  >> 2U))))))) {
                    vlSelf->core__DOT__lsu__DOT__u_stb__DOT__on_flush_valid 
                        = ((IData)(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__on_flush_valid) 
                           | (0xffffU & ((IData)(1U) 
                                         << (IData)(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__idx))));
                    vlSelf->core__DOT__lsu__DOT__u_stb__DOT__new_tail 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__idx)));
                } else {
                    vlSelf->core__DOT__lsu__DOT__u_stb__DOT__on_flush_valid 
                        = ((~ ((IData)(1U) << (IData)(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__idx))) 
                           & (IData)(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__on_flush_valid));
                }
                vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i 
                    = ((IData)(1U) + vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i);
            }
            __Vlabel2: ;
        }
    }
    vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_valid 
        = ((~ (IData)(vlSelf->core__DOT__flush)) & (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_found));
    vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_valid 
        = ((~ (IData)(vlSelf->core__DOT__flush)) & (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_found));
    vlSelf->core__DOT__fetch__DOT__invalidate = ((IData)(vlSelf->core__DOT__fetch__DOT__q) 
                                                 | (IData)(vlSelf->core__DOT__flush));
    vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs1_data_selected = 0U;
    vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs2_data_selected = 0U;
    if (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_valid) {
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk4__DOT__j = 4U;
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk5__DOT__j = 4U;
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs1_data_selected 
            = vlSelf->core__DOT__issue__DOT____Vcellinp__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__RF_data
            [0U];
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ 
                                                  (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                   [vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx] 
                                                   >> 1U))) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx] 
                          >> 0xeU)) == vlSelf->core__DOT__CDB_tag
                [0U]))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelf->core__DOT__CDB_result[0U];
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ 
                                                  (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                   [vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx] 
                                                   >> 1U))) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx] 
                          >> 0xeU)) == vlSelf->core__DOT__CDB_tag
                [1U]))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelf->core__DOT__CDB_result[1U];
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ 
                                                  (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                   [vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx] 
                                                   >> 1U))) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx] 
                          >> 0xeU)) == vlSelf->core__DOT__CDB_tag
                [2U]))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelf->core__DOT__CDB_result[2U];
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ 
                                                  (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                   [vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx] 
                                                   >> 1U))) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx] 
                          >> 0xeU)) == vlSelf->core__DOT__CDB_tag
                [3U]))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelf->core__DOT__CDB_result[3U];
        }
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs2_data_selected 
            = vlSelf->core__DOT__issue__DOT____Vcellinp__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__RF_data
            [1U];
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ 
                                                  vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                  [vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx])) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx] 
                          >> 8U)) == vlSelf->core__DOT__CDB_tag
                [0U]))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelf->core__DOT__CDB_result[0U];
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ 
                                                  vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                  [vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx])) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx] 
                          >> 8U)) == vlSelf->core__DOT__CDB_tag
                [1U]))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelf->core__DOT__CDB_result[1U];
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ 
                                                  vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                  [vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx])) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx] 
                          >> 8U)) == vlSelf->core__DOT__CDB_tag
                [2U]))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelf->core__DOT__CDB_result[2U];
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ 
                                                  vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                                  [vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx])) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx] 
                          >> 8U)) == vlSelf->core__DOT__CDB_tag
                [3U]))) {
            vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelf->core__DOT__CDB_result[3U];
        }
    }
    vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs1_data_selected = 0U;
    vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs2_data_selected = 0U;
    if (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_valid) {
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk4__DOT__j = 4U;
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk5__DOT__j = 4U;
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs1_data_selected 
            = vlSelf->core__DOT__issue__DOT____Vcellinp__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__RF_data
            [0U];
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ 
                                                  (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                   [vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][0U] 
                                                   >> 1U))) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][1U] 
                          >> 0xfU)) == vlSelf->core__DOT__CDB_tag
                [0U]))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelf->core__DOT__CDB_result[0U];
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ 
                                                  (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                   [vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][0U] 
                                                   >> 1U))) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][1U] 
                          >> 0xfU)) == vlSelf->core__DOT__CDB_tag
                [1U]))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelf->core__DOT__CDB_result[1U];
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ 
                                                  (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                   [vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][0U] 
                                                   >> 1U))) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][1U] 
                          >> 0xfU)) == vlSelf->core__DOT__CDB_tag
                [2U]))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelf->core__DOT__CDB_result[2U];
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ 
                                                  (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                   [vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][0U] 
                                                   >> 1U))) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][1U] 
                          >> 0xfU)) == vlSelf->core__DOT__CDB_tag
                [3U]))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelf->core__DOT__CDB_result[3U];
        }
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs2_data_selected 
            = vlSelf->core__DOT__issue__DOT____Vcellinp__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__RF_data
            [1U];
        if (((vlSelf->core__DOT__CDB_valid[0U] & (~ 
                                                  vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                  [vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][0U])) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][1U] 
                          >> 9U)) == vlSelf->core__DOT__CDB_tag
                [0U]))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelf->core__DOT__CDB_result[0U];
        }
        if (((vlSelf->core__DOT__CDB_valid[1U] & (~ 
                                                  vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                  [vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][0U])) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][1U] 
                          >> 9U)) == vlSelf->core__DOT__CDB_tag
                [1U]))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelf->core__DOT__CDB_result[1U];
        }
        if (((vlSelf->core__DOT__CDB_valid[2U] & (~ 
                                                  vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                  [vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][0U])) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][1U] 
                          >> 9U)) == vlSelf->core__DOT__CDB_tag
                [2U]))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelf->core__DOT__CDB_result[2U];
        }
        if (((vlSelf->core__DOT__CDB_valid[3U] & (~ 
                                                  vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                                  [vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][0U])) 
             & ((0x3fU & (vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                          [vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][1U] 
                          >> 9U)) == vlSelf->core__DOT__CDB_tag
                [3U]))) {
            vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelf->core__DOT__CDB_result[3U];
        }
    }
    vlSelf->core__DOT__fetch__DOT__IA__DOT__pc_align 
        = (0U == (7U & vlSelf->core__DOT__prefetch__DOT__PC__DOT__pc_reg));
    vlSelf->core__DOT__fetch__DOT__IA__DOT__pc_valid[0U] 
        = vlSelf->core__DOT__fetch__DOT__IA__DOT__pc_align;
    vlSelf->core__DOT__fetch__DOT__aligner_out[0U][2U] 
        = (1U & ((~ (IData)(vlSelf->core__DOT__fetch__DOT__invalidate)) 
                 & vlSelf->core__DOT__fetch__DOT__IA__DOT__pc_valid
                 [0U]));
    vlSelf->core__DOT__fetch__DOT__aligner_out[0U][1U] 
        = vlSelf->core__DOT__prefetch__DOT__PC__DOT__pc_reg;
    vlSelf->core__DOT__fetch__DOT__IA__DOT__pc_valid[1U] = 1U;
    vlSelf->core__DOT__fetch__DOT__aligner_out[1U][2U] 
        = (1U & ((~ (IData)(vlSelf->core__DOT__fetch__DOT__invalidate)) 
                 & vlSelf->core__DOT__fetch__DOT__IA__DOT__pc_valid
                 [1U]));
    vlSelf->core__DOT__fetch__DOT__aligner_out[1U][1U] 
        = ((IData)(vlSelf->core__DOT__fetch__DOT__IA__DOT__pc_align)
            ? ((IData)(4U) + vlSelf->core__DOT__prefetch__DOT__PC__DOT__pc_reg)
            : vlSelf->core__DOT__prefetch__DOT__PC__DOT__pc_reg);
    vlSelf->core__DOT__consumed = ((0U == (((IData)(vlSelf->core__DOT__fetch__DOT__invalidate) 
                                            << 1U) 
                                           | (IData)(vlSelf->core__DOT__fetch__DOT__IA__DOT__pc_align)))
                                    ? 1U : ((1U == 
                                             (((IData)(vlSelf->core__DOT__fetch__DOT__invalidate) 
                                               << 1U) 
                                              | (IData)(vlSelf->core__DOT__fetch__DOT__IA__DOT__pc_align)))
                                             ? 2U : 
                                            ((2U == 
                                              (((IData)(vlSelf->core__DOT__fetch__DOT__invalidate) 
                                                << 1U) 
                                               | (IData)(vlSelf->core__DOT__fetch__DOT__IA__DOT__pc_align)))
                                              ? 0U : 2U)));
    vlSelf->core__DOT__fetch__DOT__FB__DOT__in_valid_count = 0U;
    if ((1U & vlSelf->core__DOT__fetch__DOT__aligner_out
         [0U][2U])) {
        vlSelf->core__DOT__fetch__DOT__FB__DOT__in_valid_count 
            = (3U & ((IData)(1U) + (IData)(vlSelf->core__DOT__fetch__DOT__FB__DOT__in_valid_count)));
    }
    if ((1U & vlSelf->core__DOT__fetch__DOT__aligner_out
         [1U][2U])) {
        vlSelf->core__DOT__fetch__DOT__FB__DOT__in_valid_count 
            = (3U & ((IData)(1U) + (IData)(vlSelf->core__DOT__fetch__DOT__FB__DOT__in_valid_count)));
    }
    vlSelf->core__DOT__fetch__DOT__pc_array[0U] = vlSelf->core__DOT__fetch__DOT__aligner_out
        [0U][1U];
    vlSelf->core__DOT__fetch__DOT__pc_array[1U] = vlSelf->core__DOT__fetch__DOT__aligner_out
        [1U][1U];
    vlSelf->core__DOT__fetch__DOT__valid[0U] = (1U 
                                                & vlSelf->core__DOT__fetch__DOT__aligner_out
                                                [0U][2U]);
    vlSelf->core__DOT__fetch__DOT__valid[1U] = (1U 
                                                & vlSelf->core__DOT__fetch__DOT__aligner_out
                                                [1U][2U]);
    vlSelf->core__DOT__fetch__DOT__iw = vlSelf->core__DOT__fetch__DOT__aligner_out
        [0U][0U];
    vlSelf->core__DOT__fetch__DOT__opcode[0U] = (0x7fU 
                                                 & vlSelf->core__DOT__fetch__DOT__iw);
    vlSelf->core__DOT__fetch__DOT__imm[0U] = ((0x100000U 
                                               & (vlSelf->core__DOT__fetch__DOT__iw 
                                                  >> 0xbU)) 
                                              | ((0xff000U 
                                                  & vlSelf->core__DOT__fetch__DOT__iw) 
                                                 | ((0x800U 
                                                     & (vlSelf->core__DOT__fetch__DOT__iw 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->core__DOT__fetch__DOT__iw 
                                                          >> 0x14U)))));
    vlSelf->core__DOT__fetch__DOT__iw = vlSelf->core__DOT__fetch__DOT__aligner_out
        [1U][0U];
    vlSelf->core__DOT__fetch__DOT__opcode[1U] = (0x7fU 
                                                 & vlSelf->core__DOT__fetch__DOT__iw);
    vlSelf->core__DOT__fetch__DOT__imm[1U] = ((0x100000U 
                                               & (vlSelf->core__DOT__fetch__DOT__iw 
                                                  >> 0xbU)) 
                                              | ((0xff000U 
                                                  & vlSelf->core__DOT__fetch__DOT__iw) 
                                                 | ((0x800U 
                                                     & (vlSelf->core__DOT__fetch__DOT__iw 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->core__DOT__fetch__DOT__iw 
                                                          >> 0x14U)))));
    vlSelf->core__DOT__fetch__DOT__JTA1__DOT__jump_valid = 0U;
    vlSelf->core__DOT__fetch__DOT__JTA1__DOT__jump_index = 0U;
    if (vlSelf->core__DOT__fetch__DOT__valid[0U]) {
        if (((~ (IData)(vlSelf->core__DOT__fetch__DOT__JTA1__DOT__jump_valid)) 
             & (0x6fU == vlSelf->core__DOT__fetch__DOT__opcode
                [0U]))) {
            vlSelf->core__DOT__fetch__DOT__JTA1__DOT__jump_valid = 1U;
            vlSelf->core__DOT__fetch__DOT__JTA1__DOT__jump_index = 0U;
        }
    }
    vlSelf->core__DOT__fetch__DOT__JTA1__DOT__jump_valid = 0U;
    vlSelf->core__DOT__fetch__DOT__JTA1__DOT__jump_index = 0U;
    if (vlSelf->core__DOT__fetch__DOT__valid[1U]) {
        if (((~ (IData)(vlSelf->core__DOT__fetch__DOT__JTA1__DOT__jump_valid)) 
             & (0x6fU == vlSelf->core__DOT__fetch__DOT__opcode
                [1U]))) {
            vlSelf->core__DOT__fetch__DOT__JTA1__DOT__jump_valid = 1U;
            vlSelf->core__DOT__fetch__DOT__JTA1__DOT__jump_index = 1U;
        }
    }
    if (vlSelf->core__DOT__fetch__DOT__JTA1__DOT__jump_valid) {
        vlSelf->core__DOT__jump1 = 1U;
        vlSelf->core__DOT__jta1 = (vlSelf->core__DOT__fetch__DOT__pc_array
                                   [vlSelf->core__DOT__fetch__DOT__JTA1__DOT__jump_index] 
                                   + (((- (IData)((1U 
                                                   & (vlSelf->core__DOT__fetch__DOT__imm
                                                      [vlSelf->core__DOT__fetch__DOT__JTA1__DOT__jump_index] 
                                                      >> 0x14U)))) 
                                       << 0x15U) | 
                                      vlSelf->core__DOT__fetch__DOT__imm
                                      [vlSelf->core__DOT__fetch__DOT__JTA1__DOT__jump_index]));
    } else {
        vlSelf->core__DOT__jump1 = 0U;
        vlSelf->core__DOT__jta1 = 0U;
    }
    vlSelf->core__DOT__prefetch__DOT__in_pc = ((0U 
                                                == 
                                                (((IData)(vlSelf->core__DOT__jump2) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->core__DOT__jump1)))
                                                ? (
                                                   VL_SHIFTL_III(32,32,32, 
                                                                 (1U 
                                                                  & (IData)(vlSelf->core__DOT__consumed)), 2U) 
                                                   + vlSelf->core__DOT__prefetch__DOT__PC__DOT__pc_reg)
                                                : (
                                                   (1U 
                                                    == 
                                                    (((IData)(vlSelf->core__DOT__jump2) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->core__DOT__jump1)))
                                                    ? vlSelf->core__DOT__jta1
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (((IData)(vlSelf->core__DOT__jump2) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->core__DOT__jump1)))
                                                     ? vlSelf->core__DOT__jta2
                                                     : 
                                                    (VL_SHIFTL_III(32,32,32, 
                                                                   (1U 
                                                                    & (IData)(vlSelf->core__DOT__consumed)), 2U) 
                                                     + vlSelf->core__DOT__prefetch__DOT__PC__DOT__pc_reg))));
}

void Vcore___024root___nba_sequent__TOP__0(Vcore___024root* vlSelf);
void Vcore___024root___nba_sequent__TOP__1(Vcore___024root* vlSelf);
void Vcore___024root___nba_sequent__TOP__2(Vcore___024root* vlSelf);
void Vcore___024root___nba_sequent__TOP__3(Vcore___024root* vlSelf);
void Vcore___024root___nba_sequent__TOP__4(Vcore___024root* vlSelf);
void Vcore___024root___nba_sequent__TOP__5(Vcore___024root* vlSelf);
void Vcore___024root___nba_sequent__TOP__6(Vcore___024root* vlSelf);
void Vcore___024root___nba_comb__TOP__0(Vcore___024root* vlSelf);
void Vcore___024root___act_sequent__TOP__1(Vcore___024root* vlSelf);
void Vcore___024root___act_sequent__TOP__0(Vcore___024root* vlSelf);
void Vcore___024root___act_sequent__TOP__2(Vcore___024root* vlSelf);
void Vcore___024root___act_sequent__TOP__3(Vcore___024root* vlSelf);
void Vcore___024root___act_sequent__TOP__4(Vcore___024root* vlSelf);
void Vcore___024root___act_sequent__TOP__5(Vcore___024root* vlSelf);
void Vcore___024root___act_sequent__TOP__6(Vcore___024root* vlSelf);
void Vcore___024root___act_comb__TOP__0(Vcore___024root* vlSelf);
void Vcore___024root___act_comb__TOP__1(Vcore___024root* vlSelf);
void Vcore___024root___act_comb__TOP__2(Vcore___024root* vlSelf);
void Vcore___024root___act_comb__TOP__4(Vcore___024root* vlSelf);
void Vcore___024root___act_comb__TOP__3(Vcore___024root* vlSelf);

void Vcore___024root___eval_nba(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_nba\n"); );
    // Body
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcore___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcore___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        Vcore___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcore___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
        Vcore___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcore___024root___nba_sequent__TOP__5(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcore___024root___nba_sequent__TOP__6(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((0x300ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcore___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((0x180ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcore___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x140ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcore___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x102ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcore___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x108ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcore___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((0x120ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcore___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcore___024root___nba_sequent__TOP__7(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if ((0x210ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcore___024root___act_sequent__TOP__5(vlSelf);
    }
    if ((0x204ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcore___024root___act_sequent__TOP__6(vlSelf);
    }
    if ((0x160ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcore___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x300ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcore___024root___nba_comb__TOP__9(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((0x318ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcore___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0x306ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcore___024root___act_comb__TOP__2(vlSelf);
    }
    if ((0x301ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcore___024root___nba_comb__TOP__12(vlSelf);
        vlSelf->__Vm_traceActivity[0xaU] = 1U;
    }
    if ((0x37eULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcore___024root___act_comb__TOP__4(vlSelf);
    }
    if ((0x381ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vcore___024root___act_comb__TOP__3(vlSelf);
    }
}

void Vcore___024root___eval_triggers__act(Vcore___024root* vlSelf);
void Vcore___024root___eval_act(Vcore___024root* vlSelf);

bool Vcore___024root___eval_phase__act(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<11> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcore___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vcore___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcore___024root___eval_phase__nba(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcore___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__nba(Vcore___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__act(Vcore___024root* vlSelf);
#endif  // VL_DEBUG

void Vcore___024root___eval(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vcore___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/core.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vcore___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/core.sv", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vcore___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vcore___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcore___024root___eval_debug_assertions(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->clk_m & 0xfeU))) {
        Verilated::overWidthError("clk_m");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->rst_m & 0xfeU))) {
        Verilated::overWidthError("rst_m");}
}
#endif  // VL_DEBUG
