// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

extern const VlUnpacked<CData/*2:0*/, 256> Vcore__ConstPool__TABLE_h8a4978b1_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vcore__ConstPool__TABLE_h58e7fb54_0;

VL_ATTR_COLD void Vcore___024root___stl_sequent__TOP__2(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___stl_sequent__TOP__2\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout;
    __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh;
    __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh = 0;
    CData/*5:0*/ __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout;
    __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh;
    __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh = 0;
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*7:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    if ((1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[2U][2U])) {
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[2U][0U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[2U][0U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[2U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[2U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[2U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[2U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[2U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[2U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[2U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[2U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask 
            = ((0xfbU & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 2U));
    }
    if ((1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[3U][2U])) {
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[3U][0U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[3U][0U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[3U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[3U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[3U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[3U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[3U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[3U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[3U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[3U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask 
            = ((0xf7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 3U));
    }
    if ((1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[4U][2U])) {
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[4U][0U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[4U][0U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[4U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[4U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[4U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[4U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[4U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[4U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[4U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[4U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask 
            = ((0xefU & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 4U));
    }
    if ((1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[5U][2U])) {
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[5U][0U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[5U][0U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[5U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[5U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[5U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[5U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[5U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[5U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[5U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[5U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask 
            = ((0xdfU & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 5U));
    }
    if ((1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[6U][2U])) {
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[6U][0U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[6U][0U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[6U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[6U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[6U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[6U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[6U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[6U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[6U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[6U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask 
            = ((0xbfU & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 6U));
    }
    if ((1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[7U][2U])) {
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[7U][0U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[7U][0U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[7U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[7U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[7U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[7U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[7U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[7U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[7U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[7U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask 
            = ((0x7fU & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 7U));
    }
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask = 0U;
    if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][3U])) {
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][0U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][0U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0xfeU & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | ((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                  & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)));
    }
    if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][3U])) {
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][0U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][0U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0xfdU & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 1U));
    }
    if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][3U])) {
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][0U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][0U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0xfbU & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 2U));
    }
    if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][3U])) {
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][0U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][0U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0xf7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 3U));
    }
    if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][3U])) {
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][0U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][0U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0xefU & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 4U));
    }
    if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][3U])) {
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][0U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][0U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0xdfU & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 5U));
    }
    if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][3U])) {
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][0U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][0U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0xbfU & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 6U));
    }
    if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][3U])) {
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][0U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][0U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0x7fU & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 7U));
    }
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask = 0U;
    if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][3U])) {
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][0U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][0U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0xfeU & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | ((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                  & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)));
    }
    if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][3U])) {
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][0U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][0U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0xfdU & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 1U));
    }
    if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][3U])) {
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][0U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][0U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0xfbU & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 2U));
    }
    if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][3U])) {
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][0U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][0U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0xf7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 3U));
    }
    if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][3U])) {
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][0U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][0U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0xefU & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 4U));
    }
    if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][3U])) {
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][0U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][0U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0xdfU & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 5U));
    }
    if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][3U])) {
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][0U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][0U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0xbfU & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 6U));
    }
    if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][3U])) {
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][0U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][0U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][1U] 
                                >> 0x00000017U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][1U] 
                                >> 0x00000011U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask 
            = ((0x7fU & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 7U));
    }
    vlSelfRef.core__DOT__fetch__DOT__FB__DOT__idx_head 
        = vlSelfRef.core__DOT__fetch__DOT__FB__DOT__head;
    if ((0U < (IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__out_count))) {
        vlSelfRef.core__DOT__fetch_instr[0U][0U] = 
            ((vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer
              [vlSelfRef.core__DOT__fetch__DOT__FB__DOT__idx_head][2U] 
              << 0x00000019U) | (vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer
                                 [vlSelfRef.core__DOT__fetch__DOT__FB__DOT__idx_head][1U] 
                                 >> 7U));
        vlSelfRef.core__DOT__fetch_instr[0U][1U] = 
            ((vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer
              [vlSelfRef.core__DOT__fetch__DOT__FB__DOT__idx_head][1U] 
              << 0x00000019U) | (vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer
                                 [vlSelfRef.core__DOT__fetch__DOT__FB__DOT__idx_head][0U] 
                                 >> 7U));
        vlSelfRef.core__DOT__fetch_instr[0U][2U] = 
            (0x00000080U | vlSelfRef.core__DOT__fetch_instr[0U][2U]);
    } else {
        vlSelfRef.core__DOT__fetch_instr[0U][2U] = 
            (0x0000007fU & vlSelfRef.core__DOT__fetch_instr[0U][2U]);
    }
    vlSelfRef.core__DOT__fetch__DOT__FB__DOT__idx_head 
        = (0x0000000fU & ((0x00000010U > ((IData)(1U) 
                                          + (IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__head)))
                           ? ((IData)(1U) + (IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__head))
                           : ((IData)(0xfffffff1U) 
                              + (IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__head))));
    if ((1U < (IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__out_count))) {
        vlSelfRef.core__DOT__fetch_instr[1U][0U] = 
            ((vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer
              [vlSelfRef.core__DOT__fetch__DOT__FB__DOT__idx_head][2U] 
              << 0x00000019U) | (vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer
                                 [vlSelfRef.core__DOT__fetch__DOT__FB__DOT__idx_head][1U] 
                                 >> 7U));
        vlSelfRef.core__DOT__fetch_instr[1U][1U] = 
            ((vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer
              [vlSelfRef.core__DOT__fetch__DOT__FB__DOT__idx_head][1U] 
              << 0x00000019U) | (vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer
                                 [vlSelfRef.core__DOT__fetch__DOT__FB__DOT__idx_head][0U] 
                                 >> 7U));
        vlSelfRef.core__DOT__fetch_instr[1U][2U] = 
            (0x00000080U | vlSelfRef.core__DOT__fetch_instr[1U][2U]);
    } else {
        vlSelfRef.core__DOT__fetch_instr[1U][2U] = 
            (0x0000007fU & vlSelfRef.core__DOT__fetch_instr[1U][2U]);
    }
    __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
        = vlSelfRef.core__DOT__rename__DOT__onehot[0U];
    __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0U;
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x3fU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x3fU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x3eU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x3eU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x3dU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x3dU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x3cU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x3cU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x3bU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x3bU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x3aU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x3aU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x39U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x39U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x38U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x38U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x37U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x37U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x36U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x36U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x35U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x35U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x34U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x34U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x33U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x33U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x32U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x32U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x31U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x31U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x30U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x30U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x2fU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x2fU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x2eU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x2eU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x2dU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x2dU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x2cU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x2cU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x2bU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x2bU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x2aU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x2aU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x29U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x29U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x28U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x28U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x27U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x27U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x26U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x26U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x25U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x25U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x24U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x24U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x23U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x23U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x22U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x22U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x21U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x21U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x20U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x20U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x1fU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x1fU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x1eU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x1eU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x1dU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x1dU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x1cU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x1cU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x1bU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x1bU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x1aU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x1aU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x19U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x19U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x18U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x18U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x17U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x17U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x16U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x16U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x15U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x15U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x14U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x14U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x13U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x13U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x12U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x12U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x11U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x11U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x10U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x10U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x0fU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x0fU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x0eU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x0eU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x0dU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x0dU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x0cU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x0cU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x0bU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x0bU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 0x0aU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0x0aU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 9U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 9U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 8U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 8U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 7U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 7U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 6U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 6U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 5U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 5U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 4U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 4U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 3U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 3U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 2U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 2U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh 
                       >> 1U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 1U;
    }
    if ((1U & (IData)(__Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__oh))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout = 0U;
    }
    vlSelfRef.core__DOT__rename__DOT__chosen[0U] = __Vfunc_core__DOT__rename__DOT__onehot_to_bin__0__Vfuncout;
    __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
        = vlSelfRef.core__DOT__rename__DOT__onehot[1U];
    __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0U;
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x3fU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x3fU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x3eU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x3eU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x3dU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x3dU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x3cU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x3cU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x3bU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x3bU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x3aU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x3aU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x39U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x39U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x38U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x38U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x37U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x37U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x36U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x36U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x35U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x35U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x34U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x34U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x33U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x33U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x32U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x32U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x31U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x31U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x30U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x30U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x2fU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x2fU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x2eU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x2eU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x2dU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x2dU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x2cU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x2cU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x2bU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x2bU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x2aU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x2aU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x29U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x29U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x28U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x28U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x27U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x27U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x26U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x26U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x25U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x25U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x24U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x24U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x23U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x23U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x22U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x22U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x21U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x21U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x20U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x20U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x1fU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x1fU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x1eU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x1eU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x1dU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x1dU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x1cU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x1cU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x1bU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x1bU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x1aU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x1aU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x19U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x19U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x18U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x18U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x17U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x17U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x16U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x16U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x15U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x15U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x14U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x14U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x13U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x13U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x12U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x12U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x11U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x11U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x10U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x10U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x0fU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x0fU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x0eU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x0eU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x0dU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x0dU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x0cU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x0cU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x0bU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x0bU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 0x0aU)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0x0aU;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 9U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 9U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 8U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 8U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 7U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 7U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 6U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 6U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 5U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 5U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 4U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 4U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 3U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 3U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 2U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 2U;
    }
    if ((1U & (IData)((__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh 
                       >> 1U)))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 1U;
    }
    if ((1U & (IData)(__Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__oh))) {
        __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout = 0U;
    }
    vlSelfRef.core__DOT__rename__DOT__chosen[1U] = __Vfunc_core__DOT__rename__DOT__onehot_to_bin__1__Vfuncout;
    __Vtableidx3 = vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask;
    vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx 
        = Vcore__ConstPool__TABLE_h8a4978b1_0[__Vtableidx3];
    vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_found 
        = Vcore__ConstPool__TABLE_h58e7fb54_0[__Vtableidx3];
    __Vtableidx4 = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask;
    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx 
        = Vcore__ConstPool__TABLE_h8a4978b1_0[__Vtableidx4];
    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_found 
        = Vcore__ConstPool__TABLE_h58e7fb54_0[__Vtableidx4];
    __Vtableidx1 = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask;
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx 
        = Vcore__ConstPool__TABLE_h8a4978b1_0[__Vtableidx1];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_found 
        = Vcore__ConstPool__TABLE_h58e7fb54_0[__Vtableidx1];
    __Vtableidx2 = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask;
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx 
        = Vcore__ConstPool__TABLE_h8a4978b1_0[__Vtableidx2];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_found 
        = Vcore__ConstPool__TABLE_h58e7fb54_0[__Vtableidx2];
    vlSelfRef.core__DOT__fetch__DOT__OUT_instr[0U][0U] 
        = vlSelfRef.core__DOT__fetch_instr[0U][0U];
    vlSelfRef.core__DOT__fetch__DOT__OUT_instr[0U][1U] 
        = vlSelfRef.core__DOT__fetch_instr[0U][1U];
    vlSelfRef.core__DOT__fetch__DOT__OUT_instr[0U][2U] 
        = vlSelfRef.core__DOT__fetch_instr[0U][2U];
    vlSelfRef.core__DOT__fetch__DOT__OUT_instr[1U][0U] 
        = vlSelfRef.core__DOT__fetch_instr[1U][0U];
    vlSelfRef.core__DOT__fetch__DOT__OUT_instr[1U][1U] 
        = vlSelfRef.core__DOT__fetch_instr[1U][1U];
    vlSelfRef.core__DOT__fetch__DOT__OUT_instr[1U][2U] 
        = vlSelfRef.core__DOT__fetch_instr[1U][2U];
    vlSelfRef.core__DOT__fetch__DOT__FB__DOT__OUT_instr[0U][0U] 
        = vlSelfRef.core__DOT__fetch_instr[0U][0U];
    vlSelfRef.core__DOT__fetch__DOT__FB__DOT__OUT_instr[0U][1U] 
        = vlSelfRef.core__DOT__fetch_instr[0U][1U];
    vlSelfRef.core__DOT__fetch__DOT__FB__DOT__OUT_instr[0U][2U] 
        = vlSelfRef.core__DOT__fetch_instr[0U][2U];
    vlSelfRef.core__DOT__fetch__DOT__FB__DOT__OUT_instr[1U][0U] 
        = vlSelfRef.core__DOT__fetch_instr[1U][0U];
    vlSelfRef.core__DOT__fetch__DOT__FB__DOT__OUT_instr[1U][1U] 
        = vlSelfRef.core__DOT__fetch_instr[1U][1U];
    vlSelfRef.core__DOT__fetch__DOT__FB__DOT__OUT_instr[1U][2U] 
        = vlSelfRef.core__DOT__fetch_instr[1U][2U];
    vlSelfRef.core__DOT__decode__DOT__IN_instr[0U][0U] 
        = vlSelfRef.core__DOT__fetch_instr[0U][0U];
    vlSelfRef.core__DOT__decode__DOT__IN_instr[0U][1U] 
        = vlSelfRef.core__DOT__fetch_instr[0U][1U];
    vlSelfRef.core__DOT__decode__DOT__IN_instr[0U][2U] 
        = vlSelfRef.core__DOT__fetch_instr[0U][2U];
    vlSelfRef.core__DOT__decode__DOT__IN_instr[1U][0U] 
        = vlSelfRef.core__DOT__fetch_instr[1U][0U];
    vlSelfRef.core__DOT__decode__DOT__IN_instr[1U][1U] 
        = vlSelfRef.core__DOT__fetch_instr[1U][1U];
    vlSelfRef.core__DOT__decode__DOT__IN_instr[1U][2U] 
        = vlSelfRef.core__DOT__fetch_instr[1U][2U];
    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IN_instr[0U][0U] 
        = vlSelfRef.core__DOT__fetch_instr[0U][0U];
    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IN_instr[0U][1U] 
        = vlSelfRef.core__DOT__fetch_instr[0U][1U];
    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IN_instr[0U][2U] 
        = vlSelfRef.core__DOT__fetch_instr[0U][2U];
    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IN_instr[1U][0U] 
        = vlSelfRef.core__DOT__fetch_instr[1U][0U];
    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IN_instr[1U][1U] 
        = vlSelfRef.core__DOT__fetch_instr[1U][1U];
    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IN_instr[1U][2U] 
        = vlSelfRef.core__DOT__fetch_instr[1U][2U];
    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__IN_instr[0U][0U] 
        = vlSelfRef.core__DOT__fetch_instr[0U][0U];
    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__IN_instr[0U][1U] 
        = vlSelfRef.core__DOT__fetch_instr[0U][1U];
    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__IN_instr[0U][2U] 
        = vlSelfRef.core__DOT__fetch_instr[0U][2U];
    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__IN_instr[1U][0U] 
        = vlSelfRef.core__DOT__fetch_instr[1U][0U];
    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__IN_instr[1U][1U] 
        = vlSelfRef.core__DOT__fetch_instr[1U][1U];
    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__IN_instr[1U][2U] 
        = vlSelfRef.core__DOT__fetch_instr[1U][2U];
    if ((0x00000080U & vlSelfRef.core__DOT__fetch_instr[0U][2U])) {
        vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
            = vlSelfRef.core__DOT__fetch_instr[0U][0U];
        vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode 
            = (0x0000007fU & vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw);
        if ((0x00000040U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
            if ((0x00000020U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                if ((0x00000010U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] = 0U;
                } else if ((8U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                    if ((4U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                                vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm21 
                                    = ((((0x00000200U 
                                          & (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                             >> 0x00000016U)) 
                                         | ((0x000001feU 
                                             & (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                >> 0x0000000bU)) 
                                            | (1U & 
                                               (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                >> 0x14U)))) 
                                        << 0x0000000bU) 
                                       | (0x000007feU 
                                          & (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                             >> 0x00000014U)));
                                vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] 
                                    = (((- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm21 
                                                       >> 0x14U)))) 
                                        << 0x00000015U) 
                                       | vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm21);
                            } else {
                                vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] = 0U;
                            }
                        } else {
                            vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] = 0U;
                        }
                    } else {
                        vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] = 0U;
                    }
                } else if ((4U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] 
                        = ((2U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                            ? ((1U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                ? (((- (IData)((vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                >> 0x1fU))) 
                                    << 0x0000000cU) 
                                   | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                      >> 0x14U)) : 0U)
                            : 0U);
                } else if ((2U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                        vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm13 
                            = ((((2U & (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                        >> 0x0000001eU)) 
                                 | (1U & (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                          >> 7U))) 
                                << 0x0000000bU) | (
                                                   (0x000007e0U 
                                                    & (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                       >> 0x00000014U)) 
                                                   | (0x0000001eU 
                                                      & (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                         >> 7U))));
                        vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] 
                            = (((- (IData)((1U & ((IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm13) 
                                                  >> 0x0cU)))) 
                                << 0x0000000dU) | (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm13));
                    } else {
                        vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] = 0U;
                    }
                } else {
                    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] = 0U;
                }
            } else {
                vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] = 0U;
            }
        } else if ((0x00000020U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
            if ((0x00000010U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] 
                    = ((8U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                        ? 0U : ((4U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                 ? ((2U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                     ? ((1U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                         ? (0xfffff000U 
                                            & vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw)
                                         : 0U) : 0U)
                                 : 0U));
            } else if ((8U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] = 0U;
            } else if ((4U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] = 0U;
            } else if ((2U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm12 
                        = ((0x00000fe0U & (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                           >> 0x00000014U)) 
                           | (0x0000001fU & (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                             >> 7U)));
                    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm12) 
                                              >> 0x0bU)))) 
                            << 0x0000000cU) | (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm12));
                } else {
                    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] = 0U;
                }
            } else {
                vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] = 0U;
            }
        } else if ((0x00000010U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
            if ((8U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] = 0U;
            } else if ((4U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] 
                    = ((2U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                        ? ((1U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                            ? (0xfffff000U & vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw)
                            : 0U) : 0U);
            } else if ((2U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__funct3 
                        = (7U & (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                 >> 0x0cU));
                    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] 
                        = (((1U == (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__funct3)) 
                            | (5U == (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__funct3)))
                            ? (0x0000001fU & (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                              >> 0x14U))
                            : (((- (IData)((vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                            >> 0x1fU))) 
                                << 0x0000000cU) | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                   >> 0x14U)));
                } else {
                    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] = 0U;
                }
            } else {
                vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] = 0U;
            }
        } else {
            vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] 
                = ((8U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                    ? 0U : ((4U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                             ? 0U : ((2U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                      ? ((1U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                          ? (((- (IData)(
                                                         (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                          >> 0x1fU))) 
                                              << 0x0000000cU) 
                                             | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                >> 0x14U))
                                          : 0U) : 0U)));
        }
    } else {
        vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] = 0U;
    }
    if ((0x00000080U & vlSelfRef.core__DOT__fetch_instr[1U][2U])) {
        vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
            = vlSelfRef.core__DOT__fetch_instr[1U][0U];
        vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode 
            = (0x0000007fU & vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw);
        if ((0x00000040U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
            if ((0x00000020U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                if ((0x00000010U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] = 0U;
                } else if ((8U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                    if ((4U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                        if ((2U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                            if ((1U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                                vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm21 
                                    = ((((0x00000200U 
                                          & (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                             >> 0x00000016U)) 
                                         | ((0x000001feU 
                                             & (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                >> 0x0000000bU)) 
                                            | (1U & 
                                               (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                >> 0x14U)))) 
                                        << 0x0000000bU) 
                                       | (0x000007feU 
                                          & (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                             >> 0x00000014U)));
                                vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] 
                                    = (((- (IData)(
                                                   (1U 
                                                    & (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm21 
                                                       >> 0x14U)))) 
                                        << 0x00000015U) 
                                       | vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm21);
                            } else {
                                vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] = 0U;
                            }
                        } else {
                            vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] = 0U;
                        }
                    } else {
                        vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] = 0U;
                    }
                } else if ((4U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] 
                        = ((2U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                            ? ((1U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                ? (((- (IData)((vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                >> 0x1fU))) 
                                    << 0x0000000cU) 
                                   | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                      >> 0x14U)) : 0U)
                            : 0U);
                } else if ((2U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                    if ((1U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                        vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm13 
                            = ((((2U & (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                        >> 0x0000001eU)) 
                                 | (1U & (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                          >> 7U))) 
                                << 0x0000000bU) | (
                                                   (0x000007e0U 
                                                    & (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                       >> 0x00000014U)) 
                                                   | (0x0000001eU 
                                                      & (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                         >> 7U))));
                        vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] 
                            = (((- (IData)((1U & ((IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm13) 
                                                  >> 0x0cU)))) 
                                << 0x0000000dU) | (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm13));
                    } else {
                        vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] = 0U;
                    }
                } else {
                    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] = 0U;
                }
            } else {
                vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] = 0U;
            }
        } else if ((0x00000020U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
            if ((0x00000010U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] 
                    = ((8U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                        ? 0U : ((4U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                 ? ((2U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                     ? ((1U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                         ? (0xfffff000U 
                                            & vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw)
                                         : 0U) : 0U)
                                 : 0U));
            } else if ((8U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] = 0U;
            } else if ((4U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] = 0U;
            } else if ((2U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm12 
                        = ((0x00000fe0U & (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                           >> 0x00000014U)) 
                           | (0x0000001fU & (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                             >> 7U)));
                    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] 
                        = (((- (IData)((1U & ((IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm12) 
                                              >> 0x0bU)))) 
                            << 0x0000000cU) | (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm12));
                } else {
                    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] = 0U;
                }
            } else {
                vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] = 0U;
            }
        } else if ((0x00000010U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
            if ((8U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] = 0U;
            } else if ((4U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] 
                    = ((2U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                        ? ((1U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                            ? (0xfffff000U & vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw)
                            : 0U) : 0U);
            } else if ((2U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))) {
                    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__funct3 
                        = (7U & (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                 >> 0x0cU));
                    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] 
                        = (((1U == (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__funct3)) 
                            | (5U == (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__funct3)))
                            ? (0x0000001fU & (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                              >> 0x14U))
                            : (((- (IData)((vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                            >> 0x1fU))) 
                                << 0x0000000cU) | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                   >> 0x14U)));
                } else {
                    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] = 0U;
                }
            } else {
                vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] = 0U;
            }
        } else {
            vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] 
                = ((8U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                    ? 0U : ((4U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                             ? 0U : ((2U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                      ? ((1U & (IData)(vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                          ? (((- (IData)(
                                                         (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                          >> 0x1fU))) 
                                              << 0x0000000cU) 
                                             | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                >> 0x14U))
                                          : 0U) : 0U)));
        }
    } else {
        vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] = 0U;
    }
    vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__read_tag[0U] 
        = (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                          [vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx] 
                          >> 0x0000000eU));
    vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__read_tag[1U] 
        = (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                          [vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx] 
                          >> 8U));
    vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__read_tag[0U] 
        = (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                          [vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][1U] 
                          >> 0x0000000fU));
    vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__read_tag[1U] 
        = (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                          [vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][1U] 
                          >> 9U));
    vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__read_tag[0U] 
        = (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                          [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                          >> 0x00000017U));
    vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__read_tag[1U] 
        = (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                          [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                          >> 0x00000011U));
    vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__read_tag[0U] 
        = (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                          [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                          >> 0x00000017U));
    vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__read_tag[1U] 
        = (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                          [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                          >> 0x00000011U));
    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__immediate[0U] 
        = vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U];
    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__IG__DOT__immediate[1U] 
        = vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U];
    vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][3U] 
        = ((0x0000001fU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][3U]) 
           | (0x00000020U & (vlSelfRef.core__DOT__fetch_instr[0U][2U] 
                             >> 2U)));
    vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][2U] 
        = ((0x3fffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][2U]) 
           | (vlSelfRef.core__DOT__fetch_instr[0U][2U] 
              << 0x0000001eU));
    vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][3U] 
        = ((0x00000020U & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][3U]) 
           | (0x0000001fU & (vlSelfRef.core__DOT__fetch_instr[0U][2U] 
                             >> 2U)));
    vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
        = ((0x3fffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]) 
           | (vlSelfRef.core__DOT__fetch_instr[0U][1U] 
              << 0x0000001eU));
    vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][2U] 
        = ((0xc0000000U & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][2U]) 
           | (vlSelfRef.core__DOT__fetch_instr[0U][1U] 
              >> 2U));
    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[0U] 
        = (0x0000007fU & vlSelfRef.core__DOT__fetch_instr[0U][0U]);
    if (((((((((3U == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[0U]) 
               | (0x13U == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[0U])) 
              | (0x23U == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[0U])) 
             | (0x17U == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[0U])) 
            | (0x33U == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[0U])) 
           | (0x37U == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[0U])) 
          | (0x63U == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[0U])) 
         | (0x67U == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[0U]))) {
        if ((3U == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[0U])) {
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0x30000000U | vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = ((0xff07ffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]) 
                   | (0x00f80000U & (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                                     << 4U)));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xfff83fffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = ((0xffffc1ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]) 
                   | (0x00003e00U & (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                                     << 2U)));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = ((0x000001ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]) 
                   | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] 
                      << 9U));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = ((0xfffffe00U & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]) 
                   | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] 
                      >> 0x00000017U));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0x00000100U | vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xffffff3fU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xffffffc3U & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xfffffffcU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
            if ((0U == (7U & (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                              >> 0x0000000cU)))) {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]);
            } else if ((1U == (7U & (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                                     >> 0x0000000cU)))) {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0x01000000U | (0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]));
            } else if ((2U == (7U & (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                                     >> 0x0000000cU)))) {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0x02000000U | (0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]));
            } else if ((4U == (7U & (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                                     >> 0x0000000cU)))) {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0x03000000U | (0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]));
            } else if ((5U == (7U & (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                                     >> 0x0000000cU)))) {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0x04000000U | (0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]));
            }
        } else if ((0x13U == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[0U])) {
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0x10000000U | (0xcfffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = ((0xff07ffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]) 
                   | (0x00f80000U & (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                                     << 4U)));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xfff83fffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = ((0xffffc1ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]) 
                   | (0x00003e00U & (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                                     << 2U)));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = ((0x000001ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]) 
                   | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] 
                      << 9U));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = ((0xfffffe00U & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]) 
                   | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] 
                      >> 0x00000017U));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0x00000100U | vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xffffff3fU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xffffffc3U & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xfffffffcU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = ((0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]) 
                   | (((0x00004000U & vlSelfRef.core__DOT__fetch_instr[0U][0U])
                        ? ((0x00002000U & vlSelfRef.core__DOT__fetch_instr[0U][0U])
                            ? ((0x00001000U & vlSelfRef.core__DOT__fetch_instr[0U][0U])
                                ? 9U : 8U) : ((0x00001000U 
                                               & vlSelfRef.core__DOT__fetch_instr[0U][0U])
                                               ? ((0U 
                                                   == 
                                                   (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                                                    >> 0x00000019U))
                                                   ? 6U
                                                   : 7U)
                                               : 5U))
                        : ((0x00002000U & vlSelfRef.core__DOT__fetch_instr[0U][0U])
                            ? ((0x00001000U & vlSelfRef.core__DOT__fetch_instr[0U][0U])
                                ? 4U : 3U) : ((0x00001000U 
                                               & vlSelfRef.core__DOT__fetch_instr[0U][0U])
                                               ? 2U
                                               : 0U))) 
                      << 0x00000018U));
        } else if ((0x23U == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[0U])) {
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0x30000000U | vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = ((0xff07ffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]) 
                   | (0x00f80000U & (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                                     << 4U)));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = ((0xfff83fffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]) 
                   | (0x0007c000U & (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                                     >> 6U)));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xffffc1ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = ((0x000001ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]) 
                   | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] 
                      << 9U));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = ((0xfffffe00U & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]) 
                   | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] 
                      >> 0x00000017U));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0x00000100U | vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xffffff3fU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xffffffc3U & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xfffffffcU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
            if ((0U == (7U & (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                              >> 0x0000000cU)))) {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0x05000000U | (0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]));
            } else if ((1U == (7U & (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                                     >> 0x0000000cU)))) {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0x06000000U | (0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]));
            } else if ((2U == (7U & (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                                     >> 0x0000000cU)))) {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0x07000000U | (0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]));
            }
        } else if ((0x17U == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[0U])) {
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0x10000000U | (0xcfffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xff07ffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xfff83fffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = ((0xffffc1ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]) 
                   | (0x00003e00U & (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                                     << 2U)));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = ((0x000001ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]) 
                   | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] 
                      << 9U));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = ((0xfffffe00U & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]) 
                   | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] 
                      >> 0x00000017U));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0x00000100U | vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xffffff3fU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xffffffc3U & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (1U | (0xfffffffcU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]);
        } else if ((0x33U == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[0U])) {
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = ((0xff07ffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]) 
                   | (0x00f80000U & (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                                     << 4U)));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = ((0xfff83fffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]) 
                   | (0x0007c000U & (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                                     >> 6U)));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = ((0xffffc1ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]) 
                   | (0x00003e00U & (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                                     << 2U)));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0x000001ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xfffffe00U & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xfffffeffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xffffff3fU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xffffffc3U & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xfffffffcU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
            if ((1U == (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                        >> 0x00000019U))) {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0x20000000U | (0xcfffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]));
                vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = ((0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]) 
                       | (((0x00004000U & vlSelfRef.core__DOT__fetch_instr[0U][0U])
                            ? ((0x00002000U & vlSelfRef.core__DOT__fetch_instr[0U][0U])
                                ? ((0x00001000U & vlSelfRef.core__DOT__fetch_instr[0U][0U])
                                    ? 7U : 6U) : ((0x00001000U 
                                                   & vlSelfRef.core__DOT__fetch_instr[0U][0U])
                                                   ? 5U
                                                   : 4U))
                            : ((0x00002000U & vlSelfRef.core__DOT__fetch_instr[0U][0U])
                                ? ((0x00001000U & vlSelfRef.core__DOT__fetch_instr[0U][0U])
                                    ? 3U : 2U) : ((0x00001000U 
                                                   & vlSelfRef.core__DOT__fetch_instr[0U][0U])
                                                   ? 1U
                                                   : 0U))) 
                          << 0x00000018U));
            } else {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0x10000000U | (0xcfffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]));
                vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = ((0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]) 
                       | (((0x00004000U & vlSelfRef.core__DOT__fetch_instr[0U][0U])
                            ? ((0x00002000U & vlSelfRef.core__DOT__fetch_instr[0U][0U])
                                ? ((0x00001000U & vlSelfRef.core__DOT__fetch_instr[0U][0U])
                                    ? 9U : 8U) : ((0x00001000U 
                                                   & vlSelfRef.core__DOT__fetch_instr[0U][0U])
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                                                     >> 0x00000019U))
                                                    ? 6U
                                                    : 7U)
                                                   : 5U))
                            : ((0x00002000U & vlSelfRef.core__DOT__fetch_instr[0U][0U])
                                ? ((0x00001000U & vlSelfRef.core__DOT__fetch_instr[0U][0U])
                                    ? 4U : 3U) : ((0x00001000U 
                                                   & vlSelfRef.core__DOT__fetch_instr[0U][0U])
                                                   ? 2U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                                                     >> 0x00000019U))
                                                    ? 0U
                                                    : 1U)))) 
                          << 0x00000018U));
            }
        } else if ((0x37U == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[0U])) {
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0x10000000U | (0xcfffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xff07ffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xfff83fffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = ((0xffffc1ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]) 
                   | (0x00003e00U & (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                                     << 2U)));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = ((0x000001ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]) 
                   | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] 
                      << 9U));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = ((0xfffffe00U & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]) 
                   | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] 
                      >> 0x00000017U));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0x00000100U | vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xffffff3fU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xffffffc3U & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (2U | (0xfffffffcU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0x0a000000U | (0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]));
        } else if ((0x63U == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[0U])) {
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0x10000000U | (0xcfffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = ((0xff07ffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]) 
                   | (0x00f80000U & (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                                     << 4U)));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = ((0xfff83fffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]) 
                   | (0x0007c000U & (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                                     >> 6U)));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xffffc1ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = ((0x000001ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]) 
                   | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] 
                      << 9U));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = ((0xfffffe00U & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]) 
                   | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] 
                      >> 0x00000017U));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0x00000100U | vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xffffff3fU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0x0a000000U | (0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xfffffffcU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
            if ((0U == (7U & (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                              >> 0x0000000cU)))) {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (4U | (0xffffffc3U & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]));
            } else if ((1U == (7U & (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                                     >> 0x0000000cU)))) {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (8U | (0xffffffc3U & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]));
            } else if ((4U == (7U & (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                                     >> 0x0000000cU)))) {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0x0000000cU | (0xffffffc3U & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]));
            } else if ((5U == (7U & (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                                     >> 0x0000000cU)))) {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0x00000010U | (0xffffffc3U & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]));
            } else if ((6U == (7U & (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                                     >> 0x0000000cU)))) {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0x00000014U | (0xffffffc3U & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]));
            } else if ((7U == (7U & (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                                     >> 0x0000000cU)))) {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0x00000018U | (0xffffffc3U & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]));
            }
        } else {
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0x10000000U | (0xcfffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = ((0xff07ffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]) 
                   | (0x00f80000U & (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                                     << 4U)));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xfff83fffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = ((0xffffc1ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]) 
                   | (0x00003e00U & (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                                     << 2U)));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = ((0x000001ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]) 
                   | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] 
                      << 9U));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = ((0xfffffe00U & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]) 
                   | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] 
                      >> 0x00000017U));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0x00000100U | vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0x00000080U | (0xffffff3fU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xffffffc3U & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xfffffffcU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]);
        }
    } else if ((0x6fU == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[0U])) {
        vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
            = (0x10000000U | (0xcfffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]));
        vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
            = (0xff07ffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]);
        vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
            = (0xfff83fffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]);
        vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
            = ((0xffffc1ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]) 
               | (0x00003e00U & (vlSelfRef.core__DOT__fetch_instr[0U][0U] 
                                 << 2U)));
        vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
            = ((0x000001ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]) 
               | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] 
                  << 9U));
        vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
            = ((0xfffffe00U & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]) 
               | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[0U] 
                  >> 0x00000017U));
        vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
            = (0x00000100U | vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
        vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
            = (0x00000040U | (0xffffff3fU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]));
        vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
            = (0xffffffc3U & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
        vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U] 
            = (0xfffffffcU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U]);
        vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U] 
            = (0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U]);
    }
    vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][3U] 
        = ((0x0000001fU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][3U]) 
           | (0x00000020U & (vlSelfRef.core__DOT__fetch_instr[1U][2U] 
                             >> 2U)));
    vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][2U] 
        = ((0x3fffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][2U]) 
           | (vlSelfRef.core__DOT__fetch_instr[1U][2U] 
              << 0x0000001eU));
    vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][3U] 
        = ((0x00000020U & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][3U]) 
           | (0x0000001fU & (vlSelfRef.core__DOT__fetch_instr[1U][2U] 
                             >> 2U)));
    vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
        = ((0x3fffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]) 
           | (vlSelfRef.core__DOT__fetch_instr[1U][1U] 
              << 0x0000001eU));
    vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][2U] 
        = ((0xc0000000U & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][2U]) 
           | (vlSelfRef.core__DOT__fetch_instr[1U][1U] 
              >> 2U));
    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[1U] 
        = (0x0000007fU & vlSelfRef.core__DOT__fetch_instr[1U][0U]);
    if (((((((((3U == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[1U]) 
               | (0x13U == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[1U])) 
              | (0x23U == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[1U])) 
             | (0x17U == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[1U])) 
            | (0x33U == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[1U])) 
           | (0x37U == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[1U])) 
          | (0x63U == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[1U])) 
         | (0x67U == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[1U]))) {
        if ((3U == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[1U])) {
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0x30000000U | vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = ((0xff07ffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]) 
                   | (0x00f80000U & (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                                     << 4U)));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xfff83fffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = ((0xffffc1ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]) 
                   | (0x00003e00U & (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                                     << 2U)));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = ((0x000001ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]) 
                   | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] 
                      << 9U));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = ((0xfffffe00U & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]) 
                   | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] 
                      >> 0x00000017U));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0x00000100U | vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xffffff3fU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xffffffc3U & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xfffffffcU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
            if ((0U == (7U & (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                              >> 0x0000000cU)))) {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]);
            } else if ((1U == (7U & (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                                     >> 0x0000000cU)))) {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0x01000000U | (0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]));
            } else if ((2U == (7U & (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                                     >> 0x0000000cU)))) {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0x02000000U | (0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]));
            } else if ((4U == (7U & (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                                     >> 0x0000000cU)))) {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0x03000000U | (0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]));
            } else if ((5U == (7U & (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                                     >> 0x0000000cU)))) {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0x04000000U | (0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]));
            }
        } else if ((0x13U == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[1U])) {
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0x10000000U | (0xcfffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = ((0xff07ffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]) 
                   | (0x00f80000U & (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                                     << 4U)));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xfff83fffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = ((0xffffc1ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]) 
                   | (0x00003e00U & (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                                     << 2U)));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = ((0x000001ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]) 
                   | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] 
                      << 9U));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = ((0xfffffe00U & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]) 
                   | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] 
                      >> 0x00000017U));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0x00000100U | vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xffffff3fU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xffffffc3U & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xfffffffcU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = ((0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]) 
                   | (((0x00004000U & vlSelfRef.core__DOT__fetch_instr[1U][0U])
                        ? ((0x00002000U & vlSelfRef.core__DOT__fetch_instr[1U][0U])
                            ? ((0x00001000U & vlSelfRef.core__DOT__fetch_instr[1U][0U])
                                ? 9U : 8U) : ((0x00001000U 
                                               & vlSelfRef.core__DOT__fetch_instr[1U][0U])
                                               ? ((0U 
                                                   == 
                                                   (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                                                    >> 0x00000019U))
                                                   ? 6U
                                                   : 7U)
                                               : 5U))
                        : ((0x00002000U & vlSelfRef.core__DOT__fetch_instr[1U][0U])
                            ? ((0x00001000U & vlSelfRef.core__DOT__fetch_instr[1U][0U])
                                ? 4U : 3U) : ((0x00001000U 
                                               & vlSelfRef.core__DOT__fetch_instr[1U][0U])
                                               ? 2U
                                               : 0U))) 
                      << 0x00000018U));
        } else if ((0x23U == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[1U])) {
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0x30000000U | vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = ((0xff07ffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]) 
                   | (0x00f80000U & (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                                     << 4U)));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = ((0xfff83fffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]) 
                   | (0x0007c000U & (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                                     >> 6U)));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xffffc1ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = ((0x000001ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]) 
                   | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] 
                      << 9U));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = ((0xfffffe00U & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]) 
                   | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] 
                      >> 0x00000017U));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0x00000100U | vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xffffff3fU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xffffffc3U & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xfffffffcU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
            if ((0U == (7U & (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                              >> 0x0000000cU)))) {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0x05000000U | (0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]));
            } else if ((1U == (7U & (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                                     >> 0x0000000cU)))) {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0x06000000U | (0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]));
            } else if ((2U == (7U & (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                                     >> 0x0000000cU)))) {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0x07000000U | (0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]));
            }
        } else if ((0x17U == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[1U])) {
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0x10000000U | (0xcfffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xff07ffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xfff83fffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = ((0xffffc1ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]) 
                   | (0x00003e00U & (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                                     << 2U)));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = ((0x000001ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]) 
                   | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] 
                      << 9U));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = ((0xfffffe00U & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]) 
                   | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] 
                      >> 0x00000017U));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0x00000100U | vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xffffff3fU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xffffffc3U & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (1U | (0xfffffffcU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]);
        } else if ((0x33U == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[1U])) {
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = ((0xff07ffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]) 
                   | (0x00f80000U & (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                                     << 4U)));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = ((0xfff83fffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]) 
                   | (0x0007c000U & (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                                     >> 6U)));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = ((0xffffc1ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]) 
                   | (0x00003e00U & (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                                     << 2U)));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0x000001ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xfffffe00U & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xfffffeffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xffffff3fU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xffffffc3U & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xfffffffcU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
            if ((1U == (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                        >> 0x00000019U))) {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0x20000000U | (0xcfffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]));
                vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = ((0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]) 
                       | (((0x00004000U & vlSelfRef.core__DOT__fetch_instr[1U][0U])
                            ? ((0x00002000U & vlSelfRef.core__DOT__fetch_instr[1U][0U])
                                ? ((0x00001000U & vlSelfRef.core__DOT__fetch_instr[1U][0U])
                                    ? 7U : 6U) : ((0x00001000U 
                                                   & vlSelfRef.core__DOT__fetch_instr[1U][0U])
                                                   ? 5U
                                                   : 4U))
                            : ((0x00002000U & vlSelfRef.core__DOT__fetch_instr[1U][0U])
                                ? ((0x00001000U & vlSelfRef.core__DOT__fetch_instr[1U][0U])
                                    ? 3U : 2U) : ((0x00001000U 
                                                   & vlSelfRef.core__DOT__fetch_instr[1U][0U])
                                                   ? 1U
                                                   : 0U))) 
                          << 0x00000018U));
            } else {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0x10000000U | (0xcfffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]));
                vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = ((0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]) 
                       | (((0x00004000U & vlSelfRef.core__DOT__fetch_instr[1U][0U])
                            ? ((0x00002000U & vlSelfRef.core__DOT__fetch_instr[1U][0U])
                                ? ((0x00001000U & vlSelfRef.core__DOT__fetch_instr[1U][0U])
                                    ? 9U : 8U) : ((0x00001000U 
                                                   & vlSelfRef.core__DOT__fetch_instr[1U][0U])
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                                                     >> 0x00000019U))
                                                    ? 6U
                                                    : 7U)
                                                   : 5U))
                            : ((0x00002000U & vlSelfRef.core__DOT__fetch_instr[1U][0U])
                                ? ((0x00001000U & vlSelfRef.core__DOT__fetch_instr[1U][0U])
                                    ? 4U : 3U) : ((0x00001000U 
                                                   & vlSelfRef.core__DOT__fetch_instr[1U][0U])
                                                   ? 2U
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                                                     >> 0x00000019U))
                                                    ? 0U
                                                    : 1U)))) 
                          << 0x00000018U));
            }
        } else if ((0x37U == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[1U])) {
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0x10000000U | (0xcfffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xff07ffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xfff83fffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = ((0xffffc1ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]) 
                   | (0x00003e00U & (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                                     << 2U)));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = ((0x000001ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]) 
                   | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] 
                      << 9U));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = ((0xfffffe00U & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]) 
                   | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] 
                      >> 0x00000017U));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0x00000100U | vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xffffff3fU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xffffffc3U & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (2U | (0xfffffffcU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0x0a000000U | (0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]));
        } else if ((0x63U == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[1U])) {
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0x10000000U | (0xcfffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = ((0xff07ffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]) 
                   | (0x00f80000U & (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                                     << 4U)));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = ((0xfff83fffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]) 
                   | (0x0007c000U & (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                                     >> 6U)));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xffffc1ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = ((0x000001ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]) 
                   | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] 
                      << 9U));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = ((0xfffffe00U & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]) 
                   | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] 
                      >> 0x00000017U));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0x00000100U | vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xffffff3fU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0x0a000000U | (0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xfffffffcU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
            if ((0U == (7U & (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                              >> 0x0000000cU)))) {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (4U | (0xffffffc3U & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]));
            } else if ((1U == (7U & (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                                     >> 0x0000000cU)))) {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (8U | (0xffffffc3U & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]));
            } else if ((4U == (7U & (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                                     >> 0x0000000cU)))) {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0x0000000cU | (0xffffffc3U & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]));
            } else if ((5U == (7U & (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                                     >> 0x0000000cU)))) {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0x00000010U | (0xffffffc3U & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]));
            } else if ((6U == (7U & (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                                     >> 0x0000000cU)))) {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0x00000014U | (0xffffffc3U & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]));
            } else if ((7U == (7U & (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                                     >> 0x0000000cU)))) {
                vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0x00000018U | (0xffffffc3U & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]));
            }
        } else {
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0x10000000U | (0xcfffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = ((0xff07ffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]) 
                   | (0x00f80000U & (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                                     << 4U)));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xfff83fffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = ((0xffffc1ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]) 
                   | (0x00003e00U & (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                                     << 2U)));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = ((0x000001ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]) 
                   | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] 
                      << 9U));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = ((0xfffffe00U & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]) 
                   | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] 
                      >> 0x00000017U));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0x00000100U | vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0x00000080U | (0xffffff3fU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]));
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xffffffc3U & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xfffffffcU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
            vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]);
        }
    } else if ((0x6fU == vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__opcode[1U])) {
        vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
            = (0x10000000U | (0xcfffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]));
        vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
            = (0xff07ffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]);
        vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
            = (0xfff83fffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]);
        vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
            = ((0xffffc1ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]) 
               | (0x00003e00U & (vlSelfRef.core__DOT__fetch_instr[1U][0U] 
                                 << 2U)));
        vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
            = ((0x000001ffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]) 
               | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] 
                  << 9U));
        vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
            = ((0xfffffe00U & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]) 
               | (vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__immediate[1U] 
                  >> 0x00000017U));
        vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
            = (0x00000100U | vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
        vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
            = (0x00000040U | (0xffffff3fU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]));
        vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
            = (0xffffffc3U & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
        vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U] 
            = (0xfffffffcU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U]);
        vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U] 
            = (0xf0ffffffU & vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U]);
    }
    vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__read_tag[0U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__read_tag[0U];
    vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__read_tag[1U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__read_tag[1U];
    vlSelfRef.core__DOT__RF_raddr[2U][0U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__read_tag[0U];
    vlSelfRef.core__DOT__RF_raddr[2U][1U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__read_tag[1U];
    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__read_tag[0U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__read_tag[0U];
    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__read_tag[1U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__read_tag[1U];
    vlSelfRef.core__DOT__RF_raddr[3U][0U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__read_tag[0U];
    vlSelfRef.core__DOT__RF_raddr[3U][1U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__read_tag[1U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__read_tag[0U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__read_tag[0U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__read_tag[1U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__read_tag[1U];
    vlSelfRef.core__DOT__RF_raddr[0U][0U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__read_tag[0U];
    vlSelfRef.core__DOT__RF_raddr[0U][1U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__read_tag[1U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__read_tag[0U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__read_tag[0U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__read_tag[1U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__read_tag[1U];
    vlSelfRef.core__DOT__RF_raddr[1U][0U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__read_tag[0U];
    vlSelfRef.core__DOT__RF_raddr[1U][1U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__read_tag[1U];
    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__OUT_instr[0U][0U] 
        = vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U];
    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__OUT_instr[0U][1U] 
        = vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U];
    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__OUT_instr[0U][2U] 
        = vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][2U];
    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__OUT_instr[0U][3U] 
        = vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][3U];
    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__OUT_instr[1U][0U] 
        = vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U];
    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__OUT_instr[1U][1U] 
        = vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U];
    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__OUT_instr[1U][2U] 
        = vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][2U];
    vlSelfRef.core__DOT__decode__DOT__Decoder__DOT__OUT_instr[1U][3U] 
        = vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][3U];
    vlSelfRef.core__DOT__issue__DOT__read_tag[0U][0U] 
        = vlSelfRef.core__DOT__RF_raddr[0U][0U];
    vlSelfRef.core__DOT__issue__DOT__read_tag[0U][1U] 
        = vlSelfRef.core__DOT__RF_raddr[0U][1U];
    vlSelfRef.core__DOT__issue__DOT__read_tag[1U][0U] 
        = vlSelfRef.core__DOT__RF_raddr[1U][0U];
    vlSelfRef.core__DOT__issue__DOT__read_tag[1U][1U] 
        = vlSelfRef.core__DOT__RF_raddr[1U][1U];
    vlSelfRef.core__DOT__issue__DOT__read_tag[2U][0U] 
        = vlSelfRef.core__DOT__RF_raddr[2U][0U];
    vlSelfRef.core__DOT__issue__DOT__read_tag[2U][1U] 
        = vlSelfRef.core__DOT__RF_raddr[2U][1U];
    vlSelfRef.core__DOT__issue__DOT__read_tag[3U][0U] 
        = vlSelfRef.core__DOT__RF_raddr[3U][0U];
    vlSelfRef.core__DOT__issue__DOT__read_tag[3U][1U] 
        = vlSelfRef.core__DOT__RF_raddr[3U][1U];
    vlSelfRef.core__DOT__rs1_addr[0U] = vlSelfRef.core__DOT__RF_raddr[0U][0U];
    vlSelfRef.core__DOT__rs1_addr[1U] = vlSelfRef.core__DOT__RF_raddr[1U][0U];
    vlSelfRef.core__DOT__rs1_addr[2U] = vlSelfRef.core__DOT__RF_raddr[2U][0U];
    vlSelfRef.core__DOT__rs1_addr[3U] = vlSelfRef.core__DOT__RF_raddr[3U][0U];
    vlSelfRef.core__DOT__rs2_addr[0U] = vlSelfRef.core__DOT__RF_raddr[0U][1U];
    vlSelfRef.core__DOT__rs2_addr[1U] = vlSelfRef.core__DOT__RF_raddr[1U][1U];
    vlSelfRef.core__DOT__rs2_addr[2U] = vlSelfRef.core__DOT__RF_raddr[2U][1U];
    vlSelfRef.core__DOT__rs2_addr[3U] = vlSelfRef.core__DOT__RF_raddr[3U][1U];
    vlSelfRef.core__DOT__register_file__DOT__rs1_addr[0U] 
        = vlSelfRef.core__DOT__rs1_addr[0U];
    vlSelfRef.core__DOT__register_file__DOT__rs1_addr[1U] 
        = vlSelfRef.core__DOT__rs1_addr[1U];
    vlSelfRef.core__DOT__register_file__DOT__rs1_addr[2U] 
        = vlSelfRef.core__DOT__rs1_addr[2U];
    vlSelfRef.core__DOT__register_file__DOT__rs1_addr[3U] 
        = vlSelfRef.core__DOT__rs1_addr[3U];
    vlSelfRef.core__DOT__rs1_data[0U] = vlSelfRef.core__DOT__register_file__DOT__registers
        [vlSelfRef.core__DOT__rs1_addr[0U]];
    vlSelfRef.core__DOT__rs1_data[1U] = vlSelfRef.core__DOT__register_file__DOT__registers
        [vlSelfRef.core__DOT__rs1_addr[1U]];
    vlSelfRef.core__DOT__rs1_data[2U] = vlSelfRef.core__DOT__register_file__DOT__registers
        [vlSelfRef.core__DOT__rs1_addr[2U]];
    vlSelfRef.core__DOT__rs1_data[3U] = vlSelfRef.core__DOT__register_file__DOT__registers
        [vlSelfRef.core__DOT__rs1_addr[3U]];
    vlSelfRef.core__DOT__register_file__DOT__rs2_addr[0U] 
        = vlSelfRef.core__DOT__rs2_addr[0U];
    vlSelfRef.core__DOT__register_file__DOT__rs2_addr[1U] 
        = vlSelfRef.core__DOT__rs2_addr[1U];
    vlSelfRef.core__DOT__register_file__DOT__rs2_addr[2U] 
        = vlSelfRef.core__DOT__rs2_addr[2U];
    vlSelfRef.core__DOT__register_file__DOT__rs2_addr[3U] 
        = vlSelfRef.core__DOT__rs2_addr[3U];
    vlSelfRef.core__DOT__rs2_data[0U] = vlSelfRef.core__DOT__register_file__DOT__registers
        [vlSelfRef.core__DOT__rs2_addr[0U]];
    vlSelfRef.core__DOT__rs2_data[1U] = vlSelfRef.core__DOT__register_file__DOT__registers
        [vlSelfRef.core__DOT__rs2_addr[1U]];
    vlSelfRef.core__DOT__rs2_data[2U] = vlSelfRef.core__DOT__register_file__DOT__registers
        [vlSelfRef.core__DOT__rs2_addr[2U]];
    vlSelfRef.core__DOT__rs2_data[3U] = vlSelfRef.core__DOT__register_file__DOT__registers
        [vlSelfRef.core__DOT__rs2_addr[3U]];
    vlSelfRef.core__DOT__register_file__DOT__rs1_data[0U] 
        = vlSelfRef.core__DOT__rs1_data[0U];
    vlSelfRef.core__DOT__register_file__DOT__rs1_data[1U] 
        = vlSelfRef.core__DOT__rs1_data[1U];
    vlSelfRef.core__DOT__register_file__DOT__rs1_data[2U] 
        = vlSelfRef.core__DOT__rs1_data[2U];
    vlSelfRef.core__DOT__register_file__DOT__rs1_data[3U] 
        = vlSelfRef.core__DOT__rs1_data[3U];
    vlSelfRef.core__DOT__register_file__DOT__rs2_data[0U] 
        = vlSelfRef.core__DOT__rs2_data[0U];
    vlSelfRef.core__DOT__register_file__DOT__rs2_data[1U] 
        = vlSelfRef.core__DOT__rs2_data[1U];
    vlSelfRef.core__DOT__register_file__DOT__rs2_data[2U] 
        = vlSelfRef.core__DOT__rs2_data[2U];
    vlSelfRef.core__DOT__register_file__DOT__rs2_data[3U] 
        = vlSelfRef.core__DOT__rs2_data[3U];
    vlSelfRef.core__DOT__RF_read_data[0U][0U] = vlSelfRef.core__DOT__rs1_data[0U];
    vlSelfRef.core__DOT__RF_read_data[0U][1U] = vlSelfRef.core__DOT__rs2_data[0U];
    vlSelfRef.core__DOT__RF_read_data[1U][0U] = vlSelfRef.core__DOT__rs1_data[1U];
    vlSelfRef.core__DOT__RF_read_data[1U][1U] = vlSelfRef.core__DOT__rs2_data[1U];
    vlSelfRef.core__DOT__RF_read_data[2U][0U] = vlSelfRef.core__DOT__rs1_data[2U];
    vlSelfRef.core__DOT__RF_read_data[2U][1U] = vlSelfRef.core__DOT__rs2_data[2U];
    vlSelfRef.core__DOT__RF_read_data[3U][0U] = vlSelfRef.core__DOT__rs1_data[3U];
    vlSelfRef.core__DOT__RF_read_data[3U][1U] = vlSelfRef.core__DOT__rs2_data[3U];
    vlSelfRef.core__DOT__issue__DOT__RF_data[0U][0U] 
        = vlSelfRef.core__DOT__RF_read_data[0U][0U];
    vlSelfRef.core__DOT__issue__DOT__RF_data[0U][1U] 
        = vlSelfRef.core__DOT__RF_read_data[0U][1U];
    vlSelfRef.core__DOT__issue__DOT__RF_data[1U][0U] 
        = vlSelfRef.core__DOT__RF_read_data[1U][0U];
    vlSelfRef.core__DOT__issue__DOT__RF_data[1U][1U] 
        = vlSelfRef.core__DOT__RF_read_data[1U][1U];
    vlSelfRef.core__DOT__issue__DOT__RF_data[2U][0U] 
        = vlSelfRef.core__DOT__RF_read_data[2U][0U];
    vlSelfRef.core__DOT__issue__DOT__RF_data[2U][1U] 
        = vlSelfRef.core__DOT__RF_read_data[2U][1U];
    vlSelfRef.core__DOT__issue__DOT__RF_data[3U][0U] 
        = vlSelfRef.core__DOT__RF_read_data[3U][0U];
    vlSelfRef.core__DOT__issue__DOT__RF_data[3U][1U] 
        = vlSelfRef.core__DOT__RF_read_data[3U][1U];
    vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__RF_data[0U] 
        = vlSelfRef.core__DOT__RF_read_data[2U][0U];
    vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__RF_data[1U] 
        = vlSelfRef.core__DOT__RF_read_data[2U][1U];
    vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__RF_data[0U] 
        = vlSelfRef.core__DOT__RF_read_data[3U][0U];
    vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__RF_data[1U] 
        = vlSelfRef.core__DOT__RF_read_data[3U][1U];
    vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__RF_data[0U] 
        = vlSelfRef.core__DOT__RF_read_data[0U][0U];
    vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__RF_data[1U] 
        = vlSelfRef.core__DOT__RF_read_data[0U][1U];
    vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__RF_data[0U] 
        = vlSelfRef.core__DOT__RF_read_data[1U][0U];
    vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__RF_data[1U] 
        = vlSelfRef.core__DOT__RF_read_data[1U][1U];
    vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__RF_data[0U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__RF_data[0U];
    vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__RF_data[1U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__RF_data[1U];
    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__RF_data[0U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__RF_data[0U];
    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__RF_data[1U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__RF_data[1U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__RF_data[0U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__RF_data[0U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__RF_data[1U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__RF_data[1U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__RF_data[0U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__RF_data[0U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__RF_data[1U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__RF_data[1U];
}

VL_ATTR_COLD void Vcore___024root___stl_comb__TOP__0(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___stl_comb__TOP__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 = 0;
    // Body
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_valid 
        = ((~ (IData)(vlSelfRef.core__DOT__flush)) 
           & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_found));
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_valid 
        = ((~ (IData)(vlSelfRef.core__DOT__flush)) 
           & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_found));
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel1 = 0U;
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel2 = 0U;
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected = 0U;
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected = 0U;
    if (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_valid) {
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel1 
            = (((2U == (3U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                              [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                              >> 8U))) | (1U == (3U 
                                                 & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                    [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                                    >> 8U)))) 
               | (1U == (3U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                               [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                               >> 2U))));
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel2 
            = ((1U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel2)) 
               | (((1U == (3U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                 [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                 >> 8U))) | (2U == 
                                             (3U & 
                                              (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                               [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                               >> 8U)))) 
                  << 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel2 
            = ((2U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel2)) 
               | (1U & (((((2U == (3U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                         [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                         >> 2U))) | 
                           (1U == (3U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                         [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                         >> 2U)))) 
                          | (1U == (3U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                          [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                          >> 8U)))) 
                         | (2U == (3U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                         [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                         >> 8U)))) 
                        | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                           [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                           >> 0x0000000aU))));
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type 
            = (0x0000000fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                              [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                              >> 4U));
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
            = vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__RF_data[0U];
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                  [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                  >> 1U))) & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                              [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                                              >> 0x00000017U)) 
                              == vlSelfRef.core__DOT__CDB_tag[0U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelfRef.core__DOT__CDB_result[0U];
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                  [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                  >> 1U))) & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                              [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                                              >> 0x00000017U)) 
                              == vlSelfRef.core__DOT__CDB_tag[1U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelfRef.core__DOT__CDB_result[1U];
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                  [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                  >> 1U))) & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                              [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                                              >> 0x00000017U)) 
                              == vlSelfRef.core__DOT__CDB_tag[2U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelfRef.core__DOT__CDB_result[2U];
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                  [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                  >> 1U))) & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                              [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                                              >> 0x00000017U)) 
                              == vlSelfRef.core__DOT__CDB_tag[3U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelfRef.core__DOT__CDB_result[3U];
        }
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected 
            = vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__RF_data[1U];
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
               [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U])) 
             & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                                >> 0x00000011U)) == vlSelfRef.core__DOT__CDB_tag[0U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelfRef.core__DOT__CDB_result[0U];
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
               [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U])) 
             & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                                >> 0x00000011U)) == vlSelfRef.core__DOT__CDB_tag[1U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelfRef.core__DOT__CDB_result[1U];
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
               [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U])) 
             & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                                >> 0x00000011U)) == vlSelfRef.core__DOT__CDB_tag[2U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelfRef.core__DOT__CDB_result[2U];
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
               [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U])) 
             & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                                >> 0x00000011U)) == vlSelfRef.core__DOT__CDB_tag[3U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelfRef.core__DOT__CDB_result[3U];
        }
    } else {
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type = 0U;
    }
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel1 = 0U;
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel2 = 0U;
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected = 0U;
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected = 0U;
    if (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_valid) {
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel1 
            = (((2U == (3U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                              [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                              >> 8U))) | (1U == (3U 
                                                 & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                                    [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                                    >> 8U)))) 
               | (1U == (3U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                               [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                               >> 2U))));
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel2 
            = ((1U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel2)) 
               | (((1U == (3U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                 [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                 >> 8U))) | (2U == 
                                             (3U & 
                                              (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                               [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                               >> 8U)))) 
                  << 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel2 
            = ((2U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel2)) 
               | (1U & (((((2U == (3U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                         [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                         >> 2U))) | 
                           (1U == (3U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                         [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                         >> 2U)))) 
                          | (1U == (3U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                          [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                          >> 8U)))) 
                         | (2U == (3U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                         [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                         >> 8U)))) 
                        | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                           [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                           >> 0x0000000aU))));
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type 
            = (0x0000000fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                              [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                              >> 4U));
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
            = vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__RF_data[0U];
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                  [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                  >> 1U))) & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                              [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                                              >> 0x00000017U)) 
                              == vlSelfRef.core__DOT__CDB_tag[0U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelfRef.core__DOT__CDB_result[0U];
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                  [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                  >> 1U))) & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                              [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                                              >> 0x00000017U)) 
                              == vlSelfRef.core__DOT__CDB_tag[1U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelfRef.core__DOT__CDB_result[1U];
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                  [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                  >> 1U))) & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                              [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                                              >> 0x00000017U)) 
                              == vlSelfRef.core__DOT__CDB_tag[2U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelfRef.core__DOT__CDB_result[2U];
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                  [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                  >> 1U))) & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                              [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                                              >> 0x00000017U)) 
                              == vlSelfRef.core__DOT__CDB_tag[3U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelfRef.core__DOT__CDB_result[3U];
        }
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected 
            = vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__RF_data[1U];
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
               [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U])) 
             & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                                >> 0x00000011U)) == vlSelfRef.core__DOT__CDB_tag[0U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelfRef.core__DOT__CDB_result[0U];
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
               [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U])) 
             & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                                >> 0x00000011U)) == vlSelfRef.core__DOT__CDB_tag[1U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelfRef.core__DOT__CDB_result[1U];
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
               [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U])) 
             & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                                >> 0x00000011U)) == vlSelfRef.core__DOT__CDB_tag[2U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelfRef.core__DOT__CDB_result[2U];
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
               [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U])) 
             & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                                >> 0x00000011U)) == vlSelfRef.core__DOT__CDB_tag[3U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelfRef.core__DOT__CDB_result[3U];
        }
    } else {
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type = 0U;
    }
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__op1 
        = ((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel1)
            ? ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][3U] 
                << 0x0000001fU) | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                   [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][2U] 
                                   >> 1U)) : vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected);
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__op2 
        = ((2U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel2))
            ? 4U : ((1U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel2))
                     ? ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                         [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                         << 0x00000015U) | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
                                            [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                            >> 0x0000000bU))
                     : vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected));
    vlSelfRef.core__DOT__br_taken[0U] = ((~ ((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type) 
                                             >> 3U)) 
                                         & ((4U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type))
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
                                                    == vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected)))));
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__op1 
        = ((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel1)
            ? ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][3U] 
                << 0x0000001fU) | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                   [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][2U] 
                                   >> 1U)) : vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected);
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__op2 
        = ((2U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel2))
            ? 4U : ((1U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel2))
                     ? ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                         [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                         << 0x00000015U) | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
                                            [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                            >> 0x0000000bU))
                     : vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected));
    vlSelfRef.core__DOT__br_taken[1U] = ((~ ((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type) 
                                             >> 3U)) 
                                         & ((4U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__bc__DOT__br_type))
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
                                                    == vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected)))));
    vlSelfRef.core__DOT__issue__DOT__OUT_br_taken[0U] 
        = vlSelfRef.core__DOT__br_taken[0U];
    vlSelfRef.core__DOT__issue__DOT__OUT_br_taken[1U] 
        = vlSelfRef.core__DOT__br_taken[1U];
    vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__br_taken[0U] 
        = vlSelfRef.core__DOT__br_taken[0U];
    vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__br_taken[1U] 
        = vlSelfRef.core__DOT__br_taken[1U];
    vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__oldest_idx = 0U;
    vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__oldest_sqN = 0x7fU;
    if (((vlSelfRef.core__DOT__issue__DOT__instr_valid[0U] 
          & (vlSelfRef.core__DOT__br_taken[0U] | (2U 
                                                  == vlSelfRef.core__DOT__jump_type[0U]))) 
         & (0x7fU > vlSelfRef.core__DOT__issue__DOT__instr_sqN[0U]))) {
        vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__oldest_sqN 
            = vlSelfRef.core__DOT__issue__DOT__instr_sqN[0U];
        vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__oldest_idx = 0U;
    }
    if (((vlSelfRef.core__DOT__issue__DOT__instr_valid[1U] 
          & (vlSelfRef.core__DOT__br_taken[1U] | (2U 
                                                  == vlSelfRef.core__DOT__jump_type[1U]))) 
         & (vlSelfRef.core__DOT__issue__DOT__instr_sqN[1U] 
            < (IData)(vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__oldest_sqN)))) {
        vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__oldest_sqN 
            = vlSelfRef.core__DOT__issue__DOT__instr_sqN[1U];
        vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__oldest_idx = 1U;
    }
    if (vlSelfRef.core__DOT__issue__DOT__instr_valid
        [vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__oldest_idx]) {
        if (vlSelfRef.core__DOT__br_taken[vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__oldest_idx]) {
            vlSelfRef.core__DOT__jump2 = 1U;
            vlSelfRef.core__DOT__jta2 = (vlSelfRef.core__DOT__issue__DOT__pc
                                         [vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__oldest_idx] 
                                         + vlSelfRef.core__DOT__issue__DOT__alu_imm
                                         [vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__oldest_idx]);
        } else if ((2U == vlSelfRef.core__DOT__jump_type
                    [vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__oldest_idx])) {
            vlSelfRef.core__DOT__jump2 = 1U;
            vlSelfRef.core__DOT__jta2 = (vlSelfRef.core__DOT__issue__DOT__alu_rs1_result
                                         [vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__oldest_idx] 
                                         + vlSelfRef.core__DOT__issue__DOT__alu_imm
                                         [vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__oldest_idx]);
        } else {
            vlSelfRef.core__DOT__jump2 = 0U;
        }
    } else {
        vlSelfRef.core__DOT__jump2 = 0U;
    }
    vlSelfRef.core__DOT____Vcellinp__flush_controller__br_taken[0U] 
        = vlSelfRef.core__DOT__br_taken[0U];
    vlSelfRef.core__DOT____Vcellinp__flush_controller__br_taken[1U] 
        = vlSelfRef.core__DOT__br_taken[1U];
    vlSelfRef.core__DOT__flush_controller__DOT__br_taken[0U] 
        = vlSelfRef.core__DOT____Vcellinp__flush_controller__br_taken[0U];
    vlSelfRef.core__DOT__flush_controller__DOT__br_taken[1U] 
        = vlSelfRef.core__DOT____Vcellinp__flush_controller__br_taken[1U];
    vlSelfRef.core__DOT__flush = 0U;
    vlSelfRef.core__DOT__flush_sqN = 0U;
    vlSelfRef.core__DOT__flush_controller__DOT__unnamedblk1__DOT__valid0 
        = (vlSelfRef.core__DOT____Vcellinp__flush_controller__br_taken[0U] 
           | (2U == vlSelfRef.core__DOT____Vcellinp__flush_controller__jump_type[0U]));
    vlSelfRef.core__DOT__flush_controller__DOT__unnamedblk1__DOT__valid1 
        = (vlSelfRef.core__DOT____Vcellinp__flush_controller__br_taken[1U] 
           | (2U == vlSelfRef.core__DOT____Vcellinp__flush_controller__jump_type[1U]));
    if (((IData)(vlSelfRef.core__DOT__flush_controller__DOT__unnamedblk1__DOT__valid0) 
         & (IData)(vlSelfRef.core__DOT__flush_controller__DOT__unnamedblk1__DOT__valid1))) {
        vlSelfRef.core__DOT__flush_controller__DOT__unnamedblk1__DOT__diff 
            = (0x0000007fU & (vlSelfRef.core__DOT____Vcellinp__flush_controller__sqN[0U] 
                              - vlSelfRef.core__DOT____Vcellinp__flush_controller__sqN[1U]));
        vlSelfRef.core__DOT__flush = 1U;
        vlSelfRef.core__DOT__flush_sqN = ((0x00000040U 
                                           & (IData)(vlSelfRef.core__DOT__flush_controller__DOT__unnamedblk1__DOT__diff))
                                           ? vlSelfRef.core__DOT____Vcellinp__flush_controller__sqN[0U]
                                           : vlSelfRef.core__DOT____Vcellinp__flush_controller__sqN[1U]);
    } else if (vlSelfRef.core__DOT__flush_controller__DOT__unnamedblk1__DOT__valid0) {
        vlSelfRef.core__DOT__flush = 1U;
        vlSelfRef.core__DOT__flush_sqN = vlSelfRef.core__DOT____Vcellinp__flush_controller__sqN[0U];
    } else if (vlSelfRef.core__DOT__flush_controller__DOT__unnamedblk1__DOT__valid1) {
        vlSelfRef.core__DOT__flush = 1U;
        vlSelfRef.core__DOT__flush_sqN = vlSelfRef.core__DOT____Vcellinp__flush_controller__sqN[1U];
    }
    vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__new_tail 
        = vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__tail_ptr;
    vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__on_flush_valid = 0U;
    if (((IData)(vlSelfRef.core__DOT__flush) & vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid
         [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))])) {
        vlSelfRef.core__DOT__restore_free[0U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][0U];
        vlSelfRef.core__DOT__restore_free[1U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][1U];
        vlSelfRef.core__DOT__restore_free[2U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][2U];
        vlSelfRef.core__DOT__restore_free[3U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][3U];
        vlSelfRef.core__DOT__restore_free[4U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][4U];
        vlSelfRef.core__DOT__restore_free[5U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][5U];
        vlSelfRef.core__DOT__restore_free[6U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][6U];
        vlSelfRef.core__DOT__restore_free[7U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][7U];
        vlSelfRef.core__DOT__restore_free[8U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][8U];
        vlSelfRef.core__DOT__restore_free[9U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][9U];
        vlSelfRef.core__DOT__restore_free[10U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][10U];
        vlSelfRef.core__DOT__restore_free[11U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][11U];
        vlSelfRef.core__DOT__restore_free[12U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][12U];
        vlSelfRef.core__DOT__restore_free[13U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][13U];
        vlSelfRef.core__DOT__restore_free[14U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][14U];
        vlSelfRef.core__DOT__restore_free[15U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][15U];
        vlSelfRef.core__DOT__restore_free[16U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][16U];
        vlSelfRef.core__DOT__restore_free[17U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][17U];
        vlSelfRef.core__DOT__restore_free[18U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][18U];
        vlSelfRef.core__DOT__restore_free[19U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][19U];
        vlSelfRef.core__DOT__restore_free[20U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][20U];
        vlSelfRef.core__DOT__restore_free[21U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][21U];
        vlSelfRef.core__DOT__restore_free[22U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][22U];
        vlSelfRef.core__DOT__restore_free[23U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][23U];
        vlSelfRef.core__DOT__restore_free[24U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][24U];
        vlSelfRef.core__DOT__restore_free[25U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][25U];
        vlSelfRef.core__DOT__restore_free[26U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][26U];
        vlSelfRef.core__DOT__restore_free[27U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][27U];
        vlSelfRef.core__DOT__restore_free[28U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][28U];
        vlSelfRef.core__DOT__restore_free[29U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][29U];
        vlSelfRef.core__DOT__restore_free[30U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][30U];
        vlSelfRef.core__DOT__restore_free[31U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][31U];
        vlSelfRef.core__DOT__restore_free[32U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][32U];
        vlSelfRef.core__DOT__restore_free[33U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][33U];
        vlSelfRef.core__DOT__restore_free[34U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][34U];
        vlSelfRef.core__DOT__restore_free[35U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][35U];
        vlSelfRef.core__DOT__restore_free[36U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][36U];
        vlSelfRef.core__DOT__restore_free[37U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][37U];
        vlSelfRef.core__DOT__restore_free[38U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][38U];
        vlSelfRef.core__DOT__restore_free[39U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][39U];
        vlSelfRef.core__DOT__restore_free[40U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][40U];
        vlSelfRef.core__DOT__restore_free[41U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][41U];
        vlSelfRef.core__DOT__restore_free[42U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][42U];
        vlSelfRef.core__DOT__restore_free[43U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][43U];
        vlSelfRef.core__DOT__restore_free[44U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][44U];
        vlSelfRef.core__DOT__restore_free[45U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][45U];
        vlSelfRef.core__DOT__restore_free[46U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][46U];
        vlSelfRef.core__DOT__restore_free[47U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][47U];
        vlSelfRef.core__DOT__restore_free[48U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][48U];
        vlSelfRef.core__DOT__restore_free[49U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][49U];
        vlSelfRef.core__DOT__restore_free[50U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][50U];
        vlSelfRef.core__DOT__restore_free[51U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][51U];
        vlSelfRef.core__DOT__restore_free[52U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][52U];
        vlSelfRef.core__DOT__restore_free[53U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][53U];
        vlSelfRef.core__DOT__restore_free[54U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][54U];
        vlSelfRef.core__DOT__restore_free[55U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][55U];
        vlSelfRef.core__DOT__restore_free[56U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][56U];
        vlSelfRef.core__DOT__restore_free[57U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][57U];
        vlSelfRef.core__DOT__restore_free[58U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][58U];
        vlSelfRef.core__DOT__restore_free[59U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][59U];
        vlSelfRef.core__DOT__restore_free[60U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][60U];
        vlSelfRef.core__DOT__restore_free[61U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][61U];
        vlSelfRef.core__DOT__restore_free[62U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][62U];
        vlSelfRef.core__DOT__restore_free[63U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__free
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][63U];
    } else {
        vlSelfRef.core__DOT__restore_free[0U] = vlSelfRef.core__DOT__store_free[1U][0U];
        vlSelfRef.core__DOT__restore_free[1U] = vlSelfRef.core__DOT__store_free[1U][1U];
        vlSelfRef.core__DOT__restore_free[2U] = vlSelfRef.core__DOT__store_free[1U][2U];
        vlSelfRef.core__DOT__restore_free[3U] = vlSelfRef.core__DOT__store_free[1U][3U];
        vlSelfRef.core__DOT__restore_free[4U] = vlSelfRef.core__DOT__store_free[1U][4U];
        vlSelfRef.core__DOT__restore_free[5U] = vlSelfRef.core__DOT__store_free[1U][5U];
        vlSelfRef.core__DOT__restore_free[6U] = vlSelfRef.core__DOT__store_free[1U][6U];
        vlSelfRef.core__DOT__restore_free[7U] = vlSelfRef.core__DOT__store_free[1U][7U];
        vlSelfRef.core__DOT__restore_free[8U] = vlSelfRef.core__DOT__store_free[1U][8U];
        vlSelfRef.core__DOT__restore_free[9U] = vlSelfRef.core__DOT__store_free[1U][9U];
        vlSelfRef.core__DOT__restore_free[10U] = vlSelfRef.core__DOT__store_free[1U][10U];
        vlSelfRef.core__DOT__restore_free[11U] = vlSelfRef.core__DOT__store_free[1U][11U];
        vlSelfRef.core__DOT__restore_free[12U] = vlSelfRef.core__DOT__store_free[1U][12U];
        vlSelfRef.core__DOT__restore_free[13U] = vlSelfRef.core__DOT__store_free[1U][13U];
        vlSelfRef.core__DOT__restore_free[14U] = vlSelfRef.core__DOT__store_free[1U][14U];
        vlSelfRef.core__DOT__restore_free[15U] = vlSelfRef.core__DOT__store_free[1U][15U];
        vlSelfRef.core__DOT__restore_free[16U] = vlSelfRef.core__DOT__store_free[1U][16U];
        vlSelfRef.core__DOT__restore_free[17U] = vlSelfRef.core__DOT__store_free[1U][17U];
        vlSelfRef.core__DOT__restore_free[18U] = vlSelfRef.core__DOT__store_free[1U][18U];
        vlSelfRef.core__DOT__restore_free[19U] = vlSelfRef.core__DOT__store_free[1U][19U];
        vlSelfRef.core__DOT__restore_free[20U] = vlSelfRef.core__DOT__store_free[1U][20U];
        vlSelfRef.core__DOT__restore_free[21U] = vlSelfRef.core__DOT__store_free[1U][21U];
        vlSelfRef.core__DOT__restore_free[22U] = vlSelfRef.core__DOT__store_free[1U][22U];
        vlSelfRef.core__DOT__restore_free[23U] = vlSelfRef.core__DOT__store_free[1U][23U];
        vlSelfRef.core__DOT__restore_free[24U] = vlSelfRef.core__DOT__store_free[1U][24U];
        vlSelfRef.core__DOT__restore_free[25U] = vlSelfRef.core__DOT__store_free[1U][25U];
        vlSelfRef.core__DOT__restore_free[26U] = vlSelfRef.core__DOT__store_free[1U][26U];
        vlSelfRef.core__DOT__restore_free[27U] = vlSelfRef.core__DOT__store_free[1U][27U];
        vlSelfRef.core__DOT__restore_free[28U] = vlSelfRef.core__DOT__store_free[1U][28U];
        vlSelfRef.core__DOT__restore_free[29U] = vlSelfRef.core__DOT__store_free[1U][29U];
        vlSelfRef.core__DOT__restore_free[30U] = vlSelfRef.core__DOT__store_free[1U][30U];
        vlSelfRef.core__DOT__restore_free[31U] = vlSelfRef.core__DOT__store_free[1U][31U];
        vlSelfRef.core__DOT__restore_free[32U] = vlSelfRef.core__DOT__store_free[1U][32U];
        vlSelfRef.core__DOT__restore_free[33U] = vlSelfRef.core__DOT__store_free[1U][33U];
        vlSelfRef.core__DOT__restore_free[34U] = vlSelfRef.core__DOT__store_free[1U][34U];
        vlSelfRef.core__DOT__restore_free[35U] = vlSelfRef.core__DOT__store_free[1U][35U];
        vlSelfRef.core__DOT__restore_free[36U] = vlSelfRef.core__DOT__store_free[1U][36U];
        vlSelfRef.core__DOT__restore_free[37U] = vlSelfRef.core__DOT__store_free[1U][37U];
        vlSelfRef.core__DOT__restore_free[38U] = vlSelfRef.core__DOT__store_free[1U][38U];
        vlSelfRef.core__DOT__restore_free[39U] = vlSelfRef.core__DOT__store_free[1U][39U];
        vlSelfRef.core__DOT__restore_free[40U] = vlSelfRef.core__DOT__store_free[1U][40U];
        vlSelfRef.core__DOT__restore_free[41U] = vlSelfRef.core__DOT__store_free[1U][41U];
        vlSelfRef.core__DOT__restore_free[42U] = vlSelfRef.core__DOT__store_free[1U][42U];
        vlSelfRef.core__DOT__restore_free[43U] = vlSelfRef.core__DOT__store_free[1U][43U];
        vlSelfRef.core__DOT__restore_free[44U] = vlSelfRef.core__DOT__store_free[1U][44U];
        vlSelfRef.core__DOT__restore_free[45U] = vlSelfRef.core__DOT__store_free[1U][45U];
        vlSelfRef.core__DOT__restore_free[46U] = vlSelfRef.core__DOT__store_free[1U][46U];
        vlSelfRef.core__DOT__restore_free[47U] = vlSelfRef.core__DOT__store_free[1U][47U];
        vlSelfRef.core__DOT__restore_free[48U] = vlSelfRef.core__DOT__store_free[1U][48U];
        vlSelfRef.core__DOT__restore_free[49U] = vlSelfRef.core__DOT__store_free[1U][49U];
        vlSelfRef.core__DOT__restore_free[50U] = vlSelfRef.core__DOT__store_free[1U][50U];
        vlSelfRef.core__DOT__restore_free[51U] = vlSelfRef.core__DOT__store_free[1U][51U];
        vlSelfRef.core__DOT__restore_free[52U] = vlSelfRef.core__DOT__store_free[1U][52U];
        vlSelfRef.core__DOT__restore_free[53U] = vlSelfRef.core__DOT__store_free[1U][53U];
        vlSelfRef.core__DOT__restore_free[54U] = vlSelfRef.core__DOT__store_free[1U][54U];
        vlSelfRef.core__DOT__restore_free[55U] = vlSelfRef.core__DOT__store_free[1U][55U];
        vlSelfRef.core__DOT__restore_free[56U] = vlSelfRef.core__DOT__store_free[1U][56U];
        vlSelfRef.core__DOT__restore_free[57U] = vlSelfRef.core__DOT__store_free[1U][57U];
        vlSelfRef.core__DOT__restore_free[58U] = vlSelfRef.core__DOT__store_free[1U][58U];
        vlSelfRef.core__DOT__restore_free[59U] = vlSelfRef.core__DOT__store_free[1U][59U];
        vlSelfRef.core__DOT__restore_free[60U] = vlSelfRef.core__DOT__store_free[1U][60U];
        vlSelfRef.core__DOT__restore_free[61U] = vlSelfRef.core__DOT__store_free[1U][61U];
        vlSelfRef.core__DOT__restore_free[62U] = vlSelfRef.core__DOT__store_free[1U][62U];
        vlSelfRef.core__DOT__restore_free[63U] = vlSelfRef.core__DOT__store_free[1U][63U];
    }
    if (vlSelfRef.core__DOT__flush) {
        vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__new_tail 
            = vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__drain_ptr;
        vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i = 0U;
        {
            while ((0x00000010U > vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i)) {
                vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__idx 
                    = (0x0000000fU & ((IData)(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__drain_ptr) 
                                      + vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i));
                if (((IData)(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__idx) 
                     == (IData)(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__tail_ptr))) {
                    goto __Vlabel0;
                }
                if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries
                      [vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__idx][2U] 
                      >> 0x0000000bU) & (0x00000040U 
                                         > (0x0000007fU 
                                            & ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                               - (0x0000007fU 
                                                  & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries
                                                     [vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__idx][2U] 
                                                     >> 2U))))))) {
                    vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__on_flush_valid 
                        = ((IData)(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__on_flush_valid) 
                           | (0x0000ffffU & ((IData)(1U) 
                                             << (IData)(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__idx))));
                    vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__new_tail 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__idx)));
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__on_flush_valid 
                        = ((~ ((IData)(1U) << (IData)(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__idx))) 
                           & (IData)(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__on_flush_valid));
                }
                vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i 
                    = ((IData)(1U) + vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i);
            }
            __Vlabel0: ;
        }
    }
    if (((IData)(vlSelfRef.core__DOT__flush) & vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid
         [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))])) {
        vlSelfRef.core__DOT__restore_specTag[0U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][0U];
        vlSelfRef.core__DOT__restore_specTag[1U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][1U];
        vlSelfRef.core__DOT__restore_specTag[2U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][2U];
        vlSelfRef.core__DOT__restore_specTag[3U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][3U];
        vlSelfRef.core__DOT__restore_specTag[4U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][4U];
        vlSelfRef.core__DOT__restore_specTag[5U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][5U];
        vlSelfRef.core__DOT__restore_specTag[6U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][6U];
        vlSelfRef.core__DOT__restore_specTag[7U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][7U];
        vlSelfRef.core__DOT__restore_specTag[8U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][8U];
        vlSelfRef.core__DOT__restore_specTag[9U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][9U];
        vlSelfRef.core__DOT__restore_specTag[10U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][10U];
        vlSelfRef.core__DOT__restore_specTag[11U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][11U];
        vlSelfRef.core__DOT__restore_specTag[12U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][12U];
        vlSelfRef.core__DOT__restore_specTag[13U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][13U];
        vlSelfRef.core__DOT__restore_specTag[14U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][14U];
        vlSelfRef.core__DOT__restore_specTag[15U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][15U];
        vlSelfRef.core__DOT__restore_specTag[16U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][16U];
        vlSelfRef.core__DOT__restore_specTag[17U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][17U];
        vlSelfRef.core__DOT__restore_specTag[18U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][18U];
        vlSelfRef.core__DOT__restore_specTag[19U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][19U];
        vlSelfRef.core__DOT__restore_specTag[20U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][20U];
        vlSelfRef.core__DOT__restore_specTag[21U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][21U];
        vlSelfRef.core__DOT__restore_specTag[22U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][22U];
        vlSelfRef.core__DOT__restore_specTag[23U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][23U];
        vlSelfRef.core__DOT__restore_specTag[24U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][24U];
        vlSelfRef.core__DOT__restore_specTag[25U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][25U];
        vlSelfRef.core__DOT__restore_specTag[26U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][26U];
        vlSelfRef.core__DOT__restore_specTag[27U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][27U];
        vlSelfRef.core__DOT__restore_specTag[28U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][28U];
        vlSelfRef.core__DOT__restore_specTag[29U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][29U];
        vlSelfRef.core__DOT__restore_specTag[30U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][30U];
        vlSelfRef.core__DOT__restore_specTag[31U] = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__specTag
            [(0x0000000fU & (IData)(vlSelfRef.core__DOT__flush_sqN))][31U];
    } else {
        vlSelfRef.core__DOT__restore_specTag[0U] = vlSelfRef.core__DOT__store_specTag[1U][0U];
        vlSelfRef.core__DOT__restore_specTag[1U] = vlSelfRef.core__DOT__store_specTag[1U][1U];
        vlSelfRef.core__DOT__restore_specTag[2U] = vlSelfRef.core__DOT__store_specTag[1U][2U];
        vlSelfRef.core__DOT__restore_specTag[3U] = vlSelfRef.core__DOT__store_specTag[1U][3U];
        vlSelfRef.core__DOT__restore_specTag[4U] = vlSelfRef.core__DOT__store_specTag[1U][4U];
        vlSelfRef.core__DOT__restore_specTag[5U] = vlSelfRef.core__DOT__store_specTag[1U][5U];
        vlSelfRef.core__DOT__restore_specTag[6U] = vlSelfRef.core__DOT__store_specTag[1U][6U];
        vlSelfRef.core__DOT__restore_specTag[7U] = vlSelfRef.core__DOT__store_specTag[1U][7U];
        vlSelfRef.core__DOT__restore_specTag[8U] = vlSelfRef.core__DOT__store_specTag[1U][8U];
        vlSelfRef.core__DOT__restore_specTag[9U] = vlSelfRef.core__DOT__store_specTag[1U][9U];
        vlSelfRef.core__DOT__restore_specTag[10U] = vlSelfRef.core__DOT__store_specTag[1U][10U];
        vlSelfRef.core__DOT__restore_specTag[11U] = vlSelfRef.core__DOT__store_specTag[1U][11U];
        vlSelfRef.core__DOT__restore_specTag[12U] = vlSelfRef.core__DOT__store_specTag[1U][12U];
        vlSelfRef.core__DOT__restore_specTag[13U] = vlSelfRef.core__DOT__store_specTag[1U][13U];
        vlSelfRef.core__DOT__restore_specTag[14U] = vlSelfRef.core__DOT__store_specTag[1U][14U];
        vlSelfRef.core__DOT__restore_specTag[15U] = vlSelfRef.core__DOT__store_specTag[1U][15U];
        vlSelfRef.core__DOT__restore_specTag[16U] = vlSelfRef.core__DOT__store_specTag[1U][16U];
        vlSelfRef.core__DOT__restore_specTag[17U] = vlSelfRef.core__DOT__store_specTag[1U][17U];
        vlSelfRef.core__DOT__restore_specTag[18U] = vlSelfRef.core__DOT__store_specTag[1U][18U];
        vlSelfRef.core__DOT__restore_specTag[19U] = vlSelfRef.core__DOT__store_specTag[1U][19U];
        vlSelfRef.core__DOT__restore_specTag[20U] = vlSelfRef.core__DOT__store_specTag[1U][20U];
        vlSelfRef.core__DOT__restore_specTag[21U] = vlSelfRef.core__DOT__store_specTag[1U][21U];
        vlSelfRef.core__DOT__restore_specTag[22U] = vlSelfRef.core__DOT__store_specTag[1U][22U];
        vlSelfRef.core__DOT__restore_specTag[23U] = vlSelfRef.core__DOT__store_specTag[1U][23U];
        vlSelfRef.core__DOT__restore_specTag[24U] = vlSelfRef.core__DOT__store_specTag[1U][24U];
        vlSelfRef.core__DOT__restore_specTag[25U] = vlSelfRef.core__DOT__store_specTag[1U][25U];
        vlSelfRef.core__DOT__restore_specTag[26U] = vlSelfRef.core__DOT__store_specTag[1U][26U];
        vlSelfRef.core__DOT__restore_specTag[27U] = vlSelfRef.core__DOT__store_specTag[1U][27U];
        vlSelfRef.core__DOT__restore_specTag[28U] = vlSelfRef.core__DOT__store_specTag[1U][28U];
        vlSelfRef.core__DOT__restore_specTag[29U] = vlSelfRef.core__DOT__store_specTag[1U][29U];
        vlSelfRef.core__DOT__restore_specTag[30U] = vlSelfRef.core__DOT__store_specTag[1U][30U];
        vlSelfRef.core__DOT__restore_specTag[31U] = vlSelfRef.core__DOT__store_specTag[1U][31U];
    }
    if (vlSelfRef.core__DOT__flush) {
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][0U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[0U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][1U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[1U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][2U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[2U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][3U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[3U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][4U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[4U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][5U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[5U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][6U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[6U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][7U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[7U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][8U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[8U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][9U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[9U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][10U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[10U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][11U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[11U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][12U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[12U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][13U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[13U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][14U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[14U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][15U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[15U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][16U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[16U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][17U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[17U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][18U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[18U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][19U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[19U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][20U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[20U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][21U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[21U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][22U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[22U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][23U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[23U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][24U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[24U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][25U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[25U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][26U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[26U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][27U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[27U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][28U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[28U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][29U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[29U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][30U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[30U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][31U] 
            = (0x0000003fU & vlSelfRef.core__DOT__restore_specTag[31U]);
    } else {
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][0U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[0U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][1U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[1U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][2U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[2U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][3U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[3U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][4U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[4U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][5U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[5U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][6U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[6U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][7U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[7U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][8U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[8U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][9U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[9U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][10U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[10U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][11U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[11U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][12U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[12U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][13U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[13U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][14U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[14U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][15U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[15U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][16U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[16U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][17U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[17U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][18U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[18U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][19U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[19U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][20U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[20U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][21U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[21U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][22U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[22U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][23U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[23U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][24U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[24U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][25U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[25U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][26U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[26U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][27U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[27U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][28U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[28U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][29U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[29U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][30U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[30U]);
        vlSelfRef.core__DOT__rename__DOT__local_rat[0U][31U] 
            = (0x0000003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[31U]);
    }
    vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_valid 
        = ((~ (IData)(vlSelfRef.core__DOT__flush)) 
           & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_found));
    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_valid 
        = ((~ (IData)(vlSelfRef.core__DOT__flush)) 
           & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_found));
    vlSelfRef.core__DOT__fetch__DOT__IA__DOT__invalidate 
        = ((IData)(vlSelfRef.core__DOT__fetch__DOT__q) 
           | (IData)(vlSelfRef.core__DOT__flush));
    vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs1_data_selected = 0U;
    vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs2_data_selected = 0U;
    if (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_valid) {
        vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs1_data_selected 
            = vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__RF_data[0U];
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                  [vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx] 
                  >> 1U))) & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                              [vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx] 
                                              >> 0x0000000eU)) 
                              == vlSelfRef.core__DOT__CDB_tag[0U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelfRef.core__DOT__CDB_result[0U];
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                  [vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx] 
                  >> 1U))) & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                              [vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx] 
                                              >> 0x0000000eU)) 
                              == vlSelfRef.core__DOT__CDB_tag[1U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelfRef.core__DOT__CDB_result[1U];
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                  [vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx] 
                  >> 1U))) & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                              [vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx] 
                                              >> 0x0000000eU)) 
                              == vlSelfRef.core__DOT__CDB_tag[2U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelfRef.core__DOT__CDB_result[2U];
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                  [vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx] 
                  >> 1U))) & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                              [vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx] 
                                              >> 0x0000000eU)) 
                              == vlSelfRef.core__DOT__CDB_tag[3U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelfRef.core__DOT__CDB_result[3U];
        }
        vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs2_data_selected 
            = vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__RF_data[1U];
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
               [vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx])) 
             & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                [vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx] 
                                >> 8U)) == vlSelfRef.core__DOT__CDB_tag[0U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelfRef.core__DOT__CDB_result[0U];
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
               [vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx])) 
             & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                [vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx] 
                                >> 8U)) == vlSelfRef.core__DOT__CDB_tag[1U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelfRef.core__DOT__CDB_result[1U];
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
               [vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx])) 
             & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                [vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx] 
                                >> 8U)) == vlSelfRef.core__DOT__CDB_tag[2U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelfRef.core__DOT__CDB_result[2U];
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
               [vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx])) 
             & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
                                [vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx] 
                                >> 8U)) == vlSelfRef.core__DOT__CDB_tag[3U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelfRef.core__DOT__CDB_result[3U];
        }
    }
    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs1_data_selected = 0U;
    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs2_data_selected = 0U;
    if (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_valid) {
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs1_data_selected 
            = vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__RF_data[0U];
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                  [vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][0U] 
                  >> 1U))) & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                              [vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][1U] 
                                              >> 0x0000000fU)) 
                              == vlSelfRef.core__DOT__CDB_tag[0U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelfRef.core__DOT__CDB_result[0U];
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                  [vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][0U] 
                  >> 1U))) & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                              [vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][1U] 
                                              >> 0x0000000fU)) 
                              == vlSelfRef.core__DOT__CDB_tag[1U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelfRef.core__DOT__CDB_result[1U];
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                  [vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][0U] 
                  >> 1U))) & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                              [vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][1U] 
                                              >> 0x0000000fU)) 
                              == vlSelfRef.core__DOT__CDB_tag[2U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelfRef.core__DOT__CDB_result[2U];
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                  [vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][0U] 
                  >> 1U))) & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                              [vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][1U] 
                                              >> 0x0000000fU)) 
                              == vlSelfRef.core__DOT__CDB_tag[3U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs1_data_selected 
                = vlSelfRef.core__DOT__CDB_result[3U];
        }
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs2_data_selected 
            = vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__RF_data[1U];
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
               [vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][0U])) 
             & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                [vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][1U] 
                                >> 9U)) == vlSelfRef.core__DOT__CDB_tag[0U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelfRef.core__DOT__CDB_result[0U];
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
               [vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][0U])) 
             & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                [vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][1U] 
                                >> 9U)) == vlSelfRef.core__DOT__CDB_tag[1U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelfRef.core__DOT__CDB_result[1U];
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
               [vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][0U])) 
             & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                [vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][1U] 
                                >> 9U)) == vlSelfRef.core__DOT__CDB_tag[2U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelfRef.core__DOT__CDB_result[2U];
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
               [vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][0U])) 
             & ((0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
                                [vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][1U] 
                                >> 9U)) == vlSelfRef.core__DOT__CDB_tag[3U]))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs2_data_selected 
                = vlSelfRef.core__DOT__CDB_result[3U];
        }
    }
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[0U] 
        = vlSelfRef.core__DOT__restore_specTag[0U];
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[1U] 
        = vlSelfRef.core__DOT__restore_specTag[1U];
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[2U] 
        = vlSelfRef.core__DOT__restore_specTag[2U];
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[3U] 
        = vlSelfRef.core__DOT__restore_specTag[3U];
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[4U] 
        = vlSelfRef.core__DOT__restore_specTag[4U];
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[5U] 
        = vlSelfRef.core__DOT__restore_specTag[5U];
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[6U] 
        = vlSelfRef.core__DOT__restore_specTag[6U];
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[7U] 
        = vlSelfRef.core__DOT__restore_specTag[7U];
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[8U] 
        = vlSelfRef.core__DOT__restore_specTag[8U];
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[9U] 
        = vlSelfRef.core__DOT__restore_specTag[9U];
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[10U] 
        = vlSelfRef.core__DOT__restore_specTag[10U];
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[11U] 
        = vlSelfRef.core__DOT__restore_specTag[11U];
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[12U] 
        = vlSelfRef.core__DOT__restore_specTag[12U];
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[13U] 
        = vlSelfRef.core__DOT__restore_specTag[13U];
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[14U] 
        = vlSelfRef.core__DOT__restore_specTag[14U];
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[15U] 
        = vlSelfRef.core__DOT__restore_specTag[15U];
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[16U] 
        = vlSelfRef.core__DOT__restore_specTag[16U];
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[17U] 
        = vlSelfRef.core__DOT__restore_specTag[17U];
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[18U] 
        = vlSelfRef.core__DOT__restore_specTag[18U];
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[19U] 
        = vlSelfRef.core__DOT__restore_specTag[19U];
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[20U] 
        = vlSelfRef.core__DOT__restore_specTag[20U];
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[21U] 
        = vlSelfRef.core__DOT__restore_specTag[21U];
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[22U] 
        = vlSelfRef.core__DOT__restore_specTag[22U];
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[23U] 
        = vlSelfRef.core__DOT__restore_specTag[23U];
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[24U] 
        = vlSelfRef.core__DOT__restore_specTag[24U];
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[25U] 
        = vlSelfRef.core__DOT__restore_specTag[25U];
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[26U] 
        = vlSelfRef.core__DOT__restore_specTag[26U];
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[27U] 
        = vlSelfRef.core__DOT__restore_specTag[27U];
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[28U] 
        = vlSelfRef.core__DOT__restore_specTag[28U];
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[29U] 
        = vlSelfRef.core__DOT__restore_specTag[29U];
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[30U] 
        = vlSelfRef.core__DOT__restore_specTag[30U];
    vlSelfRef.core__DOT__rename__DOT__IN_specTag[31U] 
        = vlSelfRef.core__DOT__restore_specTag[31U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[0U] 
        = vlSelfRef.core__DOT__restore_specTag[0U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[1U] 
        = vlSelfRef.core__DOT__restore_specTag[1U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[2U] 
        = vlSelfRef.core__DOT__restore_specTag[2U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[3U] 
        = vlSelfRef.core__DOT__restore_specTag[3U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[4U] 
        = vlSelfRef.core__DOT__restore_specTag[4U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[5U] 
        = vlSelfRef.core__DOT__restore_specTag[5U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[6U] 
        = vlSelfRef.core__DOT__restore_specTag[6U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[7U] 
        = vlSelfRef.core__DOT__restore_specTag[7U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[8U] 
        = vlSelfRef.core__DOT__restore_specTag[8U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[9U] 
        = vlSelfRef.core__DOT__restore_specTag[9U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[10U] 
        = vlSelfRef.core__DOT__restore_specTag[10U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[11U] 
        = vlSelfRef.core__DOT__restore_specTag[11U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[12U] 
        = vlSelfRef.core__DOT__restore_specTag[12U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[13U] 
        = vlSelfRef.core__DOT__restore_specTag[13U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[14U] 
        = vlSelfRef.core__DOT__restore_specTag[14U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[15U] 
        = vlSelfRef.core__DOT__restore_specTag[15U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[16U] 
        = vlSelfRef.core__DOT__restore_specTag[16U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[17U] 
        = vlSelfRef.core__DOT__restore_specTag[17U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[18U] 
        = vlSelfRef.core__DOT__restore_specTag[18U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[19U] 
        = vlSelfRef.core__DOT__restore_specTag[19U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[20U] 
        = vlSelfRef.core__DOT__restore_specTag[20U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[21U] 
        = vlSelfRef.core__DOT__restore_specTag[21U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[22U] 
        = vlSelfRef.core__DOT__restore_specTag[22U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[23U] 
        = vlSelfRef.core__DOT__restore_specTag[23U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[24U] 
        = vlSelfRef.core__DOT__restore_specTag[24U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[25U] 
        = vlSelfRef.core__DOT__restore_specTag[25U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[26U] 
        = vlSelfRef.core__DOT__restore_specTag[26U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[27U] 
        = vlSelfRef.core__DOT__restore_specTag[27U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[28U] 
        = vlSelfRef.core__DOT__restore_specTag[28U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[29U] 
        = vlSelfRef.core__DOT__restore_specTag[29U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[30U] 
        = vlSelfRef.core__DOT__restore_specTag[30U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_specTag[31U] 
        = vlSelfRef.core__DOT__restore_specTag[31U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[0U] 
        = vlSelfRef.core__DOT__restore_specTag[0U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[1U] 
        = vlSelfRef.core__DOT__restore_specTag[1U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[2U] 
        = vlSelfRef.core__DOT__restore_specTag[2U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[3U] 
        = vlSelfRef.core__DOT__restore_specTag[3U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[4U] 
        = vlSelfRef.core__DOT__restore_specTag[4U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[5U] 
        = vlSelfRef.core__DOT__restore_specTag[5U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[6U] 
        = vlSelfRef.core__DOT__restore_specTag[6U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[7U] 
        = vlSelfRef.core__DOT__restore_specTag[7U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[8U] 
        = vlSelfRef.core__DOT__restore_specTag[8U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[9U] 
        = vlSelfRef.core__DOT__restore_specTag[9U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[10U] 
        = vlSelfRef.core__DOT__restore_specTag[10U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[11U] 
        = vlSelfRef.core__DOT__restore_specTag[11U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[12U] 
        = vlSelfRef.core__DOT__restore_specTag[12U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[13U] 
        = vlSelfRef.core__DOT__restore_specTag[13U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[14U] 
        = vlSelfRef.core__DOT__restore_specTag[14U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[15U] 
        = vlSelfRef.core__DOT__restore_specTag[15U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[16U] 
        = vlSelfRef.core__DOT__restore_specTag[16U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[17U] 
        = vlSelfRef.core__DOT__restore_specTag[17U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[18U] 
        = vlSelfRef.core__DOT__restore_specTag[18U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[19U] 
        = vlSelfRef.core__DOT__restore_specTag[19U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[20U] 
        = vlSelfRef.core__DOT__restore_specTag[20U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[21U] 
        = vlSelfRef.core__DOT__restore_specTag[21U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[22U] 
        = vlSelfRef.core__DOT__restore_specTag[22U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[23U] 
        = vlSelfRef.core__DOT__restore_specTag[23U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[24U] 
        = vlSelfRef.core__DOT__restore_specTag[24U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[25U] 
        = vlSelfRef.core__DOT__restore_specTag[25U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[26U] 
        = vlSelfRef.core__DOT__restore_specTag[26U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[27U] 
        = vlSelfRef.core__DOT__restore_specTag[27U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[28U] 
        = vlSelfRef.core__DOT__restore_specTag[28U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[29U] 
        = vlSelfRef.core__DOT__restore_specTag[29U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[30U] 
        = vlSelfRef.core__DOT__restore_specTag[30U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__OUT_specTag[31U] 
        = vlSelfRef.core__DOT__restore_specTag[31U];
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][0U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][0U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][1U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][1U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][2U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][2U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][3U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][3U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][4U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][4U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][5U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][5U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][6U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][6U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][7U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][7U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][8U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][8U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][9U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][9U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][10U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][10U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][11U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][11U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][12U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][12U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][13U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][13U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][14U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][14U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][15U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][15U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][16U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][16U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][17U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][17U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][18U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][18U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][19U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][19U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][20U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][20U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][21U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][21U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][22U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][22U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][23U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][23U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][24U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][24U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][25U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][25U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][26U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][26U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][27U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][27U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][28U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][28U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][29U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][29U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][30U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][30U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][31U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[1U][31U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    if (((vlSelfRef.core__DOT__decode_instr[0U][3U] 
          >> 5U) & (0U != (0x0000001fU & (vlSelfRef.core__DOT__decode_instr[0U][1U] 
                                          >> 9U))))) {
        vlSelfRef.core__DOT__rename__DOT____Vlvbound_hf4945ba7__0 
            = vlSelfRef.core__DOT__rename__DOT__chosen[0U];
        vlSelfRef.core__DOT__rename__DOT__local_rat[1U][(0x0000001fU 
                                                         & (vlSelfRef.core__DOT__decode_instr[0U][1U] 
                                                            >> 9U))] 
            = vlSelfRef.core__DOT__rename__DOT____Vlvbound_hf4945ba7__0;
    }
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][0U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][0U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][1U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][1U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][2U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][2U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][3U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][3U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][4U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][4U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][5U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][5U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][6U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][6U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][7U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][7U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][8U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][8U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][9U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][9U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][10U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][10U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][11U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][11U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][12U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][12U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][13U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][13U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][14U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][14U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][15U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][15U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][16U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][16U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][17U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][17U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][18U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][18U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][19U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][19U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][20U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][20U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][21U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][21U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][22U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][22U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][23U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][23U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][24U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][24U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][25U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][25U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][26U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][26U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][27U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][27U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][28U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][28U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][29U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][29U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][30U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][30U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0 
        = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][31U];
    vlSelfRef.core__DOT__rename__DOT__local_rat[2U][31U] 
        = core__DOT__rename__DOT____Vlvbound_h0d0bc09b__0;
    if (((vlSelfRef.core__DOT__decode_instr[1U][3U] 
          >> 5U) & (0U != (0x0000001fU & (vlSelfRef.core__DOT__decode_instr[1U][1U] 
                                          >> 9U))))) {
        vlSelfRef.core__DOT__rename__DOT____Vlvbound_hf4945ba7__0 
            = vlSelfRef.core__DOT__rename__DOT__chosen[1U];
        vlSelfRef.core__DOT__rename__DOT__local_rat[2U][(0x0000001fU 
                                                         & (vlSelfRef.core__DOT__decode_instr[1U][1U] 
                                                            >> 9U))] 
            = vlSelfRef.core__DOT__rename__DOT____Vlvbound_hf4945ba7__0;
    }
    vlSelfRef.core__DOT__fetch__DOT__IA__DOT__pc_align 
        = (0U == (7U & vlSelfRef.core__DOT__prefetch__DOT__PC__DOT__pc_reg));
    vlSelfRef.core__DOT__fetch__DOT__IA__DOT__pc_valid[0U] 
        = vlSelfRef.core__DOT__fetch__DOT__IA__DOT__pc_align;
    vlSelfRef.core__DOT__fetch__DOT__aligner_out[0U][2U] 
        = (1U & ((~ (IData)(vlSelfRef.core__DOT__fetch__DOT__IA__DOT__invalidate)) 
                 & vlSelfRef.core__DOT__fetch__DOT__IA__DOT__pc_valid[0U]));
    vlSelfRef.core__DOT__fetch__DOT__aligner_out[0U][1U] 
        = vlSelfRef.core__DOT__prefetch__DOT__PC__DOT__pc_reg;
    vlSelfRef.core__DOT__fetch__DOT__IA__DOT__pc_valid[1U] = 1U;
    vlSelfRef.core__DOT__fetch__DOT__aligner_out[1U][2U] 
        = (1U & ((~ (IData)(vlSelfRef.core__DOT__fetch__DOT__IA__DOT__invalidate)) 
                 & vlSelfRef.core__DOT__fetch__DOT__IA__DOT__pc_valid[1U]));
    vlSelfRef.core__DOT__fetch__DOT__aligner_out[1U][1U] 
        = ((IData)(vlSelfRef.core__DOT__fetch__DOT__IA__DOT__pc_align)
            ? ((IData)(4U) + vlSelfRef.core__DOT__prefetch__DOT__PC__DOT__pc_reg)
            : vlSelfRef.core__DOT__prefetch__DOT__PC__DOT__pc_reg);
    vlSelfRef.core__DOT__consumed = ((0U == (((IData)(vlSelfRef.core__DOT__fetch__DOT__IA__DOT__invalidate) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.core__DOT__fetch__DOT__IA__DOT__pc_align)))
                                      ? 1U : ((1U == 
                                               (((IData)(vlSelfRef.core__DOT__fetch__DOT__IA__DOT__invalidate) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.core__DOT__fetch__DOT__IA__DOT__pc_align)))
                                               ? 2U
                                               : ((2U 
                                                   == 
                                                   (((IData)(vlSelfRef.core__DOT__fetch__DOT__IA__DOT__invalidate) 
                                                     << 1U) 
                                                    | (IData)(vlSelfRef.core__DOT__fetch__DOT__IA__DOT__pc_align)))
                                                   ? 0U
                                                   : 2U)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_1 = (VL_SHIFTL_III(32,32,32, 
                                                              (1U 
                                                               & (IData)(vlSelfRef.core__DOT__consumed)), 2U) 
                                                + vlSelfRef.core__DOT__prefetch__DOT__PC__DOT__pc_reg);
    vlSelfRef.core__DOT__fetch__DOT__IA__DOT__OUT_instr[0U][0U] 
        = vlSelfRef.core__DOT__fetch__DOT__aligner_out[0U][0U];
    vlSelfRef.core__DOT__fetch__DOT__IA__DOT__OUT_instr[0U][1U] 
        = vlSelfRef.core__DOT__fetch__DOT__aligner_out[0U][1U];
    vlSelfRef.core__DOT__fetch__DOT__IA__DOT__OUT_instr[0U][2U] 
        = vlSelfRef.core__DOT__fetch__DOT__aligner_out[0U][2U];
    vlSelfRef.core__DOT__fetch__DOT__IA__DOT__OUT_instr[1U][0U] 
        = vlSelfRef.core__DOT__fetch__DOT__aligner_out[1U][0U];
    vlSelfRef.core__DOT__fetch__DOT__IA__DOT__OUT_instr[1U][1U] 
        = vlSelfRef.core__DOT__fetch__DOT__aligner_out[1U][1U];
    vlSelfRef.core__DOT__fetch__DOT__IA__DOT__OUT_instr[1U][2U] 
        = vlSelfRef.core__DOT__fetch__DOT__aligner_out[1U][2U];
    vlSelfRef.core__DOT__fetch__DOT__FB__DOT__IN_instr[0U][0U] 
        = vlSelfRef.core__DOT__fetch__DOT__aligner_out[0U][0U];
    vlSelfRef.core__DOT__fetch__DOT__FB__DOT__IN_instr[0U][1U] 
        = vlSelfRef.core__DOT__fetch__DOT__aligner_out[0U][1U];
    vlSelfRef.core__DOT__fetch__DOT__FB__DOT__IN_instr[0U][2U] 
        = vlSelfRef.core__DOT__fetch__DOT__aligner_out[0U][2U];
    vlSelfRef.core__DOT__fetch__DOT__FB__DOT__IN_instr[1U][0U] 
        = vlSelfRef.core__DOT__fetch__DOT__aligner_out[1U][0U];
    vlSelfRef.core__DOT__fetch__DOT__FB__DOT__IN_instr[1U][1U] 
        = vlSelfRef.core__DOT__fetch__DOT__aligner_out[1U][1U];
    vlSelfRef.core__DOT__fetch__DOT__FB__DOT__IN_instr[1U][2U] 
        = vlSelfRef.core__DOT__fetch__DOT__aligner_out[1U][2U];
    vlSelfRef.core__DOT__fetch__DOT__FB__DOT__in_valid_count = 0U;
    if ((1U & vlSelfRef.core__DOT__fetch__DOT__aligner_out[0U][2U])) {
        vlSelfRef.core__DOT__fetch__DOT__FB__DOT__in_valid_count 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__in_valid_count)));
    }
    if ((1U & vlSelfRef.core__DOT__fetch__DOT__aligner_out[1U][2U])) {
        vlSelfRef.core__DOT__fetch__DOT__FB__DOT__in_valid_count 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__in_valid_count)));
    }
    vlSelfRef.core__DOT__fetch__DOT__pc_array[0U] = vlSelfRef.core__DOT__fetch__DOT__aligner_out[0U][1U];
    vlSelfRef.core__DOT__fetch__DOT__pc_array[1U] = vlSelfRef.core__DOT__fetch__DOT__aligner_out[1U][1U];
    vlSelfRef.core__DOT__fetch__DOT__valid[0U] = (1U 
                                                  & vlSelfRef.core__DOT__fetch__DOT__aligner_out[0U][2U]);
    vlSelfRef.core__DOT__fetch__DOT__valid[1U] = (1U 
                                                  & vlSelfRef.core__DOT__fetch__DOT__aligner_out[1U][2U]);
    vlSelfRef.core__DOT__fetch__DOT__iw = vlSelfRef.core__DOT__fetch__DOT__aligner_out[0U][0U];
    vlSelfRef.core__DOT__fetch__DOT__opcode[0U] = (0x0000007fU 
                                                   & vlSelfRef.core__DOT__fetch__DOT__iw);
    vlSelfRef.core__DOT__fetch__DOT__imm[0U] = ((((0x00000200U 
                                                   & (vlSelfRef.core__DOT__fetch__DOT__iw 
                                                      >> 0x00000016U)) 
                                                  | ((0x000001feU 
                                                      & (vlSelfRef.core__DOT__fetch__DOT__iw 
                                                         >> 0x0000000bU)) 
                                                     | (1U 
                                                        & (vlSelfRef.core__DOT__fetch__DOT__iw 
                                                           >> 0x14U)))) 
                                                 << 0x0000000bU) 
                                                | (0x000007feU 
                                                   & (vlSelfRef.core__DOT__fetch__DOT__iw 
                                                      >> 0x00000014U)));
    vlSelfRef.core__DOT__fetch__DOT__iw = vlSelfRef.core__DOT__fetch__DOT__aligner_out[1U][0U];
    vlSelfRef.core__DOT__fetch__DOT__opcode[1U] = (0x0000007fU 
                                                   & vlSelfRef.core__DOT__fetch__DOT__iw);
    vlSelfRef.core__DOT__fetch__DOT__imm[1U] = ((((0x00000200U 
                                                   & (vlSelfRef.core__DOT__fetch__DOT__iw 
                                                      >> 0x00000016U)) 
                                                  | ((0x000001feU 
                                                      & (vlSelfRef.core__DOT__fetch__DOT__iw 
                                                         >> 0x0000000bU)) 
                                                     | (1U 
                                                        & (vlSelfRef.core__DOT__fetch__DOT__iw 
                                                           >> 0x14U)))) 
                                                 << 0x0000000bU) 
                                                | (0x000007feU 
                                                   & (vlSelfRef.core__DOT__fetch__DOT__iw 
                                                      >> 0x00000014U)));
    vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__pc[0U] 
        = vlSelfRef.core__DOT__fetch__DOT__pc_array[0U];
    vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__pc[1U] 
        = vlSelfRef.core__DOT__fetch__DOT__pc_array[1U];
    vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__valid[0U] 
        = vlSelfRef.core__DOT__fetch__DOT__valid[0U];
    vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__valid[1U] 
        = vlSelfRef.core__DOT__fetch__DOT__valid[1U];
    vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__opcode[0U] 
        = vlSelfRef.core__DOT__fetch__DOT__opcode[0U];
    vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__opcode[1U] 
        = vlSelfRef.core__DOT__fetch__DOT__opcode[1U];
    vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__imm[0U] 
        = vlSelfRef.core__DOT__fetch__DOT__imm[0U];
    vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__imm[1U] 
        = vlSelfRef.core__DOT__fetch__DOT__imm[1U];
    vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__jump_valid = 0U;
    vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__jump_index = 0U;
    if (vlSelfRef.core__DOT__fetch__DOT__valid[0U]) {
        if (((~ (IData)(vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__jump_valid)) 
             & (0x6fU == vlSelfRef.core__DOT__fetch__DOT__opcode[0U]))) {
            vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__jump_valid = 1U;
            vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__jump_index = 0U;
        }
    }
    vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__jump_valid = 0U;
    vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__jump_index = 0U;
    if (vlSelfRef.core__DOT__fetch__DOT__valid[1U]) {
        if (((~ (IData)(vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__jump_valid)) 
             & (0x6fU == vlSelfRef.core__DOT__fetch__DOT__opcode[1U]))) {
            vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__jump_valid = 1U;
            vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__jump_index = 1U;
        }
    }
    if (vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__jump_valid) {
        vlSelfRef.core__DOT__jump1 = 1U;
        vlSelfRef.core__DOT__jta1 = (vlSelfRef.core__DOT__fetch__DOT__pc_array
                                     [vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__jump_index] 
                                     + (((- (IData)(
                                                    (1U 
                                                     & (vlSelfRef.core__DOT__fetch__DOT__imm
                                                        [vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__jump_index] 
                                                        >> 0x14U)))) 
                                         << 0x00000015U) 
                                        | vlSelfRef.core__DOT__fetch__DOT__imm
                                        [vlSelfRef.core__DOT__fetch__DOT__JTA1__DOT__jump_index]));
    } else {
        vlSelfRef.core__DOT__jump1 = 0U;
        vlSelfRef.core__DOT__jta1 = 0U;
    }
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_0 = (((IData)(vlSelfRef.core__DOT__jump2) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.core__DOT__jump1));
}
