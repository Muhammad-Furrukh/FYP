// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore___024root___eval_triggers_vec__act(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_triggers_vec__act\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((IData)(vlSelfRef.rst) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst__0))) 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.clk_m) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk_m__0))) 
                                                         << 2U)) 
                                                     | ((((IData)(vlSelfRef.clk) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.core__DOT__flush) 
                                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__core__DOT__flush__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__core__DOT__flush__0 
        = vlSelfRef.core__DOT__flush;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__clk_m__0 = vlSelfRef.clk_m;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered[0U]);
    }
}

bool Vcore___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vcore___024root___act_sequent__TOP__0(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___act_sequent__TOP__0\n"); );
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

void Vcore___024root___eval_act(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_act\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        Vcore___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vcore___024root___nba_sequent__TOP__0(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___nba_sequent__TOP__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_core__DOT__lsu__DOT__u_dmem__DOT__byte_en__5__Vfuncout;
    __Vfunc_core__DOT__lsu__DOT__u_dmem__DOT__byte_en__5__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_core__DOT__lsu__DOT__u_dmem__DOT__byte_en__5__data_size;
    __Vfunc_core__DOT__lsu__DOT__u_dmem__DOT__byte_en__5__data_size = 0;
    CData/*1:0*/ __Vfunc_core__DOT__lsu__DOT__u_dmem__DOT__byte_en__5__byte_off;
    __Vfunc_core__DOT__lsu__DOT__u_dmem__DOT__byte_en__5__byte_off = 0;
    CData/*7:0*/ __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v0;
    __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v0 = 0;
    CData/*6:0*/ __VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v0;
    __VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v0 = 0;
    CData/*0:0*/ __VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v0;
    __VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v0 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v0;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v0 = 0;
    CData/*7:0*/ __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v1;
    __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v1 = 0;
    CData/*6:0*/ __VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v1;
    __VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v1 = 0;
    CData/*0:0*/ __VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v1;
    __VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v1 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v1;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v1 = 0;
    CData/*7:0*/ __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v2;
    __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v2 = 0;
    CData/*6:0*/ __VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v2;
    __VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v2 = 0;
    CData/*0:0*/ __VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v2;
    __VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v2 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v2;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v2 = 0;
    CData/*7:0*/ __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v3;
    __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v3 = 0;
    CData/*6:0*/ __VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v3;
    __VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v3 = 0;
    CData/*0:0*/ __VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v3;
    __VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v3 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v3;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v3 = 0;
    CData/*7:0*/ __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v4;
    __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v4 = 0;
    CData/*6:0*/ __VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v4;
    __VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v4 = 0;
    CData/*0:0*/ __VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v4;
    __VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v4 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v4;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v4 = 0;
    CData/*7:0*/ __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v5;
    __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v5 = 0;
    CData/*6:0*/ __VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v5;
    __VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v5 = 0;
    CData/*0:0*/ __VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v5;
    __VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v5 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v5;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v5 = 0;
    CData/*7:0*/ __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v6;
    __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v6 = 0;
    CData/*6:0*/ __VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v6;
    __VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v6 = 0;
    CData/*0:0*/ __VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v6;
    __VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v6 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v6;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v6 = 0;
    CData/*7:0*/ __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v7;
    __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v7 = 0;
    CData/*6:0*/ __VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v7;
    __VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v7 = 0;
    CData/*0:0*/ __VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v7;
    __VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v7 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v7;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v7 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r__v0;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r__v0 = 0;
    CData/*0:0*/ __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r__v2;
    __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r__v2 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r__v2;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r__v2 = 0;
    CData/*0:0*/ __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r__v3;
    __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r__v3 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r__v0;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r__v0 = 0;
    CData/*0:0*/ __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r__v2;
    __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r__v2 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r__v2;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r__v2 = 0;
    CData/*0:0*/ __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r__v3;
    __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r__v3 = 0;
    // Body
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r__v0 = 0U;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r__v2 = 0U;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r__v0 = 0U;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r__v2 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_mem__v0 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_mem__v2 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_data_mem__v0 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_data_mem__v1 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_mem__v0 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_mem__v2 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_mem__v4 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_mem__v5 = 0U;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v0 = 0U;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v1 = 0U;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v2 = 0U;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v3 = 0U;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v4 = 0U;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v5 = 0U;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v6 = 0U;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v7 = 0U;
    if (vlSelfRef.rst_m) {
        __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r__v0 = 1U;
        __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r__v0 = 1U;
        vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_mem__v0 = 1U;
        vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_mem__v0 = 1U;
    } else {
        __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r__v2 
            = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync[0U];
        __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r__v2 = 1U;
        __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r__v3 
            = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync[1U];
        __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r__v2 
            = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync[0U];
        __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r__v2 = 1U;
        __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r__v3 
            = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync[1U];
        vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_mem__v2 = 1U;
        if ((vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync[0U] 
             & (~ vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r[0U]))) {
            vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__rd_data_mem__v0 
                = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__bank
                [(1U & (IData)((vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held[0U] 
                                >> 5U)))][(0x0000007fU 
                                           & (IData)(
                                                     (vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held[0U] 
                                                      >> 6U)))];
            vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_data_mem__v0 = 1U;
        }
        if ((vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync[1U] 
             & (~ vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r[1U]))) {
            vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__rd_data_mem__v1 
                = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__bank
                [(1U & (IData)((vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held[1U] 
                                >> 5U)))][(0x0000007fU 
                                           & (IData)(
                                                     (vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held[1U] 
                                                      >> 6U)))];
            vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_data_mem__v1 = 1U;
        }
        vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_mem__v2 = 1U;
        if ((vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync[0U] 
             & (~ vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r[0U]))) {
            __Vfunc_core__DOT__lsu__DOT__u_dmem__DOT__byte_en__5__byte_off 
                = (3U & (vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[0U][1U] 
                         >> 2U));
            __Vfunc_core__DOT__lsu__DOT__u_dmem__DOT__byte_en__5__data_size 
                = (3U & vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[0U][0U]);
            __Vfunc_core__DOT__lsu__DOT__u_dmem__DOT__byte_en__5__Vfuncout 
                = (0x0000000fU & ((0U == (IData)(__Vfunc_core__DOT__lsu__DOT__u_dmem__DOT__byte_en__5__data_size))
                                   ? ((IData)(1U) << (IData)(__Vfunc_core__DOT__lsu__DOT__u_dmem__DOT__byte_en__5__byte_off))
                                   : ((1U == (IData)(__Vfunc_core__DOT__lsu__DOT__u_dmem__DOT__byte_en__5__data_size))
                                       ? ((IData)(3U) 
                                          << (IData)(__Vfunc_core__DOT__lsu__DOT__u_dmem__DOT__byte_en__5__byte_off))
                                       : 0x0fU)));
            vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_mem__v4 = 1U;
            vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__be 
                = __Vfunc_core__DOT__lsu__DOT__u_dmem__DOT__byte_en__5__Vfuncout;
            vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__bsel 
                = (1U & (vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[0U][1U] 
                         >> 4U));
            vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__boff 
                = (0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[0U][1U] 
                                  >> 5U));
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__be))) {
                __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v0 
                    = (0x000000ffU & (vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[0U][0U] 
                                      >> 2U));
                __VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v0 
                    = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__boff;
                __VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v0 
                    = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__bsel;
                __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v0 = 1U;
            }
            if ((2U & (IData)(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__be))) {
                __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v1 
                    = (0x000000ffU & (vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[0U][0U] 
                                      >> 0x0000000aU));
                __VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v1 
                    = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__boff;
                __VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v1 
                    = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__bsel;
                __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v1 = 1U;
            }
            if ((4U & (IData)(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__be))) {
                __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v2 
                    = (0x000000ffU & (vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[0U][0U] 
                                      >> 0x00000012U));
                __VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v2 
                    = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__boff;
                __VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v2 
                    = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__bsel;
                __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v2 = 1U;
            }
            if ((8U & (IData)(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__be))) {
                __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v3 
                    = (0x000000ffU & ((vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[0U][1U] 
                                       << 6U) | (vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[0U][0U] 
                                                 >> 0x0000001aU)));
                __VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v3 
                    = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__boff;
                __VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v3 
                    = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__bsel;
                __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v3 = 1U;
            }
        }
        if ((vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync[1U] 
             & (~ vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r[1U]))) {
            __Vfunc_core__DOT__lsu__DOT__u_dmem__DOT__byte_en__5__byte_off 
                = (3U & (vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[1U][1U] 
                         >> 2U));
            __Vfunc_core__DOT__lsu__DOT__u_dmem__DOT__byte_en__5__data_size 
                = (3U & vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[1U][0U]);
            __Vfunc_core__DOT__lsu__DOT__u_dmem__DOT__byte_en__5__Vfuncout 
                = (0x0000000fU & ((0U == (IData)(__Vfunc_core__DOT__lsu__DOT__u_dmem__DOT__byte_en__5__data_size))
                                   ? ((IData)(1U) << (IData)(__Vfunc_core__DOT__lsu__DOT__u_dmem__DOT__byte_en__5__byte_off))
                                   : ((1U == (IData)(__Vfunc_core__DOT__lsu__DOT__u_dmem__DOT__byte_en__5__data_size))
                                       ? ((IData)(3U) 
                                          << (IData)(__Vfunc_core__DOT__lsu__DOT__u_dmem__DOT__byte_en__5__byte_off))
                                       : 0x0fU)));
            vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_mem__v5 = 1U;
            vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__be 
                = __Vfunc_core__DOT__lsu__DOT__u_dmem__DOT__byte_en__5__Vfuncout;
            vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__bsel 
                = (1U & (vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[1U][1U] 
                         >> 4U));
            vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__boff 
                = (0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[1U][1U] 
                                  >> 5U));
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__be))) {
                __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v4 
                    = (0x000000ffU & (vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[1U][0U] 
                                      >> 2U));
                __VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v4 
                    = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__boff;
                __VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v4 
                    = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__bsel;
                __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v4 = 1U;
            }
            if ((2U & (IData)(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__be))) {
                __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v5 
                    = (0x000000ffU & (vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[1U][0U] 
                                      >> 0x0000000aU));
                __VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v5 
                    = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__boff;
                __VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v5 
                    = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__bsel;
                __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v5 = 1U;
            }
            if ((4U & (IData)(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__be))) {
                __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v6 
                    = (0x000000ffU & (vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[1U][0U] 
                                      >> 0x00000012U));
                __VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v6 
                    = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__boff;
                __VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v6 
                    = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__bsel;
                __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v6 = 1U;
            }
            if ((8U & (IData)(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__be))) {
                __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v7 
                    = (0x000000ffU & ((vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[1U][1U] 
                                       << 6U) | (vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[1U][0U] 
                                                 >> 0x0000001aU)));
                __VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v7 
                    = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__boff;
                __VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v7 
                    = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__bsel;
                __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v7 = 1U;
            }
        }
    }
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_rd_sync__DOT__ff2 
        = ((1U & (~ (IData)(vlSelfRef.rst_m))) && (IData)(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_rd_sync__DOT__ff1));
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_rd_sync__DOT__ff2 
        = ((1U & (~ (IData)(vlSelfRef.rst_m))) && (IData)(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_rd_sync__DOT__ff1));
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_wr_sync__DOT__ff2 
        = ((1U & (~ (IData)(vlSelfRef.rst_m))) && (IData)(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_wr_sync__DOT__ff1));
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_wr_sync__DOT__ff2 
        = ((1U & (~ (IData)(vlSelfRef.rst_m))) && (IData)(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_wr_sync__DOT__ff1));
    if (__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r__v0) {
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r[0U] = 0U;
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r[1U] = 0U;
    }
    if (__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r__v2) {
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r[0U] 
            = __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r__v2;
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r[1U] 
            = __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r__v3;
    }
    if (vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_mem__v0) {
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_resp_valid_mem[0U] = 0U;
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_resp_valid_mem[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_mem__v2) {
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_resp_valid_mem[0U] = 0U;
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_resp_valid_mem[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_data_mem__v0) {
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_resp_valid_mem[0U] = 1U;
    }
    if (vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_data_mem__v1) {
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_resp_valid_mem[1U] = 1U;
    }
    if (__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r__v0) {
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r[0U] = 0U;
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r[1U] = 0U;
    }
    if (__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r__v2) {
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r[0U] 
            = __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r__v2;
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r[1U] 
            = __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r__v3;
    }
    if (__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v0) {
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__bank[__VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v0][__VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v0] 
            = ((0xffffff00U & vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__bank
                [__VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v0]
                [__VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v0]) 
               | (IData)(__VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v0));
    }
    if (__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v1) {
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__bank[__VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v1][__VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v1] 
            = ((0xffff00ffU & vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__bank
                [__VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v1]
                [__VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v1]) 
               | ((IData)(__VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v1) 
                  << 8U));
    }
    if (__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v2) {
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__bank[__VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v2][__VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v2] 
            = ((0xff00ffffU & vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__bank
                [__VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v2]
                [__VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v2]) 
               | ((IData)(__VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v2) 
                  << 0x00000010U));
    }
    if (__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v3) {
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__bank[__VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v3][__VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v3] 
            = ((0x00ffffffU & vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__bank
                [__VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v3]
                [__VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v3]) 
               | ((IData)(__VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v3) 
                  << 0x00000018U));
    }
    if (__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v4) {
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__bank[__VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v4][__VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v4] 
            = ((0xffffff00U & vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__bank
                [__VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v4]
                [__VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v4]) 
               | (IData)(__VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v4));
    }
    if (__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v5) {
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__bank[__VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v5][__VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v5] 
            = ((0xffff00ffU & vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__bank
                [__VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v5]
                [__VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v5]) 
               | ((IData)(__VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v5) 
                  << 8U));
    }
    if (__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v6) {
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__bank[__VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v6][__VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v6] 
            = ((0xff00ffffU & vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__bank
                [__VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v6]
                [__VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v6]) 
               | ((IData)(__VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v6) 
                  << 0x00000010U));
    }
    if (__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__bank__v7) {
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__bank[__VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v7][__VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v7] 
            = ((0x00ffffffU & vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__bank
                [__VdlyDim1__core__DOT__lsu__DOT__u_dmem__DOT__bank__v7]
                [__VdlyDim0__core__DOT__lsu__DOT__u_dmem__DOT__bank__v7]) 
               | ((IData)(__VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__bank__v7) 
                  << 0x00000018U));
    }
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync[0U] 
        = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_rd_sync__DOT__ff2;
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_rd_sync__DOT__ff1 
        = ((1U & (~ (IData)(vlSelfRef.rst_m))) && vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_pending[0U]);
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync[1U] 
        = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_rd_sync__DOT__ff2;
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_rd_sync__DOT__ff1 
        = ((1U & (~ (IData)(vlSelfRef.rst_m))) && vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_pending[1U]);
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync[0U] 
        = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_wr_sync__DOT__ff2;
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_wr_sync__DOT__ff1 
        = ((1U & (~ (IData)(vlSelfRef.rst_m))) && vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_pending[0U]);
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync[1U] 
        = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_wr_sync__DOT__ff2;
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_wr_sync__DOT__ff1 
        = ((1U & (~ (IData)(vlSelfRef.rst_m))) && vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_pending[1U]);
}

void Vcore___024root___nba_sequent__TOP__1(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___nba_sequent__TOP__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT____Vlvbound_hab0dde23__0;
    core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT____Vlvbound_hab0dde23__0 = 0;
    CData/*5:0*/ core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT____Vlvbound_h64b5aa71__0;
    core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT____Vlvbound_h64b5aa71__0 = 0;
    CData/*6:0*/ core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT____Vlvbound_h66cdd9ec__0;
    core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT____Vlvbound_h66cdd9ec__0 = 0;
    IData/*31:0*/ __Vfunc_core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__abs32__2__Vfuncout;
    __Vfunc_core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__abs32__2__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__abs32__2__x;
    __Vfunc_core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__abs32__2__x = 0;
    IData/*31:0*/ __Vfunc_core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__abs32__3__Vfuncout;
    __Vfunc_core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__abs32__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__abs32__3__x;
    __Vfunc_core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__abs32__3__x = 0;
    IData/*31:0*/ __Vfunc_core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__abs32__4__Vfuncout;
    __Vfunc_core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__abs32__4__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__abs32__4__x;
    __Vfunc_core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__abs32__4__x = 0;
    CData/*3:0*/ __Vdly__core__DOT__fetch__DOT__FB__DOT__head;
    __Vdly__core__DOT__fetch__DOT__FB__DOT__head = 0;
    CData/*3:0*/ __Vdly__core__DOT__fetch__DOT__FB__DOT__tail;
    __Vdly__core__DOT__fetch__DOT__FB__DOT__tail = 0;
    CData/*6:0*/ __Vdly__core__DOT__fetch__DOT__FB__DOT__sqN_counter;
    __Vdly__core__DOT__fetch__DOT__FB__DOT__sqN_counter = 0;
    IData/*31:0*/ __VdlyVal__core__DOT__prefetch_instr__v0;
    __VdlyVal__core__DOT__prefetch_instr__v0 = 0;
    IData/*31:0*/ __VdlyVal__core__DOT__prefetch_instr__v1;
    __VdlyVal__core__DOT__prefetch_instr__v1 = 0;
    IData/*31:0*/ __VdlyVal__core__DOT__fetch__DOT__FB__DOT__buffer__v0;
    __VdlyVal__core__DOT__fetch__DOT__FB__DOT__buffer__v0 = 0;
    CData/*3:0*/ __VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v0;
    __VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v0 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__fetch__DOT__FB__DOT__buffer__v0;
    __VdlySet__core__DOT__fetch__DOT__FB__DOT__buffer__v0 = 0;
    IData/*31:0*/ __VdlyVal__core__DOT__fetch__DOT__FB__DOT__buffer__v1;
    __VdlyVal__core__DOT__fetch__DOT__FB__DOT__buffer__v1 = 0;
    CData/*3:0*/ __VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v1;
    __VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v1 = 0;
    CData/*6:0*/ __VdlyVal__core__DOT__fetch__DOT__FB__DOT__buffer__v2;
    __VdlyVal__core__DOT__fetch__DOT__FB__DOT__buffer__v2 = 0;
    CData/*3:0*/ __VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v2;
    __VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v2 = 0;
    IData/*31:0*/ __VdlyVal__core__DOT__fetch__DOT__FB__DOT__buffer__v3;
    __VdlyVal__core__DOT__fetch__DOT__FB__DOT__buffer__v3 = 0;
    CData/*3:0*/ __VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v3;
    __VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v3 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__fetch__DOT__FB__DOT__buffer__v3;
    __VdlySet__core__DOT__fetch__DOT__FB__DOT__buffer__v3 = 0;
    IData/*31:0*/ __VdlyVal__core__DOT__fetch__DOT__FB__DOT__buffer__v4;
    __VdlyVal__core__DOT__fetch__DOT__FB__DOT__buffer__v4 = 0;
    CData/*3:0*/ __VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v4;
    __VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v4 = 0;
    CData/*6:0*/ __VdlyVal__core__DOT__fetch__DOT__FB__DOT__buffer__v5;
    __VdlyVal__core__DOT__fetch__DOT__FB__DOT__buffer__v5 = 0;
    CData/*3:0*/ __VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v5;
    __VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v5 = 0;
    VlWide<4>/*101:0*/ __VdlyVal__core__DOT__decode_instr__v0;
    VL_ZERO_W(102, __VdlyVal__core__DOT__decode_instr__v0);
    VlWide<4>/*101:0*/ __VdlyVal__core__DOT__decode_instr__v1;
    VL_ZERO_W(102, __VdlyVal__core__DOT__decode_instr__v1);
    CData/*0:0*/ __VdlySet__core__DOT__rename_instr__v0;
    __VdlySet__core__DOT__rename_instr__v0 = 0;
    CData/*0:0*/ __VdlyVal__core__DOT__rename_instr__v2;
    __VdlyVal__core__DOT__rename_instr__v2 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__rename_instr__v2;
    __VdlySet__core__DOT__rename_instr__v2 = 0;
    CData/*6:0*/ __VdlyVal__core__DOT__rename_instr__v3;
    __VdlyVal__core__DOT__rename_instr__v3 = 0;
    IData/*31:0*/ __VdlyVal__core__DOT__rename_instr__v4;
    __VdlyVal__core__DOT__rename_instr__v4 = 0;
    CData/*1:0*/ __VdlyVal__core__DOT__rename_instr__v5;
    __VdlyVal__core__DOT__rename_instr__v5 = 0;
    CData/*3:0*/ __VdlyVal__core__DOT__rename_instr__v6;
    __VdlyVal__core__DOT__rename_instr__v6 = 0;
    CData/*5:0*/ __VdlyVal__core__DOT__rename_instr__v7;
    __VdlyVal__core__DOT__rename_instr__v7 = 0;
    CData/*5:0*/ __VdlyVal__core__DOT__rename_instr__v8;
    __VdlyVal__core__DOT__rename_instr__v8 = 0;
    CData/*5:0*/ __VdlyVal__core__DOT__rename_instr__v9;
    __VdlyVal__core__DOT__rename_instr__v9 = 0;
    IData/*31:0*/ __VdlyVal__core__DOT__rename_instr__v10;
    __VdlyVal__core__DOT__rename_instr__v10 = 0;
    CData/*0:0*/ __VdlyVal__core__DOT__rename_instr__v11;
    __VdlyVal__core__DOT__rename_instr__v11 = 0;
    CData/*1:0*/ __VdlyVal__core__DOT__rename_instr__v12;
    __VdlyVal__core__DOT__rename_instr__v12 = 0;
    CData/*3:0*/ __VdlyVal__core__DOT__rename_instr__v13;
    __VdlyVal__core__DOT__rename_instr__v13 = 0;
    CData/*1:0*/ __VdlyVal__core__DOT__rename_instr__v14;
    __VdlyVal__core__DOT__rename_instr__v14 = 0;
    CData/*0:0*/ __VdlyVal__core__DOT__rename_instr__v15;
    __VdlyVal__core__DOT__rename_instr__v15 = 0;
    CData/*6:0*/ __VdlyVal__core__DOT__rename_instr__v16;
    __VdlyVal__core__DOT__rename_instr__v16 = 0;
    IData/*31:0*/ __VdlyVal__core__DOT__rename_instr__v17;
    __VdlyVal__core__DOT__rename_instr__v17 = 0;
    CData/*1:0*/ __VdlyVal__core__DOT__rename_instr__v18;
    __VdlyVal__core__DOT__rename_instr__v18 = 0;
    CData/*3:0*/ __VdlyVal__core__DOT__rename_instr__v19;
    __VdlyVal__core__DOT__rename_instr__v19 = 0;
    CData/*5:0*/ __VdlyVal__core__DOT__rename_instr__v20;
    __VdlyVal__core__DOT__rename_instr__v20 = 0;
    CData/*5:0*/ __VdlyVal__core__DOT__rename_instr__v21;
    __VdlyVal__core__DOT__rename_instr__v21 = 0;
    CData/*5:0*/ __VdlyVal__core__DOT__rename_instr__v22;
    __VdlyVal__core__DOT__rename_instr__v22 = 0;
    IData/*31:0*/ __VdlyVal__core__DOT__rename_instr__v23;
    __VdlyVal__core__DOT__rename_instr__v23 = 0;
    CData/*0:0*/ __VdlyVal__core__DOT__rename_instr__v24;
    __VdlyVal__core__DOT__rename_instr__v24 = 0;
    CData/*1:0*/ __VdlyVal__core__DOT__rename_instr__v25;
    __VdlyVal__core__DOT__rename_instr__v25 = 0;
    CData/*3:0*/ __VdlyVal__core__DOT__rename_instr__v26;
    __VdlyVal__core__DOT__rename_instr__v26 = 0;
    CData/*1:0*/ __VdlyVal__core__DOT__rename_instr__v27;
    __VdlyVal__core__DOT__rename_instr__v27 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__rename_rob_rd__v0;
    __VdlySet__core__DOT__rename_rob_rd__v0 = 0;
    CData/*4:0*/ __VdlyVal__core__DOT__rename_rob_rd__v2;
    __VdlyVal__core__DOT__rename_rob_rd__v2 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__rename_rob_rd__v2;
    __VdlySet__core__DOT__rename_rob_rd__v2 = 0;
    CData/*4:0*/ __VdlyVal__core__DOT__rename_rob_rd__v3;
    __VdlyVal__core__DOT__rename_rob_rd__v3 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__rename__DOT__rename_table__v0;
    __VdlySet__core__DOT__rename__DOT__rename_table__v0 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__alu_dispatch_out__v0;
    __VdlySet__core__DOT__dispatch__DOT__alu_dispatch_out__v0 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__alu_dispatch_out__v2;
    __VdlySet__core__DOT__dispatch__DOT__alu_dispatch_out__v2 = 0;
    CData/*6:0*/ __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v3;
    __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v3 = 0;
    IData/*31:0*/ __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v4;
    __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v4 = 0;
    CData/*3:0*/ __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v5;
    __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v5 = 0;
    CData/*5:0*/ __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v6;
    __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v6 = 0;
    CData/*5:0*/ __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v7;
    __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v7 = 0;
    CData/*5:0*/ __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v8;
    __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v8 = 0;
    IData/*31:0*/ __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v9;
    __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v9 = 0;
    CData/*0:0*/ __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v10;
    __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v10 = 0;
    CData/*1:0*/ __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v11;
    __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v11 = 0;
    CData/*3:0*/ __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v12;
    __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v12 = 0;
    CData/*1:0*/ __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v13;
    __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v13 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__alu_dispatch_out__v14;
    __VdlySet__core__DOT__dispatch__DOT__alu_dispatch_out__v14 = 0;
    CData/*6:0*/ __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v15;
    __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v15 = 0;
    IData/*31:0*/ __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v16;
    __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v16 = 0;
    CData/*3:0*/ __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v17;
    __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v17 = 0;
    CData/*5:0*/ __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v18;
    __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v18 = 0;
    CData/*5:0*/ __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v19;
    __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v19 = 0;
    CData/*5:0*/ __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v20;
    __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v20 = 0;
    IData/*31:0*/ __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v21;
    __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v21 = 0;
    CData/*0:0*/ __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v22;
    __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v22 = 0;
    CData/*1:0*/ __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v23;
    __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v23 = 0;
    CData/*3:0*/ __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v24;
    __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v24 = 0;
    CData/*1:0*/ __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v25;
    __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v25 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v0;
    __VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v0 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v1;
    __VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v1 = 0;
    CData/*6:0*/ __VdlyVal__core__DOT__dispatch__DOT__mul_div_dispatch_out__v2;
    __VdlyVal__core__DOT__dispatch__DOT__mul_div_dispatch_out__v2 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v2;
    __VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v2 = 0;
    CData/*3:0*/ __VdlyVal__core__DOT__dispatch__DOT__mul_div_dispatch_out__v3;
    __VdlyVal__core__DOT__dispatch__DOT__mul_div_dispatch_out__v3 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v3;
    __VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v3 = 0;
    CData/*5:0*/ __VdlyVal__core__DOT__dispatch__DOT__mul_div_dispatch_out__v4;
    __VdlyVal__core__DOT__dispatch__DOT__mul_div_dispatch_out__v4 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v4;
    __VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v4 = 0;
    CData/*5:0*/ __VdlyVal__core__DOT__dispatch__DOT__mul_div_dispatch_out__v5;
    __VdlyVal__core__DOT__dispatch__DOT__mul_div_dispatch_out__v5 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v5;
    __VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v5 = 0;
    CData/*5:0*/ __VdlyVal__core__DOT__dispatch__DOT__mul_div_dispatch_out__v6;
    __VdlyVal__core__DOT__dispatch__DOT__mul_div_dispatch_out__v6 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v6;
    __VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v6 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v0;
    __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v0 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v1;
    __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v1 = 0;
    CData/*6:0*/ __VdlyVal__core__DOT__dispatch__DOT__lsu_dispatch_out__v2;
    __VdlyVal__core__DOT__dispatch__DOT__lsu_dispatch_out__v2 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v2;
    __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v2 = 0;
    CData/*3:0*/ __VdlyVal__core__DOT__dispatch__DOT__lsu_dispatch_out__v3;
    __VdlyVal__core__DOT__dispatch__DOT__lsu_dispatch_out__v3 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v3;
    __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v3 = 0;
    CData/*5:0*/ __VdlyVal__core__DOT__dispatch__DOT__lsu_dispatch_out__v4;
    __VdlyVal__core__DOT__dispatch__DOT__lsu_dispatch_out__v4 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v4;
    __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v4 = 0;
    CData/*5:0*/ __VdlyVal__core__DOT__dispatch__DOT__lsu_dispatch_out__v5;
    __VdlyVal__core__DOT__dispatch__DOT__lsu_dispatch_out__v5 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v5;
    __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v5 = 0;
    CData/*5:0*/ __VdlyVal__core__DOT__dispatch__DOT__lsu_dispatch_out__v6;
    __VdlyVal__core__DOT__dispatch__DOT__lsu_dispatch_out__v6 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v6;
    __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v6 = 0;
    IData/*31:0*/ __VdlyVal__core__DOT__dispatch__DOT__lsu_dispatch_out__v7;
    __VdlyVal__core__DOT__dispatch__DOT__lsu_dispatch_out__v7 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v7;
    __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v7 = 0;
    CData/*0:0*/ __VdlyVal__core__DOT__dispatch__DOT__lsu_dispatch_out__v8;
    __VdlyVal__core__DOT__dispatch__DOT__lsu_dispatch_out__v8 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v8;
    __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v8 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__DU__DOT__packet__v0;
    __VdlySet__core__DOT__dispatch__DOT__DU__DOT__packet__v0 = 0;
    VlWide<4>/*104:0*/ __VdlyVal__core__DOT__dispatch__DOT__DU__DOT__packet__v2;
    VL_ZERO_W(105, __VdlyVal__core__DOT__dispatch__DOT__DU__DOT__packet__v2);
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__DU__DOT__packet__v2;
    __VdlySet__core__DOT__dispatch__DOT__DU__DOT__packet__v2 = 0;
    VlWide<4>/*104:0*/ __VdlyVal__core__DOT__dispatch__DOT__DU__DOT__packet__v3;
    VL_ZERO_W(105, __VdlyVal__core__DOT__dispatch__DOT__DU__DOT__packet__v3);
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__DU__DOT__dispatched__v0;
    __VdlySet__core__DOT__dispatch__DOT__DU__DOT__dispatched__v0 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__DU__DOT__dispatched__v2;
    __VdlySet__core__DOT__dispatch__DOT__DU__DOT__dispatched__v2 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__DU__DOT__dispatched__v3;
    __VdlySet__core__DOT__dispatch__DOT__DU__DOT__dispatched__v3 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__DU__DOT__dispatched__v4;
    __VdlySet__core__DOT__dispatch__DOT__DU__DOT__dispatched__v4 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v0;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v0 = 0;
    CData/*3:0*/ __VdlyDim0__core__DOT__dispatch__DOT__BC__DOT__valid__v16;
    __VdlyDim0__core__DOT__dispatch__DOT__BC__DOT__valid__v16 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v16;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v16 = 0;
    CData/*3:0*/ __VdlyDim0__core__DOT__dispatch__DOT__BC__DOT__valid__v17;
    __VdlyDim0__core__DOT__dispatch__DOT__BC__DOT__valid__v17 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v18;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v18 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v19;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v19 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v20;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v20 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v21;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v21 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v22;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v22 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v23;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v23 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v24;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v24 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v25;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v25 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v26;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v26 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v27;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v27 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v28;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v28 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v29;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v29 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v30;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v30 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v31;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v31 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v32;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v32 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v33;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v33 = 0;
    CData/*3:0*/ __VdlyDim0__core__DOT__dispatch__DOT__BC__DOT__valid__v34;
    __VdlyDim0__core__DOT__dispatch__DOT__BC__DOT__valid__v34 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v34;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v34 = 0;
    CData/*3:0*/ __VdlyDim0__core__DOT__dispatch__DOT__BC__DOT__valid__v35;
    __VdlyDim0__core__DOT__dispatch__DOT__BC__DOT__valid__v35 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v35;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v35 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__agu_out__v0;
    __VdlySet__core__DOT__agu_out__v0 = 0;
    VlWide<3>/*76:0*/ __VdlyVal__core__DOT__agu_out__v1;
    VL_ZERO_W(77, __VdlyVal__core__DOT__agu_out__v1);
    CData/*0:0*/ __VdlySet__core__DOT__agu_out__v1;
    __VdlySet__core__DOT__agu_out__v1 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_pending__v0;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_pending__v0 = 0;
    VlWide<3>/*66:0*/ __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held__v2;
    VL_ZERO_W(67, __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held__v2);
    CData/*0:0*/ __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held__v2;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held__v2 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_pending__v3;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_pending__v3 = 0;
    VlWide<3>/*66:0*/ __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held__v3;
    VL_ZERO_W(67, __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held__v3);
    CData/*0:0*/ __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held__v3;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held__v3 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_pending__v5;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_pending__v5 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_pending__v0;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_pending__v0 = 0;
    QData/*42:0*/ __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held__v2;
    __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held__v2 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held__v2;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held__v2 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_pending__v3;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_pending__v3 = 0;
    QData/*42:0*/ __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held__v3;
    __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held__v3 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held__v3;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held__v3 = 0;
    CData/*0:0*/ __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_pending__v5;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_pending__v5 = 0;
    VlWide<3>/*95:0*/ __Vtemp_17;
    VlWide<3>/*95:0*/ __Vtemp_18;
    VlWide<3>/*95:0*/ __Vtemp_19;
    VlWide<3>/*95:0*/ __Vtemp_20;
    VlWide<3>/*95:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_22;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<4>/*127:0*/ __Vtemp_33;
    VlWide<4>/*127:0*/ __Vtemp_34;
    VlWide<4>/*127:0*/ __Vtemp_35;
    VlWide<4>/*127:0*/ __Vtemp_36;
    VlWide<4>/*127:0*/ __Vtemp_37;
    VlWide<4>/*127:0*/ __Vtemp_38;
    VlWide<4>/*127:0*/ __Vtemp_39;
    VlWide<4>/*127:0*/ __Vtemp_49;
    VlWide<4>/*127:0*/ __Vtemp_50;
    VlWide<4>/*127:0*/ __Vtemp_51;
    VlWide<4>/*127:0*/ __Vtemp_52;
    VlWide<4>/*127:0*/ __Vtemp_53;
    VlWide<4>/*127:0*/ __Vtemp_54;
    VlWide<4>/*127:0*/ __Vtemp_55;
    // Body
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__ldb_mem_resp__v0 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__ldb_mem_resp__v2 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__ldb_mem_resp__v3 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__ldb_mem_resp__v5 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__ldb_mem_resp__v6 = 0U;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_pending__v3 = 0U;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_pending__v5 = 0U;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_pending__v0 = 0U;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held__v2 = 0U;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held__v3 = 0U;
    __VdlySet__core__DOT__agu_out__v0 = 0U;
    __VdlySet__core__DOT__agu_out__v1 = 0U;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_pending__v3 = 0U;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_pending__v5 = 0U;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_pending__v0 = 0U;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held__v2 = 0U;
    __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held__v3 = 0U;
    __Vdly__core__DOT__fetch__DOT__FB__DOT__head = vlSelfRef.core__DOT__fetch__DOT__FB__DOT__head;
    vlSelfRef.__Vdly__core__DOT__fetch__DOT__FB__DOT__count 
        = vlSelfRef.core__DOT__fetch__DOT__FB__DOT__count;
    vlSelfRef.__VdlySet__core__DOT__chkpt__v0 = 0U;
    vlSelfRef.__VdlySet__core__DOT__chkpt__v2 = 0U;
    vlSelfRef.__VdlySet__core__DOT__chkpt_sqN__v0 = 0U;
    vlSelfRef.__VdlySet__core__DOT__chkpt_sqN__v2 = 0U;
    __VdlySet__core__DOT__rename_rob_rd__v0 = 0U;
    __VdlySet__core__DOT__rename_rob_rd__v2 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v0 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v1 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v2 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v3 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v4 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v5 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v6 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v0 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v1 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v2 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v3 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v4 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v5 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v6 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v7 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v8 = 0U;
    __Vdly__core__DOT__fetch__DOT__FB__DOT__tail = vlSelfRef.core__DOT__fetch__DOT__FB__DOT__tail;
    __Vdly__core__DOT__fetch__DOT__FB__DOT__sqN_counter 
        = vlSelfRef.core__DOT__fetch__DOT__FB__DOT__sqN_counter;
    __VdlySet__core__DOT__fetch__DOT__FB__DOT__buffer__v0 = 0U;
    __VdlySet__core__DOT__fetch__DOT__FB__DOT__buffer__v3 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__alu_dispatch_out__v0 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__alu_dispatch_out__v2 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__alu_dispatch_out__v14 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__DU__DOT__dispatched__v0 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__DU__DOT__dispatched__v2 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__DU__DOT__dispatched__v3 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__DU__DOT__dispatched__v4 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v0 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v16 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v18 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v19 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v20 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v21 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v22 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v23 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v24 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v25 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v26 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v27 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v28 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v29 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v30 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v31 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v32 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v33 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v34 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v35 = 0U;
    __VdlySet__core__DOT__rename_instr__v0 = 0U;
    __VdlySet__core__DOT__rename_instr__v2 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__DU__DOT__packet__v0 = 0U;
    __VdlySet__core__DOT__dispatch__DOT__DU__DOT__packet__v2 = 0U;
    vlSelfRef.__VdlySet__core__DOT__store_specTag__v0 = 0U;
    vlSelfRef.__VdlySet__core__DOT__store_specTag__v64 = 0U;
    __VdlySet__core__DOT__rename__DOT__rename_table__v0 = 0U;
    vlSelfRef.__VdlySet__core__DOT__rename__DOT__rename_table__v64 = 0U;
    vlSelfRef.__VdlySet__core__DOT__rename__DOT__rename_table__v96 = 0U;
    vlSelfRef.__VdlySet__core__DOT__rename__DOT__rename_table__v97 = 0U;
    vlSelfRef.__VdlySet__core__DOT__rename__DOT__rename_table__v98 = 0U;
    vlSelfRef.__VdlySet__core__DOT__rename__DOT__rename_table__v130 = 0U;
    vlSelfRef.__VdlySet__core__DOT__rename__DOT__rename_table__v131 = 0U;
    vlSelfRef.__Vdly__core__DOT__lsu__DOT__u_stb__DOT__tail_ptr 
        = vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__tail_ptr;
    vlSelfRef.__Vdly__core__DOT__lsu__DOT__u_stb__DOT__drain_ptr 
        = vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__drain_ptr;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v0 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v16 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v17 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v21 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v25 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v29 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v33 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v37 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v41 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v45 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v49 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v53 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v57 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v61 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v65 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v69 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v73 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v77 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v81 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v82 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v83 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v84 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v85 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v86 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v87 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v88 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v89 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v90 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v91 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v92 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v93 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v94 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v95 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v96 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v97 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v98 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v99 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v100 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v101 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v102 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v103 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v104 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v105 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v106 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v107 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v108 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v109 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v110 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v111 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v112 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v113 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v114 = 0U;
    vlSelfRef.__VdlySet__core__DOT__store_free__v0 = 0U;
    vlSelfRef.__VdlySet__core__DOT__store_free__v128 = 0U;
    vlSelfRef.__VdlySet__core__DOT__dispatch__DOT__BC__DOT__specTag__v0 = 0U;
    vlSelfRef.__VdlySet__core__DOT__dispatch__DOT__BC__DOT__specTag__v32 = 0U;
    vlSelfRef.__VdlySet__core__DOT__dispatch__DOT__BC__DOT__free__v0 = 0U;
    vlSelfRef.__VdlySet__core__DOT__dispatch__DOT__BC__DOT__free__v64 = 0U;
    vlSelfRef.__VdlySet__core__DOT__register_file__DOT__registers__v0 = 0U;
    vlSelfRef.__VdlySet__core__DOT__register_file__DOT__registers__v64 = 0U;
    vlSelfRef.__VdlySet__core__DOT__register_file__DOT__registers__v65 = 0U;
    vlSelfRef.__VdlySet__core__DOT__register_file__DOT__registers__v66 = 0U;
    vlSelfRef.__VdlySet__core__DOT__register_file__DOT__registers__v67 = 0U;
    vlSelfRef.__VdlySet__core__DOT__rename__DOT__tag_buffer__v0 = 0U;
    vlSelfRef.__VdlySet__core__DOT__rename__DOT__tag_buffer__v64 = 0U;
    vlSelfRef.__VdlySet__core__DOT__rename__DOT__tag_buffer__v128 = 0U;
    vlSelfRef.__VdlySet__core__DOT__rename__DOT__tag_buffer__v129 = 0U;
    vlSelfRef.__VdlySet__core__DOT__rename__DOT__tag_buffer__v130 = 0U;
    vlSelfRef.__VdlySet__core__DOT__rename__DOT__tag_buffer__v131 = 0U;
    vlSelfRef.__VdlySet__core__DOT__rename__DOT__tag_buffer__v132 = 0U;
    vlSelfRef.__VdlySet__core__DOT__rename__DOT__tag_buffer__v135 = 0U;
    vlSelfRef.__VdlySet__core__DOT__rename__DOT__tag_buffer__v138 = 0U;
    vlSelfRef.__VdlySet__core__DOT__rename__DOT__tag_buffer__v140 = 0U;
    vlSelfRef.__Vdly__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__tail 
        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__tail;
    vlSelfRef.__Vdly__core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__tail 
        = vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__tail;
    vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_valid 
        = vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_valid;
    vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__result 
        = vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__result;
    vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_count 
        = vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_count;
    vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_partial 
        = vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_partial;
    vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_divisor 
        = vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_divisor;
    vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_quot_sign 
        = vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_quot_sign;
    vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_rem_sign 
        = vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_rem_sign;
    vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_by_zero 
        = vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_by_zero;
    vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[0U] 
        = vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[0U];
    vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[1U] 
        = vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[1U];
    vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[2U] 
        = vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[2U];
    vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__state 
        = vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__state;
    vlSelfRef.__VdlySet__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue__v0 = 0U;
    vlSelfRef.__VdlySet__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue__v1 = 0U;
    vlSelfRef.__VdlySet__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue__v8 = 0U;
    vlSelfRef.__VdlySet__core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue__v0 = 0U;
    vlSelfRef.__VdlySet__core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue__v1 = 0U;
    vlSelfRef.__VdlySet__core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue__v8 = 0U;
    vlSelfRef.__Vdly__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__tail 
        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__tail;
    vlSelfRef.__Vdly__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__tail 
        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__tail;
    vlSelfRef.__VdlySet__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v0 = 0U;
    vlSelfRef.__VdlySet__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v1 = 0U;
    vlSelfRef.__VdlySet__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v8 = 0U;
    vlSelfRef.__VdlySet__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v0 = 0U;
    vlSelfRef.__VdlySet__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v1 = 0U;
    vlSelfRef.__VdlySet__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v8 = 0U;
    vlSelfRef.__VdlySet__core__DOT__int_cdb_lines__v0 = 0U;
    vlSelfRef.__VdlySet__core__DOT__int_cdb_lines__v3 = 0U;
    vlSelfRef.__Vdly__core__DOT__lsu__DOT__u_ldb__DOT__count 
        = vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__count;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v0 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v1 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v16 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v17 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v18 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v19 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v20 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v21 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v22 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v23 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v24 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v25 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v26 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v27 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v28 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v29 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v30 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v31 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v32 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v37 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v41 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v43 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v45 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v47 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v49 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v51 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v53 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v55 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v57 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v59 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v61 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v63 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v65 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v67 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v69 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v71 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v73 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v75 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v77 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v79 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v81 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v83 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v85 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v87 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v89 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v91 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v93 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v95 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v97 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v99 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v101 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v103 = 0U;
    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v105 = 0U;
    vlSelfRef.core__DOT__prefetch__DOT__IMEM__DOT__block_idx 
        = (0x1fU & VL_SHIFTR_III(8,8,32, (0x000000ffU 
                                          & vlSelfRef.core__DOT__prefetch__DOT__PC__DOT__pc_reg), 3U));
    vlSelfRef.core__DOT__prefetch__DOT__IMEM__DOT__base_word 
        = (0x000000ffU & VL_SHIFTL_III(8,32,32, (IData)(vlSelfRef.core__DOT__prefetch__DOT__IMEM__DOT__block_idx), 1U));
    vlSelfRef.core__DOT__prefetch__DOT__IMEM__DOT__word_index 
        = vlSelfRef.core__DOT__prefetch__DOT__IMEM__DOT__base_word;
    __VdlyVal__core__DOT__prefetch_instr__v0 = ((0x40U 
                                                 > (IData)(vlSelfRef.core__DOT__prefetch__DOT__IMEM__DOT__word_index))
                                                 ? vlSelfRef.core__DOT__prefetch__DOT__IMEM__DOT__mem
                                                [(0x0000003fU 
                                                  & (IData)(vlSelfRef.core__DOT__prefetch__DOT__IMEM__DOT__word_index))]
                                                 : 0U);
    vlSelfRef.core__DOT__prefetch__DOT__IMEM__DOT__word_index 
        = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.core__DOT__prefetch__DOT__IMEM__DOT__base_word)));
    __VdlyVal__core__DOT__prefetch_instr__v1 = ((0x40U 
                                                 > (IData)(vlSelfRef.core__DOT__prefetch__DOT__IMEM__DOT__word_index))
                                                 ? vlSelfRef.core__DOT__prefetch__DOT__IMEM__DOT__mem
                                                [(0x0000003fU 
                                                  & (IData)(vlSelfRef.core__DOT__prefetch__DOT__IMEM__DOT__word_index))]
                                                 : 0U);
    if (((IData)(vlSelfRef.rst) | (IData)(vlSelfRef.core__DOT__flush))) {
        vlSelfRef.__VdlySet__core__DOT__chkpt__v0 = 1U;
        vlSelfRef.__VdlySet__core__DOT__chkpt_sqN__v0 = 1U;
        __VdlySet__core__DOT__rename_rob_rd__v0 = 1U;
        __VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v0 = 1U;
        __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v0 = 1U;
        __VdlySet__core__DOT__dispatch__DOT__alu_dispatch_out__v0 = 1U;
        __VdlySet__core__DOT__dispatch__DOT__DU__DOT__dispatched__v0 = 1U;
        __VdlySet__core__DOT__rename_instr__v0 = 1U;
        __VdlySet__core__DOT__dispatch__DOT__DU__DOT__packet__v0 = 1U;
        vlSelfRef.__VdlySet__core__DOT__store_specTag__v0 = 1U;
        vlSelfRef.__VdlySet__core__DOT__store_free__v0 = 1U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.core__DOT__rename__DOT__OUT_busy)))) {
            vlSelfRef.__VdlyVal__core__DOT__chkpt__v2 
                = ((vlSelfRef.core__DOT__decode_instr[0U][3U] 
                    >> 5U) & ((0U != (0x0000000fU & 
                                      (vlSelfRef.core__DOT__decode_instr[0U][0U] 
                                       >> 2U))) | (2U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.core__DOT__decode_instr[0U][0U] 
                                                       >> 6U)))));
            vlSelfRef.__VdlySet__core__DOT__chkpt__v2 = 1U;
            vlSelfRef.__VdlyVal__core__DOT__chkpt__v3 
                = ((vlSelfRef.core__DOT__decode_instr[1U][3U] 
                    >> 5U) & ((0U != (0x0000000fU & 
                                      (vlSelfRef.core__DOT__decode_instr[1U][0U] 
                                       >> 2U))) | (2U 
                                                   == 
                                                   (3U 
                                                    & (vlSelfRef.core__DOT__decode_instr[1U][0U] 
                                                       >> 6U)))));
            vlSelfRef.__VdlyVal__core__DOT__chkpt_sqN__v2 
                = (0x0000007fU & ((vlSelfRef.core__DOT__decode_instr[0U][3U] 
                                   << 2U) | (vlSelfRef.core__DOT__decode_instr[0U][2U] 
                                             >> 0x0000001eU)));
            vlSelfRef.__VdlySet__core__DOT__chkpt_sqN__v2 = 1U;
            vlSelfRef.__VdlyVal__core__DOT__chkpt_sqN__v3 
                = (0x0000007fU & ((vlSelfRef.core__DOT__decode_instr[1U][3U] 
                                   << 2U) | (vlSelfRef.core__DOT__decode_instr[1U][2U] 
                                             >> 0x0000001eU)));
            __VdlyVal__core__DOT__rename_rob_rd__v2 
                = (0x0000001fU & (vlSelfRef.core__DOT__decode_instr[0U][1U] 
                                  >> 9U));
            __VdlySet__core__DOT__rename_rob_rd__v2 = 1U;
            __VdlyVal__core__DOT__rename_rob_rd__v3 
                = (0x0000001fU & (vlSelfRef.core__DOT__decode_instr[1U][1U] 
                                  >> 9U));
            __VdlyVal__core__DOT__rename_instr__v2 
                = (1U & (vlSelfRef.core__DOT__decode_instr[0U][3U] 
                         >> 5U));
            __VdlySet__core__DOT__rename_instr__v2 = 1U;
            __VdlyVal__core__DOT__rename_instr__v3 
                = (0x0000007fU & ((vlSelfRef.core__DOT__decode_instr[0U][3U] 
                                   << 2U) | (vlSelfRef.core__DOT__decode_instr[0U][2U] 
                                             >> 0x0000001eU)));
            __VdlyVal__core__DOT__rename_instr__v4 
                = ((vlSelfRef.core__DOT__decode_instr[0U][2U] 
                    << 2U) | (vlSelfRef.core__DOT__decode_instr[0U][1U] 
                              >> 0x0000001eU));
            __VdlyVal__core__DOT__rename_instr__v5 
                = (3U & (vlSelfRef.core__DOT__decode_instr[0U][1U] 
                         >> 0x0000001cU));
            __VdlyVal__core__DOT__rename_instr__v6 
                = (0x0000000fU & (vlSelfRef.core__DOT__decode_instr[0U][1U] 
                                  >> 0x00000018U));
            __VdlyVal__core__DOT__rename_instr__v7 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U]
                [(0x0000001fU & (vlSelfRef.core__DOT__decode_instr[0U][1U] 
                                 >> 0x00000013U))];
            __VdlyVal__core__DOT__rename_instr__v8 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U]
                [(0x0000001fU & (vlSelfRef.core__DOT__decode_instr[0U][1U] 
                                 >> 0x0000000eU))];
            __VdlyVal__core__DOT__rename_instr__v9 
                = vlSelfRef.core__DOT__rename__DOT__chosen[0U];
            __VdlyVal__core__DOT__rename_instr__v10 
                = ((vlSelfRef.core__DOT__decode_instr[0U][1U] 
                    << 0x00000017U) | (vlSelfRef.core__DOT__decode_instr[0U][0U] 
                                       >> 9U));
            __VdlyVal__core__DOT__rename_instr__v11 
                = (1U & (vlSelfRef.core__DOT__decode_instr[0U][0U] 
                         >> 8U));
            __VdlyVal__core__DOT__rename_instr__v12 
                = (3U & (vlSelfRef.core__DOT__decode_instr[0U][0U] 
                         >> 6U));
            __VdlyVal__core__DOT__rename_instr__v13 
                = (0x0000000fU & (vlSelfRef.core__DOT__decode_instr[0U][0U] 
                                  >> 2U));
            __VdlyVal__core__DOT__rename_instr__v14 
                = (3U & vlSelfRef.core__DOT__decode_instr[0U][0U]);
            __VdlyVal__core__DOT__rename_instr__v15 
                = (1U & (vlSelfRef.core__DOT__decode_instr[1U][3U] 
                         >> 5U));
            __VdlyVal__core__DOT__rename_instr__v16 
                = (0x0000007fU & ((vlSelfRef.core__DOT__decode_instr[1U][3U] 
                                   << 2U) | (vlSelfRef.core__DOT__decode_instr[1U][2U] 
                                             >> 0x0000001eU)));
            __VdlyVal__core__DOT__rename_instr__v17 
                = ((vlSelfRef.core__DOT__decode_instr[1U][2U] 
                    << 2U) | (vlSelfRef.core__DOT__decode_instr[1U][1U] 
                              >> 0x0000001eU));
            __VdlyVal__core__DOT__rename_instr__v18 
                = (3U & (vlSelfRef.core__DOT__decode_instr[1U][1U] 
                         >> 0x0000001cU));
            __VdlyVal__core__DOT__rename_instr__v19 
                = (0x0000000fU & (vlSelfRef.core__DOT__decode_instr[1U][1U] 
                                  >> 0x00000018U));
            __VdlyVal__core__DOT__rename_instr__v20 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U]
                [(0x0000001fU & (vlSelfRef.core__DOT__decode_instr[1U][1U] 
                                 >> 0x00000013U))];
            __VdlyVal__core__DOT__rename_instr__v21 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U]
                [(0x0000001fU & (vlSelfRef.core__DOT__decode_instr[1U][1U] 
                                 >> 0x0000000eU))];
            __VdlyVal__core__DOT__rename_instr__v22 
                = vlSelfRef.core__DOT__rename__DOT__chosen[1U];
            __VdlyVal__core__DOT__rename_instr__v23 
                = ((vlSelfRef.core__DOT__decode_instr[1U][1U] 
                    << 0x00000017U) | (vlSelfRef.core__DOT__decode_instr[1U][0U] 
                                       >> 9U));
            __VdlyVal__core__DOT__rename_instr__v24 
                = (1U & (vlSelfRef.core__DOT__decode_instr[1U][0U] 
                         >> 8U));
            __VdlyVal__core__DOT__rename_instr__v25 
                = (3U & (vlSelfRef.core__DOT__decode_instr[1U][0U] 
                         >> 6U));
            __VdlyVal__core__DOT__rename_instr__v26 
                = (0x0000000fU & (vlSelfRef.core__DOT__decode_instr[1U][0U] 
                                  >> 2U));
            __VdlyVal__core__DOT__rename_instr__v27 
                = (3U & vlSelfRef.core__DOT__decode_instr[1U][0U]);
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v64 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][0U];
            vlSelfRef.__VdlySet__core__DOT__store_specTag__v64 = 1U;
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v65 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][1U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v66 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][2U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v67 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][3U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v68 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][4U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v69 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][5U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v70 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][6U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v71 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][7U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v72 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][8U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v73 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][9U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v74 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][10U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v75 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][11U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v76 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][12U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v77 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][13U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v78 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][14U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v79 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][15U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v80 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][16U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v81 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][17U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v82 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][18U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v83 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][19U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v84 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][20U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v85 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][21U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v86 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][22U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v87 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][23U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v88 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][24U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v89 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][25U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v90 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][26U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v91 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][27U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v92 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][28U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v93 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][29U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v94 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][30U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v95 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[0U][31U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v96 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][0U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v97 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][1U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v98 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][2U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v99 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][3U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v100 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][4U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v101 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][5U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v102 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][6U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v103 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][7U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v104 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][8U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v105 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][9U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v106 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][10U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v107 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][11U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v108 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][12U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v109 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][13U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v110 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][14U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v111 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][15U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v112 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][16U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v113 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][17U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v114 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][18U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v115 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][19U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v116 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][20U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v117 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][21U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v118 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][22U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v119 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][23U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v120 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][24U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v121 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][25U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v122 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][26U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v123 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][27U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v124 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][28U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v125 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][29U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v126 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][30U];
            vlSelfRef.__VdlyVal__core__DOT__store_specTag__v127 
                = vlSelfRef.core__DOT__rename__DOT__local_rat[1U][31U];
            vlSelfRef.__VdlyVal__core__DOT__store_free__v128 
                = (1U & (IData)(vlSelfRef.core__DOT__rename__DOT__masked[0U]));
            vlSelfRef.__VdlySet__core__DOT__store_free__v128 = 1U;
            vlSelfRef.__VdlyVal__core__DOT__store_free__v129 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 1U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v130 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 2U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v131 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 3U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v132 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 4U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v133 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 5U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v134 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 6U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v135 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 7U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v136 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 8U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v137 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 9U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v138 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x0aU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v139 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x0bU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v140 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x0cU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v141 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x0dU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v142 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x0eU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v143 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x0fU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v144 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x10U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v145 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x11U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v146 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x12U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v147 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x13U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v148 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x14U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v149 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x15U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v150 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x16U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v151 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x17U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v152 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x18U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v153 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x19U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v154 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x1aU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v155 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x1bU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v156 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x1cU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v157 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x1dU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v158 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x1eU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v159 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x1fU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v160 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x20U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v161 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x21U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v162 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x22U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v163 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x23U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v164 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x24U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v165 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x25U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v166 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x26U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v167 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x27U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v168 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x28U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v169 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x29U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v170 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x2aU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v171 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x2bU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v172 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x2cU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v173 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x2dU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v174 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x2eU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v175 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x2fU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v176 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x30U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v177 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x31U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v178 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x32U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v179 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x33U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v180 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x34U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v181 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x35U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v182 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x36U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v183 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x37U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v184 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x38U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v185 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x39U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v186 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x3aU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v187 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x3bU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v188 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x3cU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v189 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x3dU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v190 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x3eU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v191 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[0U] 
                                 >> 0x3fU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v192 
                = (1U & (IData)(vlSelfRef.core__DOT__rename__DOT__masked[1U]));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v193 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 1U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v194 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 2U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v195 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 3U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v196 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 4U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v197 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 5U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v198 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 6U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v199 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 7U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v200 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 8U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v201 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 9U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v202 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x0aU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v203 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x0bU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v204 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x0cU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v205 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x0dU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v206 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x0eU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v207 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x0fU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v208 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x10U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v209 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x11U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v210 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x12U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v211 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x13U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v212 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x14U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v213 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x15U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v214 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x16U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v215 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x17U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v216 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x18U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v217 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x19U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v218 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x1aU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v219 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x1bU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v220 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x1cU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v221 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x1dU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v222 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x1eU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v223 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x1fU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v224 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x20U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v225 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x21U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v226 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x22U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v227 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x23U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v228 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x24U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v229 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x25U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v230 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x26U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v231 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x27U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v232 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x28U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v233 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x29U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v234 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x2aU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v235 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x2bU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v236 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x2cU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v237 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x2dU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v238 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x2eU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v239 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x2fU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v240 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x30U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v241 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x31U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v242 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x32U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v243 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x33U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v244 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x34U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v245 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x35U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v246 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x36U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v247 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x37U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v248 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x38U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v249 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x39U)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v250 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x3aU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v251 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x3bU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v252 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x3cU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v253 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x3dU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v254 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x3eU)));
            vlSelfRef.__VdlyVal__core__DOT__store_free__v255 
                = (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__masked[1U] 
                                 >> 0x3fU)));
        }
        if (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__mul_valid[0U]) {
            __VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v1 = 1U;
            vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____Vlvbound_hea6a44cf__0 
                = (0x0000007fU & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                                  [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__mul_slot[0U]][3U] 
                                  >> 1U));
            __VdlyVal__core__DOT__dispatch__DOT__mul_div_dispatch_out__v2 
                = vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____Vlvbound_hea6a44cf__0;
            __VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v2 = 1U;
            vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____Vlvbound_h969d971b__0 
                = (0x0000000fU & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                                  [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__mul_slot[0U]][1U] 
                                  >> 0x0000001bU));
            __VdlyVal__core__DOT__dispatch__DOT__mul_div_dispatch_out__v3 
                = vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____Vlvbound_h969d971b__0;
            __VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v3 = 1U;
            vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____Vlvbound_hea7ca7db__0 
                = (0x0000003fU & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                                  [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__mul_slot[0U]][1U] 
                                  >> 0x00000015U));
            __VdlyVal__core__DOT__dispatch__DOT__mul_div_dispatch_out__v4 
                = vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____Vlvbound_hea7ca7db__0;
            __VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v4 = 1U;
            vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____Vlvbound_hea7c9382__0 
                = (0x0000003fU & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                                  [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__mul_slot[0U]][1U] 
                                  >> 0x0000000fU));
            __VdlyVal__core__DOT__dispatch__DOT__mul_div_dispatch_out__v5 
                = vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____Vlvbound_hea7c9382__0;
            __VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v5 = 1U;
            vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____Vlvbound_hea7ca50a__0 
                = (0x0000003fU & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                                  [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__mul_slot[0U]][1U] 
                                  >> 9U));
            __VdlyVal__core__DOT__dispatch__DOT__mul_div_dispatch_out__v6 
                = vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____Vlvbound_hea7ca50a__0;
            __VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v6 = 1U;
        }
        if (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__lsu_valid[0U]) {
            __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v1 = 1U;
            vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____Vlvbound_h3d73585b__0 
                = (0x0000007fU & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                                  [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__lsu_slot[0U]][3U] 
                                  >> 1U));
            __VdlyVal__core__DOT__dispatch__DOT__lsu_dispatch_out__v2 
                = vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____Vlvbound_h3d73585b__0;
            __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v2 = 1U;
            vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____Vlvbound_h645e441d__0 
                = (0x0000000fU & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                                  [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__lsu_slot[0U]][1U] 
                                  >> 0x0000001bU));
            __VdlyVal__core__DOT__dispatch__DOT__lsu_dispatch_out__v3 
                = vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____Vlvbound_h645e441d__0;
            __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v3 = 1U;
            vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____Vlvbound_h3d3c00ca__0 
                = (0x0000003fU & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                                  [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__lsu_slot[0U]][1U] 
                                  >> 0x00000015U));
            __VdlyVal__core__DOT__dispatch__DOT__lsu_dispatch_out__v4 
                = vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____Vlvbound_h3d3c00ca__0;
            __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v4 = 1U;
            vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____Vlvbound_h3d3c39b1__0 
                = (0x0000003fU & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                                  [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__lsu_slot[0U]][1U] 
                                  >> 0x0000000fU));
            __VdlyVal__core__DOT__dispatch__DOT__lsu_dispatch_out__v5 
                = vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____Vlvbound_h3d3c39b1__0;
            __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v5 = 1U;
            vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____Vlvbound_h3d3bfc19__0 
                = (0x0000003fU & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                                  [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__lsu_slot[0U]][1U] 
                                  >> 9U));
            __VdlyVal__core__DOT__dispatch__DOT__lsu_dispatch_out__v6 
                = vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____Vlvbound_h3d3bfc19__0;
            __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v6 = 1U;
            vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____Vlvbound_h3dbea596__0 
                = ((vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                    [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__lsu_slot[0U]][1U] 
                    << 0x00000017U) | (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                                       [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__lsu_slot[0U]][0U] 
                                       >> 9U));
            __VdlyVal__core__DOT__dispatch__DOT__lsu_dispatch_out__v7 
                = vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____Vlvbound_h3dbea596__0;
            __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v7 = 1U;
            vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____Vlvbound_h3df6c07f__0 
                = (1U & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                         [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__lsu_slot[0U]][0U] 
                         >> 8U));
            __VdlyVal__core__DOT__dispatch__DOT__lsu_dispatch_out__v8 
                = vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____Vlvbound_h3df6c07f__0;
            __VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v8 = 1U;
        }
        if (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_valid[0U]) {
            __VdlySet__core__DOT__dispatch__DOT__alu_dispatch_out__v2 = 1U;
            __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v3 
                = (0x0000007fU & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                                  [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[0U]][3U] 
                                  >> 1U));
            __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v4 
                = ((vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                    [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[0U]][3U] 
                    << 0x0000001fU) | (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                                       [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[0U]][2U] 
                                       >> 1U));
            __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v5 
                = (0x0000000fU & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                                  [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[0U]][1U] 
                                  >> 0x0000001bU));
            __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v6 
                = (0x0000003fU & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                                  [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[0U]][1U] 
                                  >> 0x00000015U));
            __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v7 
                = (0x0000003fU & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                                  [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[0U]][1U] 
                                  >> 0x0000000fU));
            __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v8 
                = (0x0000003fU & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                                  [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[0U]][1U] 
                                  >> 9U));
            __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v9 
                = ((vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                    [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[0U]][1U] 
                    << 0x00000017U) | (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                                       [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[0U]][0U] 
                                       >> 9U));
            __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v10 
                = (1U & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                         [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[0U]][0U] 
                         >> 8U));
            __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v11 
                = (3U & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                         [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[0U]][0U] 
                         >> 6U));
            __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v12 
                = (0x0000000fU & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                                  [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[0U]][0U] 
                                  >> 2U));
            __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v13 
                = (3U & vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                   [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[0U]][0U]);
        }
        if (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_valid[1U]) {
            __VdlySet__core__DOT__dispatch__DOT__alu_dispatch_out__v14 = 1U;
            __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v15 
                = (0x0000007fU & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                                  [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[1U]][3U] 
                                  >> 1U));
            __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v16 
                = ((vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                    [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[1U]][3U] 
                    << 0x0000001fU) | (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                                       [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[1U]][2U] 
                                       >> 1U));
            __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v17 
                = (0x0000000fU & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                                  [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[1U]][1U] 
                                  >> 0x0000001bU));
            __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v18 
                = (0x0000003fU & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                                  [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[1U]][1U] 
                                  >> 0x00000015U));
            __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v19 
                = (0x0000003fU & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                                  [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[1U]][1U] 
                                  >> 0x0000000fU));
            __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v20 
                = (0x0000003fU & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                                  [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[1U]][1U] 
                                  >> 9U));
            __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v21 
                = ((vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                    [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[1U]][1U] 
                    << 0x00000017U) | (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                                       [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[1U]][0U] 
                                       >> 9U));
            __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v22 
                = (1U & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                         [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[1U]][0U] 
                         >> 8U));
            __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v23 
                = (3U & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                         [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[1U]][0U] 
                         >> 6U));
            __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v24 
                = (0x0000000fU & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                                  [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[1U]][0U] 
                                  >> 2U));
            __VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v25 
                = (3U & vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet
                   [vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[1U]][0U]);
        }
        if (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__can_dispatch[0U]) {
            __VdlySet__core__DOT__dispatch__DOT__DU__DOT__dispatched__v2 = 1U;
        }
        if (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__can_dispatch[1U]) {
            __VdlySet__core__DOT__dispatch__DOT__DU__DOT__dispatched__v3 = 1U;
        }
        if (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet_done) {
            __VdlySet__core__DOT__dispatch__DOT__DU__DOT__dispatched__v4 = 1U;
            __VdlyVal__core__DOT__dispatch__DOT__DU__DOT__packet__v2[0U] 
                = vlSelfRef.core__DOT__rename_instr[0U][0U];
            __VdlyVal__core__DOT__dispatch__DOT__DU__DOT__packet__v2[1U] 
                = vlSelfRef.core__DOT__rename_instr[0U][1U];
            __VdlyVal__core__DOT__dispatch__DOT__DU__DOT__packet__v2[2U] 
                = vlSelfRef.core__DOT__rename_instr[0U][2U];
            __VdlyVal__core__DOT__dispatch__DOT__DU__DOT__packet__v2[3U] 
                = vlSelfRef.core__DOT__rename_instr[0U][3U];
            __VdlySet__core__DOT__dispatch__DOT__DU__DOT__packet__v2 = 1U;
            __VdlyVal__core__DOT__dispatch__DOT__DU__DOT__packet__v3[0U] 
                = vlSelfRef.core__DOT__rename_instr[1U][0U];
            __VdlyVal__core__DOT__dispatch__DOT__DU__DOT__packet__v3[1U] 
                = vlSelfRef.core__DOT__rename_instr[1U][1U];
            __VdlyVal__core__DOT__dispatch__DOT__DU__DOT__packet__v3[2U] 
                = vlSelfRef.core__DOT__rename_instr[1U][2U];
            __VdlyVal__core__DOT__dispatch__DOT__DU__DOT__packet__v3[3U] 
                = vlSelfRef.core__DOT__rename_instr[1U][3U];
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.rst)))) {
        if ((1U & (~ (IData)(vlSelfRef.core__DOT__flush)))) {
            if (vlSelfRef.core__DOT__chkpt[0U]) {
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v0 
                    = vlSelfRef.core__DOT__store_specTag[0U][0U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v0 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlySet__core__DOT__dispatch__DOT__BC__DOT__specTag__v0 = 1U;
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v1 
                    = vlSelfRef.core__DOT__store_specTag[0U][1U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v1 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v2 
                    = vlSelfRef.core__DOT__store_specTag[0U][2U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v2 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v3 
                    = vlSelfRef.core__DOT__store_specTag[0U][3U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v3 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v4 
                    = vlSelfRef.core__DOT__store_specTag[0U][4U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v4 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v5 
                    = vlSelfRef.core__DOT__store_specTag[0U][5U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v5 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v6 
                    = vlSelfRef.core__DOT__store_specTag[0U][6U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v6 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v7 
                    = vlSelfRef.core__DOT__store_specTag[0U][7U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v7 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v8 
                    = vlSelfRef.core__DOT__store_specTag[0U][8U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v8 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v9 
                    = vlSelfRef.core__DOT__store_specTag[0U][9U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v9 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v10 
                    = vlSelfRef.core__DOT__store_specTag[0U][10U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v10 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v11 
                    = vlSelfRef.core__DOT__store_specTag[0U][11U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v11 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v12 
                    = vlSelfRef.core__DOT__store_specTag[0U][12U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v12 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v13 
                    = vlSelfRef.core__DOT__store_specTag[0U][13U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v13 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v14 
                    = vlSelfRef.core__DOT__store_specTag[0U][14U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v14 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v15 
                    = vlSelfRef.core__DOT__store_specTag[0U][15U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v15 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v16 
                    = vlSelfRef.core__DOT__store_specTag[0U][16U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v16 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v17 
                    = vlSelfRef.core__DOT__store_specTag[0U][17U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v17 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v18 
                    = vlSelfRef.core__DOT__store_specTag[0U][18U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v18 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v19 
                    = vlSelfRef.core__DOT__store_specTag[0U][19U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v19 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v20 
                    = vlSelfRef.core__DOT__store_specTag[0U][20U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v20 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v21 
                    = vlSelfRef.core__DOT__store_specTag[0U][21U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v21 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v22 
                    = vlSelfRef.core__DOT__store_specTag[0U][22U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v22 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v23 
                    = vlSelfRef.core__DOT__store_specTag[0U][23U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v23 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v24 
                    = vlSelfRef.core__DOT__store_specTag[0U][24U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v24 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v25 
                    = vlSelfRef.core__DOT__store_specTag[0U][25U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v25 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v26 
                    = vlSelfRef.core__DOT__store_specTag[0U][26U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v26 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v27 
                    = vlSelfRef.core__DOT__store_specTag[0U][27U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v27 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v28 
                    = vlSelfRef.core__DOT__store_specTag[0U][28U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v28 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v29 
                    = vlSelfRef.core__DOT__store_specTag[0U][29U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v29 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v30 
                    = vlSelfRef.core__DOT__store_specTag[0U][30U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v30 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v31 
                    = vlSelfRef.core__DOT__store_specTag[0U][31U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v31 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v0 
                    = vlSelfRef.core__DOT__store_free[0U][0U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v0 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlySet__core__DOT__dispatch__DOT__BC__DOT__free__v0 = 1U;
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v1 
                    = vlSelfRef.core__DOT__store_free[0U][1U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v1 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v2 
                    = vlSelfRef.core__DOT__store_free[0U][2U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v2 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v3 
                    = vlSelfRef.core__DOT__store_free[0U][3U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v3 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v4 
                    = vlSelfRef.core__DOT__store_free[0U][4U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v4 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v5 
                    = vlSelfRef.core__DOT__store_free[0U][5U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v5 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v6 
                    = vlSelfRef.core__DOT__store_free[0U][6U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v6 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v7 
                    = vlSelfRef.core__DOT__store_free[0U][7U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v7 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v8 
                    = vlSelfRef.core__DOT__store_free[0U][8U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v8 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v9 
                    = vlSelfRef.core__DOT__store_free[0U][9U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v9 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v10 
                    = vlSelfRef.core__DOT__store_free[0U][10U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v10 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v11 
                    = vlSelfRef.core__DOT__store_free[0U][11U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v11 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v12 
                    = vlSelfRef.core__DOT__store_free[0U][12U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v12 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v13 
                    = vlSelfRef.core__DOT__store_free[0U][13U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v13 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v14 
                    = vlSelfRef.core__DOT__store_free[0U][14U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v14 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v15 
                    = vlSelfRef.core__DOT__store_free[0U][15U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v15 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v16 
                    = vlSelfRef.core__DOT__store_free[0U][16U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v16 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v17 
                    = vlSelfRef.core__DOT__store_free[0U][17U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v17 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v18 
                    = vlSelfRef.core__DOT__store_free[0U][18U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v18 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v19 
                    = vlSelfRef.core__DOT__store_free[0U][19U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v19 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v20 
                    = vlSelfRef.core__DOT__store_free[0U][20U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v20 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v21 
                    = vlSelfRef.core__DOT__store_free[0U][21U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v21 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v22 
                    = vlSelfRef.core__DOT__store_free[0U][22U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v22 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v23 
                    = vlSelfRef.core__DOT__store_free[0U][23U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v23 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v24 
                    = vlSelfRef.core__DOT__store_free[0U][24U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v24 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v25 
                    = vlSelfRef.core__DOT__store_free[0U][25U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v25 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v26 
                    = vlSelfRef.core__DOT__store_free[0U][26U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v26 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v27 
                    = vlSelfRef.core__DOT__store_free[0U][27U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v27 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v28 
                    = vlSelfRef.core__DOT__store_free[0U][28U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v28 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v29 
                    = vlSelfRef.core__DOT__store_free[0U][29U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v29 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v30 
                    = vlSelfRef.core__DOT__store_free[0U][30U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v30 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v31 
                    = vlSelfRef.core__DOT__store_free[0U][31U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v31 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v32 
                    = vlSelfRef.core__DOT__store_free[0U][32U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v32 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v33 
                    = vlSelfRef.core__DOT__store_free[0U][33U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v33 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v34 
                    = vlSelfRef.core__DOT__store_free[0U][34U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v34 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v35 
                    = vlSelfRef.core__DOT__store_free[0U][35U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v35 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v36 
                    = vlSelfRef.core__DOT__store_free[0U][36U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v36 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v37 
                    = vlSelfRef.core__DOT__store_free[0U][37U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v37 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v38 
                    = vlSelfRef.core__DOT__store_free[0U][38U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v38 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v39 
                    = vlSelfRef.core__DOT__store_free[0U][39U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v39 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v40 
                    = vlSelfRef.core__DOT__store_free[0U][40U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v40 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v41 
                    = vlSelfRef.core__DOT__store_free[0U][41U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v41 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v42 
                    = vlSelfRef.core__DOT__store_free[0U][42U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v42 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v43 
                    = vlSelfRef.core__DOT__store_free[0U][43U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v43 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v44 
                    = vlSelfRef.core__DOT__store_free[0U][44U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v44 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v45 
                    = vlSelfRef.core__DOT__store_free[0U][45U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v45 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v46 
                    = vlSelfRef.core__DOT__store_free[0U][46U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v46 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v47 
                    = vlSelfRef.core__DOT__store_free[0U][47U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v47 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v48 
                    = vlSelfRef.core__DOT__store_free[0U][48U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v48 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v49 
                    = vlSelfRef.core__DOT__store_free[0U][49U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v49 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v50 
                    = vlSelfRef.core__DOT__store_free[0U][50U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v50 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v51 
                    = vlSelfRef.core__DOT__store_free[0U][51U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v51 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v52 
                    = vlSelfRef.core__DOT__store_free[0U][52U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v52 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v53 
                    = vlSelfRef.core__DOT__store_free[0U][53U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v53 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v54 
                    = vlSelfRef.core__DOT__store_free[0U][54U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v54 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v55 
                    = vlSelfRef.core__DOT__store_free[0U][55U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v55 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v56 
                    = vlSelfRef.core__DOT__store_free[0U][56U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v56 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v57 
                    = vlSelfRef.core__DOT__store_free[0U][57U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v57 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v58 
                    = vlSelfRef.core__DOT__store_free[0U][58U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v58 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v59 
                    = vlSelfRef.core__DOT__store_free[0U][59U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v59 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v60 
                    = vlSelfRef.core__DOT__store_free[0U][60U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v60 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v61 
                    = vlSelfRef.core__DOT__store_free[0U][61U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v61 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v62 
                    = vlSelfRef.core__DOT__store_free[0U][62U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v62 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v63 
                    = vlSelfRef.core__DOT__store_free[0U][63U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v63 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
            }
            if (vlSelfRef.core__DOT__chkpt[1U]) {
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v32 
                    = vlSelfRef.core__DOT__store_specTag[1U][0U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v32 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlySet__core__DOT__dispatch__DOT__BC__DOT__specTag__v32 = 1U;
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v33 
                    = vlSelfRef.core__DOT__store_specTag[1U][1U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v33 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v34 
                    = vlSelfRef.core__DOT__store_specTag[1U][2U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v34 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v35 
                    = vlSelfRef.core__DOT__store_specTag[1U][3U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v35 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v36 
                    = vlSelfRef.core__DOT__store_specTag[1U][4U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v36 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v37 
                    = vlSelfRef.core__DOT__store_specTag[1U][5U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v37 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v38 
                    = vlSelfRef.core__DOT__store_specTag[1U][6U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v38 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v39 
                    = vlSelfRef.core__DOT__store_specTag[1U][7U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v39 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v40 
                    = vlSelfRef.core__DOT__store_specTag[1U][8U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v40 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v41 
                    = vlSelfRef.core__DOT__store_specTag[1U][9U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v41 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v42 
                    = vlSelfRef.core__DOT__store_specTag[1U][10U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v42 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v43 
                    = vlSelfRef.core__DOT__store_specTag[1U][11U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v43 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v44 
                    = vlSelfRef.core__DOT__store_specTag[1U][12U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v44 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v45 
                    = vlSelfRef.core__DOT__store_specTag[1U][13U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v45 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v46 
                    = vlSelfRef.core__DOT__store_specTag[1U][14U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v46 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v47 
                    = vlSelfRef.core__DOT__store_specTag[1U][15U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v47 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v48 
                    = vlSelfRef.core__DOT__store_specTag[1U][16U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v48 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v49 
                    = vlSelfRef.core__DOT__store_specTag[1U][17U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v49 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v50 
                    = vlSelfRef.core__DOT__store_specTag[1U][18U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v50 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v51 
                    = vlSelfRef.core__DOT__store_specTag[1U][19U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v51 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v52 
                    = vlSelfRef.core__DOT__store_specTag[1U][20U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v52 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v53 
                    = vlSelfRef.core__DOT__store_specTag[1U][21U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v53 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v54 
                    = vlSelfRef.core__DOT__store_specTag[1U][22U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v54 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v55 
                    = vlSelfRef.core__DOT__store_specTag[1U][23U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v55 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v56 
                    = vlSelfRef.core__DOT__store_specTag[1U][24U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v56 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v57 
                    = vlSelfRef.core__DOT__store_specTag[1U][25U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v57 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v58 
                    = vlSelfRef.core__DOT__store_specTag[1U][26U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v58 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v59 
                    = vlSelfRef.core__DOT__store_specTag[1U][27U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v59 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v60 
                    = vlSelfRef.core__DOT__store_specTag[1U][28U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v60 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v61 
                    = vlSelfRef.core__DOT__store_specTag[1U][29U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v61 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v62 
                    = vlSelfRef.core__DOT__store_specTag[1U][30U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v62 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__specTag__v63 
                    = vlSelfRef.core__DOT__store_specTag[1U][31U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__specTag__v63 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v64 
                    = vlSelfRef.core__DOT__store_free[1U][0U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v64 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlySet__core__DOT__dispatch__DOT__BC__DOT__free__v64 = 1U;
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v65 
                    = vlSelfRef.core__DOT__store_free[1U][1U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v65 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v66 
                    = vlSelfRef.core__DOT__store_free[1U][2U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v66 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v67 
                    = vlSelfRef.core__DOT__store_free[1U][3U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v67 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v68 
                    = vlSelfRef.core__DOT__store_free[1U][4U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v68 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v69 
                    = vlSelfRef.core__DOT__store_free[1U][5U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v69 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v70 
                    = vlSelfRef.core__DOT__store_free[1U][6U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v70 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v71 
                    = vlSelfRef.core__DOT__store_free[1U][7U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v71 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v72 
                    = vlSelfRef.core__DOT__store_free[1U][8U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v72 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v73 
                    = vlSelfRef.core__DOT__store_free[1U][9U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v73 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v74 
                    = vlSelfRef.core__DOT__store_free[1U][10U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v74 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v75 
                    = vlSelfRef.core__DOT__store_free[1U][11U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v75 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v76 
                    = vlSelfRef.core__DOT__store_free[1U][12U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v76 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v77 
                    = vlSelfRef.core__DOT__store_free[1U][13U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v77 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v78 
                    = vlSelfRef.core__DOT__store_free[1U][14U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v78 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v79 
                    = vlSelfRef.core__DOT__store_free[1U][15U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v79 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v80 
                    = vlSelfRef.core__DOT__store_free[1U][16U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v80 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v81 
                    = vlSelfRef.core__DOT__store_free[1U][17U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v81 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v82 
                    = vlSelfRef.core__DOT__store_free[1U][18U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v82 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v83 
                    = vlSelfRef.core__DOT__store_free[1U][19U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v83 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v84 
                    = vlSelfRef.core__DOT__store_free[1U][20U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v84 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v85 
                    = vlSelfRef.core__DOT__store_free[1U][21U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v85 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v86 
                    = vlSelfRef.core__DOT__store_free[1U][22U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v86 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v87 
                    = vlSelfRef.core__DOT__store_free[1U][23U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v87 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v88 
                    = vlSelfRef.core__DOT__store_free[1U][24U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v88 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v89 
                    = vlSelfRef.core__DOT__store_free[1U][25U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v89 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v90 
                    = vlSelfRef.core__DOT__store_free[1U][26U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v90 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v91 
                    = vlSelfRef.core__DOT__store_free[1U][27U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v91 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v92 
                    = vlSelfRef.core__DOT__store_free[1U][28U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v92 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v93 
                    = vlSelfRef.core__DOT__store_free[1U][29U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v93 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v94 
                    = vlSelfRef.core__DOT__store_free[1U][30U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v94 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v95 
                    = vlSelfRef.core__DOT__store_free[1U][31U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v95 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v96 
                    = vlSelfRef.core__DOT__store_free[1U][32U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v96 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v97 
                    = vlSelfRef.core__DOT__store_free[1U][33U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v97 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v98 
                    = vlSelfRef.core__DOT__store_free[1U][34U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v98 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v99 
                    = vlSelfRef.core__DOT__store_free[1U][35U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v99 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v100 
                    = vlSelfRef.core__DOT__store_free[1U][36U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v100 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v101 
                    = vlSelfRef.core__DOT__store_free[1U][37U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v101 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v102 
                    = vlSelfRef.core__DOT__store_free[1U][38U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v102 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v103 
                    = vlSelfRef.core__DOT__store_free[1U][39U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v103 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v104 
                    = vlSelfRef.core__DOT__store_free[1U][40U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v104 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v105 
                    = vlSelfRef.core__DOT__store_free[1U][41U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v105 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v106 
                    = vlSelfRef.core__DOT__store_free[1U][42U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v106 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v107 
                    = vlSelfRef.core__DOT__store_free[1U][43U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v107 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v108 
                    = vlSelfRef.core__DOT__store_free[1U][44U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v108 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v109 
                    = vlSelfRef.core__DOT__store_free[1U][45U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v109 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v110 
                    = vlSelfRef.core__DOT__store_free[1U][46U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v110 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v111 
                    = vlSelfRef.core__DOT__store_free[1U][47U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v111 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v112 
                    = vlSelfRef.core__DOT__store_free[1U][48U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v112 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v113 
                    = vlSelfRef.core__DOT__store_free[1U][49U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v113 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v114 
                    = vlSelfRef.core__DOT__store_free[1U][50U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v114 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v115 
                    = vlSelfRef.core__DOT__store_free[1U][51U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v115 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v116 
                    = vlSelfRef.core__DOT__store_free[1U][52U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v116 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v117 
                    = vlSelfRef.core__DOT__store_free[1U][53U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v117 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v118 
                    = vlSelfRef.core__DOT__store_free[1U][54U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v118 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v119 
                    = vlSelfRef.core__DOT__store_free[1U][55U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v119 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v120 
                    = vlSelfRef.core__DOT__store_free[1U][56U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v120 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v121 
                    = vlSelfRef.core__DOT__store_free[1U][57U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v121 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v122 
                    = vlSelfRef.core__DOT__store_free[1U][58U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v122 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v123 
                    = vlSelfRef.core__DOT__store_free[1U][59U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v123 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v124 
                    = vlSelfRef.core__DOT__store_free[1U][60U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v124 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v125 
                    = vlSelfRef.core__DOT__store_free[1U][61U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v125 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v126 
                    = vlSelfRef.core__DOT__store_free[1U][62U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v126 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                vlSelfRef.__VdlyVal__core__DOT__dispatch__DOT__BC__DOT__free__v127 
                    = vlSelfRef.core__DOT__store_free[1U][63U];
                vlSelfRef.__VdlyDim1__core__DOT__dispatch__DOT__BC__DOT__free__v127 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
            }
        }
    }
    vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_valid 
        = ((6U & ((IData)(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_valid) 
                  << 1U)) | (((0U == (IData)(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__state)) 
                              & (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr[2U] 
                                 >> 0x00000011U)) & 
                             ((((0U == (0x0000000fU 
                                        & (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr[0U] 
                                           >> 6U))) 
                                | (1U == (0x0000000fU 
                                          & (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr[0U] 
                                             >> 6U)))) 
                               | (3U == (0x0000000fU 
                                         & (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr[0U] 
                                            >> 6U)))) 
                              | (2U == (0x0000000fU 
                                        & (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr[0U] 
                                           >> 6U))))));
    core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT____Vlvbound_h66cdd9ec__0 
        = vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_sqN[0U];
    vlSelfRef.__VdlyVal__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_sqN__v0 
        = core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT____Vlvbound_h66cdd9ec__0;
    core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT____Vlvbound_h66cdd9ec__0 
        = vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_sqN[1U];
    vlSelfRef.__VdlyVal__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_sqN__v1 
        = core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT____Vlvbound_h66cdd9ec__0;
    vlSelfRef.__VdlyVal__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_sqN__v2 
        = (0x0000007fU & (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr[2U] 
                          >> 0x0000000aU));
    core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT____Vlvbound_h64b5aa71__0 
        = vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_tag[0U];
    vlSelfRef.__VdlyVal__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_tag__v0 
        = core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT____Vlvbound_h64b5aa71__0;
    core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT____Vlvbound_h64b5aa71__0 
        = vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_tag[1U];
    vlSelfRef.__VdlyVal__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_tag__v1 
        = core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT____Vlvbound_h64b5aa71__0;
    vlSelfRef.__VdlyVal__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_tag__v2 
        = (0x0000003fU & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr[0U]);
    core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT____Vlvbound_hab0dde23__0 
        = vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_oper[0U];
    vlSelfRef.__VdlyVal__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_oper__v0 
        = core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT____Vlvbound_hab0dde23__0;
    core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT____Vlvbound_hab0dde23__0 
        = vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_oper[1U];
    vlSelfRef.__VdlyVal__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_oper__v1 
        = core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT____Vlvbound_hab0dde23__0;
    vlSelfRef.__VdlyVal__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_oper__v2 
        = (0x0000000fU & (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr[0U] 
                          >> 6U));
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_rd_ack__DOT__ff2 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_rd_ack__DOT__ff1));
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_rd_ack__DOT__ff2 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_rd_ack__DOT__ff1));
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_wr_ack__DOT__ff2 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_wr_ack__DOT__ff1));
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_wr_ack__DOT__ff2 
        = ((1U & (~ (IData)(vlSelfRef.rst))) && (IData)(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_wr_ack__DOT__ff1));
    vlSelfRef.core__DOT__fetch__DOT__q = ((~ (IData)(vlSelfRef.rst)) 
                                          & ((IData)(vlSelfRef.core__DOT__jump1) 
                                             | (IData)(vlSelfRef.core__DOT__jump2)));
    if (vlSelfRef.rst) {
        vlSelfRef.core__DOT__register_file__DOT__i = 0x00000040U;
        vlSelfRef.__VdlySet__core__DOT__lsu__DOT__ldb_mem_resp__v0 = 1U;
        __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_pending__v0 = 1U;
        __VdlySet__core__DOT__agu_out__v0 = 1U;
        __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_pending__v0 = 1U;
        __Vdly__core__DOT__fetch__DOT__FB__DOT__head = 0U;
        vlSelfRef.__Vdly__core__DOT__fetch__DOT__FB__DOT__count = 0U;
        __VdlyVal__core__DOT__decode_instr__v0[0U] = 0U;
        __VdlyVal__core__DOT__decode_instr__v0[1U] = 0x0a000000U;
        __VdlyVal__core__DOT__decode_instr__v0[2U] = 0U;
        __VdlyVal__core__DOT__decode_instr__v0[3U] = 0U;
        __VdlyVal__core__DOT__decode_instr__v1[0U] = 0U;
        __VdlyVal__core__DOT__decode_instr__v1[1U] = 0x0a000000U;
        __VdlyVal__core__DOT__decode_instr__v1[2U] = 0U;
        __VdlyVal__core__DOT__decode_instr__v1[3U] = 0U;
        __Vdly__core__DOT__fetch__DOT__FB__DOT__tail = 0U;
        __Vdly__core__DOT__fetch__DOT__FB__DOT__sqN_counter = 0U;
        __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v0 = 1U;
        __VdlySet__core__DOT__rename__DOT__rename_table__v0 = 1U;
        vlSelfRef.__Vdly__core__DOT__lsu__DOT__u_stb__DOT__tail_ptr = 0U;
        vlSelfRef.__Vdly__core__DOT__lsu__DOT__u_stb__DOT__drain_ptr = 0U;
        vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v0 = 1U;
        vlSelfRef.__VdlySet__core__DOT__register_file__DOT__registers__v0 = 1U;
        vlSelfRef.__VdlySet__core__DOT__rename__DOT__tag_buffer__v0 = 1U;
        vlSelfRef.__VdlySet__core__DOT__int_cdb_lines__v0 = 1U;
        vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v0 = 1U;
        vlSelfRef.__Vdly__core__DOT__lsu__DOT__u_ldb__DOT__count = 0U;
        vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v1 = 1U;
        vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__rs1_result = 0U;
        vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__rs1_result = 0U;
        vlSelfRef.__VdlySet__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue__v0 = 1U;
        vlSelfRef.__Vdly__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__tail = 0U;
        vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U] = 0U;
        vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U] = 0U;
        vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] = 0U;
        vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U] = 0U;
        vlSelfRef.__VdlySet__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue__v1 = 1U;
    } else {
        vlSelfRef.core__DOT__register_file__DOT__i = 4U;
        vlSelfRef.__VdlySet__core__DOT__lsu__DOT__ldb_mem_resp__v2 = 1U;
        if (vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_sync[0U]) {
            vlSelfRef.__VdlySet__core__DOT__lsu__DOT__ldb_mem_resp__v3 = 1U;
            vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__ldb_mem_resp__v4 
                = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_data_mem[0U];
            __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_pending__v3 = 1U;
        }
        vlSelfRef.__VdlySet__core__DOT__lsu__DOT__ldb_mem_resp__v5 = 1U;
        if (vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_sync[1U]) {
            vlSelfRef.__VdlySet__core__DOT__lsu__DOT__ldb_mem_resp__v6 = 1U;
            vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__ldb_mem_resp__v7 
                = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_data_mem[1U];
            __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_pending__v5 = 1U;
        }
        if ((1U & ((IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[0U] 
                            >> 0x0000002aU)) & (~ vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_pending[0U])))) {
            __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held__v2 
                = vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[0U];
            __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held__v2 = 1U;
        }
        if ((1U & ((IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[1U] 
                            >> 0x0000002aU)) & (~ vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_pending[1U])))) {
            __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held__v3 
                = vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[1U];
            __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held__v3 = 1U;
        }
        if ((1U & (~ (IData)(vlSelfRef.core__DOT__flush)))) {
            __VdlyVal__core__DOT__agu_out__v1[0U] = vlSelfRef.core__DOT__execute__DOT__next_agu_out[0U][0U];
            __VdlyVal__core__DOT__agu_out__v1[1U] = vlSelfRef.core__DOT__execute__DOT__next_agu_out[0U][1U];
            __VdlyVal__core__DOT__agu_out__v1[2U] = vlSelfRef.core__DOT__execute__DOT__next_agu_out[0U][2U];
            __VdlySet__core__DOT__agu_out__v1 = 1U;
            vlSelfRef.__VdlyVal__core__DOT__int_cdb_lines__v3 
                = vlSelfRef.core__DOT__execute__DOT__int_fu_out[0U];
            vlSelfRef.__VdlySet__core__DOT__int_cdb_lines__v3 = 1U;
            vlSelfRef.__VdlyVal__core__DOT__int_cdb_lines__v4 
                = vlSelfRef.core__DOT__execute__DOT__int_fu_out[1U];
            vlSelfRef.__VdlyVal__core__DOT__int_cdb_lines__v5 
                = vlSelfRef.core__DOT__execute__DOT__int_fu_out[2U];
            if (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_valid) {
                vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__rs1_result 
                    = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected;
            }
            if (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_valid) {
                vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__rs1_result 
                    = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected;
            }
        }
        if ((1U & ((vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[0U][2U] 
                    >> 2U) & (~ vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_pending[0U])))) {
            __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held__v2[0U] 
                = vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[0U][0U];
            __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held__v2[1U] 
                = vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[0U][1U];
            __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held__v2[2U] 
                = vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[0U][2U];
            __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held__v2 = 1U;
        }
        if (vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_sync[0U]) {
            __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_pending__v3 = 1U;
        }
        if ((1U & ((vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[1U][2U] 
                    >> 2U) & (~ vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_pending[1U])))) {
            __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held__v3[0U] 
                = vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[1U][0U];
            __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held__v3[1U] 
                = vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[1U][1U];
            __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held__v3[2U] 
                = vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[1U][2U];
            __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held__v3 = 1U;
        }
        if (vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_sync[1U]) {
            __VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_pending__v5 = 1U;
        }
        __VdlyDim0__core__DOT__dispatch__DOT__BC__DOT__valid__v16 
            = (0x0000000fU & vlSelfRef.core__DOT__commit_sqN[0U]);
        __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v16 = 1U;
        __VdlyDim0__core__DOT__dispatch__DOT__BC__DOT__valid__v17 
            = (0x0000000fU & vlSelfRef.core__DOT__commit_sqN[1U]);
        if (vlSelfRef.core__DOT__CDB_valid[0U]) {
            vlSelfRef.__VdlyVal__core__DOT__register_file__DOT__registers__v64 
                = vlSelfRef.core__DOT__CDB_result[0U];
            vlSelfRef.__VdlyDim0__core__DOT__register_file__DOT__registers__v64 
                = vlSelfRef.core__DOT__CDB_tag[0U];
            vlSelfRef.__VdlySet__core__DOT__register_file__DOT__registers__v64 = 1U;
        }
        if (vlSelfRef.core__DOT__CDB_valid[1U]) {
            vlSelfRef.__VdlyVal__core__DOT__register_file__DOT__registers__v65 
                = vlSelfRef.core__DOT__CDB_result[1U];
            vlSelfRef.__VdlyDim0__core__DOT__register_file__DOT__registers__v65 
                = vlSelfRef.core__DOT__CDB_tag[1U];
            vlSelfRef.__VdlySet__core__DOT__register_file__DOT__registers__v65 = 1U;
        }
        if (vlSelfRef.core__DOT__CDB_valid[2U]) {
            vlSelfRef.__VdlyVal__core__DOT__register_file__DOT__registers__v66 
                = vlSelfRef.core__DOT__CDB_result[2U];
            vlSelfRef.__VdlyDim0__core__DOT__register_file__DOT__registers__v66 
                = vlSelfRef.core__DOT__CDB_tag[2U];
            vlSelfRef.__VdlySet__core__DOT__register_file__DOT__registers__v66 = 1U;
        }
        if (vlSelfRef.core__DOT__CDB_valid[3U]) {
            vlSelfRef.__VdlyVal__core__DOT__register_file__DOT__registers__v67 
                = vlSelfRef.core__DOT__CDB_result[3U];
            vlSelfRef.__VdlyDim0__core__DOT__register_file__DOT__registers__v67 
                = vlSelfRef.core__DOT__CDB_tag[3U];
            vlSelfRef.__VdlySet__core__DOT__register_file__DOT__registers__v67 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[0U][0U];
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[0U][1U];
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[0U][2U];
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[1U][0U];
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[1U][1U];
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[1U][2U];
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[2U][0U];
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[2U][1U];
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[2U][2U];
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[3U][0U];
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[3U][1U];
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[3U][2U];
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[4U][0U];
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[4U][1U];
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[4U][2U];
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[5U][0U];
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[5U][1U];
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[5U][2U];
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[6U][0U];
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[6U][1U];
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[6U][2U];
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[7U][0U];
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[7U][1U];
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[7U][2U];
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__tail;
        if (vlSelfRef.core__DOT__flush) {
            __Vdly__core__DOT__fetch__DOT__FB__DOT__head = 0U;
            vlSelfRef.__Vdly__core__DOT__fetch__DOT__FB__DOT__count = 0U;
            __VdlyVal__core__DOT__decode_instr__v0[0U] = 0U;
            __VdlyVal__core__DOT__decode_instr__v0[1U] = 0x0a000000U;
            __VdlyVal__core__DOT__decode_instr__v0[2U] = 0U;
            __VdlyVal__core__DOT__decode_instr__v0[3U] = 0U;
            __VdlyVal__core__DOT__decode_instr__v1[0U] = 0U;
            __VdlyVal__core__DOT__decode_instr__v1[1U] = 0x0a000000U;
            __VdlyVal__core__DOT__decode_instr__v1[2U] = 0U;
            __VdlyVal__core__DOT__decode_instr__v1[3U] = 0U;
            __Vdly__core__DOT__fetch__DOT__FB__DOT__tail = 0U;
            __Vdly__core__DOT__fetch__DOT__FB__DOT__sqN_counter 
                = (0x0000007fU & ((IData)(1U) + (IData)(vlSelfRef.core__DOT__flush_sqN)));
            if ((vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[0U] 
                 & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, 
                                                     (0x000000ffU 
                                                      & (- 
                                                         (0x0000000fU 
                                                          & (IData)(vlSelfRef.core__DOT__flush_sqN)))))))) {
                __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v18 = 1U;
            }
            if ((vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[1U] 
                 & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, 
                                                     (0x000000ffU 
                                                      & ((IData)(1U) 
                                                         - 
                                                         (0x0000000fU 
                                                          & (IData)(vlSelfRef.core__DOT__flush_sqN)))))))) {
                __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v19 = 1U;
            }
            if ((vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[2U] 
                 & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, 
                                                     (0x000000ffU 
                                                      & ((IData)(2U) 
                                                         - 
                                                         (0x0000000fU 
                                                          & (IData)(vlSelfRef.core__DOT__flush_sqN)))))))) {
                __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v20 = 1U;
            }
            if ((vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[3U] 
                 & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, 
                                                     (0x000000ffU 
                                                      & ((IData)(3U) 
                                                         - 
                                                         (0x0000000fU 
                                                          & (IData)(vlSelfRef.core__DOT__flush_sqN)))))))) {
                __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v21 = 1U;
            }
            if ((vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[4U] 
                 & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, 
                                                     (0x000000ffU 
                                                      & ((IData)(4U) 
                                                         - 
                                                         (0x0000000fU 
                                                          & (IData)(vlSelfRef.core__DOT__flush_sqN)))))))) {
                __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v22 = 1U;
            }
            if ((vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[5U] 
                 & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, 
                                                     (0x000000ffU 
                                                      & ((IData)(5U) 
                                                         - 
                                                         (0x0000000fU 
                                                          & (IData)(vlSelfRef.core__DOT__flush_sqN)))))))) {
                __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v23 = 1U;
            }
            if ((vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[6U] 
                 & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, 
                                                     (0x000000ffU 
                                                      & ((IData)(6U) 
                                                         - 
                                                         (0x0000000fU 
                                                          & (IData)(vlSelfRef.core__DOT__flush_sqN)))))))) {
                __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v24 = 1U;
            }
            if ((vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[7U] 
                 & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, 
                                                     (0x000000ffU 
                                                      & ((IData)(7U) 
                                                         - 
                                                         (0x0000000fU 
                                                          & (IData)(vlSelfRef.core__DOT__flush_sqN)))))))) {
                __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v25 = 1U;
            }
            if ((vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[8U] 
                 & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, 
                                                     (0x000000ffU 
                                                      & ((IData)(8U) 
                                                         - 
                                                         (0x0000000fU 
                                                          & (IData)(vlSelfRef.core__DOT__flush_sqN)))))))) {
                __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v26 = 1U;
            }
            if ((vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[9U] 
                 & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, 
                                                     (0x000000ffU 
                                                      & ((IData)(9U) 
                                                         - 
                                                         (0x0000000fU 
                                                          & (IData)(vlSelfRef.core__DOT__flush_sqN)))))))) {
                __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v27 = 1U;
            }
            if ((vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[10U] 
                 & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, 
                                                     (0x000000ffU 
                                                      & ((IData)(0x0aU) 
                                                         - 
                                                         (0x0000000fU 
                                                          & (IData)(vlSelfRef.core__DOT__flush_sqN)))))))) {
                __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v28 = 1U;
            }
            if ((vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[11U] 
                 & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, 
                                                     (0x000000ffU 
                                                      & ((IData)(0x0bU) 
                                                         - 
                                                         (0x0000000fU 
                                                          & (IData)(vlSelfRef.core__DOT__flush_sqN)))))))) {
                __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v29 = 1U;
            }
            if ((vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[12U] 
                 & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, 
                                                     (0x000000ffU 
                                                      & ((IData)(0x0cU) 
                                                         - 
                                                         (0x0000000fU 
                                                          & (IData)(vlSelfRef.core__DOT__flush_sqN)))))))) {
                __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v30 = 1U;
            }
            if ((vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[13U] 
                 & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, 
                                                     (0x000000ffU 
                                                      & ((IData)(0x0dU) 
                                                         - 
                                                         (0x0000000fU 
                                                          & (IData)(vlSelfRef.core__DOT__flush_sqN)))))))) {
                __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v31 = 1U;
            }
            if ((vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[14U] 
                 & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, 
                                                     (0x000000ffU 
                                                      & ((IData)(0x0eU) 
                                                         - 
                                                         (0x0000000fU 
                                                          & (IData)(vlSelfRef.core__DOT__flush_sqN)))))))) {
                __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v32 = 1U;
            }
            if ((vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[15U] 
                 & VL_LTES_III(32, 0U, VL_EXTENDS_II(32,8, 
                                                     (0x000000ffU 
                                                      & ((IData)(0x0fU) 
                                                         - 
                                                         (0x0000000fU 
                                                          & (IData)(vlSelfRef.core__DOT__flush_sqN)))))))) {
                __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v33 = 1U;
            }
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v64 
                = vlSelfRef.core__DOT__restore_specTag[0U];
            vlSelfRef.__VdlySet__core__DOT__rename__DOT__rename_table__v64 = 1U;
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v65 
                = vlSelfRef.core__DOT__restore_specTag[1U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v66 
                = vlSelfRef.core__DOT__restore_specTag[2U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v67 
                = vlSelfRef.core__DOT__restore_specTag[3U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v68 
                = vlSelfRef.core__DOT__restore_specTag[4U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v69 
                = vlSelfRef.core__DOT__restore_specTag[5U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v70 
                = vlSelfRef.core__DOT__restore_specTag[6U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v71 
                = vlSelfRef.core__DOT__restore_specTag[7U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v72 
                = vlSelfRef.core__DOT__restore_specTag[8U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v73 
                = vlSelfRef.core__DOT__restore_specTag[9U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v74 
                = vlSelfRef.core__DOT__restore_specTag[10U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v75 
                = vlSelfRef.core__DOT__restore_specTag[11U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v76 
                = vlSelfRef.core__DOT__restore_specTag[12U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v77 
                = vlSelfRef.core__DOT__restore_specTag[13U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v78 
                = vlSelfRef.core__DOT__restore_specTag[14U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v79 
                = vlSelfRef.core__DOT__restore_specTag[15U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v80 
                = vlSelfRef.core__DOT__restore_specTag[16U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v81 
                = vlSelfRef.core__DOT__restore_specTag[17U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v82 
                = vlSelfRef.core__DOT__restore_specTag[18U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v83 
                = vlSelfRef.core__DOT__restore_specTag[19U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v84 
                = vlSelfRef.core__DOT__restore_specTag[20U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v85 
                = vlSelfRef.core__DOT__restore_specTag[21U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v86 
                = vlSelfRef.core__DOT__restore_specTag[22U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v87 
                = vlSelfRef.core__DOT__restore_specTag[23U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v88 
                = vlSelfRef.core__DOT__restore_specTag[24U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v89 
                = vlSelfRef.core__DOT__restore_specTag[25U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v90 
                = vlSelfRef.core__DOT__restore_specTag[26U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v91 
                = vlSelfRef.core__DOT__restore_specTag[27U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v92 
                = vlSelfRef.core__DOT__restore_specTag[28U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v93 
                = vlSelfRef.core__DOT__restore_specTag[29U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v94 
                = vlSelfRef.core__DOT__restore_specTag[30U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v95 
                = vlSelfRef.core__DOT__restore_specTag[31U];
            if (((vlSelfRef.core__DOT__commit_packet[0U] 
                  >> 0x00000012U) & (0U != (0x0000001fU 
                                            & (vlSelfRef.core__DOT__commit_packet[0U] 
                                               >> 6U))))) {
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v96 
                    = (0x0000003fU & vlSelfRef.core__DOT__commit_packet[0U]);
                vlSelfRef.__VdlyDim0__core__DOT__rename__DOT__rename_table__v96 
                    = (0x0000001fU & (vlSelfRef.core__DOT__commit_packet[0U] 
                                      >> 6U));
                vlSelfRef.__VdlySet__core__DOT__rename__DOT__rename_table__v96 = 1U;
            }
            if (((vlSelfRef.core__DOT__commit_packet[1U] 
                  >> 0x00000012U) & (0U != (0x0000001fU 
                                            & (vlSelfRef.core__DOT__commit_packet[1U] 
                                               >> 6U))))) {
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v97 
                    = (0x0000003fU & vlSelfRef.core__DOT__commit_packet[1U]);
                vlSelfRef.__VdlyDim0__core__DOT__rename__DOT__rename_table__v97 
                    = (0x0000001fU & (vlSelfRef.core__DOT__commit_packet[1U] 
                                      >> 6U));
                vlSelfRef.__VdlySet__core__DOT__rename__DOT__rename_table__v97 = 1U;
            }
            vlSelfRef.__Vdly__core__DOT__lsu__DOT__u_stb__DOT__tail_ptr 
                = vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__new_tail;
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v64 
                = vlSelfRef.core__DOT__restore_free[0U];
            vlSelfRef.__VdlySet__core__DOT__rename__DOT__tag_buffer__v64 = 1U;
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v65 
                = vlSelfRef.core__DOT__restore_free[1U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v66 
                = vlSelfRef.core__DOT__restore_free[2U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v67 
                = vlSelfRef.core__DOT__restore_free[3U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v68 
                = vlSelfRef.core__DOT__restore_free[4U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v69 
                = vlSelfRef.core__DOT__restore_free[5U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v70 
                = vlSelfRef.core__DOT__restore_free[6U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v71 
                = vlSelfRef.core__DOT__restore_free[7U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v72 
                = vlSelfRef.core__DOT__restore_free[8U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v73 
                = vlSelfRef.core__DOT__restore_free[9U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v74 
                = vlSelfRef.core__DOT__restore_free[10U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v75 
                = vlSelfRef.core__DOT__restore_free[11U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v76 
                = vlSelfRef.core__DOT__restore_free[12U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v77 
                = vlSelfRef.core__DOT__restore_free[13U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v78 
                = vlSelfRef.core__DOT__restore_free[14U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v79 
                = vlSelfRef.core__DOT__restore_free[15U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v80 
                = vlSelfRef.core__DOT__restore_free[16U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v81 
                = vlSelfRef.core__DOT__restore_free[17U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v82 
                = vlSelfRef.core__DOT__restore_free[18U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v83 
                = vlSelfRef.core__DOT__restore_free[19U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v84 
                = vlSelfRef.core__DOT__restore_free[20U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v85 
                = vlSelfRef.core__DOT__restore_free[21U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v86 
                = vlSelfRef.core__DOT__restore_free[22U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v87 
                = vlSelfRef.core__DOT__restore_free[23U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v88 
                = vlSelfRef.core__DOT__restore_free[24U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v89 
                = vlSelfRef.core__DOT__restore_free[25U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v90 
                = vlSelfRef.core__DOT__restore_free[26U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v91 
                = vlSelfRef.core__DOT__restore_free[27U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v92 
                = vlSelfRef.core__DOT__restore_free[28U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v93 
                = vlSelfRef.core__DOT__restore_free[29U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v94 
                = vlSelfRef.core__DOT__restore_free[30U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v95 
                = vlSelfRef.core__DOT__restore_free[31U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v96 
                = vlSelfRef.core__DOT__restore_free[32U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v97 
                = vlSelfRef.core__DOT__restore_free[33U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v98 
                = vlSelfRef.core__DOT__restore_free[34U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v99 
                = vlSelfRef.core__DOT__restore_free[35U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v100 
                = vlSelfRef.core__DOT__restore_free[36U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v101 
                = vlSelfRef.core__DOT__restore_free[37U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v102 
                = vlSelfRef.core__DOT__restore_free[38U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v103 
                = vlSelfRef.core__DOT__restore_free[39U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v104 
                = vlSelfRef.core__DOT__restore_free[40U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v105 
                = vlSelfRef.core__DOT__restore_free[41U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v106 
                = vlSelfRef.core__DOT__restore_free[42U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v107 
                = vlSelfRef.core__DOT__restore_free[43U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v108 
                = vlSelfRef.core__DOT__restore_free[44U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v109 
                = vlSelfRef.core__DOT__restore_free[45U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v110 
                = vlSelfRef.core__DOT__restore_free[46U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v111 
                = vlSelfRef.core__DOT__restore_free[47U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v112 
                = vlSelfRef.core__DOT__restore_free[48U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v113 
                = vlSelfRef.core__DOT__restore_free[49U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v114 
                = vlSelfRef.core__DOT__restore_free[50U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v115 
                = vlSelfRef.core__DOT__restore_free[51U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v116 
                = vlSelfRef.core__DOT__restore_free[52U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v117 
                = vlSelfRef.core__DOT__restore_free[53U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v118 
                = vlSelfRef.core__DOT__restore_free[54U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v119 
                = vlSelfRef.core__DOT__restore_free[55U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v120 
                = vlSelfRef.core__DOT__restore_free[56U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v121 
                = vlSelfRef.core__DOT__restore_free[57U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v122 
                = vlSelfRef.core__DOT__restore_free[58U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v123 
                = vlSelfRef.core__DOT__restore_free[59U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v124 
                = vlSelfRef.core__DOT__restore_free[60U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v125 
                = vlSelfRef.core__DOT__restore_free[61U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v126 
                = vlSelfRef.core__DOT__restore_free[62U];
            vlSelfRef.__VdlyVal__core__DOT__rename__DOT__tag_buffer__v127 
                = vlSelfRef.core__DOT__restore_free[63U];
            vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush = 0U;
            if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                  >> 0x00000012U) & (0x00000040U < 
                                     (0x0000007fU & 
                                      ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                       - (0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                             >> 0x0000000bU))))))) {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush 
                    = ((IData)(1U) + vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v16 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                  >> 0x00000012U) & (0x00000040U < 
                                     (0x0000007fU & 
                                      ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                       - (0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                             >> 0x0000000bU))))))) {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush 
                    = ((IData)(1U) + vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v17 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                  >> 0x00000012U) & (0x00000040U < 
                                     (0x0000007fU & 
                                      ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                       - (0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                             >> 0x0000000bU))))))) {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush 
                    = ((IData)(1U) + vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v18 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                  >> 0x00000012U) & (0x00000040U < 
                                     (0x0000007fU & 
                                      ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                       - (0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                             >> 0x0000000bU))))))) {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush 
                    = ((IData)(1U) + vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v19 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                  >> 0x00000012U) & (0x00000040U < 
                                     (0x0000007fU & 
                                      ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                       - (0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                             >> 0x0000000bU))))))) {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush 
                    = ((IData)(1U) + vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v20 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                  >> 0x00000012U) & (0x00000040U < 
                                     (0x0000007fU & 
                                      ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                       - (0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                             >> 0x0000000bU))))))) {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush 
                    = ((IData)(1U) + vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v21 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                  >> 0x00000012U) & (0x00000040U < 
                                     (0x0000007fU & 
                                      ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                       - (0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                             >> 0x0000000bU))))))) {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush 
                    = ((IData)(1U) + vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v22 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                  >> 0x00000012U) & (0x00000040U < 
                                     (0x0000007fU & 
                                      ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                       - (0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                             >> 0x0000000bU))))))) {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush 
                    = ((IData)(1U) + vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v23 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                  >> 0x00000012U) & (0x00000040U < 
                                     (0x0000007fU & 
                                      ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                       - (0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                             >> 0x0000000bU))))))) {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush 
                    = ((IData)(1U) + vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v24 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                  >> 0x00000012U) & (0x00000040U < 
                                     (0x0000007fU & 
                                      ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                       - (0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                             >> 0x0000000bU))))))) {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush 
                    = ((IData)(1U) + vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v25 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                  >> 0x00000012U) & (0x00000040U < 
                                     (0x0000007fU & 
                                      ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                       - (0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                             >> 0x0000000bU))))))) {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush 
                    = ((IData)(1U) + vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v26 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                  >> 0x00000012U) & (0x00000040U < 
                                     (0x0000007fU & 
                                      ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                       - (0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                             >> 0x0000000bU))))))) {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush 
                    = ((IData)(1U) + vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v27 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                  >> 0x00000012U) & (0x00000040U < 
                                     (0x0000007fU & 
                                      ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                       - (0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                             >> 0x0000000bU))))))) {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush 
                    = ((IData)(1U) + vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v28 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                  >> 0x00000012U) & (0x00000040U < 
                                     (0x0000007fU & 
                                      ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                       - (0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                             >> 0x0000000bU))))))) {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush 
                    = ((IData)(1U) + vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v29 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                  >> 0x00000012U) & (0x00000040U < 
                                     (0x0000007fU & 
                                      ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                       - (0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                             >> 0x0000000bU))))))) {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush 
                    = ((IData)(1U) + vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v30 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                  >> 0x00000012U) & (0x00000040U < 
                                     (0x0000007fU & 
                                      ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                       - (0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                             >> 0x0000000bU))))))) {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush 
                    = ((IData)(1U) + vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v31 = 1U;
            }
            vlSelfRef.__Vdly__core__DOT__lsu__DOT__u_ldb__DOT__count 
                = (0x0000000fU & ((IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__count) 
                                  - vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush));
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail = 0U;
            if ((1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[0U][2U])) {
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff 
                    = (0x0000007fU & ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                      - ((vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[0U][1U] 
                                          << 7U) | 
                                         (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[0U][1U] 
                                          >> 0x00000019U))));
                if ((0x40U > (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff))) {
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[0U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][1U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[0U][1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][2U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[0U][2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail)));
                }
            }
            if ((1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[1U][2U])) {
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff 
                    = (0x0000007fU & ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                      - ((vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[1U][1U] 
                                          << 7U) | 
                                         (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[1U][1U] 
                                          >> 0x00000019U))));
                if ((0x40U > (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff))) {
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[1U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][1U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[1U][1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][2U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[1U][2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail)));
                }
            }
            if ((1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[2U][2U])) {
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff 
                    = (0x0000007fU & ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                      - ((vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[2U][1U] 
                                          << 7U) | 
                                         (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[2U][1U] 
                                          >> 0x00000019U))));
                if ((0x40U > (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff))) {
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[2U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][1U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[2U][1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][2U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[2U][2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail)));
                }
            }
            if ((1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[3U][2U])) {
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff 
                    = (0x0000007fU & ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                      - ((vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[3U][1U] 
                                          << 7U) | 
                                         (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[3U][1U] 
                                          >> 0x00000019U))));
                if ((0x40U > (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff))) {
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[3U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][1U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[3U][1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][2U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[3U][2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail)));
                }
            }
            if ((1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[4U][2U])) {
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff 
                    = (0x0000007fU & ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                      - ((vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[4U][1U] 
                                          << 7U) | 
                                         (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[4U][1U] 
                                          >> 0x00000019U))));
                if ((0x40U > (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff))) {
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[4U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][1U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[4U][1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][2U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[4U][2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail)));
                }
            }
            if ((1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[5U][2U])) {
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff 
                    = (0x0000007fU & ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                      - ((vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[5U][1U] 
                                          << 7U) | 
                                         (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[5U][1U] 
                                          >> 0x00000019U))));
                if ((0x40U > (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff))) {
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[5U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][1U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[5U][1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][2U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[5U][2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail)));
                }
            }
            if ((1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[6U][2U])) {
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff 
                    = (0x0000007fU & ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                      - ((vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[6U][1U] 
                                          << 7U) | 
                                         (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[6U][1U] 
                                          >> 0x00000019U))));
                if ((0x40U > (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff))) {
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[6U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][1U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[6U][1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][2U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[6U][2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail)));
                }
            }
            if ((1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[7U][2U])) {
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff 
                    = (0x0000007fU & ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                      - ((vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[7U][1U] 
                                          << 7U) | 
                                         (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[7U][1U] 
                                          >> 0x00000019U))));
                if ((0x40U > (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff))) {
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[7U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][1U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[7U][1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][2U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[7U][2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail)));
                }
            }
            if ((0U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))) {
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][0U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][1U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][2U] = 0U;
            }
            if ((1U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))) {
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][0U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][1U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][2U] = 0U;
            }
            if ((2U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))) {
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][0U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][1U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][2U] = 0U;
            }
            if ((3U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))) {
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][0U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][1U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][2U] = 0U;
            }
            if ((4U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))) {
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][0U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][1U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][2U] = 0U;
            }
            if ((5U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))) {
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][0U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][1U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][2U] = 0U;
            }
            if ((6U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))) {
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][0U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][1U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][2U] = 0U;
            }
            if ((7U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))) {
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][0U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][1U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][2U] = 0U;
            }
        } else {
            if (vlSelfRef.core__DOT__fetch__DOT__FB__DOT__can_read) {
                __Vdly__core__DOT__fetch__DOT__FB__DOT__head 
                    = (0x0000000fU & ((0x00000010U 
                                       > ((IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__head) 
                                          + (IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__out_count)))
                                       ? ((IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__head) 
                                          + (IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__out_count))
                                       : (((IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__head) 
                                           + (IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__out_count)) 
                                          - (IData)(0x00000010U))));
            }
            vlSelfRef.__Vdly__core__DOT__fetch__DOT__FB__DOT__count 
                = (0x0000001fU & (((IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__count) 
                                   + (IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__in_valid_count)) 
                                  - (IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__out_count)));
            __VdlyVal__core__DOT__decode_instr__v0[0U] 
                = vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][0U];
            __VdlyVal__core__DOT__decode_instr__v0[1U] 
                = vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][1U];
            __VdlyVal__core__DOT__decode_instr__v0[2U] 
                = vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][2U];
            __VdlyVal__core__DOT__decode_instr__v0[3U] 
                = vlSelfRef.core__DOT__decode__DOT__decoder_out[0U][3U];
            __VdlyVal__core__DOT__decode_instr__v1[0U] 
                = vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][0U];
            __VdlyVal__core__DOT__decode_instr__v1[1U] 
                = vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][1U];
            __VdlyVal__core__DOT__decode_instr__v1[2U] 
                = vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][2U];
            __VdlyVal__core__DOT__decode_instr__v1[3U] 
                = vlSelfRef.core__DOT__decode__DOT__decoder_out[1U][3U];
            if ((0x0eU >= (IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__count))) {
                if ((1U & vlSelfRef.core__DOT__fetch__DOT__aligner_out[0U][2U])) {
                    vlSelfRef.core__DOT__fetch__DOT__FB__DOT__idx_tail 
                        = vlSelfRef.core__DOT__fetch__DOT__FB__DOT__tail;
                    __VdlyVal__core__DOT__fetch__DOT__FB__DOT__buffer__v0 
                        = vlSelfRef.core__DOT__fetch__DOT__aligner_out[0U][0U];
                    __VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v0 
                        = vlSelfRef.core__DOT__fetch__DOT__FB__DOT__idx_tail;
                    __VdlySet__core__DOT__fetch__DOT__FB__DOT__buffer__v0 = 1U;
                    __VdlyVal__core__DOT__fetch__DOT__FB__DOT__buffer__v1 
                        = vlSelfRef.core__DOT__fetch__DOT__aligner_out[0U][1U];
                    __VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v1 
                        = vlSelfRef.core__DOT__fetch__DOT__FB__DOT__idx_tail;
                    __VdlyVal__core__DOT__fetch__DOT__FB__DOT__buffer__v2 
                        = vlSelfRef.core__DOT__fetch__DOT__FB__DOT__sqN_counter;
                    __VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v2 
                        = vlSelfRef.core__DOT__fetch__DOT__FB__DOT__idx_tail;
                    __Vdly__core__DOT__fetch__DOT__FB__DOT__sqN_counter 
                        = (0x0000007fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__sqN_counter)));
                }
                if ((1U & vlSelfRef.core__DOT__fetch__DOT__aligner_out[1U][2U])) {
                    vlSelfRef.core__DOT__fetch__DOT__FB__DOT__idx_tail 
                        = (0x0000000fU & ((0x00000010U 
                                           > ((IData)(1U) 
                                              + (IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__tail)))
                                           ? ((IData)(1U) 
                                              + (IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__tail))
                                           : ((IData)(0xfffffff1U) 
                                              + (IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__tail))));
                    __VdlyVal__core__DOT__fetch__DOT__FB__DOT__buffer__v3 
                        = vlSelfRef.core__DOT__fetch__DOT__aligner_out[1U][0U];
                    __VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v3 
                        = vlSelfRef.core__DOT__fetch__DOT__FB__DOT__idx_tail;
                    __VdlySet__core__DOT__fetch__DOT__FB__DOT__buffer__v3 = 1U;
                    __VdlyVal__core__DOT__fetch__DOT__FB__DOT__buffer__v4 
                        = vlSelfRef.core__DOT__fetch__DOT__aligner_out[1U][1U];
                    __VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v4 
                        = vlSelfRef.core__DOT__fetch__DOT__FB__DOT__idx_tail;
                    __VdlyVal__core__DOT__fetch__DOT__FB__DOT__buffer__v5 
                        = vlSelfRef.core__DOT__fetch__DOT__FB__DOT__sqN_counter;
                    __VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v5 
                        = vlSelfRef.core__DOT__fetch__DOT__FB__DOT__idx_tail;
                    __Vdly__core__DOT__fetch__DOT__FB__DOT__sqN_counter 
                        = (0x0000007fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__sqN_counter)));
                }
                __Vdly__core__DOT__fetch__DOT__FB__DOT__tail 
                    = (0x0000000fU & ((0x00000010U 
                                       > ((IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__tail) 
                                          + (IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__in_valid_count)))
                                       ? ((IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__tail) 
                                          + (IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__in_valid_count))
                                       : (((IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__tail) 
                                           + (IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__in_valid_count)) 
                                          - (IData)(0x00000010U))));
            }
            if (vlSelfRef.core__DOT__chkpt[0U]) {
                __VdlyDim0__core__DOT__dispatch__DOT__BC__DOT__valid__v34 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[0U]);
                __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v34 = 1U;
            }
            if (vlSelfRef.core__DOT__chkpt[1U]) {
                __VdlyDim0__core__DOT__dispatch__DOT__BC__DOT__valid__v35 
                    = (0x0000000fU & vlSelfRef.core__DOT__chkpt_sqN[1U]);
                __VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v35 = 1U;
            }
            if ((1U & (~ (IData)(vlSelfRef.core__DOT__rename__DOT__OUT_busy)))) {
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v98 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][0U];
                vlSelfRef.__VdlySet__core__DOT__rename__DOT__rename_table__v98 = 1U;
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v99 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][1U];
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v100 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][2U];
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v101 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][3U];
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v102 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][4U];
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v103 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][5U];
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v104 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][6U];
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v105 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][7U];
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v106 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][8U];
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v107 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][9U];
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v108 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][10U];
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v109 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][11U];
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v110 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][12U];
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v111 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][13U];
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v112 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][14U];
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v113 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][15U];
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v114 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][16U];
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v115 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][17U];
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v116 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][18U];
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v117 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][19U];
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v118 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][20U];
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v119 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][21U];
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v120 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][22U];
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v121 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][23U];
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v122 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][24U];
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v123 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][25U];
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v124 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][26U];
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v125 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][27U];
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v126 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][28U];
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v127 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][29U];
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v128 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][30U];
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v129 
                    = vlSelfRef.core__DOT__rename__DOT__local_rat[2U][31U];
                if ((1U & (IData)(vlSelfRef.core__DOT__rename__DOT__req_valid))) {
                    vlSelfRef.__VdlyDim0__core__DOT__rename__DOT__tag_buffer__v138 
                        = vlSelfRef.core__DOT__rename__DOT__chosen[0U];
                    vlSelfRef.__VdlySet__core__DOT__rename__DOT__tag_buffer__v138 = 1U;
                    vlSelfRef.__VdlyDim0__core__DOT__rename__DOT__tag_buffer__v139 
                        = vlSelfRef.core__DOT__rename__DOT__chosen[0U];
                }
                if ((2U & (IData)(vlSelfRef.core__DOT__rename__DOT__req_valid))) {
                    vlSelfRef.__VdlyDim0__core__DOT__rename__DOT__tag_buffer__v140 
                        = vlSelfRef.core__DOT__rename__DOT__chosen[1U];
                    vlSelfRef.__VdlySet__core__DOT__rename__DOT__tag_buffer__v140 = 1U;
                    vlSelfRef.__VdlyDim0__core__DOT__rename__DOT__tag_buffer__v141 
                        = vlSelfRef.core__DOT__rename__DOT__chosen[1U];
                }
            }
            if (((vlSelfRef.core__DOT__commit_packet[0U] 
                  >> 0x00000012U) & (0U != (0x0000001fU 
                                            & (vlSelfRef.core__DOT__commit_packet[0U] 
                                               >> 6U))))) {
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v130 
                    = (0x0000003fU & vlSelfRef.core__DOT__commit_packet[0U]);
                vlSelfRef.__VdlyDim0__core__DOT__rename__DOT__rename_table__v130 
                    = (0x0000001fU & (vlSelfRef.core__DOT__commit_packet[0U] 
                                      >> 6U));
                vlSelfRef.__VdlySet__core__DOT__rename__DOT__rename_table__v130 = 1U;
                vlSelfRef.__VdlyDim0__core__DOT__rename__DOT__tag_buffer__v132 
                    = (0x0000003fU & vlSelfRef.core__DOT__commit_packet[0U]);
                vlSelfRef.__VdlySet__core__DOT__rename__DOT__tag_buffer__v132 = 1U;
                vlSelfRef.__VdlyDim0__core__DOT__rename__DOT__tag_buffer__v133 
                    = vlSelfRef.core__DOT__rename__DOT__free_CommTag[0U];
                vlSelfRef.__VdlyDim0__core__DOT__rename__DOT__tag_buffer__v134 
                    = vlSelfRef.core__DOT__rename__DOT__free_CommTag[0U];
            }
            if (((vlSelfRef.core__DOT__commit_packet[1U] 
                  >> 0x00000012U) & (0U != (0x0000001fU 
                                            & (vlSelfRef.core__DOT__commit_packet[1U] 
                                               >> 6U))))) {
                vlSelfRef.__VdlyVal__core__DOT__rename__DOT__rename_table__v131 
                    = (0x0000003fU & vlSelfRef.core__DOT__commit_packet[1U]);
                vlSelfRef.__VdlyDim0__core__DOT__rename__DOT__rename_table__v131 
                    = (0x0000001fU & (vlSelfRef.core__DOT__commit_packet[1U] 
                                      >> 6U));
                vlSelfRef.__VdlySet__core__DOT__rename__DOT__rename_table__v131 = 1U;
                vlSelfRef.__VdlyDim0__core__DOT__rename__DOT__tag_buffer__v135 
                    = (0x0000003fU & vlSelfRef.core__DOT__commit_packet[1U]);
                vlSelfRef.__VdlySet__core__DOT__rename__DOT__tag_buffer__v135 = 1U;
                vlSelfRef.__VdlyDim0__core__DOT__rename__DOT__tag_buffer__v136 
                    = vlSelfRef.core__DOT__rename__DOT__free_CommTag[1U];
                vlSelfRef.__VdlyDim0__core__DOT__rename__DOT__tag_buffer__v137 
                    = vlSelfRef.core__DOT__rename__DOT__free_CommTag[1U];
            }
            if ((IData)((((IData)(vlSelfRef.core__DOT__lsu__DOT__stb_alloc) 
                          >> 7U) & (~ (IData)(vlSelfRef.core__DOT__lsu__DOT__OUT_busy))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v16[0U] = 0U;
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v16[1U] = 0U;
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v16[2U] 
                    = (0x00000800U | (0x000001fcU & 
                                      ((IData)(vlSelfRef.core__DOT__lsu__DOT__stb_alloc) 
                                       << 2U)));
                vlSelfRef.__VdlyDim0__core__DOT__lsu__DOT__u_stb__DOT__entries__v16 
                    = vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__tail_ptr;
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v16 = 1U;
                vlSelfRef.__Vdly__core__DOT__lsu__DOT__u_stb__DOT__tail_ptr 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__tail_ptr)));
            }
            if ((0x00000200U & vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U])) {
                if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[0U][2U] 
                      >> 0x0000000bU) & ((0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[0U][2U] 
                                             >> 2U)) 
                                         == (0x0000007fU 
                                             & (vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                                                >> 2U))))) {
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v17 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                                               >> 2U));
                    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v17 = 1U;
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v18 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U] 
                                               >> 2U));
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v19 
                        = (3U & vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U]);
                }
                if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[1U][2U] 
                      >> 0x0000000bU) & ((0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[1U][2U] 
                                             >> 2U)) 
                                         == (0x0000007fU 
                                             & (vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                                                >> 2U))))) {
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v21 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                                               >> 2U));
                    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v21 = 1U;
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v22 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U] 
                                               >> 2U));
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v23 
                        = (3U & vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U]);
                }
                if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[2U][2U] 
                      >> 0x0000000bU) & ((0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[2U][2U] 
                                             >> 2U)) 
                                         == (0x0000007fU 
                                             & (vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                                                >> 2U))))) {
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v25 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                                               >> 2U));
                    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v25 = 1U;
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v26 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U] 
                                               >> 2U));
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v27 
                        = (3U & vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U]);
                }
                if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[3U][2U] 
                      >> 0x0000000bU) & ((0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[3U][2U] 
                                             >> 2U)) 
                                         == (0x0000007fU 
                                             & (vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                                                >> 2U))))) {
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v29 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                                               >> 2U));
                    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v29 = 1U;
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v30 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U] 
                                               >> 2U));
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v31 
                        = (3U & vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U]);
                }
                if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[4U][2U] 
                      >> 0x0000000bU) & ((0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[4U][2U] 
                                             >> 2U)) 
                                         == (0x0000007fU 
                                             & (vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                                                >> 2U))))) {
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v33 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                                               >> 2U));
                    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v33 = 1U;
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v34 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U] 
                                               >> 2U));
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v35 
                        = (3U & vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U]);
                }
                if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[5U][2U] 
                      >> 0x0000000bU) & ((0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[5U][2U] 
                                             >> 2U)) 
                                         == (0x0000007fU 
                                             & (vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                                                >> 2U))))) {
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v37 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                                               >> 2U));
                    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v37 = 1U;
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v38 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U] 
                                               >> 2U));
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v39 
                        = (3U & vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U]);
                }
                if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[6U][2U] 
                      >> 0x0000000bU) & ((0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[6U][2U] 
                                             >> 2U)) 
                                         == (0x0000007fU 
                                             & (vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                                                >> 2U))))) {
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v41 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                                               >> 2U));
                    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v41 = 1U;
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v42 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U] 
                                               >> 2U));
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v43 
                        = (3U & vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U]);
                }
                if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[7U][2U] 
                      >> 0x0000000bU) & ((0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[7U][2U] 
                                             >> 2U)) 
                                         == (0x0000007fU 
                                             & (vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                                                >> 2U))))) {
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v45 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                                               >> 2U));
                    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v45 = 1U;
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v46 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U] 
                                               >> 2U));
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v47 
                        = (3U & vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U]);
                }
                if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[8U][2U] 
                      >> 0x0000000bU) & ((0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[8U][2U] 
                                             >> 2U)) 
                                         == (0x0000007fU 
                                             & (vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                                                >> 2U))))) {
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v49 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                                               >> 2U));
                    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v49 = 1U;
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v50 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U] 
                                               >> 2U));
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v51 
                        = (3U & vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U]);
                }
                if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[9U][2U] 
                      >> 0x0000000bU) & ((0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[9U][2U] 
                                             >> 2U)) 
                                         == (0x0000007fU 
                                             & (vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                                                >> 2U))))) {
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v53 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                                               >> 2U));
                    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v53 = 1U;
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v54 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U] 
                                               >> 2U));
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v55 
                        = (3U & vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U]);
                }
                if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[10U][2U] 
                      >> 0x0000000bU) & ((0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[10U][2U] 
                                             >> 2U)) 
                                         == (0x0000007fU 
                                             & (vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                                                >> 2U))))) {
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v57 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                                               >> 2U));
                    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v57 = 1U;
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v58 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U] 
                                               >> 2U));
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v59 
                        = (3U & vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U]);
                }
                if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[11U][2U] 
                      >> 0x0000000bU) & ((0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[11U][2U] 
                                             >> 2U)) 
                                         == (0x0000007fU 
                                             & (vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                                                >> 2U))))) {
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v61 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                                               >> 2U));
                    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v61 = 1U;
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v62 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U] 
                                               >> 2U));
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v63 
                        = (3U & vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U]);
                }
                if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[12U][2U] 
                      >> 0x0000000bU) & ((0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[12U][2U] 
                                             >> 2U)) 
                                         == (0x0000007fU 
                                             & (vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                                                >> 2U))))) {
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v65 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                                               >> 2U));
                    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v65 = 1U;
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v66 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U] 
                                               >> 2U));
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v67 
                        = (3U & vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U]);
                }
                if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[13U][2U] 
                      >> 0x0000000bU) & ((0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[13U][2U] 
                                             >> 2U)) 
                                         == (0x0000007fU 
                                             & (vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                                                >> 2U))))) {
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v69 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                                               >> 2U));
                    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v69 = 1U;
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v70 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U] 
                                               >> 2U));
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v71 
                        = (3U & vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U]);
                }
                if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[14U][2U] 
                      >> 0x0000000bU) & ((0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[14U][2U] 
                                             >> 2U)) 
                                         == (0x0000007fU 
                                             & (vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                                                >> 2U))))) {
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v73 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                                               >> 2U));
                    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v73 = 1U;
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v74 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U] 
                                               >> 2U));
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v75 
                        = (3U & vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U]);
                }
                if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[15U][2U] 
                      >> 0x0000000bU) & ((0x0000007fU 
                                          & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[15U][2U] 
                                             >> 2U)) 
                                         == (0x0000007fU 
                                             & (vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                                                >> 2U))))) {
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v77 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                                               >> 2U));
                    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v77 = 1U;
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v78 
                        = ((vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] 
                            << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U] 
                                               >> 2U));
                    vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_stb__DOT__entries__v79 
                        = (3U & vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U]);
                }
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[0U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[0U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[0U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v81 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[1U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[1U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[0U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v82 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[2U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[2U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[0U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v83 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[3U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[3U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[0U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v84 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[4U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[4U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[0U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v85 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[5U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[5U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[0U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v86 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[6U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[6U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[0U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v87 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[7U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[7U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[0U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v88 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[8U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[8U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[0U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v89 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[9U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[9U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[0U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v90 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[10U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[10U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[0U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v91 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[11U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[11U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[0U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v92 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[12U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[12U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[0U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v93 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[13U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[13U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[0U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v94 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[14U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[14U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[0U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v95 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[15U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[15U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[0U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v96 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[0U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[0U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[1U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v97 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[1U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[1U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[1U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v98 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[2U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[2U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[1U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v99 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[3U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[3U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[1U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v100 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[4U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[4U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[1U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v101 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[5U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[5U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[1U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v102 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[6U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[6U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[1U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v103 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[7U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[7U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[1U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v104 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[8U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[8U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[1U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v105 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[9U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[9U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[1U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v106 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[10U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[10U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[1U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v107 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[11U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[11U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[1U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v108 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[12U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[12U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[1U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v109 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[13U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[13U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[1U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v110 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[14U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[14U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[1U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v111 = 1U;
            }
            if (((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[15U][2U] 
                  >> 0x0000000bU) & ((0x0000007fU & 
                                      (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[15U][2U] 
                                       >> 2U)) == vlSelfRef.core__DOT__commit_sqN[1U]))) {
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v112 = 1U;
            }
            vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__unnamedblk7__DOT__drain_inc 
                = (0x0000001fU & ((1U & (vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[0U][2U] 
                                         >> 2U)) + 
                                  (1U & (vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[1U][2U] 
                                         >> 2U))));
            if ((0U != (IData)(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__unnamedblk7__DOT__drain_inc))) {
                vlSelfRef.__Vdly__core__DOT__lsu__DOT__u_stb__DOT__drain_ptr 
                    = (0x0000000fU & ((IData)(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__drain_ptr) 
                                      + (IData)(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__unnamedblk7__DOT__drain_inc)));
                vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__unnamedblk12__DOT__idx 
                    = (0x0000000fU & (IData)(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__drain_ptr));
                if ((4U & vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[0U][2U])) {
                    vlSelfRef.__VdlyDim0__core__DOT__lsu__DOT__u_stb__DOT__entries__v113 
                        = (0x0000000fU & vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__unnamedblk12__DOT__idx);
                    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v113 = 1U;
                }
                vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__unnamedblk12__DOT__idx 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__drain_ptr)));
                if ((4U & vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[1U][2U])) {
                    vlSelfRef.__VdlyDim0__core__DOT__lsu__DOT__u_stb__DOT__entries__v114 
                        = (0x0000000fU & vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__unnamedblk12__DOT__idx);
                    vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_stb__DOT__entries__v114 = 1U;
                }
                vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__count 
                    = (0x0000001fU & ((IData)(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__count) 
                                      - (IData)(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__unnamedblk7__DOT__drain_inc)));
            }
            if (vlSelfRef.core__DOT__CDB_valid[0U]) {
                vlSelfRef.__VdlyDim0__core__DOT__rename__DOT__tag_buffer__v128 
                    = vlSelfRef.core__DOT__CDB_tag[0U];
                vlSelfRef.__VdlySet__core__DOT__rename__DOT__tag_buffer__v128 = 1U;
            }
            if (vlSelfRef.core__DOT__CDB_valid[1U]) {
                vlSelfRef.__VdlyDim0__core__DOT__rename__DOT__tag_buffer__v129 
                    = vlSelfRef.core__DOT__CDB_tag[1U];
                vlSelfRef.__VdlySet__core__DOT__rename__DOT__tag_buffer__v129 = 1U;
            }
            if (vlSelfRef.core__DOT__CDB_valid[2U]) {
                vlSelfRef.__VdlyDim0__core__DOT__rename__DOT__tag_buffer__v130 
                    = vlSelfRef.core__DOT__CDB_tag[2U];
                vlSelfRef.__VdlySet__core__DOT__rename__DOT__tag_buffer__v130 = 1U;
            }
            if (vlSelfRef.core__DOT__CDB_valid[3U]) {
                vlSelfRef.__VdlyDim0__core__DOT__rename__DOT__tag_buffer__v131 
                    = vlSelfRef.core__DOT__CDB_tag[3U];
                vlSelfRef.__VdlySet__core__DOT__rename__DOT__tag_buffer__v131 = 1U;
            }
            if ((0x00002000U & (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__alloc))) {
                vlSelfRef.__Vdly__core__DOT__lsu__DOT__u_ldb__DOT__count 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__count)));
                vlSelfRef.__VdlyDim0__core__DOT__lsu__DOT__u_ldb__DOT__entries__v32 
                    = vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx;
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v32 = 1U;
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v33 
                    = (0x0000007fU & ((IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__alloc) 
                                      >> 6U));
                vlSelfRef.__VdlyDim0__core__DOT__lsu__DOT__u_ldb__DOT__entries__v33 
                    = vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx;
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v34 
                    = (0x0000003fU & (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__alloc));
                vlSelfRef.__VdlyDim0__core__DOT__lsu__DOT__u_ldb__DOT__entries__v34 
                    = vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx;
                vlSelfRef.__VdlyDim0__core__DOT__lsu__DOT__u_ldb__DOT__entries__v35 
                    = vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx;
                vlSelfRef.__VdlyDim0__core__DOT__lsu__DOT__u_ldb__DOT__entries__v36 
                    = vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx;
            }
            if ((1U & (IData)((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__addr_wb 
                               >> 0x0000002aU)))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v37 
                    = (IData)((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__addr_wb 
                               >> 3U));
                vlSelfRef.__VdlyDim0__core__DOT__lsu__DOT__u_ldb__DOT__entries__v37 
                    = vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx;
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v37 = 1U;
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v38 
                    = (1U & (IData)((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__addr_wb 
                                     >> 0x0000002aU)));
                vlSelfRef.__VdlyDim0__core__DOT__lsu__DOT__u_ldb__DOT__entries__v38 
                    = vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx;
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v39 
                    = (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__addr_wb 
                                     >> 1U)));
                vlSelfRef.__VdlyDim0__core__DOT__lsu__DOT__u_ldb__DOT__entries__v39 
                    = vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx;
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v40 
                    = (1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__addr_wb));
                vlSelfRef.__VdlyDim0__core__DOT__lsu__DOT__u_ldb__DOT__entries__v40 
                    = vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v41 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v41 = 1U;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v43 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v43 = 1U;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v45 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v45 = 1U;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v47 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v47 = 1U;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v49 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v49 = 1U;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v51 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v51 = 1U;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v53 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v53 = 1U;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v55 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v55 = 1U;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v57 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v57 = 1U;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v59 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v59 = 1U;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v61 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v61 = 1U;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v63 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v63 = 1U;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v65 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v65 = 1U;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v67 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v67 = 1U;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v69 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v69 = 1U;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v71 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v71 = 1U;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v73 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v73 = 1U;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v75 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v75 = 1U;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v77 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v77 = 1U;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v79 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v79 = 1U;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v81 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v81 = 1U;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v83 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v83 = 1U;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v85 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v85 = 1U;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v87 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v87 = 1U;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v89 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v89 = 1U;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v91 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v91 = 1U;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v93 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v93 = 1U;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v95 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v95 = 1U;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v97 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v97 = 1U;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v99 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v99 = 1U;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v101 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v101 = 1U;
            }
            if ((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                   >> 0x00000012U) & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                              >> 0x00000027U))) 
                 & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                    >> 0x0000000bU)) 
                    == (0x0000007fU & (IData)((vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U] 
                                               >> 0x00000020U)))))) {
                vlSelfRef.__VdlyVal__core__DOT__lsu__DOT__u_ldb__DOT__entries__v103 
                    = (IData)(vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U]);
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v103 = 1U;
            }
            if ((1U & (IData)((vlSelfRef.core__DOT____Vcellout__lsu__OUT_cdb 
                               >> 0x0000002dU)))) {
                vlSelfRef.__Vdly__core__DOT__lsu__DOT__u_ldb__DOT__count 
                    = (0x0000000fU & ((IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__count) 
                                      - (IData)(1U)));
                vlSelfRef.__VdlyDim0__core__DOT__lsu__DOT__u_ldb__DOT__entries__v105 
                    = vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx;
                vlSelfRef.__VdlySet__core__DOT__lsu__DOT__u_ldb__DOT__entries__v105 = 1U;
            }
            if ((1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][2U])) {
                if (vlSelfRef.core__DOT__CDB_valid[0U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[0U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[0U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[1U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[1U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[1U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[2U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[2U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[2U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[3U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[3U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[3U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][0U]);
                    }
                }
            }
            if ((1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][2U])) {
                if (vlSelfRef.core__DOT__CDB_valid[0U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[0U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[0U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[1U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[1U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[1U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[2U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[2U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[2U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[3U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[3U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[3U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][0U]);
                    }
                }
            }
            if ((1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][2U])) {
                if (vlSelfRef.core__DOT__CDB_valid[0U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[0U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[0U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[1U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[1U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[1U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[2U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[2U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[2U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[3U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[3U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[3U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][0U]);
                    }
                }
            }
            if ((1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][2U])) {
                if (vlSelfRef.core__DOT__CDB_valid[0U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[0U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[0U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[1U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[1U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[1U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[2U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[2U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[2U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[3U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[3U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[3U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][0U]);
                    }
                }
            }
            if ((1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][2U])) {
                if (vlSelfRef.core__DOT__CDB_valid[0U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[0U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[0U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[1U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[1U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[1U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[2U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[2U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[2U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[3U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[3U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[3U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][0U]);
                    }
                }
            }
            if ((1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][2U])) {
                if (vlSelfRef.core__DOT__CDB_valid[0U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[0U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[0U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[1U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[1U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[1U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[2U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[2U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[2U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[3U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[3U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[3U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][0U]);
                    }
                }
            }
            if ((1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][2U])) {
                if (vlSelfRef.core__DOT__CDB_valid[0U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[0U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[0U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[1U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[1U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[1U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[2U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[2U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[2U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[3U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[3U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[3U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][0U]);
                    }
                }
            }
            if ((1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][2U])) {
                if (vlSelfRef.core__DOT__CDB_valid[0U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[0U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[0U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[1U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[1U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[1U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[2U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[2U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[2U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[3U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[3U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][1U] 
                                               >> 0x0000000fU))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[3U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][1U] 
                                               >> 9U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][0U]);
                    }
                }
            }
            if (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_valid) {
                if ((0U < (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))) {
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail 
                        = (0x0000000fU & ((IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail) 
                                          - (IData)(1U)));
                }
                vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U] 
                    = ((0x000003ffU & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U]) 
                       | (0x0003fc00U & (0x00020000U 
                                         | (0x0001fc00U 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                                               [vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][1U] 
                                               >> 0x0000000fU)))));
                vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U] 
                    = ((0xfffffc00U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U]) 
                       | ((0x000003c0U & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                                          [vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][1U] 
                                          >> 0x0000000fU)) 
                          | (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                                            [vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][1U] 
                                            >> 3U))));
                vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                    = ((0x000003ffU & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U]) 
                       | (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs1_data_selected 
                          << 0x0000000aU));
                vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U] 
                    = ((0x0003fc00U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U]) 
                       | (0x0003ffffU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs1_data_selected 
                                         >> 0x00000016U)));
                vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U] 
                    = ((0x000003ffU & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U]) 
                       | (((4U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                            [vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][0U])
                            ? ((vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                                [vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][1U] 
                                << 0x0000001dU) | (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                                                   [vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][0U] 
                                                   >> 3U))
                            : 0U) << 0x0000000aU));
                vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                    = ((0xfffffc00U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U]) 
                       | (((4U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                            [vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][0U])
                            ? ((vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                                [vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][1U] 
                                << 0x0000001dU) | (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                                                   [vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx][0U] 
                                                   >> 3U))
                            : 0U) >> 0x00000016U));
                vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U] 
                    = ((0x000003ffU & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U]) 
                       | (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs2_data_selected 
                          << 0x0000000aU));
                vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U] 
                    = ((0xfffffc00U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U]) 
                       | (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs2_data_selected 
                          >> 0x00000016U));
                if ((0U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx))) {
                    __Vtemp_17[1U] = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][1U];
                    __Vtemp_17[2U] = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][1U] 
                        = __Vtemp_17[1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][2U] 
                        = __Vtemp_17[2U];
                }
                if ((1U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx))) {
                    __Vtemp_18[1U] = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][1U];
                    __Vtemp_18[2U] = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][1U] 
                        = __Vtemp_18[1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][2U] 
                        = __Vtemp_18[2U];
                }
                if ((2U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx))) {
                    __Vtemp_19[1U] = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][1U];
                    __Vtemp_19[2U] = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][1U] 
                        = __Vtemp_19[1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][2U] 
                        = __Vtemp_19[2U];
                }
                if ((3U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx))) {
                    __Vtemp_20[1U] = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][1U];
                    __Vtemp_20[2U] = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][1U] 
                        = __Vtemp_20[1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][2U] 
                        = __Vtemp_20[2U];
                }
                if ((4U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx))) {
                    __Vtemp_21[1U] = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][1U];
                    __Vtemp_21[2U] = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][1U] 
                        = __Vtemp_21[1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][2U] 
                        = __Vtemp_21[2U];
                }
                if ((5U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx))) {
                    __Vtemp_22[1U] = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][1U];
                    __Vtemp_22[2U] = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][1U] 
                        = __Vtemp_22[1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][2U] 
                        = __Vtemp_22[2U];
                }
                if ((6U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx))) {
                    __Vtemp_23[1U] = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][1U];
                    __Vtemp_23[2U] = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][1U] 
                        = __Vtemp_23[1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][2U] 
                        = __Vtemp_23[2U];
                }
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][0U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][1U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][2U] = 0U;
            } else {
                vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U] 
                    = (0x0001ffffU & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U]);
            }
            if (((IData)((vlSelfRef.core__DOT__lsu_dispatch_instr[0U] 
                          >> 0x0000003eU)) & (8U > (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail)))) {
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][2U] 
                    = (1U | vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                       [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][2U]);
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][1U] 
                    = ((0x01ffffffU & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][1U]) 
                       | ((IData)((vlSelfRef.core__DOT__lsu_dispatch_instr[0U] 
                                   >> 0x00000037U)) 
                          << 0x00000019U));
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][1U] 
                    = ((0xfe1fffffU & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][1U]) 
                       | (0x01e00000U & ((IData)((vlSelfRef.core__DOT__lsu_dispatch_instr[0U] 
                                                  >> 0x00000033U)) 
                                         << 0x00000015U)));
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][1U] 
                    = ((0xffe07fffU & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][1U]) 
                       | (0x001f8000U & ((IData)((vlSelfRef.core__DOT__lsu_dispatch_instr[0U] 
                                                  >> 0x0000002dU)) 
                                         << 0x0000000fU)));
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][1U] 
                    = ((0xffff81ffU & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][1U]) 
                       | (0x00007e00U & ((IData)((vlSelfRef.core__DOT__lsu_dispatch_instr[0U] 
                                                  >> 0x00000027U)) 
                                         << 9U)));
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][1U] 
                    = ((0xfffffe07U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][1U]) 
                       | (0x000001f8U & ((IData)((vlSelfRef.core__DOT__lsu_dispatch_instr[0U] 
                                                  >> 0x00000021U)) 
                                         << 3U)));
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][0U] 
                    = ((7U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][0U]) 
                       | ((IData)((vlSelfRef.core__DOT__lsu_dispatch_instr[0U] 
                                   >> 1U)) << 3U));
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][1U] 
                    = ((0xfffffff8U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][1U]) 
                       | ((IData)((vlSelfRef.core__DOT__lsu_dispatch_instr[0U] 
                                   >> 1U)) >> 0x0000001dU));
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][0U] 
                    = ((0xfffffffbU & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][0U]) 
                       | (4U & ((IData)(vlSelfRef.core__DOT__lsu_dispatch_instr[0U]) 
                                << 2U)));
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][0U] 
                    = ((0xfffffffdU & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][0U]) 
                       | (vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__tag_ready[0U] 
                          << 1U));
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][0U] 
                    = ((0xfffffffeU & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail))][0U]) 
                       | vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__tag_ready[1U]);
                vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail)));
            }
        }
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue__v8[0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][0U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue__v8[1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][1U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue__v8[2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[0U][2U];
        vlSelfRef.__VdlySet__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue__v8 = 1U;
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue__v9[0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][0U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue__v9[1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][1U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue__v9[2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[1U][2U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue__v10[0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][0U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue__v10[1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][1U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue__v10[2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[2U][2U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue__v11[0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][0U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue__v11[1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][1U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue__v11[2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[3U][2U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue__v12[0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][0U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue__v12[1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][1U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue__v12[2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[4U][2U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue__v13[0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][0U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue__v13[1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][1U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue__v13[2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[5U][2U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue__v14[0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][0U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue__v14[1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][1U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue__v14[2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[6U][2U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue__v15[0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][0U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue__v15[1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][1U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue__v15[2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[7U][2U];
        vlSelfRef.__Vdly__core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__tail 
            = vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail;
    }
    if (vlSelfRef.rst) {
        vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__state = 0U;
        vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[0U] = 0U;
        vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[1U] = 0U;
        vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[2U] = 0U;
        vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__result = 0U;
        vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_count = 0U;
        vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_partial = 0ULL;
        vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_divisor = 0U;
        vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_quot_sign = 0U;
        vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_rem_sign = 0U;
        vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_by_zero = 0U;
        vlSelfRef.core__DOT__execute__DOT____Vcellout__genblk2__BRA__0__KET____DOT__MUL_DIV_i__OUT_cdb = 0ULL;
    } else if ((1U & (~ (IData)(vlSelfRef.core__DOT__flush)))) {
        if ((0U == (IData)(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__state))) {
            vlSelfRef.core__DOT__execute__DOT____Vcellout__genblk2__BRA__0__KET____DOT__MUL_DIV_i__OUT_cdb = 0ULL;
            if ((0x00020000U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr[2U])) {
                vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[0U] 
                    = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr[0U];
                vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[1U] 
                    = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr[1U];
                vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[2U] 
                    = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr[2U];
                if ((0x00000200U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr[0U])) {
                    vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__state = 0U;
                } else if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr[0U])) {
                    vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__op1 
                        = ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr[2U] 
                            << 0x00000016U) | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr[1U] 
                                               >> 0x0000000aU));
                    vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__op2 
                        = ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr[1U] 
                            << 0x00000016U) | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr[0U] 
                                               >> 0x0000000aU));
                    vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_by_zero 
                        = (0U == vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__op2);
                    vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_partial 
                        = VL_EXTEND_QI(64,32, ((0x00000200U 
                                                & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr[2U])
                                                ? ([&]() {
                                    __Vfunc_core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__abs32__4__x 
                                        = ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr[2U] 
                                            << 0x00000016U) 
                                           | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr[1U] 
                                              >> 0x0000000aU));
                                    __Vfunc_core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__abs32__4__Vfuncout 
                                        = ((__Vfunc_core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__abs32__4__x 
                                            >> 0x1fU)
                                            ? ((IData)(1U) 
                                               + (~ __Vfunc_core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__abs32__4__x))
                                            : __Vfunc_core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__abs32__4__x);
                                }(), __Vfunc_core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__abs32__4__Vfuncout)
                                                : (
                                                   (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr[2U] 
                                                    << 0x00000016U) 
                                                   | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr[1U] 
                                                      >> 0x0000000aU))));
                    vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_count = 0U;
                    vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__state = 2U;
                    if (((4U == (0x0000000fU & (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr[0U] 
                                                >> 6U))) 
                         | (6U == (0x0000000fU & (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr[0U] 
                                                  >> 6U))))) {
                        vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__s1 
                            = (vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__op1 
                               >> 0x1fU);
                        vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__s2 
                            = (vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__op2 
                               >> 0x1fU);
                        vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_quot_sign 
                            = ((IData)(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__s1) 
                               ^ (IData)(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__s2));
                        vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_rem_sign 
                            = vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__s1;
                        __Vfunc_core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__abs32__2__x 
                            = vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__op1;
                        __Vfunc_core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__abs32__2__Vfuncout 
                            = ((__Vfunc_core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__abs32__2__x 
                                >> 0x1fU) ? ((IData)(1U) 
                                             + (~ __Vfunc_core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__abs32__2__x))
                                : __Vfunc_core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__abs32__2__x);
                        vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_dividend 
                            = __Vfunc_core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__abs32__2__Vfuncout;
                        __Vfunc_core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__abs32__3__x 
                            = vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__op2;
                        __Vfunc_core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__abs32__3__Vfuncout 
                            = ((__Vfunc_core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__abs32__3__x 
                                >> 0x1fU) ? ((IData)(1U) 
                                             + (~ __Vfunc_core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__abs32__3__x))
                                : __Vfunc_core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__abs32__3__x);
                        vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_divisor 
                            = __Vfunc_core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__abs32__3__Vfuncout;
                    } else {
                        vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_quot_sign = 0U;
                        vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_rem_sign = 0U;
                        vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_dividend 
                            = vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__op1;
                        vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_divisor 
                            = vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__op2;
                    }
                } else {
                    vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__state = 1U;
                }
            }
        } else if ((1U == (IData)(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_valid))) {
                vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__result 
                    = ((8U & vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_oper[2U])
                        ? 0U : ((4U & vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_oper[2U])
                                 ? 0U : ((2U & vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_oper[2U])
                                          ? ((1U & vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_oper[2U])
                                              ? vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_result_uu[1U]
                                              : vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_result_su[1U])
                                          : ((1U & vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_oper[2U])
                                              ? vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_result_ss[1U]
                                              : vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_result_ss[0U]))));
                vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__state = 3U;
            }
        } else if ((2U == (IData)(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__state))) {
            if (vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_by_zero) {
                vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__result 
                    = (((4U == (0x0000000fU & (vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[0U] 
                                               >> 6U))) 
                        | (5U == (0x0000000fU & (vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[0U] 
                                                 >> 6U))))
                        ? 0xffffffffU : ((vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[2U] 
                                          << 0x00000016U) 
                                         | (vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[1U] 
                                            >> 0x0000000aU)));
                vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__state = 3U;
            } else if ((0x20U == (IData)(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_count))) {
                vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk4__DOT__q 
                    = (IData)(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_partial);
                vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk4__DOT__r 
                    = (IData)((vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_partial 
                               >> 0x20U));
                vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__state = 3U;
                if (vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_quot_sign) {
                    vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk4__DOT__q 
                        = ((IData)(1U) + (~ vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk4__DOT__q));
                }
                if (vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_rem_sign) {
                    vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk4__DOT__r 
                        = ((IData)(1U) + (~ vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk4__DOT__r));
                }
                vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__result 
                    = (((4U == (0x0000000fU & (vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[0U] 
                                               >> 6U))) 
                        | (5U == (0x0000000fU & (vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[0U] 
                                                 >> 6U))))
                        ? vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk4__DOT__q
                        : vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk4__DOT__r);
            } else {
                vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_count 
                    = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_count)));
                vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk5__DOT__partial_high 
                    = (QData)((IData)((vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_partial 
                                       >> 0x1fU)));
                vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk5__DOT__sub_result 
                    = (0x00000001ffffffffULL & (vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk5__DOT__partial_high 
                                                - (QData)((IData)(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_divisor))));
                vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_partial 
                    = ((1U & (IData)((vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk5__DOT__sub_result 
                                      >> 0x20U))) ? 
                       (((QData)((IData)(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk5__DOT__partial_high)) 
                         << 0x00000020U) | (QData)((IData)(
                                                           ((IData)(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_partial) 
                                                            << 1U))))
                        : (((QData)((IData)(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk5__DOT__sub_result)) 
                            << 0x00000020U) | (QData)((IData)(
                                                              (1U 
                                                               | ((IData)(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_partial) 
                                                                  << 1U))))));
            }
        } else if ((3U == (IData)(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__state))) {
            vlSelfRef.core__DOT__execute__DOT____Vcellout__genblk2__BRA__0__KET____DOT__MUL_DIV_i__OUT_cdb 
                = ((0x00000000ffffffffULL & vlSelfRef.core__DOT__execute__DOT____Vcellout__genblk2__BRA__0__KET____DOT__MUL_DIV_i__OUT_cdb) 
                   | ((QData)((IData)((0x00002000U 
                                       | ((0x00001fc0U 
                                           & (vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[2U] 
                                              >> 4U)) 
                                          | (0x0000003fU 
                                             & vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[0U]))))) 
                      << 0x00000020U));
            vlSelfRef.__Vdly__core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__state = 0U;
            vlSelfRef.core__DOT__execute__DOT____Vcellout__genblk2__BRA__0__KET____DOT__MUL_DIV_i__OUT_cdb 
                = ((0x00003fff00000000ULL & vlSelfRef.core__DOT__execute__DOT____Vcellout__genblk2__BRA__0__KET____DOT__MUL_DIV_i__OUT_cdb) 
                   | (IData)((IData)(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__result)));
        }
    }
    if (vlSelfRef.rst) {
        vlSelfRef.__VdlySet__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v0 = 1U;
        vlSelfRef.__Vdly__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__tail = 0U;
        vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] = 0U;
        vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] = 0U;
        vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] = 0U;
        vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_pc = 0U;
        vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__imm = 0U;
        vlSelfRef.__VdlySet__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v1 = 1U;
        vlSelfRef.__VdlySet__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v0 = 1U;
        vlSelfRef.__Vdly__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__tail = 0U;
        vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] = 0U;
        vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] = 0U;
        vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] = 0U;
        vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_pc = 0U;
        vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__imm = 0U;
        vlSelfRef.__VdlySet__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v1 = 1U;
    } else {
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][0U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][1U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][2U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][3U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][0U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][1U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][2U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][3U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][0U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][1U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][2U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][3U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][0U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][1U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][2U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][3U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][0U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][1U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][2U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][3U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][0U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][1U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][2U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][3U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][0U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][1U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][2U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][3U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][0U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][1U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][2U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][3U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__tail;
        if (vlSelfRef.core__DOT__flush) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail = 0U;
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][3U])) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff 
                    = (0x0000007fU & ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                      - ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][3U] 
                                          << 0x0000001fU) 
                                         | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][3U] 
                                            >> 1U))));
                if ((0x40U > (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff))) {
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][2U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][3U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][3U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail)));
                }
            }
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][3U])) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff 
                    = (0x0000007fU & ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                      - ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][3U] 
                                          << 0x0000001fU) 
                                         | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][3U] 
                                            >> 1U))));
                if ((0x40U > (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff))) {
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][2U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][3U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][3U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail)));
                }
            }
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][3U])) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff 
                    = (0x0000007fU & ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                      - ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][3U] 
                                          << 0x0000001fU) 
                                         | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][3U] 
                                            >> 1U))));
                if ((0x40U > (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff))) {
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][2U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][3U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][3U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail)));
                }
            }
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][3U])) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff 
                    = (0x0000007fU & ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                      - ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][3U] 
                                          << 0x0000001fU) 
                                         | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][3U] 
                                            >> 1U))));
                if ((0x40U > (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff))) {
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][2U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][3U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][3U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail)));
                }
            }
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][3U])) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff 
                    = (0x0000007fU & ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                      - ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][3U] 
                                          << 0x0000001fU) 
                                         | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][3U] 
                                            >> 1U))));
                if ((0x40U > (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff))) {
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][2U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][3U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][3U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail)));
                }
            }
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][3U])) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff 
                    = (0x0000007fU & ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                      - ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][3U] 
                                          << 0x0000001fU) 
                                         | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][3U] 
                                            >> 1U))));
                if ((0x40U > (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff))) {
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][2U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][3U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][3U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail)));
                }
            }
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][3U])) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff 
                    = (0x0000007fU & ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                      - ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][3U] 
                                          << 0x0000001fU) 
                                         | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][3U] 
                                            >> 1U))));
                if ((0x40U > (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff))) {
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][2U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][3U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][3U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail)));
                }
            }
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][3U])) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff 
                    = (0x0000007fU & ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                      - ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][3U] 
                                          << 0x0000001fU) 
                                         | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][3U] 
                                            >> 1U))));
                if ((0x40U > (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff))) {
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][2U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][3U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][3U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail)));
                }
            }
            if ((0U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][1U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][2U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][3U] = 0U;
            }
            if ((1U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][1U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][2U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][3U] = 0U;
            }
            if ((2U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][1U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][2U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][3U] = 0U;
            }
            if ((3U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][1U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][2U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][3U] = 0U;
            }
            if ((4U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][1U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][2U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][3U] = 0U;
            }
            if ((5U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][1U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][2U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][3U] = 0U;
            }
            if ((6U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][1U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][2U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][3U] = 0U;
            }
            if ((7U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][1U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][2U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][3U] = 0U;
            }
        } else {
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][3U])) {
                if (vlSelfRef.core__DOT__CDB_valid[0U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[0U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[0U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[1U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[1U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[1U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[2U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[2U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[2U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[3U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[3U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[3U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U]);
                    }
                }
            }
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][3U])) {
                if (vlSelfRef.core__DOT__CDB_valid[0U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[0U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[0U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[1U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[1U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[1U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[2U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[2U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[2U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[3U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[3U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[3U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U]);
                    }
                }
            }
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][3U])) {
                if (vlSelfRef.core__DOT__CDB_valid[0U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[0U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[0U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[1U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[1U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[1U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[2U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[2U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[2U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[3U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[3U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[3U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U]);
                    }
                }
            }
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][3U])) {
                if (vlSelfRef.core__DOT__CDB_valid[0U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[0U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[0U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[1U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[1U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[1U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[2U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[2U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[2U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[3U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[3U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[3U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U]);
                    }
                }
            }
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][3U])) {
                if (vlSelfRef.core__DOT__CDB_valid[0U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[0U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[0U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[1U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[1U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[1U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[2U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[2U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[2U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[3U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[3U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[3U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U]);
                    }
                }
            }
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][3U])) {
                if (vlSelfRef.core__DOT__CDB_valid[0U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[0U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[0U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[1U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[1U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[1U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[2U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[2U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[2U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[3U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[3U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[3U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U]);
                    }
                }
            }
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][3U])) {
                if (vlSelfRef.core__DOT__CDB_valid[0U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[0U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[0U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[1U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[1U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[1U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[2U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[2U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[2U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[3U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[3U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[3U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U]);
                    }
                }
            }
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][3U])) {
                if (vlSelfRef.core__DOT__CDB_valid[0U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[0U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[0U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[1U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[1U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[1U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[2U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[2U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[2U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[3U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[3U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[3U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U]);
                    }
                }
            }
            if (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_valid) {
                if ((0U < (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))) {
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail 
                        = (0x0000000fU & ((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail) 
                                          - (IData)(1U)));
                }
                vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                    = ((0x000003ffU & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U]) 
                       | (0x0003fc00U & (0x00020000U 
                                         | (0x0001fc00U 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                               [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][3U] 
                                               << 9U)))));
                vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                    = ((0x0000003fU & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U]) 
                       | ((IData)((((QData)((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__op2)) 
                                    << 4U) | (QData)((IData)(
                                                             (0x0000000fU 
                                                              & ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                                                  [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][2U] 
                                                                  << 3U) 
                                                                 | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                                                    [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                                                                    >> 0x0000001dU))))))) 
                          << 6U));
                vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                    = ((0xfffffc00U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U]) 
                       | (((IData)((((QData)((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__op2)) 
                                     << 4U) | (QData)((IData)(
                                                              (0x0000000fU 
                                                               & ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                                                   [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][2U] 
                                                                   << 3U) 
                                                                  | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                                                     [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                                                                     >> 0x0000001dU))))))) 
                           >> 0x0000001aU) | ((IData)(
                                                      ((((QData)((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__op2)) 
                                                         << 4U) 
                                                        | (QData)((IData)(
                                                                          (0x0000000fU 
                                                                           & ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                                                               [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][2U] 
                                                                               << 3U) 
                                                                              | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                                                                [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                                                                                >> 0x0000001dU)))))) 
                                                       >> 0x00000020U)) 
                                              << 6U)));
                vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                    = ((0x000003ffU & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U]) 
                       | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__op1 
                          << 0x0000000aU));
                vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                    = ((0x0003fc00U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U]) 
                       | (0x0003ffffU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__op1 
                                         >> 0x00000016U)));
                vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                    = ((0xffffffc0U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U]) 
                       | (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                         [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                                         >> 0x0000000bU)));
                vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_pc 
                    = ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][3U] 
                        << 0x0000001fU) | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                           [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][2U] 
                                           >> 1U));
                vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_jump_type 
                    = (3U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                             [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                             >> 8U));
                vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__imm 
                    = ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                        << 0x00000015U) | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                           [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                           >> 0x0000000bU));
                if ((0U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx))) {
                    __Vtemp_33[1U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][1U];
                    __Vtemp_33[2U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][2U];
                    __Vtemp_33[3U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][3U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][1U] 
                        = __Vtemp_33[1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][2U] 
                        = __Vtemp_33[2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][3U] 
                        = __Vtemp_33[3U];
                }
                if ((1U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx))) {
                    __Vtemp_34[1U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][1U];
                    __Vtemp_34[2U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][2U];
                    __Vtemp_34[3U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][3U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][1U] 
                        = __Vtemp_34[1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][2U] 
                        = __Vtemp_34[2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][3U] 
                        = __Vtemp_34[3U];
                }
                if ((2U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx))) {
                    __Vtemp_35[1U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][1U];
                    __Vtemp_35[2U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][2U];
                    __Vtemp_35[3U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][3U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][1U] 
                        = __Vtemp_35[1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][2U] 
                        = __Vtemp_35[2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][3U] 
                        = __Vtemp_35[3U];
                }
                if ((3U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx))) {
                    __Vtemp_36[1U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][1U];
                    __Vtemp_36[2U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][2U];
                    __Vtemp_36[3U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][3U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][1U] 
                        = __Vtemp_36[1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][2U] 
                        = __Vtemp_36[2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][3U] 
                        = __Vtemp_36[3U];
                }
                if ((4U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx))) {
                    __Vtemp_37[1U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][1U];
                    __Vtemp_37[2U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][2U];
                    __Vtemp_37[3U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][3U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][1U] 
                        = __Vtemp_37[1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][2U] 
                        = __Vtemp_37[2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][3U] 
                        = __Vtemp_37[3U];
                }
                if ((5U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx))) {
                    __Vtemp_38[1U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][1U];
                    __Vtemp_38[2U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][2U];
                    __Vtemp_38[3U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][3U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][1U] 
                        = __Vtemp_38[1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][2U] 
                        = __Vtemp_38[2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][3U] 
                        = __Vtemp_38[3U];
                }
                if ((6U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx))) {
                    __Vtemp_39[1U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][1U];
                    __Vtemp_39[2U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][2U];
                    __Vtemp_39[3U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][3U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][1U] 
                        = __Vtemp_39[1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][2U] 
                        = __Vtemp_39[2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][3U] 
                        = __Vtemp_39[3U];
                }
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][1U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][2U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][3U] = 0U;
            } else {
                vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                    = (0x0001ffffU & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U]);
            }
            if (((vlSelfRef.core__DOT__alu_dispatch_instr[0U][3U] 
                  >> 6U) & (8U > (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail)))) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][3U] 
                    = (0x00000100U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                       [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][3U]);
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][3U] 
                    = ((0x00000101U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][3U]) 
                       | (0x000000feU & ((vlSelfRef.core__DOT__alu_dispatch_instr[0U][3U] 
                                          << 2U) | 
                                         (2U & (vlSelfRef.core__DOT__alu_dispatch_instr[0U][2U] 
                                                >> 0x0000001eU)))));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][2U] 
                    = ((1U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][2U]) 
                       | (0xfffffffeU & ((vlSelfRef.core__DOT__alu_dispatch_instr[0U][2U] 
                                          << 2U) | 
                                         (2U & (vlSelfRef.core__DOT__alu_dispatch_instr[0U][1U] 
                                                >> 0x0000001eU)))));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][3U] 
                    = ((0x000001feU & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][3U]) 
                       | (1U & (vlSelfRef.core__DOT__alu_dispatch_instr[0U][2U] 
                                >> 0x0000001eU)));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U] 
                    = ((0x1fffffffU & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U]) 
                       | (0xe0000000U & (vlSelfRef.core__DOT__alu_dispatch_instr[0U][1U] 
                                         << 2U)));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][2U] 
                    = ((0xfffffffeU & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][2U]) 
                       | (1U & (vlSelfRef.core__DOT__alu_dispatch_instr[0U][1U] 
                                >> 0x0000001eU)));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U] 
                    = ((0xe07fffffU & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U]) 
                       | (0x1f800000U & (vlSelfRef.core__DOT__alu_dispatch_instr[0U][1U] 
                                         << 2U)));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U] 
                    = ((0xff81ffffU & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U]) 
                       | (0x007e0000U & (vlSelfRef.core__DOT__alu_dispatch_instr[0U][1U] 
                                         << 2U)));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U] 
                    = ((0xfffe07ffU & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U]) 
                       | (0x0001f800U & (vlSelfRef.core__DOT__alu_dispatch_instr[0U][1U] 
                                         << 2U)));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U] 
                    = ((0x000007ffU & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U]) 
                       | (0xfffff800U & (vlSelfRef.core__DOT__alu_dispatch_instr[0U][0U] 
                                         << 2U)));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U] 
                    = ((0xfffff800U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U]) 
                       | (0x000007ffU & ((0x000007fcU 
                                          & (vlSelfRef.core__DOT__alu_dispatch_instr[0U][1U] 
                                             << 2U)) 
                                         | (vlSelfRef.core__DOT__alu_dispatch_instr[0U][0U] 
                                            >> 0x0000001eU))));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U] 
                    = ((0xfffffbffU & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U]) 
                       | (0x00000400U & (vlSelfRef.core__DOT__alu_dispatch_instr[0U][0U] 
                                         << 2U)));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U] 
                    = ((0xfffffcffU & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U]) 
                       | (0x00000300U & (vlSelfRef.core__DOT__alu_dispatch_instr[0U][0U] 
                                         << 2U)));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U] 
                    = ((0xffffff0fU & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U]) 
                       | (0x000000f0U & (vlSelfRef.core__DOT__alu_dispatch_instr[0U][0U] 
                                         << 2U)));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U] 
                    = ((0xfffffff3U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U]) 
                       | (0x0000000cU & (vlSelfRef.core__DOT__alu_dispatch_instr[0U][0U] 
                                         << 2U)));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U] 
                    = ((0xfffffffdU & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U]) 
                       | (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__is_jump) 
                           | vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__tag_ready[0U]) 
                          << 1U));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U] 
                    = ((0xfffffffeU & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U]) 
                       | (1U & (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__is_jump) 
                                 | (vlSelfRef.core__DOT__alu_dispatch_instr[0U][0U] 
                                    >> 8U)) | vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__tag_ready[1U])));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail)));
            }
        }
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v8[0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v8[1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][1U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v8[2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][2U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v8[3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][3U];
        vlSelfRef.__VdlySet__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v8 = 1U;
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v9[0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v9[1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][1U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v9[2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][2U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v9[3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][3U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v10[0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v10[1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][1U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v10[2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][2U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v10[3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][3U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v11[0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v11[1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][1U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v11[2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][2U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v11[3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][3U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v12[0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v12[1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][1U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v12[2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][2U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v12[3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][3U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v13[0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v13[1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][1U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v13[2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][2U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v13[3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][3U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v14[0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v14[1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][1U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v14[2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][2U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v14[3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][3U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v15[0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v15[1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][1U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v15[2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][2U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue__v15[3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][3U];
        vlSelfRef.__Vdly__core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__tail 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail;
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][0U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][1U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][2U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][3U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][0U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][1U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][2U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][3U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][0U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][1U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][2U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][3U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][0U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][1U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][2U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][3U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][0U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][1U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][2U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][3U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][0U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][1U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][2U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][3U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][0U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][1U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][2U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][3U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][0U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][1U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][2U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][3U];
        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__tail;
        if (vlSelfRef.core__DOT__flush) {
            vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail = 0U;
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][3U])) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff 
                    = (0x0000007fU & ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                      - ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][3U] 
                                          << 0x0000001fU) 
                                         | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][3U] 
                                            >> 1U))));
                if ((0x40U > (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff))) {
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][2U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][3U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[0U][3U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail)));
                }
            }
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][3U])) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff 
                    = (0x0000007fU & ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                      - ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][3U] 
                                          << 0x0000001fU) 
                                         | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][3U] 
                                            >> 1U))));
                if ((0x40U > (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff))) {
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][2U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][3U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[1U][3U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail)));
                }
            }
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][3U])) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff 
                    = (0x0000007fU & ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                      - ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][3U] 
                                          << 0x0000001fU) 
                                         | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][3U] 
                                            >> 1U))));
                if ((0x40U > (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff))) {
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][2U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][3U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[2U][3U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail)));
                }
            }
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][3U])) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff 
                    = (0x0000007fU & ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                      - ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][3U] 
                                          << 0x0000001fU) 
                                         | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][3U] 
                                            >> 1U))));
                if ((0x40U > (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff))) {
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][2U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][3U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[3U][3U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail)));
                }
            }
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][3U])) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff 
                    = (0x0000007fU & ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                      - ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][3U] 
                                          << 0x0000001fU) 
                                         | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][3U] 
                                            >> 1U))));
                if ((0x40U > (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff))) {
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][2U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][3U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[4U][3U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail)));
                }
            }
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][3U])) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff 
                    = (0x0000007fU & ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                      - ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][3U] 
                                          << 0x0000001fU) 
                                         | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][3U] 
                                            >> 1U))));
                if ((0x40U > (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff))) {
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][2U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][3U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[5U][3U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail)));
                }
            }
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][3U])) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff 
                    = (0x0000007fU & ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                      - ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][3U] 
                                          << 0x0000001fU) 
                                         | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][3U] 
                                            >> 1U))));
                if ((0x40U > (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff))) {
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][2U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][3U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[6U][3U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail)));
                }
            }
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][3U])) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff 
                    = (0x0000007fU & ((IData)(vlSelfRef.core__DOT__flush_sqN) 
                                      - ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][3U] 
                                          << 0x0000001fU) 
                                         | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][3U] 
                                            >> 1U))));
                if ((0x40U > (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff))) {
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][2U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][3U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[7U][3U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail)));
                }
            }
            if ((0U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][1U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][2U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][3U] = 0U;
            }
            if ((1U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][1U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][2U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][3U] = 0U;
            }
            if ((2U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][1U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][2U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][3U] = 0U;
            }
            if ((3U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][1U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][2U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][3U] = 0U;
            }
            if ((4U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][1U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][2U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][3U] = 0U;
            }
            if ((5U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][1U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][2U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][3U] = 0U;
            }
            if ((6U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][1U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][2U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][3U] = 0U;
            }
            if ((7U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][1U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][2U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][3U] = 0U;
            }
        } else {
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][3U])) {
                if (vlSelfRef.core__DOT__CDB_valid[0U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[0U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[0U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[1U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[1U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[1U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[2U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[2U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[2U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[3U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[3U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[3U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U]);
                    }
                }
            }
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][3U])) {
                if (vlSelfRef.core__DOT__CDB_valid[0U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[0U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[0U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[1U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[1U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[1U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[2U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[2U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[2U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[3U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[3U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[3U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U]);
                    }
                }
            }
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][3U])) {
                if (vlSelfRef.core__DOT__CDB_valid[0U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[0U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[0U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[1U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[1U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[1U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[2U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[2U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[2U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[3U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[3U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[3U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U]);
                    }
                }
            }
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][3U])) {
                if (vlSelfRef.core__DOT__CDB_valid[0U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[0U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[0U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[1U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[1U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[1U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[2U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[2U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[2U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[3U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[3U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[3U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U]);
                    }
                }
            }
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][3U])) {
                if (vlSelfRef.core__DOT__CDB_valid[0U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[0U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[0U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[1U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[1U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[1U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[2U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[2U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[2U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[3U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[3U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[3U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U]);
                    }
                }
            }
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][3U])) {
                if (vlSelfRef.core__DOT__CDB_valid[0U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[0U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[0U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[1U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[1U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[1U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[2U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[2U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[2U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[3U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[3U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[3U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U]);
                    }
                }
            }
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][3U])) {
                if (vlSelfRef.core__DOT__CDB_valid[0U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[0U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[0U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[1U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[1U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[1U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[2U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[2U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[2U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[3U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[3U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[3U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U]);
                    }
                }
            }
            if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][3U])) {
                if (vlSelfRef.core__DOT__CDB_valid[0U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[0U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[0U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[1U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[1U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[1U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[2U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[2U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[2U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U]);
                    }
                }
                if (vlSelfRef.core__DOT__CDB_valid[3U]) {
                    if (((~ (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U] 
                             >> 1U)) & (vlSelfRef.core__DOT__CDB_tag[3U] 
                                        == (0x0000003fU 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][1U] 
                                               >> 0x00000017U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U] 
                            = (2U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U]);
                    }
                    if (((~ vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U]) 
                         & (vlSelfRef.core__DOT__CDB_tag[3U] 
                            == (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][1U] 
                                               >> 0x00000011U))))) {
                        vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U] 
                            = (1U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U]);
                    }
                }
            }
            if (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_valid) {
                if ((0U < (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))) {
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail 
                        = (0x0000000fU & ((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail) 
                                          - (IData)(1U)));
                }
                vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                    = ((0x000003ffU & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U]) 
                       | (0x0003fc00U & (0x00020000U 
                                         | (0x0001fc00U 
                                            & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                               [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][3U] 
                                               << 9U)))));
                vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                    = ((0x0000003fU & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U]) 
                       | ((IData)((((QData)((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__op2)) 
                                    << 4U) | (QData)((IData)(
                                                             (0x0000000fU 
                                                              & ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                                                  [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][2U] 
                                                                  << 3U) 
                                                                 | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                                                    [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                                                                    >> 0x0000001dU))))))) 
                          << 6U));
                vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                    = ((0xfffffc00U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U]) 
                       | (((IData)((((QData)((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__op2)) 
                                     << 4U) | (QData)((IData)(
                                                              (0x0000000fU 
                                                               & ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                                                   [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][2U] 
                                                                   << 3U) 
                                                                  | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                                                     [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                                                                     >> 0x0000001dU))))))) 
                           >> 0x0000001aU) | ((IData)(
                                                      ((((QData)((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__op2)) 
                                                         << 4U) 
                                                        | (QData)((IData)(
                                                                          (0x0000000fU 
                                                                           & ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                                                               [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][2U] 
                                                                               << 3U) 
                                                                              | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                                                                [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                                                                                >> 0x0000001dU)))))) 
                                                       >> 0x00000020U)) 
                                              << 6U)));
                vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                    = ((0x000003ffU & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U]) 
                       | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__op1 
                          << 0x0000000aU));
                vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                    = ((0x0003fc00U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U]) 
                       | (0x0003ffffU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__op1 
                                         >> 0x00000016U)));
                vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                    = ((0xffffffc0U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U]) 
                       | (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                         [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                                         >> 0x0000000bU)));
                vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_pc 
                    = ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][3U] 
                        << 0x0000001fU) | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                           [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][2U] 
                                           >> 1U));
                vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_jump_type 
                    = (3U & (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                             [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                             >> 8U));
                vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__imm 
                    = ((vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][1U] 
                        << 0x00000015U) | (vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                                           [vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx][0U] 
                                           >> 0x0000000bU));
                if ((0U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx))) {
                    __Vtemp_49[1U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][1U];
                    __Vtemp_49[2U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][2U];
                    __Vtemp_49[3U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][3U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][1U] 
                        = __Vtemp_49[1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][2U] 
                        = __Vtemp_49[2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][3U] 
                        = __Vtemp_49[3U];
                }
                if ((1U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx))) {
                    __Vtemp_50[1U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][1U];
                    __Vtemp_50[2U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][2U];
                    __Vtemp_50[3U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][3U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][1U] 
                        = __Vtemp_50[1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][2U] 
                        = __Vtemp_50[2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][3U] 
                        = __Vtemp_50[3U];
                }
                if ((2U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx))) {
                    __Vtemp_51[1U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][1U];
                    __Vtemp_51[2U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][2U];
                    __Vtemp_51[3U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][3U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][1U] 
                        = __Vtemp_51[1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][2U] 
                        = __Vtemp_51[2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][3U] 
                        = __Vtemp_51[3U];
                }
                if ((3U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx))) {
                    __Vtemp_52[1U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][1U];
                    __Vtemp_52[2U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][2U];
                    __Vtemp_52[3U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][3U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][1U] 
                        = __Vtemp_52[1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][2U] 
                        = __Vtemp_52[2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][3U] 
                        = __Vtemp_52[3U];
                }
                if ((4U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx))) {
                    __Vtemp_53[1U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][1U];
                    __Vtemp_53[2U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][2U];
                    __Vtemp_53[3U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][3U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][1U] 
                        = __Vtemp_53[1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][2U] 
                        = __Vtemp_53[2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][3U] 
                        = __Vtemp_53[3U];
                }
                if ((5U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx))) {
                    __Vtemp_54[1U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][1U];
                    __Vtemp_54[2U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][2U];
                    __Vtemp_54[3U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][3U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][1U] 
                        = __Vtemp_54[1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][2U] 
                        = __Vtemp_54[2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][3U] 
                        = __Vtemp_54[3U];
                }
                if ((6U >= (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx))) {
                    __Vtemp_55[1U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][1U];
                    __Vtemp_55[2U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][2U];
                    __Vtemp_55[3U] = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][3U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U] 
                        = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][1U] 
                        = __Vtemp_55[1U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][2U] 
                        = __Vtemp_55[2U];
                    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][3U] 
                        = __Vtemp_55[3U];
                }
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][1U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][2U] = 0U;
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][3U] = 0U;
            } else {
                vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                    = (0x0001ffffU & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U]);
            }
            if (((vlSelfRef.core__DOT__alu_dispatch_instr[1U][3U] 
                  >> 6U) & (8U > (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail)))) {
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][3U] 
                    = (0x00000100U | vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                       [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][3U]);
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][3U] 
                    = ((0x00000101U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][3U]) 
                       | (0x000000feU & ((vlSelfRef.core__DOT__alu_dispatch_instr[1U][3U] 
                                          << 2U) | 
                                         (2U & (vlSelfRef.core__DOT__alu_dispatch_instr[1U][2U] 
                                                >> 0x0000001eU)))));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][2U] 
                    = ((1U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][2U]) 
                       | (0xfffffffeU & ((vlSelfRef.core__DOT__alu_dispatch_instr[1U][2U] 
                                          << 2U) | 
                                         (2U & (vlSelfRef.core__DOT__alu_dispatch_instr[1U][1U] 
                                                >> 0x0000001eU)))));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][3U] 
                    = ((0x000001feU & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][3U]) 
                       | (1U & (vlSelfRef.core__DOT__alu_dispatch_instr[1U][2U] 
                                >> 0x0000001eU)));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U] 
                    = ((0x1fffffffU & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U]) 
                       | (0xe0000000U & (vlSelfRef.core__DOT__alu_dispatch_instr[1U][1U] 
                                         << 2U)));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][2U] 
                    = ((0xfffffffeU & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][2U]) 
                       | (1U & (vlSelfRef.core__DOT__alu_dispatch_instr[1U][1U] 
                                >> 0x0000001eU)));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U] 
                    = ((0xe07fffffU & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U]) 
                       | (0x1f800000U & (vlSelfRef.core__DOT__alu_dispatch_instr[1U][1U] 
                                         << 2U)));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U] 
                    = ((0xff81ffffU & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U]) 
                       | (0x007e0000U & (vlSelfRef.core__DOT__alu_dispatch_instr[1U][1U] 
                                         << 2U)));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U] 
                    = ((0xfffe07ffU & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U]) 
                       | (0x0001f800U & (vlSelfRef.core__DOT__alu_dispatch_instr[1U][1U] 
                                         << 2U)));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U] 
                    = ((0x000007ffU & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U]) 
                       | (0xfffff800U & (vlSelfRef.core__DOT__alu_dispatch_instr[1U][0U] 
                                         << 2U)));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U] 
                    = ((0xfffff800U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][1U]) 
                       | (0x000007ffU & ((0x000007fcU 
                                          & (vlSelfRef.core__DOT__alu_dispatch_instr[1U][1U] 
                                             << 2U)) 
                                         | (vlSelfRef.core__DOT__alu_dispatch_instr[1U][0U] 
                                            >> 0x0000001eU))));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U] 
                    = ((0xfffffbffU & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U]) 
                       | (0x00000400U & (vlSelfRef.core__DOT__alu_dispatch_instr[1U][0U] 
                                         << 2U)));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U] 
                    = ((0xfffffcffU & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U]) 
                       | (0x00000300U & (vlSelfRef.core__DOT__alu_dispatch_instr[1U][0U] 
                                         << 2U)));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U] 
                    = ((0xffffff0fU & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U]) 
                       | (0x000000f0U & (vlSelfRef.core__DOT__alu_dispatch_instr[1U][0U] 
                                         << 2U)));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U] 
                    = ((0xfffffff3U & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U]) 
                       | (0x0000000cU & (vlSelfRef.core__DOT__alu_dispatch_instr[1U][0U] 
                                         << 2U)));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U] 
                    = ((0xfffffffdU & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U]) 
                       | (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__is_jump) 
                           | vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__tag_ready[0U]) 
                          << 1U));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[(7U 
                                                                                & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U] 
                    = ((0xfffffffeU & vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue
                        [(7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail))][0U]) 
                       | (1U & (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__is_jump) 
                                 | (vlSelfRef.core__DOT__alu_dispatch_instr[1U][0U] 
                                    >> 8U)) | vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__tag_ready[1U])));
                vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail)));
            }
        }
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v8[0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][0U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v8[1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][1U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v8[2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][2U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v8[3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[0U][3U];
        vlSelfRef.__VdlySet__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v8 = 1U;
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v9[0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][0U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v9[1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][1U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v9[2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][2U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v9[3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[1U][3U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v10[0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][0U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v10[1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][1U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v10[2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][2U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v10[3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[2U][3U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v11[0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][0U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v11[1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][1U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v11[2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][2U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v11[3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[3U][3U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v12[0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][0U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v12[1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][1U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v12[2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][2U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v12[3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[4U][3U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v13[0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][0U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v13[1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][1U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v13[2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][2U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v13[3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[5U][3U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v14[0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][0U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v14[1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][1U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v14[2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][2U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v14[3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[6U][3U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v15[0U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][0U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v15[1U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][1U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v15[2U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][2U];
        vlSelfRef.__VdlyVal__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue__v15[3U] 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[7U][3U];
        vlSelfRef.__Vdly__core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__tail 
            = vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail;
    }
    if (__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_pending__v0) {
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held[0U] = 0ULL;
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held[1U] = 0ULL;
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_pending[0U] = 0U;
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_pending[1U] = 0U;
    }
    if (__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held__v2) {
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held[0U] 
            = __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held__v2;
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_pending[0U] = 1U;
    }
    if (__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_pending__v3) {
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_pending[0U] = 0U;
    }
    if (__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held__v3) {
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held[1U] 
            = __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held__v3;
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_pending[1U] = 1U;
    }
    if (__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__rd_pending__v5) {
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_pending[1U] = 0U;
    }
    if (__VdlySet__core__DOT__agu_out__v0) {
        vlSelfRef.core__DOT__agu_out[0U][0U] = 0U;
        vlSelfRef.core__DOT__agu_out[0U][1U] = 0U;
        vlSelfRef.core__DOT__agu_out[0U][2U] = 0U;
    }
    if (__VdlySet__core__DOT__agu_out__v1) {
        vlSelfRef.core__DOT__agu_out[0U][0U] = __VdlyVal__core__DOT__agu_out__v1[0U];
        vlSelfRef.core__DOT__agu_out[0U][1U] = __VdlyVal__core__DOT__agu_out__v1[1U];
        vlSelfRef.core__DOT__agu_out[0U][2U] = __VdlyVal__core__DOT__agu_out__v1[2U];
    }
    if (__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_pending__v0) {
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[0U][0U] = 0U;
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[0U][1U] = 0U;
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[0U][2U] = 0U;
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[1U][0U] = 0U;
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[1U][1U] = 0U;
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[1U][2U] = 0U;
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_pending[0U] = 0U;
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_pending[1U] = 0U;
    }
    if (__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held__v2) {
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[0U][0U] 
            = __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held__v2[0U];
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[0U][1U] 
            = __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held__v2[1U];
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[0U][2U] 
            = __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held__v2[2U];
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_pending[0U] = 1U;
    }
    if (__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_pending__v3) {
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_pending[0U] = 0U;
    }
    if (__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held__v3) {
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[1U][0U] 
            = __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held__v3[0U];
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[1U][1U] 
            = __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held__v3[1U];
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[1U][2U] 
            = __VdlyVal__core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held__v3[2U];
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_pending[1U] = 1U;
    }
    if (__VdlySet__core__DOT__lsu__DOT__u_dmem__DOT__wr_pending__v5) {
        vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_pending[1U] = 0U;
    }
    vlSelfRef.core__DOT__fetch__DOT__FB__DOT__head 
        = __Vdly__core__DOT__fetch__DOT__FB__DOT__head;
    vlSelfRef.core__DOT__prefetch_instr[0U] = __VdlyVal__core__DOT__prefetch_instr__v0;
    vlSelfRef.core__DOT__prefetch_instr[1U] = __VdlyVal__core__DOT__prefetch_instr__v1;
    if (__VdlySet__core__DOT__rename_rob_rd__v0) {
        vlSelfRef.core__DOT__rename_rob_rd[0U] = 0U;
        vlSelfRef.core__DOT__rename_rob_rd[1U] = 0U;
    }
    if (__VdlySet__core__DOT__rename_rob_rd__v2) {
        vlSelfRef.core__DOT__rename_rob_rd[0U] = __VdlyVal__core__DOT__rename_rob_rd__v2;
        vlSelfRef.core__DOT__rename_rob_rd[1U] = __VdlyVal__core__DOT__rename_rob_rd__v3;
    }
    if (__VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v0) {
        vlSelfRef.core__DOT__dispatch__DOT__mul_div_dispatch_out[0U] = 0U;
    }
    if (__VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v1) {
        vlSelfRef.core__DOT__dispatch__DOT__mul_div_dispatch_out[0U] 
            = (0x20000000U | vlSelfRef.core__DOT__dispatch__DOT__mul_div_dispatch_out[0U]);
    }
    if (__VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v2) {
        vlSelfRef.core__DOT__dispatch__DOT__mul_div_dispatch_out[0U] 
            = ((0x203fffffU & vlSelfRef.core__DOT__dispatch__DOT__mul_div_dispatch_out[0U]) 
               | ((IData)(__VdlyVal__core__DOT__dispatch__DOT__mul_div_dispatch_out__v2) 
                  << 0x00000016U));
    }
    if (__VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v3) {
        vlSelfRef.core__DOT__dispatch__DOT__mul_div_dispatch_out[0U] 
            = ((0x3fc3ffffU & vlSelfRef.core__DOT__dispatch__DOT__mul_div_dispatch_out[0U]) 
               | ((IData)(__VdlyVal__core__DOT__dispatch__DOT__mul_div_dispatch_out__v3) 
                  << 0x00000012U));
    }
    if (__VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v4) {
        vlSelfRef.core__DOT__dispatch__DOT__mul_div_dispatch_out[0U] 
            = ((0x3ffc0fffU & vlSelfRef.core__DOT__dispatch__DOT__mul_div_dispatch_out[0U]) 
               | ((IData)(__VdlyVal__core__DOT__dispatch__DOT__mul_div_dispatch_out__v4) 
                  << 0x0000000cU));
    }
    if (__VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v5) {
        vlSelfRef.core__DOT__dispatch__DOT__mul_div_dispatch_out[0U] 
            = ((0x3ffff03fU & vlSelfRef.core__DOT__dispatch__DOT__mul_div_dispatch_out[0U]) 
               | ((IData)(__VdlyVal__core__DOT__dispatch__DOT__mul_div_dispatch_out__v5) 
                  << 6U));
    }
    if (__VdlySet__core__DOT__dispatch__DOT__mul_div_dispatch_out__v6) {
        vlSelfRef.core__DOT__dispatch__DOT__mul_div_dispatch_out[0U] 
            = ((0x3fffffc0U & vlSelfRef.core__DOT__dispatch__DOT__mul_div_dispatch_out[0U]) 
               | (IData)(__VdlyVal__core__DOT__dispatch__DOT__mul_div_dispatch_out__v6));
    }
    if (__VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v0) {
        vlSelfRef.core__DOT__dispatch__DOT__lsu_dispatch_out[0U] = 0ULL;
    }
    if (__VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v1) {
        vlSelfRef.core__DOT__dispatch__DOT__lsu_dispatch_out[0U] 
            = (0x4000000000000000ULL | vlSelfRef.core__DOT__dispatch__DOT__lsu_dispatch_out[0U]);
    }
    if (__VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v2) {
        vlSelfRef.core__DOT__dispatch__DOT__lsu_dispatch_out[0U] 
            = ((0x407fffffffffffffULL & vlSelfRef.core__DOT__dispatch__DOT__lsu_dispatch_out[0U]) 
               | ((QData)((IData)(__VdlyVal__core__DOT__dispatch__DOT__lsu_dispatch_out__v2)) 
                  << 0x00000037U));
    }
    if (__VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v3) {
        vlSelfRef.core__DOT__dispatch__DOT__lsu_dispatch_out[0U] 
            = ((0x7f87ffffffffffffULL & vlSelfRef.core__DOT__dispatch__DOT__lsu_dispatch_out[0U]) 
               | ((QData)((IData)(__VdlyVal__core__DOT__dispatch__DOT__lsu_dispatch_out__v3)) 
                  << 0x00000033U));
    }
    if (__VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v4) {
        vlSelfRef.core__DOT__dispatch__DOT__lsu_dispatch_out[0U] 
            = ((0x7ff81fffffffffffULL & vlSelfRef.core__DOT__dispatch__DOT__lsu_dispatch_out[0U]) 
               | ((QData)((IData)(__VdlyVal__core__DOT__dispatch__DOT__lsu_dispatch_out__v4)) 
                  << 0x0000002dU));
    }
    if (__VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v5) {
        vlSelfRef.core__DOT__dispatch__DOT__lsu_dispatch_out[0U] 
            = ((0x7fffe07fffffffffULL & vlSelfRef.core__DOT__dispatch__DOT__lsu_dispatch_out[0U]) 
               | ((QData)((IData)(__VdlyVal__core__DOT__dispatch__DOT__lsu_dispatch_out__v5)) 
                  << 0x00000027U));
    }
    if (__VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v6) {
        vlSelfRef.core__DOT__dispatch__DOT__lsu_dispatch_out[0U] 
            = ((0x7fffff81ffffffffULL & vlSelfRef.core__DOT__dispatch__DOT__lsu_dispatch_out[0U]) 
               | ((QData)((IData)(__VdlyVal__core__DOT__dispatch__DOT__lsu_dispatch_out__v6)) 
                  << 0x00000021U));
    }
    if (__VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v7) {
        vlSelfRef.core__DOT__dispatch__DOT__lsu_dispatch_out[0U] 
            = ((0x7ffffffe00000001ULL & vlSelfRef.core__DOT__dispatch__DOT__lsu_dispatch_out[0U]) 
               | ((QData)((IData)(__VdlyVal__core__DOT__dispatch__DOT__lsu_dispatch_out__v7)) 
                  << 1U));
    }
    if (__VdlySet__core__DOT__dispatch__DOT__lsu_dispatch_out__v8) {
        vlSelfRef.core__DOT__dispatch__DOT__lsu_dispatch_out[0U] 
            = ((0x7ffffffffffffffeULL & vlSelfRef.core__DOT__dispatch__DOT__lsu_dispatch_out[0U]) 
               | (IData)((IData)(__VdlyVal__core__DOT__dispatch__DOT__lsu_dispatch_out__v8)));
    }
    vlSelfRef.core__DOT__fetch__DOT__FB__DOT__tail 
        = __Vdly__core__DOT__fetch__DOT__FB__DOT__tail;
    vlSelfRef.core__DOT__fetch__DOT__FB__DOT__sqN_counter 
        = __Vdly__core__DOT__fetch__DOT__FB__DOT__sqN_counter;
    if (__VdlySet__core__DOT__fetch__DOT__FB__DOT__buffer__v0) {
        vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[__VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v0][1U] 
            = ((0x0000007fU & vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer
                [__VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v0][1U]) 
               | (__VdlyVal__core__DOT__fetch__DOT__FB__DOT__buffer__v0 
                  << 7U));
        vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[__VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v0][2U] 
            = (__VdlyVal__core__DOT__fetch__DOT__FB__DOT__buffer__v0 
               >> 0x00000019U);
        vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[__VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v1][0U] 
            = ((0x0000007fU & vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer
                [__VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v1][0U]) 
               | (__VdlyVal__core__DOT__fetch__DOT__FB__DOT__buffer__v1 
                  << 7U));
        vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[__VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v1][1U] 
            = ((0xffffff80U & vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer
                [__VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v1][1U]) 
               | (__VdlyVal__core__DOT__fetch__DOT__FB__DOT__buffer__v1 
                  >> 0x00000019U));
        vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[__VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v2][0U] 
            = ((0xffffff80U & vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer
                [__VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v2][0U]) 
               | (IData)(__VdlyVal__core__DOT__fetch__DOT__FB__DOT__buffer__v2));
    }
    if (__VdlySet__core__DOT__fetch__DOT__FB__DOT__buffer__v3) {
        vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[__VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v3][1U] 
            = ((0x0000007fU & vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer
                [__VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v3][1U]) 
               | (__VdlyVal__core__DOT__fetch__DOT__FB__DOT__buffer__v3 
                  << 7U));
        vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[__VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v3][2U] 
            = (__VdlyVal__core__DOT__fetch__DOT__FB__DOT__buffer__v3 
               >> 0x00000019U);
        vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[__VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v4][0U] 
            = ((0x0000007fU & vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer
                [__VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v4][0U]) 
               | (__VdlyVal__core__DOT__fetch__DOT__FB__DOT__buffer__v4 
                  << 7U));
        vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[__VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v4][1U] 
            = ((0xffffff80U & vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer
                [__VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v4][1U]) 
               | (__VdlyVal__core__DOT__fetch__DOT__FB__DOT__buffer__v4 
                  >> 0x00000019U));
        vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer[__VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v5][0U] 
            = ((0xffffff80U & vlSelfRef.core__DOT__fetch__DOT__FB__DOT__buffer
                [__VdlyDim0__core__DOT__fetch__DOT__FB__DOT__buffer__v5][0U]) 
               | (IData)(__VdlyVal__core__DOT__fetch__DOT__FB__DOT__buffer__v5));
    }
    if (__VdlySet__core__DOT__dispatch__DOT__alu_dispatch_out__v0) {
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][0U] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][1U] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][2U] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][3U] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][0U] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][1U] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][2U] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][3U] = 0U;
    }
    if (__VdlySet__core__DOT__dispatch__DOT__alu_dispatch_out__v2) {
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][3U] 
            = (0x00000040U | vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][3U]);
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][2U] 
            = ((0x7fffffffU & vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][2U]) 
               | ((IData)(__VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v3) 
                  << 0x0000001fU));
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][3U] 
            = ((0x00000040U & vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][3U]) 
               | (0x0000007fU & ((IData)(__VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v3) 
                                 >> 1U)));
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][1U] 
            = ((0x7fffffffU & vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][1U]) 
               | (__VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v4 
                  << 0x0000001fU));
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][2U] 
            = ((0x80000000U & vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][2U]) 
               | (__VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v4 
                  >> 1U));
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][1U] 
            = ((0x87ffffffU & vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][1U]) 
               | ((IData)(__VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v5) 
                  << 0x0000001bU));
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][1U] 
            = ((0xf81fffffU & vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][1U]) 
               | ((IData)(__VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v6) 
                  << 0x00000015U));
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][1U] 
            = ((0xffe07fffU & vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][1U]) 
               | ((IData)(__VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v7) 
                  << 0x0000000fU));
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][1U] 
            = ((0xffff81ffU & vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][1U]) 
               | ((IData)(__VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v8) 
                  << 9U));
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][0U] 
            = ((0x000001ffU & vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][0U]) 
               | (__VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v9 
                  << 9U));
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][1U] 
            = ((0xfffffe00U & vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][1U]) 
               | (__VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v9 
                  >> 0x00000017U));
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][0U] 
            = ((0xfffffeffU & vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][0U]) 
               | ((IData)(__VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v10) 
                  << 8U));
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][0U] 
            = ((0xffffff3fU & vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][0U]) 
               | ((IData)(__VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v11) 
                  << 6U));
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][0U] 
            = ((0xffffffc3U & vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][0U]) 
               | ((IData)(__VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v12) 
                  << 2U));
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][0U] 
            = ((0xfffffffcU & vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][0U]) 
               | (IData)(__VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v13));
    }
    if (__VdlySet__core__DOT__dispatch__DOT__alu_dispatch_out__v14) {
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][3U] 
            = (0x00000040U | vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][3U]);
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][2U] 
            = ((0x7fffffffU & vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][2U]) 
               | ((IData)(__VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v15) 
                  << 0x0000001fU));
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][3U] 
            = ((0x00000040U & vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][3U]) 
               | (0x0000007fU & ((IData)(__VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v15) 
                                 >> 1U)));
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][1U] 
            = ((0x7fffffffU & vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][1U]) 
               | (__VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v16 
                  << 0x0000001fU));
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][2U] 
            = ((0x80000000U & vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][2U]) 
               | (__VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v16 
                  >> 1U));
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][1U] 
            = ((0x87ffffffU & vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][1U]) 
               | ((IData)(__VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v17) 
                  << 0x0000001bU));
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][1U] 
            = ((0xf81fffffU & vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][1U]) 
               | ((IData)(__VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v18) 
                  << 0x00000015U));
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][1U] 
            = ((0xffe07fffU & vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][1U]) 
               | ((IData)(__VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v19) 
                  << 0x0000000fU));
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][1U] 
            = ((0xffff81ffU & vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][1U]) 
               | ((IData)(__VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v20) 
                  << 9U));
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][0U] 
            = ((0x000001ffU & vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][0U]) 
               | (__VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v21 
                  << 9U));
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][1U] 
            = ((0xfffffe00U & vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][1U]) 
               | (__VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v21 
                  >> 0x00000017U));
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][0U] 
            = ((0xfffffeffU & vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][0U]) 
               | ((IData)(__VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v22) 
                  << 8U));
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][0U] 
            = ((0xffffff3fU & vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][0U]) 
               | ((IData)(__VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v23) 
                  << 6U));
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][0U] 
            = ((0xffffffc3U & vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][0U]) 
               | ((IData)(__VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v24) 
                  << 2U));
        vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][0U] 
            = ((0xfffffffcU & vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][0U]) 
               | (IData)(__VdlyVal__core__DOT__dispatch__DOT__alu_dispatch_out__v25));
    }
    if (__VdlySet__core__DOT__dispatch__DOT__DU__DOT__dispatched__v0) {
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__dispatched[0U] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__dispatched[1U] = 0U;
    }
    if (__VdlySet__core__DOT__dispatch__DOT__DU__DOT__dispatched__v2) {
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__dispatched[0U] = 1U;
    }
    if (__VdlySet__core__DOT__dispatch__DOT__DU__DOT__dispatched__v3) {
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__dispatched[1U] = 1U;
    }
    if (__VdlySet__core__DOT__dispatch__DOT__DU__DOT__dispatched__v4) {
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__dispatched[0U] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__dispatched[1U] = 0U;
    }
    if (__VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v0) {
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[0U] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[1U] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[2U] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[3U] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[4U] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[5U] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[6U] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[7U] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[8U] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[9U] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[10U] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[11U] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[12U] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[13U] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[14U] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[15U] = 0U;
    }
    if (__VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v16) {
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[__VdlyDim0__core__DOT__dispatch__DOT__BC__DOT__valid__v16] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[__VdlyDim0__core__DOT__dispatch__DOT__BC__DOT__valid__v17] = 0U;
    }
    if (__VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v18) {
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[0U] = 0U;
    }
    if (__VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v19) {
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[1U] = 0U;
    }
    if (__VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v20) {
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[2U] = 0U;
    }
    if (__VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v21) {
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[3U] = 0U;
    }
    if (__VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v22) {
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[4U] = 0U;
    }
    if (__VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v23) {
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[5U] = 0U;
    }
    if (__VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v24) {
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[6U] = 0U;
    }
    if (__VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v25) {
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[7U] = 0U;
    }
    if (__VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v26) {
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[8U] = 0U;
    }
    if (__VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v27) {
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[9U] = 0U;
    }
    if (__VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v28) {
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[10U] = 0U;
    }
    if (__VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v29) {
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[11U] = 0U;
    }
    if (__VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v30) {
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[12U] = 0U;
    }
    if (__VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v31) {
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[13U] = 0U;
    }
    if (__VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v32) {
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[14U] = 0U;
    }
    if (__VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v33) {
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[15U] = 0U;
    }
    if (__VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v34) {
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[__VdlyDim0__core__DOT__dispatch__DOT__BC__DOT__valid__v34] = 1U;
    }
    if (__VdlySet__core__DOT__dispatch__DOT__BC__DOT__valid__v35) {
        vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[__VdlyDim0__core__DOT__dispatch__DOT__BC__DOT__valid__v35] = 1U;
    }
    vlSelfRef.core__DOT__decode_instr[0U][0U] = __VdlyVal__core__DOT__decode_instr__v0[0U];
    vlSelfRef.core__DOT__decode_instr[0U][1U] = __VdlyVal__core__DOT__decode_instr__v0[1U];
    vlSelfRef.core__DOT__decode_instr[0U][2U] = __VdlyVal__core__DOT__decode_instr__v0[2U];
    vlSelfRef.core__DOT__decode_instr[0U][3U] = __VdlyVal__core__DOT__decode_instr__v0[3U];
    vlSelfRef.core__DOT__decode_instr[1U][0U] = __VdlyVal__core__DOT__decode_instr__v1[0U];
    vlSelfRef.core__DOT__decode_instr[1U][1U] = __VdlyVal__core__DOT__decode_instr__v1[1U];
    vlSelfRef.core__DOT__decode_instr[1U][2U] = __VdlyVal__core__DOT__decode_instr__v1[2U];
    vlSelfRef.core__DOT__decode_instr[1U][3U] = __VdlyVal__core__DOT__decode_instr__v1[3U];
    if (__VdlySet__core__DOT__rename_instr__v0) {
        vlSelfRef.core__DOT__rename_instr[0U][0U] = 0U;
        vlSelfRef.core__DOT__rename_instr[0U][1U] = 0U;
        vlSelfRef.core__DOT__rename_instr[0U][2U] = 0U;
        vlSelfRef.core__DOT__rename_instr[0U][3U] = 0U;
        vlSelfRef.core__DOT__rename_instr[1U][0U] = 0U;
        vlSelfRef.core__DOT__rename_instr[1U][1U] = 0U;
        vlSelfRef.core__DOT__rename_instr[1U][2U] = 0U;
        vlSelfRef.core__DOT__rename_instr[1U][3U] = 0U;
    }
    if (__VdlySet__core__DOT__rename_instr__v2) {
        vlSelfRef.core__DOT__rename_instr[0U][3U] = 
            ((0x000000ffU & vlSelfRef.core__DOT__rename_instr[0U][3U]) 
             | (0x000001ffU & ((IData)(__VdlyVal__core__DOT__rename_instr__v2) 
                               << 8U)));
        vlSelfRef.core__DOT__rename_instr[0U][3U] = 
            ((0x00000101U & vlSelfRef.core__DOT__rename_instr[0U][3U]) 
             | (0x000001ffU & ((IData)(__VdlyVal__core__DOT__rename_instr__v3) 
                               << 1U)));
        vlSelfRef.core__DOT__rename_instr[0U][2U] = 
            ((1U & vlSelfRef.core__DOT__rename_instr[0U][2U]) 
             | (__VdlyVal__core__DOT__rename_instr__v4 
                << 1U));
        vlSelfRef.core__DOT__rename_instr[0U][3U] = 
            ((0x000001feU & vlSelfRef.core__DOT__rename_instr[0U][3U]) 
             | (0x000001ffU & (__VdlyVal__core__DOT__rename_instr__v4 
                               >> 0x0000001fU)));
        vlSelfRef.core__DOT__rename_instr[0U][1U] = 
            ((0x7fffffffU & vlSelfRef.core__DOT__rename_instr[0U][1U]) 
             | ((IData)(__VdlyVal__core__DOT__rename_instr__v5) 
                << 0x0000001fU));
        vlSelfRef.core__DOT__rename_instr[0U][2U] = 
            ((0xfffffffeU & vlSelfRef.core__DOT__rename_instr[0U][2U]) 
             | ((IData)(__VdlyVal__core__DOT__rename_instr__v5) 
                >> 1U));
        vlSelfRef.core__DOT__rename_instr[0U][1U] = 
            ((0x87ffffffU & vlSelfRef.core__DOT__rename_instr[0U][1U]) 
             | ((IData)(__VdlyVal__core__DOT__rename_instr__v6) 
                << 0x0000001bU));
        vlSelfRef.core__DOT__rename_instr[0U][1U] = 
            ((0xf81fffffU & vlSelfRef.core__DOT__rename_instr[0U][1U]) 
             | ((IData)(__VdlyVal__core__DOT__rename_instr__v7) 
                << 0x00000015U));
        vlSelfRef.core__DOT__rename_instr[0U][1U] = 
            ((0xffe07fffU & vlSelfRef.core__DOT__rename_instr[0U][1U]) 
             | ((IData)(__VdlyVal__core__DOT__rename_instr__v8) 
                << 0x0000000fU));
        vlSelfRef.core__DOT__rename_instr[0U][1U] = 
            ((0xffff81ffU & vlSelfRef.core__DOT__rename_instr[0U][1U]) 
             | ((IData)(__VdlyVal__core__DOT__rename_instr__v9) 
                << 9U));
        vlSelfRef.core__DOT__rename_instr[0U][0U] = 
            ((0x000001ffU & vlSelfRef.core__DOT__rename_instr[0U][0U]) 
             | (__VdlyVal__core__DOT__rename_instr__v10 
                << 9U));
        vlSelfRef.core__DOT__rename_instr[0U][1U] = 
            ((0xfffffe00U & vlSelfRef.core__DOT__rename_instr[0U][1U]) 
             | (__VdlyVal__core__DOT__rename_instr__v10 
                >> 0x00000017U));
        vlSelfRef.core__DOT__rename_instr[0U][0U] = 
            ((0xfffffeffU & vlSelfRef.core__DOT__rename_instr[0U][0U]) 
             | ((IData)(__VdlyVal__core__DOT__rename_instr__v11) 
                << 8U));
        vlSelfRef.core__DOT__rename_instr[0U][0U] = 
            ((0xffffff3fU & vlSelfRef.core__DOT__rename_instr[0U][0U]) 
             | ((IData)(__VdlyVal__core__DOT__rename_instr__v12) 
                << 6U));
        vlSelfRef.core__DOT__rename_instr[0U][0U] = 
            ((0xffffffc3U & vlSelfRef.core__DOT__rename_instr[0U][0U]) 
             | ((IData)(__VdlyVal__core__DOT__rename_instr__v13) 
                << 2U));
        vlSelfRef.core__DOT__rename_instr[0U][0U] = 
            ((0xfffffffcU & vlSelfRef.core__DOT__rename_instr[0U][0U]) 
             | (IData)(__VdlyVal__core__DOT__rename_instr__v14));
        vlSelfRef.core__DOT__rename_instr[1U][3U] = 
            ((0x000000ffU & vlSelfRef.core__DOT__rename_instr[1U][3U]) 
             | (0x000001ffU & ((IData)(__VdlyVal__core__DOT__rename_instr__v15) 
                               << 8U)));
        vlSelfRef.core__DOT__rename_instr[1U][3U] = 
            ((0x00000101U & vlSelfRef.core__DOT__rename_instr[1U][3U]) 
             | (0x000001ffU & ((IData)(__VdlyVal__core__DOT__rename_instr__v16) 
                               << 1U)));
        vlSelfRef.core__DOT__rename_instr[1U][2U] = 
            ((1U & vlSelfRef.core__DOT__rename_instr[1U][2U]) 
             | (__VdlyVal__core__DOT__rename_instr__v17 
                << 1U));
        vlSelfRef.core__DOT__rename_instr[1U][3U] = 
            ((0x000001feU & vlSelfRef.core__DOT__rename_instr[1U][3U]) 
             | (0x000001ffU & (__VdlyVal__core__DOT__rename_instr__v17 
                               >> 0x0000001fU)));
        vlSelfRef.core__DOT__rename_instr[1U][1U] = 
            ((0x7fffffffU & vlSelfRef.core__DOT__rename_instr[1U][1U]) 
             | ((IData)(__VdlyVal__core__DOT__rename_instr__v18) 
                << 0x0000001fU));
        vlSelfRef.core__DOT__rename_instr[1U][2U] = 
            ((0xfffffffeU & vlSelfRef.core__DOT__rename_instr[1U][2U]) 
             | ((IData)(__VdlyVal__core__DOT__rename_instr__v18) 
                >> 1U));
        vlSelfRef.core__DOT__rename_instr[1U][1U] = 
            ((0x87ffffffU & vlSelfRef.core__DOT__rename_instr[1U][1U]) 
             | ((IData)(__VdlyVal__core__DOT__rename_instr__v19) 
                << 0x0000001bU));
        vlSelfRef.core__DOT__rename_instr[1U][1U] = 
            ((0xf81fffffU & vlSelfRef.core__DOT__rename_instr[1U][1U]) 
             | ((IData)(__VdlyVal__core__DOT__rename_instr__v20) 
                << 0x00000015U));
        vlSelfRef.core__DOT__rename_instr[1U][1U] = 
            ((0xffe07fffU & vlSelfRef.core__DOT__rename_instr[1U][1U]) 
             | ((IData)(__VdlyVal__core__DOT__rename_instr__v21) 
                << 0x0000000fU));
        vlSelfRef.core__DOT__rename_instr[1U][1U] = 
            ((0xffff81ffU & vlSelfRef.core__DOT__rename_instr[1U][1U]) 
             | ((IData)(__VdlyVal__core__DOT__rename_instr__v22) 
                << 9U));
        vlSelfRef.core__DOT__rename_instr[1U][0U] = 
            ((0x000001ffU & vlSelfRef.core__DOT__rename_instr[1U][0U]) 
             | (__VdlyVal__core__DOT__rename_instr__v23 
                << 9U));
        vlSelfRef.core__DOT__rename_instr[1U][1U] = 
            ((0xfffffe00U & vlSelfRef.core__DOT__rename_instr[1U][1U]) 
             | (__VdlyVal__core__DOT__rename_instr__v23 
                >> 0x00000017U));
        vlSelfRef.core__DOT__rename_instr[1U][0U] = 
            ((0xfffffeffU & vlSelfRef.core__DOT__rename_instr[1U][0U]) 
             | ((IData)(__VdlyVal__core__DOT__rename_instr__v24) 
                << 8U));
        vlSelfRef.core__DOT__rename_instr[1U][0U] = 
            ((0xffffff3fU & vlSelfRef.core__DOT__rename_instr[1U][0U]) 
             | ((IData)(__VdlyVal__core__DOT__rename_instr__v25) 
                << 6U));
        vlSelfRef.core__DOT__rename_instr[1U][0U] = 
            ((0xffffffc3U & vlSelfRef.core__DOT__rename_instr[1U][0U]) 
             | ((IData)(__VdlyVal__core__DOT__rename_instr__v26) 
                << 2U));
        vlSelfRef.core__DOT__rename_instr[1U][0U] = 
            ((0xfffffffcU & vlSelfRef.core__DOT__rename_instr[1U][0U]) 
             | (IData)(__VdlyVal__core__DOT__rename_instr__v27));
    }
    if (__VdlySet__core__DOT__dispatch__DOT__DU__DOT__packet__v0) {
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[0U][0U] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[0U][1U] = 0x50000000U;
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[0U][2U] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[0U][3U] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[1U][0U] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[1U][1U] = 0x50000000U;
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[1U][2U] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[1U][3U] = 0U;
    }
    if (__VdlySet__core__DOT__dispatch__DOT__DU__DOT__packet__v2) {
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[0U][0U] 
            = __VdlyVal__core__DOT__dispatch__DOT__DU__DOT__packet__v2[0U];
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[0U][1U] 
            = __VdlyVal__core__DOT__dispatch__DOT__DU__DOT__packet__v2[1U];
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[0U][2U] 
            = __VdlyVal__core__DOT__dispatch__DOT__DU__DOT__packet__v2[2U];
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[0U][3U] 
            = __VdlyVal__core__DOT__dispatch__DOT__DU__DOT__packet__v2[3U];
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[1U][0U] 
            = __VdlyVal__core__DOT__dispatch__DOT__DU__DOT__packet__v3[0U];
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[1U][1U] 
            = __VdlyVal__core__DOT__dispatch__DOT__DU__DOT__packet__v3[1U];
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[1U][2U] 
            = __VdlyVal__core__DOT__dispatch__DOT__DU__DOT__packet__v3[2U];
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[1U][3U] 
            = __VdlyVal__core__DOT__dispatch__DOT__DU__DOT__packet__v3[3U];
    }
    if (__VdlySet__core__DOT__rename__DOT__rename_table__v0) {
        vlSelfRef.core__DOT__rename__DOT__rename_table[0U] 
            = (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[0U]);
        vlSelfRef.core__DOT__rename__DOT__rename_table[0U] 
            = (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[0U]);
        vlSelfRef.core__DOT__rename__DOT__rename_table[1U] 
            = (1U | (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[1U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[1U] 
            = (0x00000040U | (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[1U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[2U] 
            = (2U | (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[2U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[2U] 
            = (0x00000080U | (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[2U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[3U] 
            = (3U | (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[3U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[3U] 
            = (0x000000c0U | (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[3U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[4U] 
            = (4U | (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[4U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[4U] 
            = (0x00000100U | (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[4U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[5U] 
            = (5U | (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[5U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[5U] 
            = (0x00000140U | (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[5U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[6U] 
            = (6U | (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[6U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[6U] 
            = (0x00000180U | (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[6U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[7U] 
            = (7U | (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[7U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[7U] 
            = (0x000001c0U | (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[7U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[8U] 
            = (8U | (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[8U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[8U] 
            = (0x00000200U | (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[8U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[9U] 
            = (9U | (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[9U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[9U] 
            = (0x00000240U | (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[9U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[10U] 
            = (0x0000000aU | (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[10U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[10U] 
            = (0x00000280U | (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[10U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[11U] 
            = (0x0000000bU | (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[11U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[11U] 
            = (0x000002c0U | (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[11U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[12U] 
            = (0x0000000cU | (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[12U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[12U] 
            = (0x00000300U | (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[12U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[13U] 
            = (0x0000000dU | (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[13U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[13U] 
            = (0x00000340U | (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[13U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[14U] 
            = (0x0000000eU | (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[14U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[14U] 
            = (0x00000380U | (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[14U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[15U] 
            = (0x0000000fU | (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[15U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[15U] 
            = (0x000003c0U | (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[15U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[16U] 
            = (0x00000010U | (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[16U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[16U] 
            = (0x00000400U | (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[16U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[17U] 
            = (0x00000011U | (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[17U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[17U] 
            = (0x00000440U | (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[17U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[18U] 
            = (0x00000012U | (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[18U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[18U] 
            = (0x00000480U | (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[18U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[19U] 
            = (0x00000013U | (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[19U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[19U] 
            = (0x000004c0U | (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[19U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[20U] 
            = (0x00000014U | (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[20U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[20U] 
            = (0x00000500U | (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[20U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[21U] 
            = (0x00000015U | (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[21U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[21U] 
            = (0x00000540U | (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[21U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[22U] 
            = (0x00000016U | (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[22U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[22U] 
            = (0x00000580U | (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[22U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[23U] 
            = (0x00000017U | (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[23U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[23U] 
            = (0x000005c0U | (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[23U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[24U] 
            = (0x00000018U | (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[24U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[24U] 
            = (0x00000600U | (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[24U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[25U] 
            = (0x00000019U | (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[25U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[25U] 
            = (0x00000640U | (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[25U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[26U] 
            = (0x0000001aU | (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[26U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[26U] 
            = (0x00000680U | (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[26U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[27U] 
            = (0x0000001bU | (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[27U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[27U] 
            = (0x000006c0U | (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[27U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[28U] 
            = (0x0000001cU | (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[28U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[28U] 
            = (0x00000700U | (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[28U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[29U] 
            = (0x0000001dU | (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[29U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[29U] 
            = (0x00000740U | (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[29U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[30U] 
            = (0x0000001eU | (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[30U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[30U] 
            = (0x00000780U | (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[30U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[31U] 
            = (0x0000001fU | (0x0fc0U & vlSelfRef.core__DOT__rename__DOT__rename_table[31U]));
        vlSelfRef.core__DOT__rename__DOT__rename_table[31U] 
            = (0x000007c0U | (0x003fU & vlSelfRef.core__DOT__rename__DOT__rename_table[31U]));
    }
}
