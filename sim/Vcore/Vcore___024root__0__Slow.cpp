// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore___024root___eval_static__TOP(Vcore___024root* vlSelf);
VL_ATTR_COLD void Vcore___024root____Vm_traceActivitySetAll(Vcore___024root* vlSelf);

VL_ATTR_COLD void Vcore___024root___eval_static(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_static\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcore___024root___eval_static__TOP(vlSelf);
    Vcore___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__core__DOT__flush__0 
        = vlSelfRef.core__DOT__flush;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__clk_m__0 = vlSelfRef.clk_m;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
}

VL_ATTR_COLD void Vcore___024root___eval_static__TOP(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_static__TOP\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5583291559349580571ull);
    vlSelf->core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8685843869460968746ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(105, vlSelf->core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[__Vi0], __VscopeHash, 3940676999003754190ull);
    }
    vlSelf->core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13012871032553291262ull);
    vlSelf->core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7486959077748936792ull);
    vlSelf->core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5738499565590514996ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(105, vlSelf->core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[__Vi0], __VscopeHash, 14630482620997998737ull);
    }
    vlSelf->core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3438065981943424339ull);
    vlSelf->core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4501565506001268344ull);
    vlSelf->core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17681706698160608171ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8359808218577413094ull);
    }
    vlSelf->core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 11240524343096385882ull);
    vlSelf->core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8686030437376198801ull);
    vlSelf->core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1653603329200375685ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(65, vlSelf->core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[__Vi0], __VscopeHash, 8670340606880881173ull);
    }
    vlSelf->core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3176755537337427630ull);
    vlSelf->core__DOT__flush_controller__DOT__unnamedblk1__DOT__valid0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2551752696813894496ull);
    vlSelf->core__DOT__flush_controller__DOT__unnamedblk1__DOT__valid1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16735629322221022883ull);
    vlSelf->core__DOT__flush_controller__DOT__unnamedblk1__DOT__diff = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 5646329292113176132ull);
    vlSelf->core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6503459642631138146ull);
    vlSelf->core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11877969489582679824ull);
    vlSelf->core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__s1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14139410845673702250ull);
    vlSelf->core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__s2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17284306333463323377ull);
    vlSelf->core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk4__DOT__q = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3478915944559978095ull);
    vlSelf->core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk4__DOT__r = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5291220302132461758ull);
    vlSelf->core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk5__DOT__partial_high = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 7592302072291514033ull);
    vlSelf->core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk5__DOT__sub_result = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 15515764722897964202ull);
    vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__idx = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9038564592161235315ull);
    vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk7__DOT__drain_inc = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15346728494974342385ull);
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__be = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14915540146310688492ull);
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__bsel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6432098231289732415ull);
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__boff = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1001555797615482967ull);
    vlSelf->core__DOT__ROB__DOT__unnamedblk1__DOT__next_head = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10218946020941694292ull);
    vlSelf->core__DOT__ROB__DOT__unnamedblk1__DOT__next_tail = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9439363448933049633ull);
}

VL_ATTR_COLD void Vcore___024root___eval_initial__TOP(Vcore___024root* vlSelf);

VL_ATTR_COLD void Vcore___024root___eval_initial(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_initial\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcore___024root___eval_initial__TOP(vlSelf);
    Vcore___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vcore___024root___eval_initial__TOP(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_initial__TOP\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vilp1;
    // Body
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_ready_mul[0U] = 0U;
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_ready_lsu[0U] = 0U;
    vlSelfRef.core__DOT__register_file__DOT__i = 4U;
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu[0U] = 0U;
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_lsu[0U] = 0U;
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_mul[0U] = 0U;
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_alu[0U] = 0U;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000003fU)) {
        vlSelfRef.core__DOT__prefetch__DOT__IMEM__DOT__mem[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    VL_READMEM_N(true, 32, 64, 0, "imem.hex"s,  &(vlSelfRef.core__DOT__prefetch__DOT__IMEM__DOT__mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vcore___024root___eval_final(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_final\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcore___024root___eval_phase__stl(Vcore___024root* vlSelf);

VL_ATTR_COLD void Vcore___024root___eval_settle(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_settle\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vcore___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("rtl/core.sv", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vcore___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vcore___024root___eval_triggers_vec__stl(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_triggers_vec__stl\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[1U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[1U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.core__DOT__flush) 
                                                     != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__core__DOT__flush__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__core__DOT__flush__0 
        = vlSelfRef.core__DOT__flush;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered[0U] = (1ULL | vlSelfRef.__VstlTriggered[0U]);
    }
}

VL_ATTR_COLD bool Vcore___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vcore___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @([hybrid] core.flush)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vcore___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

VL_ATTR_COLD void Vcore___024root___stl_sequent__TOP__0(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___stl_sequent__TOP__0\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.core__DOT__prefetch__DOT__OUT_instr[0U] 
        = vlSelfRef.core__DOT__prefetch_instr[0U];
    vlSelfRef.core__DOT__prefetch__DOT__OUT_instr[1U] 
        = vlSelfRef.core__DOT__prefetch_instr[1U];
    vlSelfRef.core__DOT__prefetch__DOT__IMEM__DOT__data[0U] 
        = vlSelfRef.core__DOT__prefetch_instr[0U];
    vlSelfRef.core__DOT__prefetch__DOT__IMEM__DOT__data[1U] 
        = vlSelfRef.core__DOT__prefetch_instr[1U];
    vlSelfRef.core__DOT__fetch__DOT__IN_instr[0U] = vlSelfRef.core__DOT__prefetch_instr[0U];
    vlSelfRef.core__DOT__fetch__DOT__IN_instr[1U] = vlSelfRef.core__DOT__prefetch_instr[1U];
    vlSelfRef.core__DOT__fetch__DOT__IA__DOT__IN_instr[0U] 
        = vlSelfRef.core__DOT__prefetch_instr[0U];
    vlSelfRef.core__DOT__fetch__DOT__IA__DOT__IN_instr[1U] 
        = vlSelfRef.core__DOT__prefetch_instr[1U];
    vlSelfRef.core__DOT__decode__DOT__OUT_instr[0U][0U] 
        = vlSelfRef.core__DOT__decode_instr[0U][0U];
    vlSelfRef.core__DOT__decode__DOT__OUT_instr[0U][1U] 
        = vlSelfRef.core__DOT__decode_instr[0U][1U];
    vlSelfRef.core__DOT__decode__DOT__OUT_instr[0U][2U] 
        = vlSelfRef.core__DOT__decode_instr[0U][2U];
    vlSelfRef.core__DOT__decode__DOT__OUT_instr[0U][3U] 
        = vlSelfRef.core__DOT__decode_instr[0U][3U];
    vlSelfRef.core__DOT__decode__DOT__OUT_instr[1U][0U] 
        = vlSelfRef.core__DOT__decode_instr[1U][0U];
    vlSelfRef.core__DOT__decode__DOT__OUT_instr[1U][1U] 
        = vlSelfRef.core__DOT__decode_instr[1U][1U];
    vlSelfRef.core__DOT__decode__DOT__OUT_instr[1U][2U] 
        = vlSelfRef.core__DOT__decode_instr[1U][2U];
    vlSelfRef.core__DOT__decode__DOT__OUT_instr[1U][3U] 
        = vlSelfRef.core__DOT__decode_instr[1U][3U];
    vlSelfRef.core__DOT__rename__DOT__commit_packet[0U] 
        = vlSelfRef.core__DOT__commit_packet[0U];
    vlSelfRef.core__DOT__rename__DOT__commit_packet[1U] 
        = vlSelfRef.core__DOT__commit_packet[1U];
    vlSelfRef.core__DOT__rename__DOT__IN_instr[0U][0U] 
        = vlSelfRef.core__DOT__decode_instr[0U][0U];
    vlSelfRef.core__DOT__rename__DOT__IN_instr[0U][1U] 
        = vlSelfRef.core__DOT__decode_instr[0U][1U];
    vlSelfRef.core__DOT__rename__DOT__IN_instr[0U][2U] 
        = vlSelfRef.core__DOT__decode_instr[0U][2U];
    vlSelfRef.core__DOT__rename__DOT__IN_instr[0U][3U] 
        = vlSelfRef.core__DOT__decode_instr[0U][3U];
    vlSelfRef.core__DOT__rename__DOT__IN_instr[1U][0U] 
        = vlSelfRef.core__DOT__decode_instr[1U][0U];
    vlSelfRef.core__DOT__rename__DOT__IN_instr[1U][1U] 
        = vlSelfRef.core__DOT__decode_instr[1U][1U];
    vlSelfRef.core__DOT__rename__DOT__IN_instr[1U][2U] 
        = vlSelfRef.core__DOT__decode_instr[1U][2U];
    vlSelfRef.core__DOT__rename__DOT__IN_instr[1U][3U] 
        = vlSelfRef.core__DOT__decode_instr[1U][3U];
    vlSelfRef.core__DOT__rename__DOT__OUT_instr[0U][0U] 
        = vlSelfRef.core__DOT__rename_instr[0U][0U];
    vlSelfRef.core__DOT__rename__DOT__OUT_instr[0U][1U] 
        = vlSelfRef.core__DOT__rename_instr[0U][1U];
    vlSelfRef.core__DOT__rename__DOT__OUT_instr[0U][2U] 
        = vlSelfRef.core__DOT__rename_instr[0U][2U];
    vlSelfRef.core__DOT__rename__DOT__OUT_instr[0U][3U] 
        = vlSelfRef.core__DOT__rename_instr[0U][3U];
    vlSelfRef.core__DOT__rename__DOT__OUT_instr[1U][0U] 
        = vlSelfRef.core__DOT__rename_instr[1U][0U];
    vlSelfRef.core__DOT__rename__DOT__OUT_instr[1U][1U] 
        = vlSelfRef.core__DOT__rename_instr[1U][1U];
    vlSelfRef.core__DOT__rename__DOT__OUT_instr[1U][2U] 
        = vlSelfRef.core__DOT__rename_instr[1U][2U];
    vlSelfRef.core__DOT__rename__DOT__OUT_instr[1U][3U] 
        = vlSelfRef.core__DOT__rename_instr[1U][3U];
    vlSelfRef.core__DOT__rename__DOT__chkpt[0U] = vlSelfRef.core__DOT__chkpt[0U];
    vlSelfRef.core__DOT__rename__DOT__chkpt[1U] = vlSelfRef.core__DOT__chkpt[1U];
    vlSelfRef.core__DOT__rename__DOT__chkpt_sqN[0U] 
        = vlSelfRef.core__DOT__chkpt_sqN[0U];
    vlSelfRef.core__DOT__rename__DOT__chkpt_sqN[1U] 
        = vlSelfRef.core__DOT__chkpt_sqN[1U];
    vlSelfRef.core__DOT__rename__DOT__OUT_rd[0U] = vlSelfRef.core__DOT__rename_rob_rd[0U];
    vlSelfRef.core__DOT__rename__DOT__OUT_rd[1U] = vlSelfRef.core__DOT__rename_rob_rd[1U];
    vlSelfRef.core__DOT__dispatch__DOT__ALU_buffer_busy[0U] 
        = vlSelfRef.core__DOT__alu_buffer_busy[0U];
    vlSelfRef.core__DOT__dispatch__DOT__ALU_buffer_busy[1U] 
        = vlSelfRef.core__DOT__alu_buffer_busy[1U];
    vlSelfRef.core__DOT__dispatch__DOT__instr_sqN[0U] 
        = vlSelfRef.core__DOT__chkpt_sqN[0U];
    vlSelfRef.core__DOT__dispatch__DOT__instr_sqN[1U] 
        = vlSelfRef.core__DOT__chkpt_sqN[1U];
    vlSelfRef.core__DOT__dispatch__DOT__IN_instr[0U][0U] 
        = vlSelfRef.core__DOT__rename_instr[0U][0U];
    vlSelfRef.core__DOT__dispatch__DOT__IN_instr[0U][1U] 
        = vlSelfRef.core__DOT__rename_instr[0U][1U];
    vlSelfRef.core__DOT__dispatch__DOT__IN_instr[0U][2U] 
        = vlSelfRef.core__DOT__rename_instr[0U][2U];
    vlSelfRef.core__DOT__dispatch__DOT__IN_instr[0U][3U] 
        = vlSelfRef.core__DOT__rename_instr[0U][3U];
    vlSelfRef.core__DOT__dispatch__DOT__IN_instr[1U][0U] 
        = vlSelfRef.core__DOT__rename_instr[1U][0U];
    vlSelfRef.core__DOT__dispatch__DOT__IN_instr[1U][1U] 
        = vlSelfRef.core__DOT__rename_instr[1U][1U];
    vlSelfRef.core__DOT__dispatch__DOT__IN_instr[1U][2U] 
        = vlSelfRef.core__DOT__rename_instr[1U][2U];
    vlSelfRef.core__DOT__dispatch__DOT__IN_instr[1U][3U] 
        = vlSelfRef.core__DOT__rename_instr[1U][3U];
    vlSelfRef.core__DOT__dispatch__DOT__checkpoint[0U] 
        = vlSelfRef.core__DOT__chkpt[0U];
    vlSelfRef.core__DOT__dispatch__DOT__checkpoint[1U] 
        = vlSelfRef.core__DOT__chkpt[1U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_alu_instr[0U][0U] 
        = vlSelfRef.core__DOT__alu_dispatch_instr[0U][0U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_alu_instr[0U][1U] 
        = vlSelfRef.core__DOT__alu_dispatch_instr[0U][1U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_alu_instr[0U][2U] 
        = vlSelfRef.core__DOT__alu_dispatch_instr[0U][2U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_alu_instr[0U][3U] 
        = vlSelfRef.core__DOT__alu_dispatch_instr[0U][3U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_alu_instr[1U][0U] 
        = vlSelfRef.core__DOT__alu_dispatch_instr[1U][0U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_alu_instr[1U][1U] 
        = vlSelfRef.core__DOT__alu_dispatch_instr[1U][1U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_alu_instr[1U][2U] 
        = vlSelfRef.core__DOT__alu_dispatch_instr[1U][2U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_alu_instr[1U][3U] 
        = vlSelfRef.core__DOT__alu_dispatch_instr[1U][3U];
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__IN_instr[0U][0U] 
        = vlSelfRef.core__DOT__rename_instr[0U][0U];
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__IN_instr[0U][1U] 
        = vlSelfRef.core__DOT__rename_instr[0U][1U];
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__IN_instr[0U][2U] 
        = vlSelfRef.core__DOT__rename_instr[0U][2U];
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__IN_instr[0U][3U] 
        = vlSelfRef.core__DOT__rename_instr[0U][3U];
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__IN_instr[1U][0U] 
        = vlSelfRef.core__DOT__rename_instr[1U][0U];
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__IN_instr[1U][1U] 
        = vlSelfRef.core__DOT__rename_instr[1U][1U];
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__IN_instr[1U][2U] 
        = vlSelfRef.core__DOT__rename_instr[1U][2U];
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__IN_instr[1U][3U] 
        = vlSelfRef.core__DOT__rename_instr[1U][3U];
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__ALU_buffer_busy[0U] 
        = vlSelfRef.core__DOT__alu_buffer_busy[0U];
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__ALU_buffer_busy[1U] 
        = vlSelfRef.core__DOT__alu_buffer_busy[1U];
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__OUT_alu_instr[0U][0U] 
        = vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][0U];
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__OUT_alu_instr[0U][1U] 
        = vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][1U];
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__OUT_alu_instr[0U][2U] 
        = vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][2U];
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__OUT_alu_instr[0U][3U] 
        = vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[0U][3U];
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__OUT_alu_instr[1U][0U] 
        = vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][0U];
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__OUT_alu_instr[1U][1U] 
        = vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][1U];
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__OUT_alu_instr[1U][2U] 
        = vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][2U];
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__OUT_alu_instr[1U][3U] 
        = vlSelfRef.core__DOT__dispatch__DOT__alu_dispatch_out[1U][3U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__instr_sqN[0U] 
        = vlSelfRef.core__DOT__chkpt_sqN[0U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__instr_sqN[1U] 
        = vlSelfRef.core__DOT__chkpt_sqN[1U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__chk_valid[0U] 
        = vlSelfRef.core__DOT__chkpt[0U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__chk_valid[1U] 
        = vlSelfRef.core__DOT__chkpt[1U];
    vlSelfRef.core__DOT__issue__DOT__IN_alu_instr[0U][0U] 
        = vlSelfRef.core__DOT__alu_dispatch_instr[0U][0U];
    vlSelfRef.core__DOT__issue__DOT__IN_alu_instr[0U][1U] 
        = vlSelfRef.core__DOT__alu_dispatch_instr[0U][1U];
    vlSelfRef.core__DOT__issue__DOT__IN_alu_instr[0U][2U] 
        = vlSelfRef.core__DOT__alu_dispatch_instr[0U][2U];
    vlSelfRef.core__DOT__issue__DOT__IN_alu_instr[0U][3U] 
        = vlSelfRef.core__DOT__alu_dispatch_instr[0U][3U];
    vlSelfRef.core__DOT__issue__DOT__IN_alu_instr[1U][0U] 
        = vlSelfRef.core__DOT__alu_dispatch_instr[1U][0U];
    vlSelfRef.core__DOT__issue__DOT__IN_alu_instr[1U][1U] 
        = vlSelfRef.core__DOT__alu_dispatch_instr[1U][1U];
    vlSelfRef.core__DOT__issue__DOT__IN_alu_instr[1U][2U] 
        = vlSelfRef.core__DOT__alu_dispatch_instr[1U][2U];
    vlSelfRef.core__DOT__issue__DOT__IN_alu_instr[1U][3U] 
        = vlSelfRef.core__DOT__alu_dispatch_instr[1U][3U];
    vlSelfRef.core__DOT__execute__DOT__CDB_line[0U] 
        = vlSelfRef.core__DOT__int_cdb_lines[0U];
    vlSelfRef.core__DOT__execute__DOT__CDB_line[1U] 
        = vlSelfRef.core__DOT__int_cdb_lines[1U];
    vlSelfRef.core__DOT__execute__DOT__CDB_line[2U] 
        = vlSelfRef.core__DOT__int_cdb_lines[2U];
    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__mem_resp[0U] 
        = vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U];
    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__mem_resp[1U] 
        = vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U];
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_resp[0U] 
        = vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[0U];
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_resp[1U] 
        = vlSelfRef.core__DOT__lsu__DOT__ldb_mem_resp[1U];
    vlSelfRef.core__DOT__ROB__DOT__OUT_commit[0U] = vlSelfRef.core__DOT__commit_packet[0U];
    vlSelfRef.core__DOT__ROB__DOT__OUT_commit[1U] = vlSelfRef.core__DOT__commit_packet[1U];
    vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__is_load = 0U;
    if ((1U & (~ (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                  >> 0x00000012U)))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 0x0fU;
    }
    if ((1U & (~ (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                  >> 0x00000012U)))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 0x0eU;
    }
    if ((1U & (~ (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                  >> 0x00000012U)))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 0x0dU;
    }
    if ((1U & (~ (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                  >> 0x00000012U)))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 0x0cU;
    }
    if ((1U & (~ (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                  >> 0x00000012U)))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 0x0bU;
    }
    if ((1U & (~ (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                  >> 0x00000012U)))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 0x0aU;
    }
    if ((1U & (~ (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                  >> 0x00000012U)))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 9U;
    }
    if ((1U & (~ (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                  >> 0x00000012U)))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 8U;
    }
    if ((1U & (~ (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                  >> 0x00000012U)))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 7U;
    }
    if ((1U & (~ (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                  >> 0x00000012U)))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 6U;
    }
    if ((1U & (~ (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                  >> 0x00000012U)))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 5U;
    }
    if ((1U & (~ (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                  >> 0x00000012U)))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 4U;
    }
    if ((1U & (~ (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                  >> 0x00000012U)))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 3U;
    }
    if ((1U & (~ (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                  >> 0x00000012U)))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 2U;
    }
    if ((1U & (~ (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                  >> 0x00000012U)))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 1U;
    }
    if ((1U & (~ (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                  >> 0x00000012U)))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 0U;
    }
    vlSelfRef.core__DOT__ROB__DOT__dataout_valid = 
        ((2U & (vlSelfRef.core__DOT__commit_packet[1U] 
                >> 0x00000011U)) | (1U & (vlSelfRef.core__DOT__commit_packet[0U] 
                                          >> 0x00000012U)));
    vlSelfRef.core__DOT__ROB__DOT__alloc_index[0U] 
        = vlSelfRef.core__DOT__ROB__DOT__tail;
    vlSelfRef.core__DOT__ROB__DOT__alloc_index[1U] 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.core__DOT__ROB__DOT__tail)));
    vlSelfRef.core__DOT__dispatch__DOT__MUL_DIV_buffer_busy[0U] 
        = vlSelfRef.core__DOT__mul_div_buffer_busy[0U];
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__MUL_DIV_buffer_busy[0U] 
        = vlSelfRef.core__DOT__mul_div_buffer_busy[0U];
    vlSelfRef.core__DOT__dispatch__DOT__LSU_buffer_busy[0U] 
        = vlSelfRef.core__DOT__lsu_buffer_busy[0U];
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__LSU_buffer_busy[0U] 
        = vlSelfRef.core__DOT__lsu_buffer_busy[0U];
    vlSelfRef.core__DOT__lsu__DOT__OUT_busy = (0x0fU 
                                               == (IData)(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__count));
    vlSelfRef.core__DOT__dispatch__DOT__OUT_mul_div_instr[0U] 
        = vlSelfRef.core__DOT__mul_div_dispatch_instr[0U];
    vlSelfRef.core__DOT__issue__DOT__IN_mul_div_instr[0U] 
        = vlSelfRef.core__DOT__mul_div_dispatch_instr[0U];
    vlSelfRef.core__DOT__dispatch__DOT__OUT_lsu_instr[0U] 
        = vlSelfRef.core__DOT__lsu_dispatch_instr[0U];
    vlSelfRef.core__DOT__issue__DOT__IN_lsu_instr[0U] 
        = vlSelfRef.core__DOT__lsu_dispatch_instr[0U];
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__OUT_mul_div_instr[0U] 
        = vlSelfRef.core__DOT__dispatch__DOT__mul_div_dispatch_out[0U];
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__OUT_lsu_instr[0U] 
        = vlSelfRef.core__DOT__dispatch__DOT__lsu_dispatch_out[0U];
    vlSelfRef.core__DOT__issue__DOT__IN_busy[0U] = 
        (0U != (IData)(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__state));
    vlSelfRef.core__DOT__mul_div_fu_busy[0U] = (0U 
                                                != (IData)(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__state));
    vlSelfRef.core__DOT__execute__DOT__mul_div_busy[0U] 
        = (0U != (IData)(vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__state));
    vlSelfRef.core__DOT__issue__DOT__OUT_lsu_instr[0U][0U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U];
    vlSelfRef.core__DOT__issue__DOT__OUT_lsu_instr[0U][1U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U];
    vlSelfRef.core__DOT__issue__DOT__OUT_lsu_instr[0U][2U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U];
    vlSelfRef.core__DOT__issue__DOT__OUT_lsu_instr[0U][3U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U];
    vlSelfRef.core__DOT__lsu_issue_instr[0U][0U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U];
    vlSelfRef.core__DOT__lsu_issue_instr[0U][1U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U];
    vlSelfRef.core__DOT__lsu_issue_instr[0U][2U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U];
    vlSelfRef.core__DOT__lsu_issue_instr[0U][3U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U];
    vlSelfRef.core__DOT__execute__DOT__lsu_issue_instr[0U][0U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U];
    vlSelfRef.core__DOT__execute__DOT__lsu_issue_instr[0U][1U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U];
    vlSelfRef.core__DOT__execute__DOT__lsu_issue_instr[0U][2U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U];
    vlSelfRef.core__DOT__execute__DOT__lsu_issue_instr[0U][3U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__is_jump 
        = ((2U == (3U & (vlSelfRef.core__DOT__alu_dispatch_instr[0U][0U] 
                         >> 6U))) | (1U == (3U & (vlSelfRef.core__DOT__alu_dispatch_instr[0U][0U] 
                                                  >> 6U))));
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__is_jump 
        = ((2U == (3U & (vlSelfRef.core__DOT__alu_dispatch_instr[1U][0U] 
                         >> 6U))) | (1U == (3U & (vlSelfRef.core__DOT__alu_dispatch_instr[1U][0U] 
                                                  >> 6U))));
    vlSelfRef.core__DOT__execute__DOT__agu_out[0U][0U] 
        = vlSelfRef.core__DOT__agu_out[0U][0U];
    vlSelfRef.core__DOT__execute__DOT__agu_out[0U][1U] 
        = vlSelfRef.core__DOT__agu_out[0U][1U];
    vlSelfRef.core__DOT__execute__DOT__agu_out[0U][2U] 
        = vlSelfRef.core__DOT__agu_out[0U][2U];
    vlSelfRef.core__DOT__lsu__DOT__stb_wb[0U] = (((vlSelfRef.core__DOT__agu_out[0U][1U] 
                                                   << 0x0000001dU) 
                                                  | (0x1ffffffcU 
                                                     & (vlSelfRef.core__DOT__agu_out[0U][0U] 
                                                        >> 3U))) 
                                                 | (3U 
                                                    & (vlSelfRef.core__DOT__agu_out[0U][0U] 
                                                       >> 1U)));
    vlSelfRef.core__DOT__lsu__DOT__stb_wb[1U] = ((3U 
                                                  & (vlSelfRef.core__DOT__agu_out[0U][1U] 
                                                     >> 3U)) 
                                                 | ((vlSelfRef.core__DOT__agu_out[0U][2U] 
                                                     << 0x0000001dU) 
                                                    | (0x1ffffffcU 
                                                       & (vlSelfRef.core__DOT__agu_out[0U][1U] 
                                                          >> 3U))));
    vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] = ((0x00000200U 
                                                  & vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U]) 
                                                 | (0x000003ffU 
                                                    & ((3U 
                                                        & (vlSelfRef.core__DOT__agu_out[0U][2U] 
                                                           >> 3U)) 
                                                       | (0x000001fcU 
                                                          & (vlSelfRef.core__DOT__agu_out[0U][2U] 
                                                             >> 3U)))));
    vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U] = ((0x000001ffU 
                                                  & vlSelfRef.core__DOT__lsu__DOT__stb_wb[2U]) 
                                                 | (0x00000200U 
                                                    & ((vlSelfRef.core__DOT__agu_out[0U][2U] 
                                                        >> 3U) 
                                                       & ((0U 
                                                           == 
                                                           (3U 
                                                            & (vlSelfRef.core__DOT__agu_out[0U][0U] 
                                                               >> 3U))) 
                                                          << 9U))));
    vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_op1_s 
        = (((QData)((IData)((1U & (vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[2U] 
                                   >> 9U)))) << 0x00000020U) 
           | (QData)((IData)(((vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[2U] 
                               << 0x00000016U) | (vlSelfRef.core__DOT__execute__DOT__genblk2__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[1U] 
                                                  >> 0x0000000aU)))));
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_sync[0U] 
        = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_wr_ack__DOT__ff2;
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_sync[1U] 
        = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_wr_ack__DOT__ff2;
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync[0U] 
        = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_wr_sync__DOT__ff2;
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync[1U] 
        = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_wr_sync__DOT__ff2;
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_sync[0U] 
        = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_rd_ack__DOT__ff2;
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_sync[1U] 
        = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_rd_ack__DOT__ff2;
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync[0U] 
        = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_rd_sync__DOT__ff2;
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync[1U] 
        = vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_rd_sync__DOT__ff2;
    vlSelfRef.core__DOT__execute__DOT__int_fu_out[2U] 
        = vlSelfRef.core__DOT__execute__DOT____Vcellout__genblk2__BRA__0__KET____DOT__MUL_DIV_i__OUT_cdb;
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_stall[0U] 
        = ((~ (IData)(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_rd_ack__DOT__ff2)) 
           & vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_pending[0U]);
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_stall[1U] 
        = ((~ (IData)(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_rd_ack__DOT__ff2)) 
           & vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_pending[1U]);
    vlSelfRef.core__DOT__rename__DOT__free_CommTag[0U] 
        = (0x0000003fU & (vlSelfRef.core__DOT__rename__DOT__rename_table
                          [(0x0000001fU & (vlSelfRef.core__DOT__commit_packet[0U] 
                                           >> 6U))] 
                          >> 6U));
    vlSelfRef.core__DOT__rename__DOT__free_CommTag[1U] 
        = (0x0000003fU & (vlSelfRef.core__DOT__rename__DOT__rename_table
                          [(0x0000001fU & (vlSelfRef.core__DOT__commit_packet[1U] 
                                           >> 6U))] 
                          >> 6U));
    vlSelfRef.core__DOT__lsu__DOT__is_store = 0U;
    vlSelfRef.core__DOT__lsu__DOT__is_load = 0U;
    if ((1U & (IData)((vlSelfRef.core__DOT__lsu_dispatch_instr[0U] 
                       >> 0x0000003eU)))) {
        if ((1U & (IData)((vlSelfRef.core__DOT__lsu_dispatch_instr[0U] 
                           >> 0x00000036U)))) {
            vlSelfRef.core__DOT__lsu__DOT__is_store = 0U;
            vlSelfRef.core__DOT__lsu__DOT__is_load = 0U;
        } else if ((1U & (IData)((vlSelfRef.core__DOT__lsu_dispatch_instr[0U] 
                                  >> 0x00000035U)))) {
            if ((1U & (IData)((vlSelfRef.core__DOT__lsu_dispatch_instr[0U] 
                               >> 0x00000034U)))) {
                vlSelfRef.core__DOT__lsu__DOT__is_store = 1U;
            } else if ((1U & (IData)((vlSelfRef.core__DOT__lsu_dispatch_instr[0U] 
                                      >> 0x00000033U)))) {
                vlSelfRef.core__DOT__lsu__DOT__is_store = 1U;
            }
            if ((1U & (~ (IData)((vlSelfRef.core__DOT__lsu_dispatch_instr[0U] 
                                  >> 0x00000034U))))) {
                if ((1U & (~ (IData)((vlSelfRef.core__DOT__lsu_dispatch_instr[0U] 
                                      >> 0x00000033U))))) {
                    vlSelfRef.core__DOT__lsu__DOT__is_load = 1U;
                }
            }
        } else {
            vlSelfRef.core__DOT__lsu__DOT__is_load = 1U;
        }
    }
    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__addr_wb 
        = (((QData)((IData)(((vlSelfRef.core__DOT__agu_out[0U][2U] 
                              >> 0x0000000cU) & (1U 
                                                 == 
                                                 (3U 
                                                  & (vlSelfRef.core__DOT__agu_out[0U][0U] 
                                                     >> 3U)))))) 
            << 0x0000002aU) | ((0x000003fffffffff8ULL 
                                & (((QData)((IData)(vlSelfRef.core__DOT__agu_out[0U][2U])) 
                                    << 0x0000001eU) 
                                   | (0x3ffffffffffffff8ULL 
                                      & ((QData)((IData)(vlSelfRef.core__DOT__agu_out[0U][1U])) 
                                         >> 2U)))) 
                               | (QData)((IData)((7U 
                                                  & vlSelfRef.core__DOT__agu_out[0U][0U])))));
    vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__is_store = 0U;
    vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__data_size = 3U;
    vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__is_unsigned = 0U;
    if ((0x00020000U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U])) {
        if ((0x00000200U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U])) {
            vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__is_load = 0U;
            vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__is_store = 0U;
            vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__data_size = 3U;
            vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__is_unsigned = 0U;
        } else if ((0x00000100U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U])) {
            if ((1U & (~ (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U] 
                          >> 7U)))) {
                if ((1U & (~ (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U] 
                              >> 6U)))) {
                    vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__is_load = 1U;
                    vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__is_unsigned = 1U;
                }
            }
            if ((0x00000080U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U])) {
                vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__is_store = 1U;
                vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__data_size 
                    = ((0x00000040U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U])
                        ? 3U : 1U);
            } else if ((0x00000040U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U])) {
                vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__is_store = 1U;
                vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__data_size = 0U;
            } else {
                vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__data_size = 1U;
            }
        } else {
            vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__is_load = 1U;
            vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__data_size 
                = ((0x00000080U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U])
                    ? ((0x00000040U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U])
                        ? 0U : 3U) : ((0x00000040U 
                                       & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U])
                                       ? 1U : 0U));
            vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__is_unsigned 
                = ((1U & (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U] 
                          >> 7U)) && (1U & (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U] 
                                            >> 6U)));
        }
    }
    vlSelfRef.core__DOT__execute__DOT__genblk1__BRA__0__KET____DOT__ALU_i__DOT__alu_result 
        = ((0x00000200U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
            ? ((0x00000100U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                ? 0U : ((0x00000080U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                         ? ((0x00000040U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                             ? 0U : ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                                      << 0x00000016U) 
                                     | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                        >> 0x0000000aU)))
                         : ((0x00000040U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                             ? (((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                                  << 0x00000016U) | 
                                 (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                  >> 0x0000000aU)) 
                                & ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                    << 0x00000016U) 
                                   | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                      >> 0x0000000aU)))
                             : (((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                                  << 0x00000016U) | 
                                 (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                  >> 0x0000000aU)) 
                                | ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                    << 0x00000016U) 
                                   | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                      >> 0x0000000aU))))))
            : ((0x00000100U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                ? ((0x00000080U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                    ? (((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                         << 0x00000016U) | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                            >> 0x0000000aU)) 
                       >> (0x0000001fU & (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                          >> 0x0000000aU)))
                    : ((0x00000040U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                        ? (((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                             << 0x00000016U) | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                                >> 0x0000000aU)) 
                           ^ ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                               << 0x00000016U) | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                                  >> 0x0000000aU)))
                        : (((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                             << 0x00000016U) | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                                >> 0x0000000aU)) 
                           < ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                               << 0x00000016U) | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                                  >> 0x0000000aU)))))
                : ((0x00000080U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                    ? ((0x00000040U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                        ? VL_LTS_III(32, ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                                           << 0x00000016U) 
                                          | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                             >> 0x0000000aU)), 
                                     ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                       << 0x00000016U) 
                                      | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                         >> 0x0000000aU)))
                        : (((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                             << 0x00000016U) | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                                >> 0x0000000aU)) 
                           << (0x0000001fU & (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                              >> 0x0000000aU))))
                    : ((0x00000040U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                        ? (((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                             << 0x00000016U) | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                                >> 0x0000000aU)) 
                           - ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                               << 0x00000016U) | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                                  >> 0x0000000aU)))
                        : (((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                             << 0x00000016U) | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                                >> 0x0000000aU)) 
                           + ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                               << 0x00000016U) | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                                  >> 0x0000000aU)))))));
    vlSelfRef.core__DOT__execute__DOT__genblk1__BRA__1__KET____DOT__ALU_i__DOT__alu_result 
        = ((0x00000200U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
            ? ((0x00000100U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                ? 0U : ((0x00000080U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                         ? ((0x00000040U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                             ? 0U : ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                                      << 0x00000016U) 
                                     | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                        >> 0x0000000aU)))
                         : ((0x00000040U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                             ? (((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                                  << 0x00000016U) | 
                                 (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                  >> 0x0000000aU)) 
                                & ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                    << 0x00000016U) 
                                   | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                      >> 0x0000000aU)))
                             : (((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                                  << 0x00000016U) | 
                                 (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                  >> 0x0000000aU)) 
                                | ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                    << 0x00000016U) 
                                   | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                      >> 0x0000000aU))))))
            : ((0x00000100U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                ? ((0x00000080U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                    ? (((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                         << 0x00000016U) | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                            >> 0x0000000aU)) 
                       >> (0x0000001fU & (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                          >> 0x0000000aU)))
                    : ((0x00000040U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                        ? (((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                             << 0x00000016U) | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                                >> 0x0000000aU)) 
                           ^ ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                               << 0x00000016U) | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                                  >> 0x0000000aU)))
                        : (((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                             << 0x00000016U) | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                                >> 0x0000000aU)) 
                           < ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                               << 0x00000016U) | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                                  >> 0x0000000aU)))))
                : ((0x00000080U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                    ? ((0x00000040U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                        ? VL_LTS_III(32, ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                                           << 0x00000016U) 
                                          | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                             >> 0x0000000aU)), 
                                     ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                       << 0x00000016U) 
                                      | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                         >> 0x0000000aU)))
                        : (((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                             << 0x00000016U) | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                                >> 0x0000000aU)) 
                           << (0x0000001fU & (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                              >> 0x0000000aU))))
                    : ((0x00000040U & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                        ? (((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                             << 0x00000016U) | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                                >> 0x0000000aU)) 
                           - ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                               << 0x00000016U) | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                                  >> 0x0000000aU)))
                        : (((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                             << 0x00000016U) | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                                >> 0x0000000aU)) 
                           + ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                               << 0x00000016U) | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                                  >> 0x0000000aU)))))));
    vlSelfRef.core__DOT__commit_sqN[0U] = (0x0000007fU 
                                           & (vlSelfRef.core__DOT__commit_packet[0U] 
                                              >> 0x0000000bU));
    vlSelfRef.core__DOT__commit_sqN[1U] = (0x0000007fU 
                                           & (vlSelfRef.core__DOT__commit_packet[1U] 
                                              >> 0x0000000bU));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] = ((0x000003ffffffffffULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[0U][2U] 
                                                                         >> 0x0000000bU)))) 
                                                     << 0x0000002aU));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] = ((0x00000407ffffffffULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U]) 
                                                  | ((QData)((IData)(
                                                                     (0x0000007fU 
                                                                      & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[0U][2U] 
                                                                         >> 2U)))) 
                                                     << 0x00000023U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] = ((0x000007f800000007ULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U]) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[0U][2U] 
                                                                       << 0x0000001eU) 
                                                                      | (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[0U][1U] 
                                                                         >> 2U)))) 
                                                     << 3U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] = ((0x000007fffffffffeULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U]) 
                                                  | (IData)((IData)(
                                                                    (1U 
                                                                     & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[0U][2U] 
                                                                        >> 0x0000000aU)))));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] = ((0x000007fffffffff9ULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U]) 
                                                  | ((QData)((IData)(
                                                                     (3U 
                                                                      & vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[0U][0U]))) 
                                                     << 1U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] = ((0x000003ffffffffffULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[1U][2U] 
                                                                         >> 0x0000000bU)))) 
                                                     << 0x0000002aU));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] = ((0x00000407ffffffffULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U]) 
                                                  | ((QData)((IData)(
                                                                     (0x0000007fU 
                                                                      & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[1U][2U] 
                                                                         >> 2U)))) 
                                                     << 0x00000023U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] = ((0x000007f800000007ULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U]) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[1U][2U] 
                                                                       << 0x0000001eU) 
                                                                      | (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[1U][1U] 
                                                                         >> 2U)))) 
                                                     << 3U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] = ((0x000007fffffffffeULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U]) 
                                                  | (IData)((IData)(
                                                                    (1U 
                                                                     & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[1U][2U] 
                                                                        >> 0x0000000aU)))));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] = ((0x000007fffffffff9ULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U]) 
                                                  | ((QData)((IData)(
                                                                     (3U 
                                                                      & vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[1U][0U]))) 
                                                     << 1U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] = ((0x000003ffffffffffULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[2U][2U] 
                                                                         >> 0x0000000bU)))) 
                                                     << 0x0000002aU));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] = ((0x00000407ffffffffULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U]) 
                                                  | ((QData)((IData)(
                                                                     (0x0000007fU 
                                                                      & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[2U][2U] 
                                                                         >> 2U)))) 
                                                     << 0x00000023U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] = ((0x000007f800000007ULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U]) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[2U][2U] 
                                                                       << 0x0000001eU) 
                                                                      | (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[2U][1U] 
                                                                         >> 2U)))) 
                                                     << 3U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] = ((0x000007fffffffffeULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U]) 
                                                  | (IData)((IData)(
                                                                    (1U 
                                                                     & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[2U][2U] 
                                                                        >> 0x0000000aU)))));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] = ((0x000007fffffffff9ULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U]) 
                                                  | ((QData)((IData)(
                                                                     (3U 
                                                                      & vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[2U][0U]))) 
                                                     << 1U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] = ((0x000003ffffffffffULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[3U][2U] 
                                                                         >> 0x0000000bU)))) 
                                                     << 0x0000002aU));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] = ((0x00000407ffffffffULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U]) 
                                                  | ((QData)((IData)(
                                                                     (0x0000007fU 
                                                                      & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[3U][2U] 
                                                                         >> 2U)))) 
                                                     << 0x00000023U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] = ((0x000007f800000007ULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U]) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[3U][2U] 
                                                                       << 0x0000001eU) 
                                                                      | (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[3U][1U] 
                                                                         >> 2U)))) 
                                                     << 3U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] = ((0x000007fffffffffeULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U]) 
                                                  | (IData)((IData)(
                                                                    (1U 
                                                                     & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[3U][2U] 
                                                                        >> 0x0000000aU)))));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] = ((0x000007fffffffff9ULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U]) 
                                                  | ((QData)((IData)(
                                                                     (3U 
                                                                      & vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[3U][0U]))) 
                                                     << 1U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] = ((0x000003ffffffffffULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[4U][2U] 
                                                                         >> 0x0000000bU)))) 
                                                     << 0x0000002aU));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] = ((0x00000407ffffffffULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U]) 
                                                  | ((QData)((IData)(
                                                                     (0x0000007fU 
                                                                      & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[4U][2U] 
                                                                         >> 2U)))) 
                                                     << 0x00000023U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] = ((0x000007f800000007ULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U]) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[4U][2U] 
                                                                       << 0x0000001eU) 
                                                                      | (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[4U][1U] 
                                                                         >> 2U)))) 
                                                     << 3U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] = ((0x000007fffffffffeULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U]) 
                                                  | (IData)((IData)(
                                                                    (1U 
                                                                     & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[4U][2U] 
                                                                        >> 0x0000000aU)))));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] = ((0x000007fffffffff9ULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U]) 
                                                  | ((QData)((IData)(
                                                                     (3U 
                                                                      & vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[4U][0U]))) 
                                                     << 1U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] = ((0x000003ffffffffffULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[5U][2U] 
                                                                         >> 0x0000000bU)))) 
                                                     << 0x0000002aU));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] = ((0x00000407ffffffffULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U]) 
                                                  | ((QData)((IData)(
                                                                     (0x0000007fU 
                                                                      & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[5U][2U] 
                                                                         >> 2U)))) 
                                                     << 0x00000023U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] = ((0x000007f800000007ULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U]) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[5U][2U] 
                                                                       << 0x0000001eU) 
                                                                      | (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[5U][1U] 
                                                                         >> 2U)))) 
                                                     << 3U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] = ((0x000007fffffffffeULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U]) 
                                                  | (IData)((IData)(
                                                                    (1U 
                                                                     & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[5U][2U] 
                                                                        >> 0x0000000aU)))));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] = ((0x000007fffffffff9ULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U]) 
                                                  | ((QData)((IData)(
                                                                     (3U 
                                                                      & vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[5U][0U]))) 
                                                     << 1U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] = ((0x000003ffffffffffULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[6U][2U] 
                                                                         >> 0x0000000bU)))) 
                                                     << 0x0000002aU));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] = ((0x00000407ffffffffULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U]) 
                                                  | ((QData)((IData)(
                                                                     (0x0000007fU 
                                                                      & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[6U][2U] 
                                                                         >> 2U)))) 
                                                     << 0x00000023U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] = ((0x000007f800000007ULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U]) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[6U][2U] 
                                                                       << 0x0000001eU) 
                                                                      | (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[6U][1U] 
                                                                         >> 2U)))) 
                                                     << 3U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] = ((0x000007fffffffffeULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U]) 
                                                  | (IData)((IData)(
                                                                    (1U 
                                                                     & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[6U][2U] 
                                                                        >> 0x0000000aU)))));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] = ((0x000007fffffffff9ULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U]) 
                                                  | ((QData)((IData)(
                                                                     (3U 
                                                                      & vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[6U][0U]))) 
                                                     << 1U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] = ((0x000003ffffffffffULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[7U][2U] 
                                                                         >> 0x0000000bU)))) 
                                                     << 0x0000002aU));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] = ((0x00000407ffffffffULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U]) 
                                                  | ((QData)((IData)(
                                                                     (0x0000007fU 
                                                                      & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[7U][2U] 
                                                                         >> 2U)))) 
                                                     << 0x00000023U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] = ((0x000007f800000007ULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U]) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[7U][2U] 
                                                                       << 0x0000001eU) 
                                                                      | (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[7U][1U] 
                                                                         >> 2U)))) 
                                                     << 3U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] = ((0x000007fffffffffeULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U]) 
                                                  | (IData)((IData)(
                                                                    (1U 
                                                                     & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[7U][2U] 
                                                                        >> 0x0000000aU)))));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] = ((0x000007fffffffff9ULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U]) 
                                                  | ((QData)((IData)(
                                                                     (3U 
                                                                      & vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[7U][0U]))) 
                                                     << 1U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] = ((0x000003ffffffffffULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[8U][2U] 
                                                                         >> 0x0000000bU)))) 
                                                     << 0x0000002aU));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] = ((0x00000407ffffffffULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U]) 
                                                  | ((QData)((IData)(
                                                                     (0x0000007fU 
                                                                      & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[8U][2U] 
                                                                         >> 2U)))) 
                                                     << 0x00000023U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] = ((0x000007f800000007ULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U]) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[8U][2U] 
                                                                       << 0x0000001eU) 
                                                                      | (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[8U][1U] 
                                                                         >> 2U)))) 
                                                     << 3U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] = ((0x000007fffffffffeULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U]) 
                                                  | (IData)((IData)(
                                                                    (1U 
                                                                     & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[8U][2U] 
                                                                        >> 0x0000000aU)))));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] = ((0x000007fffffffff9ULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U]) 
                                                  | ((QData)((IData)(
                                                                     (3U 
                                                                      & vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[8U][0U]))) 
                                                     << 1U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] = ((0x000003ffffffffffULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[9U][2U] 
                                                                         >> 0x0000000bU)))) 
                                                     << 0x0000002aU));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] = ((0x00000407ffffffffULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U]) 
                                                  | ((QData)((IData)(
                                                                     (0x0000007fU 
                                                                      & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[9U][2U] 
                                                                         >> 2U)))) 
                                                     << 0x00000023U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] = ((0x000007f800000007ULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U]) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[9U][2U] 
                                                                       << 0x0000001eU) 
                                                                      | (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[9U][1U] 
                                                                         >> 2U)))) 
                                                     << 3U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] = ((0x000007fffffffffeULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U]) 
                                                  | (IData)((IData)(
                                                                    (1U 
                                                                     & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[9U][2U] 
                                                                        >> 0x0000000aU)))));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] = ((0x000007fffffffff9ULL 
                                                   & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U]) 
                                                  | ((QData)((IData)(
                                                                     (3U 
                                                                      & vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[9U][0U]))) 
                                                     << 1U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] = (
                                                   (0x000003ffffffffffULL 
                                                    & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[10U][2U] 
                                                                          >> 0x0000000bU)))) 
                                                      << 0x0000002aU));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] = (
                                                   (0x00000407ffffffffULL 
                                                    & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U]) 
                                                   | ((QData)((IData)(
                                                                      (0x0000007fU 
                                                                       & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[10U][2U] 
                                                                          >> 2U)))) 
                                                      << 0x00000023U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] = (
                                                   (0x000007f800000007ULL 
                                                    & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U]) 
                                                   | ((QData)((IData)(
                                                                      ((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[10U][2U] 
                                                                        << 0x0000001eU) 
                                                                       | (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[10U][1U] 
                                                                          >> 2U)))) 
                                                      << 3U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] = (
                                                   (0x000007fffffffffeULL 
                                                    & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U]) 
                                                   | (IData)((IData)(
                                                                     (1U 
                                                                      & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[10U][2U] 
                                                                         >> 0x0000000aU)))));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] = (
                                                   (0x000007fffffffff9ULL 
                                                    & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U]) 
                                                   | ((QData)((IData)(
                                                                      (3U 
                                                                       & vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[10U][0U]))) 
                                                      << 1U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] = (
                                                   (0x000003ffffffffffULL 
                                                    & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[11U][2U] 
                                                                          >> 0x0000000bU)))) 
                                                      << 0x0000002aU));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] = (
                                                   (0x00000407ffffffffULL 
                                                    & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U]) 
                                                   | ((QData)((IData)(
                                                                      (0x0000007fU 
                                                                       & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[11U][2U] 
                                                                          >> 2U)))) 
                                                      << 0x00000023U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] = (
                                                   (0x000007f800000007ULL 
                                                    & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U]) 
                                                   | ((QData)((IData)(
                                                                      ((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[11U][2U] 
                                                                        << 0x0000001eU) 
                                                                       | (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[11U][1U] 
                                                                          >> 2U)))) 
                                                      << 3U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] = (
                                                   (0x000007fffffffffeULL 
                                                    & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U]) 
                                                   | (IData)((IData)(
                                                                     (1U 
                                                                      & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[11U][2U] 
                                                                         >> 0x0000000aU)))));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] = (
                                                   (0x000007fffffffff9ULL 
                                                    & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U]) 
                                                   | ((QData)((IData)(
                                                                      (3U 
                                                                       & vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[11U][0U]))) 
                                                      << 1U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] = (
                                                   (0x000003ffffffffffULL 
                                                    & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[12U][2U] 
                                                                          >> 0x0000000bU)))) 
                                                      << 0x0000002aU));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] = (
                                                   (0x00000407ffffffffULL 
                                                    & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U]) 
                                                   | ((QData)((IData)(
                                                                      (0x0000007fU 
                                                                       & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[12U][2U] 
                                                                          >> 2U)))) 
                                                      << 0x00000023U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] = (
                                                   (0x000007f800000007ULL 
                                                    & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U]) 
                                                   | ((QData)((IData)(
                                                                      ((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[12U][2U] 
                                                                        << 0x0000001eU) 
                                                                       | (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[12U][1U] 
                                                                          >> 2U)))) 
                                                      << 3U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] = (
                                                   (0x000007fffffffffeULL 
                                                    & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U]) 
                                                   | (IData)((IData)(
                                                                     (1U 
                                                                      & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[12U][2U] 
                                                                         >> 0x0000000aU)))));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] = (
                                                   (0x000007fffffffff9ULL 
                                                    & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U]) 
                                                   | ((QData)((IData)(
                                                                      (3U 
                                                                       & vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[12U][0U]))) 
                                                      << 1U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] = (
                                                   (0x000003ffffffffffULL 
                                                    & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[13U][2U] 
                                                                          >> 0x0000000bU)))) 
                                                      << 0x0000002aU));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] = (
                                                   (0x00000407ffffffffULL 
                                                    & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U]) 
                                                   | ((QData)((IData)(
                                                                      (0x0000007fU 
                                                                       & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[13U][2U] 
                                                                          >> 2U)))) 
                                                      << 0x00000023U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] = (
                                                   (0x000007f800000007ULL 
                                                    & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U]) 
                                                   | ((QData)((IData)(
                                                                      ((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[13U][2U] 
                                                                        << 0x0000001eU) 
                                                                       | (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[13U][1U] 
                                                                          >> 2U)))) 
                                                      << 3U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] = (
                                                   (0x000007fffffffffeULL 
                                                    & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U]) 
                                                   | (IData)((IData)(
                                                                     (1U 
                                                                      & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[13U][2U] 
                                                                         >> 0x0000000aU)))));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] = (
                                                   (0x000007fffffffff9ULL 
                                                    & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U]) 
                                                   | ((QData)((IData)(
                                                                      (3U 
                                                                       & vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[13U][0U]))) 
                                                      << 1U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] = (
                                                   (0x000003ffffffffffULL 
                                                    & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[14U][2U] 
                                                                          >> 0x0000000bU)))) 
                                                      << 0x0000002aU));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] = (
                                                   (0x00000407ffffffffULL 
                                                    & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U]) 
                                                   | ((QData)((IData)(
                                                                      (0x0000007fU 
                                                                       & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[14U][2U] 
                                                                          >> 2U)))) 
                                                      << 0x00000023U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] = (
                                                   (0x000007f800000007ULL 
                                                    & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U]) 
                                                   | ((QData)((IData)(
                                                                      ((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[14U][2U] 
                                                                        << 0x0000001eU) 
                                                                       | (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[14U][1U] 
                                                                          >> 2U)))) 
                                                      << 3U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] = (
                                                   (0x000007fffffffffeULL 
                                                    & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U]) 
                                                   | (IData)((IData)(
                                                                     (1U 
                                                                      & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[14U][2U] 
                                                                         >> 0x0000000aU)))));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] = (
                                                   (0x000007fffffffff9ULL 
                                                    & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U]) 
                                                   | ((QData)((IData)(
                                                                      (3U 
                                                                       & vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[14U][0U]))) 
                                                      << 1U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] = (
                                                   (0x000003ffffffffffULL 
                                                    & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[15U][2U] 
                                                                          >> 0x0000000bU)))) 
                                                      << 0x0000002aU));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] = (
                                                   (0x00000407ffffffffULL 
                                                    & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U]) 
                                                   | ((QData)((IData)(
                                                                      (0x0000007fU 
                                                                       & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[15U][2U] 
                                                                          >> 2U)))) 
                                                      << 0x00000023U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] = (
                                                   (0x000007f800000007ULL 
                                                    & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U]) 
                                                   | ((QData)((IData)(
                                                                      ((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[15U][2U] 
                                                                        << 0x0000001eU) 
                                                                       | (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[15U][1U] 
                                                                          >> 2U)))) 
                                                      << 3U));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] = (
                                                   (0x000007fffffffffeULL 
                                                    & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U]) 
                                                   | (IData)((IData)(
                                                                     (1U 
                                                                      & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[15U][2U] 
                                                                         >> 0x0000000aU)))));
    vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] = (
                                                   (0x000007fffffffff9ULL 
                                                    & vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U]) 
                                                   | ((QData)((IData)(
                                                                      (3U 
                                                                       & vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries[15U][0U]))) 
                                                      << 1U));
    vlSelfRef.core__DOT__lsu__DOT__mem_stall[0U] = 
        ((~ (IData)(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_wr_ack__DOT__ff2)) 
         & vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_pending[0U]);
    vlSelfRef.core__DOT__lsu__DOT__mem_stall[1U] = 
        ((~ (IData)(vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_wr_ack__DOT__ff2)) 
         & vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_pending[1U]);
    vlSelfRef.core__DOT__issue__DOT__pc[0U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_pc;
    vlSelfRef.core__DOT__issue__DOT__pc[1U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_pc;
    vlSelfRef.core__DOT__issue__DOT__alu_rs1_result[0U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__rs1_result;
    vlSelfRef.core__DOT__issue__DOT__alu_rs1_result[1U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__rs1_result;
    vlSelfRef.core__DOT__issue__DOT__alu_imm[0U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__imm;
    vlSelfRef.core__DOT__issue__DOT__alu_imm[1U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__imm;
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__mul_ready[0U] 
        = (1U & (~ vlSelfRef.core__DOT__mul_div_buffer_busy[0U]));
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_ready_mul[1U] 
        = (1U & (~ vlSelfRef.core__DOT__mul_div_buffer_busy[0U]));
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__lsu_ready[0U] 
        = (1U & (~ (vlSelfRef.core__DOT__lsu_buffer_busy[0U] 
                    | (0x0fU == (IData)(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__count)))));
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_ready_lsu[1U] 
        = (1U & (~ (vlSelfRef.core__DOT__lsu_buffer_busy[0U] 
                    | (0x0fU == (IData)(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__count)))));
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_ready[0U] 
        = (1U & (~ vlSelfRef.core__DOT__alu_buffer_busy[0U]));
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_ready[1U] 
        = (1U & (~ vlSelfRef.core__DOT__alu_buffer_busy[1U]));
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu[1U] 
        = (1U & (~ vlSelfRef.core__DOT__alu_buffer_busy[0U]));
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu[2U] 
        = (3U & ((1U & (~ vlSelfRef.core__DOT__alu_buffer_busy[0U])) 
                 + (1U & (~ vlSelfRef.core__DOT__alu_buffer_busy[1U]))));
    vlSelfRef.core__DOT__rename__DOT__chkpt_need = 0U;
    if ((0x00000020U & vlSelfRef.core__DOT__decode_instr[0U][3U])) {
        vlSelfRef.core__DOT__rename__DOT__chkpt_need 
            = ((IData)(vlSelfRef.core__DOT__rename__DOT__chkpt_need) 
               | ((0U != (0x0000000fU & (vlSelfRef.core__DOT__decode_instr[0U][0U] 
                                         >> 2U))) | 
                  (2U == (3U & (vlSelfRef.core__DOT__decode_instr[0U][0U] 
                                >> 6U)))));
    }
    if ((0x00000020U & vlSelfRef.core__DOT__decode_instr[1U][3U])) {
        vlSelfRef.core__DOT__rename__DOT__chkpt_need 
            = ((IData)(vlSelfRef.core__DOT__rename__DOT__chkpt_need) 
               | ((0U != (0x0000000fU & (vlSelfRef.core__DOT__decode_instr[1U][0U] 
                                         >> 2U))) | 
                  (2U == (3U & (vlSelfRef.core__DOT__decode_instr[1U][0U] 
                                >> 6U)))));
    }
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count 
        = vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[0U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count 
        = (0x0000001fU & ((IData)(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count) 
                          + vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[1U]));
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count 
        = (0x0000001fU & ((IData)(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count) 
                          + vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[2U]));
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count 
        = (0x0000001fU & ((IData)(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count) 
                          + vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[3U]));
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count 
        = (0x0000001fU & ((IData)(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count) 
                          + vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[4U]));
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count 
        = (0x0000001fU & ((IData)(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count) 
                          + vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[5U]));
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count 
        = (0x0000001fU & ((IData)(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count) 
                          + vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[6U]));
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count 
        = (0x0000001fU & ((IData)(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count) 
                          + vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[7U]));
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count 
        = (0x0000001fU & ((IData)(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count) 
                          + vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[8U]));
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count 
        = (0x0000001fU & ((IData)(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count) 
                          + vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[9U]));
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count 
        = (0x0000001fU & ((IData)(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count) 
                          + vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[10U]));
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count 
        = (0x0000001fU & ((IData)(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count) 
                          + vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[11U]));
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count 
        = (0x0000001fU & ((IData)(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count) 
                          + vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[12U]));
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count 
        = (0x0000001fU & ((IData)(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count) 
                          + vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[13U]));
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count 
        = (0x0000001fU & ((IData)(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count) 
                          + vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[14U]));
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count 
        = (0x0000001fU & ((IData)(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count) 
                          + vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__valid[15U]));
    vlSelfRef.core__DOT__rename_rob[0U] = ((0x0003ffffU 
                                            & vlSelfRef.core__DOT__rename_rob[0U]) 
                                           | (0x00040000U 
                                              & (vlSelfRef.core__DOT__rename_instr[0U][3U] 
                                                 << 0x0000000aU)));
    vlSelfRef.core__DOT__rename_rob[0U] = ((0x000407ffU 
                                            & vlSelfRef.core__DOT__rename_rob[0U]) 
                                           | (0x0003f800U 
                                              & (vlSelfRef.core__DOT__rename_instr[0U][3U] 
                                                 << 0x0000000aU)));
    vlSelfRef.core__DOT__rename_rob[0U] = ((0x0007f83fU 
                                            & vlSelfRef.core__DOT__rename_rob[0U]) 
                                           | (vlSelfRef.core__DOT__rename_rob_rd[0U] 
                                              << 6U));
    vlSelfRef.core__DOT__rename_rob[0U] = ((0x0007ffc0U 
                                            & vlSelfRef.core__DOT__rename_rob[0U]) 
                                           | (0x0000003fU 
                                              & (vlSelfRef.core__DOT__rename_instr[0U][1U] 
                                                 >> 9U)));
    vlSelfRef.core__DOT__rename_rob[1U] = ((0x0003ffffU 
                                            & vlSelfRef.core__DOT__rename_rob[1U]) 
                                           | (0x00040000U 
                                              & (vlSelfRef.core__DOT__rename_instr[1U][3U] 
                                                 << 0x0000000aU)));
    vlSelfRef.core__DOT__rename_rob[1U] = ((0x000407ffU 
                                            & vlSelfRef.core__DOT__rename_rob[1U]) 
                                           | (0x0003f800U 
                                              & (vlSelfRef.core__DOT__rename_instr[1U][3U] 
                                                 << 0x0000000aU)));
    vlSelfRef.core__DOT__rename_rob[1U] = ((0x0007f83fU 
                                            & vlSelfRef.core__DOT__rename_rob[1U]) 
                                           | (vlSelfRef.core__DOT__rename_rob_rd[1U] 
                                              << 6U));
    vlSelfRef.core__DOT__rename_rob[1U] = ((0x0007ffc0U 
                                            & vlSelfRef.core__DOT__rename_rob[1U]) 
                                           | (0x0000003fU 
                                              & (vlSelfRef.core__DOT__rename_instr[1U][1U] 
                                                 >> 9U)));
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____VdfgRegularize_hed6a1df6_0_16 
        = (1U & ((~ vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__dispatched[1U]) 
                 & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[1U][3U] 
                    >> 8U)));
    vlSelfRef.core__DOT__rename__DOT__req_valid = (
                                                   (2U 
                                                    & (IData)(vlSelfRef.core__DOT__rename__DOT__req_valid)) 
                                                   | ((vlSelfRef.core__DOT__decode_instr[0U][3U] 
                                                       >> 5U) 
                                                      & (0U 
                                                         != 
                                                         (0x0000001fU 
                                                          & (vlSelfRef.core__DOT__decode_instr[0U][1U] 
                                                             >> 9U)))));
    vlSelfRef.core__DOT__rename__DOT__req_valid = (
                                                   (1U 
                                                    & (IData)(vlSelfRef.core__DOT__rename__DOT__req_valid)) 
                                                   | (0x0ffffffeU 
                                                      & ((vlSelfRef.core__DOT__decode_instr[1U][3U] 
                                                          >> 4U) 
                                                         & ((0U 
                                                             != 
                                                             (0x0000001fU 
                                                              & (vlSelfRef.core__DOT__decode_instr[1U][1U] 
                                                                 >> 9U))) 
                                                            << 1U))));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0xfffffffffffffffcULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | (IData)((IData)(
                                                               (2U 
                                                                & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[1U] 
                                                                   << 1U)))));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0xfffffffffffffff3ULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | ((QData)((IData)(
                                                                ((2U 
                                                                  & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[3U] 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSelfRef.core__DOT__rename__DOT__tag_buffer[2U])))) 
                                                << 2U));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0xffffffffffffffcfULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | ((QData)((IData)(
                                                                ((2U 
                                                                  & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[5U] 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSelfRef.core__DOT__rename__DOT__tag_buffer[4U])))) 
                                                << 4U));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0xffffffffffffff3fULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | ((QData)((IData)(
                                                                ((2U 
                                                                  & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[7U] 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSelfRef.core__DOT__rename__DOT__tag_buffer[6U])))) 
                                                << 6U));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0xfffffffffffffcffULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | ((QData)((IData)(
                                                                ((2U 
                                                                  & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[9U] 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSelfRef.core__DOT__rename__DOT__tag_buffer[8U])))) 
                                                << 8U));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0xfffffffffffff3ffULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | ((QData)((IData)(
                                                                ((2U 
                                                                  & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[11U] 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSelfRef.core__DOT__rename__DOT__tag_buffer[10U])))) 
                                                << 0x0000000aU));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0xffffffffffffcfffULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | ((QData)((IData)(
                                                                ((2U 
                                                                  & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[13U] 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSelfRef.core__DOT__rename__DOT__tag_buffer[12U])))) 
                                                << 0x0000000cU));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0xffffffffffff3fffULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | ((QData)((IData)(
                                                                ((2U 
                                                                  & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[15U] 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSelfRef.core__DOT__rename__DOT__tag_buffer[14U])))) 
                                                << 0x0000000eU));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0xfffffffffffcffffULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | ((QData)((IData)(
                                                                ((2U 
                                                                  & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[17U] 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSelfRef.core__DOT__rename__DOT__tag_buffer[16U])))) 
                                                << 0x00000010U));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0xfffffffffff3ffffULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | ((QData)((IData)(
                                                                ((2U 
                                                                  & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[19U] 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSelfRef.core__DOT__rename__DOT__tag_buffer[18U])))) 
                                                << 0x00000012U));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0xffffffffffcfffffULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | ((QData)((IData)(
                                                                ((2U 
                                                                  & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[21U] 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSelfRef.core__DOT__rename__DOT__tag_buffer[20U])))) 
                                                << 0x00000014U));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0xffffffffff3fffffULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | ((QData)((IData)(
                                                                ((2U 
                                                                  & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[23U] 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSelfRef.core__DOT__rename__DOT__tag_buffer[22U])))) 
                                                << 0x00000016U));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0xfffffffffcffffffULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | ((QData)((IData)(
                                                                ((2U 
                                                                  & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[25U] 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSelfRef.core__DOT__rename__DOT__tag_buffer[24U])))) 
                                                << 0x00000018U));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0xfffffffff3ffffffULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | ((QData)((IData)(
                                                                ((2U 
                                                                  & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[27U] 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSelfRef.core__DOT__rename__DOT__tag_buffer[26U])))) 
                                                << 0x0000001aU));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0xffffffffcfffffffULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | ((QData)((IData)(
                                                                ((2U 
                                                                  & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[29U] 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSelfRef.core__DOT__rename__DOT__tag_buffer[28U])))) 
                                                << 0x0000001cU));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0xffffffff3fffffffULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | ((QData)((IData)(
                                                                ((2U 
                                                                  & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[31U] 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSelfRef.core__DOT__rename__DOT__tag_buffer[30U])))) 
                                                << 0x0000001eU));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0xfffffffcffffffffULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | ((QData)((IData)(
                                                                ((2U 
                                                                  & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[33U] 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSelfRef.core__DOT__rename__DOT__tag_buffer[32U])))) 
                                                << 0x00000020U));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0xfffffff3ffffffffULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | ((QData)((IData)(
                                                                ((2U 
                                                                  & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[35U] 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSelfRef.core__DOT__rename__DOT__tag_buffer[34U])))) 
                                                << 0x00000022U));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0xffffffcfffffffffULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | ((QData)((IData)(
                                                                ((2U 
                                                                  & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[37U] 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSelfRef.core__DOT__rename__DOT__tag_buffer[36U])))) 
                                                << 0x00000024U));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0xffffff3fffffffffULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | ((QData)((IData)(
                                                                ((2U 
                                                                  & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[39U] 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSelfRef.core__DOT__rename__DOT__tag_buffer[38U])))) 
                                                << 0x00000026U));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0xfffffcffffffffffULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | ((QData)((IData)(
                                                                ((2U 
                                                                  & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[41U] 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSelfRef.core__DOT__rename__DOT__tag_buffer[40U])))) 
                                                << 0x00000028U));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0xfffff3ffffffffffULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | ((QData)((IData)(
                                                                ((2U 
                                                                  & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[43U] 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSelfRef.core__DOT__rename__DOT__tag_buffer[42U])))) 
                                                << 0x0000002aU));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0xffffcfffffffffffULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | ((QData)((IData)(
                                                                ((2U 
                                                                  & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[45U] 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSelfRef.core__DOT__rename__DOT__tag_buffer[44U])))) 
                                                << 0x0000002cU));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0xffff3fffffffffffULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | ((QData)((IData)(
                                                                ((2U 
                                                                  & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[47U] 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSelfRef.core__DOT__rename__DOT__tag_buffer[46U])))) 
                                                << 0x0000002eU));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0xfffcffffffffffffULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | ((QData)((IData)(
                                                                ((2U 
                                                                  & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[49U] 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSelfRef.core__DOT__rename__DOT__tag_buffer[48U])))) 
                                                << 0x00000030U));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0xfff3ffffffffffffULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | ((QData)((IData)(
                                                                ((2U 
                                                                  & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[51U] 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSelfRef.core__DOT__rename__DOT__tag_buffer[50U])))) 
                                                << 0x00000032U));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0xffcfffffffffffffULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | ((QData)((IData)(
                                                                ((2U 
                                                                  & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[53U] 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSelfRef.core__DOT__rename__DOT__tag_buffer[52U])))) 
                                                << 0x00000034U));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0xff3fffffffffffffULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | ((QData)((IData)(
                                                                ((2U 
                                                                  & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[55U] 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSelfRef.core__DOT__rename__DOT__tag_buffer[54U])))) 
                                                << 0x00000036U));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0xfcffffffffffffffULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | ((QData)((IData)(
                                                                ((2U 
                                                                  & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[57U] 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSelfRef.core__DOT__rename__DOT__tag_buffer[56U])))) 
                                                << 0x00000038U));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0xf3ffffffffffffffULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | ((QData)((IData)(
                                                                ((2U 
                                                                  & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[59U] 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSelfRef.core__DOT__rename__DOT__tag_buffer[58U])))) 
                                                << 0x0000003aU));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0xcfffffffffffffffULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | ((QData)((IData)(
                                                                ((2U 
                                                                  & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[61U] 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSelfRef.core__DOT__rename__DOT__tag_buffer[60U])))) 
                                                << 0x0000003cU));
    vlSelfRef.core__DOT__rename__DOT__ftb = ((0x3fffffffffffffffULL 
                                              & vlSelfRef.core__DOT__rename__DOT__ftb) 
                                             | ((QData)((IData)(
                                                                ((2U 
                                                                  & (vlSelfRef.core__DOT__rename__DOT__tag_buffer[63U] 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & vlSelfRef.core__DOT__rename__DOT__tag_buffer[62U])))) 
                                                << 0x0000003eU));
    vlSelfRef.core__DOT__jump_type[0U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_jump_type;
    vlSelfRef.core__DOT__jump_type[1U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_jump_type;
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____VdfgRegularize_hed6a1df6_0_17 
        = (1U & ((~ vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__dispatched[0U]) 
                 & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[0U][3U] 
                    >> 8U)));
    vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__check_ready[0U] 
        = (0x0000003fU & (vlSelfRef.core__DOT__mul_div_dispatch_instr[0U] 
                          >> 0x0000000cU));
    vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__check_ready[1U] 
        = (0x0000003fU & (vlSelfRef.core__DOT__mul_div_dispatch_instr[0U] 
                          >> 6U));
    vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__check_ready[0U] 
        = (0x0000003fU & (IData)((vlSelfRef.core__DOT__lsu_dispatch_instr[0U] 
                                  >> 0x0000002dU)));
    vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__check_ready[1U] 
        = (0x0000003fU & (IData)((vlSelfRef.core__DOT__lsu_dispatch_instr[0U] 
                                  >> 0x00000027U)));
    vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__check_ready[0U] 
        = (0x0000003fU & (vlSelfRef.core__DOT__alu_dispatch_instr[0U][1U] 
                          >> 0x00000015U));
    vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__check_ready[1U] 
        = (0x0000003fU & (vlSelfRef.core__DOT__alu_dispatch_instr[0U][1U] 
                          >> 0x0000000fU));
    vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__check_ready[0U] 
        = (0x0000003fU & (vlSelfRef.core__DOT__alu_dispatch_instr[1U][1U] 
                          >> 0x00000015U));
    vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__check_ready[1U] 
        = (0x0000003fU & (vlSelfRef.core__DOT__alu_dispatch_instr[1U][1U] 
                          >> 0x0000000fU));
    vlSelfRef.core__DOT__int_issue_instr[0U][0U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U];
    vlSelfRef.core__DOT__int_issue_instr[0U][1U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U];
    vlSelfRef.core__DOT__int_issue_instr[0U][2U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U];
    vlSelfRef.core__DOT__int_issue_instr[1U][0U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U];
    vlSelfRef.core__DOT__int_issue_instr[1U][1U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U];
    vlSelfRef.core__DOT__int_issue_instr[1U][2U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U];
    vlSelfRef.core__DOT__int_issue_instr[2U][0U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr[0U];
    vlSelfRef.core__DOT__int_issue_instr[2U][1U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr[1U];
    vlSelfRef.core__DOT__int_issue_instr[2U][2U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr[2U];
    if ((1U & ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                >> 0x00000012U) & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 0U;
    }
    if ((1U & ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                >> 0x00000012U) & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 0x0fU;
    }
    if ((1U & ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                >> 0x00000012U) & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 0x0eU;
    }
    if ((1U & ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                >> 0x00000012U) & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 0x0dU;
    }
    if ((1U & ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                >> 0x00000012U) & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 0x0cU;
    }
    if ((1U & ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                >> 0x00000012U) & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 0x0bU;
    }
    if ((1U & ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                >> 0x00000012U) & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 0x0aU;
    }
    if ((1U & ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                >> 0x00000012U) & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 9U;
    }
    if ((1U & ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                >> 0x00000012U) & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 8U;
    }
    if ((1U & ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                >> 0x00000012U) & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 7U;
    }
    if ((1U & ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                >> 0x00000012U) & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 6U;
    }
    if ((1U & ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                >> 0x00000012U) & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 5U;
    }
    if ((1U & ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                >> 0x00000012U) & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 4U;
    }
    if ((1U & ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                >> 0x00000012U) & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 3U;
    }
    if ((1U & ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                >> 0x00000012U) & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 2U;
    }
    if ((1U & ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                >> 0x00000012U) & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 1U;
    }
    if ((1U & ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                >> 0x00000012U) & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 0U;
    }
    if ((1U & ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries
                [vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx][2U] 
                >> 0x00000012U) & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries
               [vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx][0U]))) {
        vlSelfRef.core__DOT____Vcellout__lsu__OUT_cdb 
            = ((0x0000003fffffffffULL & vlSelfRef.core__DOT____Vcellout__lsu__OUT_cdb) 
               | ((QData)((IData)((0x00000080U | (0x0000007fU 
                                                  & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                     [vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx][2U] 
                                                     >> 0x0000000bU))))) 
                  << 0x00000026U));
        vlSelfRef.core__DOT____Vcellout__lsu__OUT_cdb 
            = ((0x00003fc000000000ULL & vlSelfRef.core__DOT____Vcellout__lsu__OUT_cdb) 
               | (((QData)((IData)((0x0000003fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                   [vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx][2U] 
                                                   >> 5U)))) 
                   << 0x00000020U) | (QData)((IData)(
                                                     ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                       [vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx][1U] 
                                                       << 0x0000001fU) 
                                                      | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                         [vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx][0U] 
                                                         >> 1U))))));
    } else {
        vlSelfRef.core__DOT____Vcellout__lsu__OUT_cdb 
            = (0x00001fffffffffffULL & vlSelfRef.core__DOT____Vcellout__lsu__OUT_cdb);
    }
    vlSelfRef.core__DOT__lsu__DOT__stb_alloc = ((((IData)(
                                                          (vlSelfRef.core__DOT__lsu_dispatch_instr[0U] 
                                                           >> 0x0000003eU)) 
                                                  & (IData)(vlSelfRef.core__DOT__lsu__DOT__is_store)) 
                                                 << 7U) 
                                                | (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu_dispatch_instr[0U] 
                                                              >> 0x00000037U))));
    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__alloc 
        = ((((IData)((vlSelfRef.core__DOT__lsu_dispatch_instr[0U] 
                      >> 0x0000003eU)) & (IData)(vlSelfRef.core__DOT__lsu__DOT__is_load)) 
            << 0x0000000dU) | ((0x00001fc0U & ((IData)(
                                                       (vlSelfRef.core__DOT__lsu_dispatch_instr[0U] 
                                                        >> 0x00000037U)) 
                                               << 6U)) 
                               | (0x0000003fU & (IData)(
                                                        (vlSelfRef.core__DOT__lsu_dispatch_instr[0U] 
                                                         >> 0x00000021U)))));
    if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
          >> 0x00000012U) & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                             >> 0x0000000bU)) 
                             == (0x0000007fU & (IData)(
                                                       (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__addr_wb 
                                                        >> 0x00000023U)))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 0U;
    }
    if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
          >> 0x00000012U) & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                             >> 0x0000000bU)) 
                             == (0x0000007fU & (IData)(
                                                       (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__addr_wb 
                                                        >> 0x00000023U)))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 1U;
    }
    if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
          >> 0x00000012U) & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                             >> 0x0000000bU)) 
                             == (0x0000007fU & (IData)(
                                                       (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__addr_wb 
                                                        >> 0x00000023U)))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 2U;
    }
    if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
          >> 0x00000012U) & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                             >> 0x0000000bU)) 
                             == (0x0000007fU & (IData)(
                                                       (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__addr_wb 
                                                        >> 0x00000023U)))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 3U;
    }
    if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
          >> 0x00000012U) & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                             >> 0x0000000bU)) 
                             == (0x0000007fU & (IData)(
                                                       (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__addr_wb 
                                                        >> 0x00000023U)))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 4U;
    }
    if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
          >> 0x00000012U) & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                             >> 0x0000000bU)) 
                             == (0x0000007fU & (IData)(
                                                       (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__addr_wb 
                                                        >> 0x00000023U)))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 5U;
    }
    if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
          >> 0x00000012U) & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                             >> 0x0000000bU)) 
                             == (0x0000007fU & (IData)(
                                                       (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__addr_wb 
                                                        >> 0x00000023U)))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 6U;
    }
    if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
          >> 0x00000012U) & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                             >> 0x0000000bU)) 
                             == (0x0000007fU & (IData)(
                                                       (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__addr_wb 
                                                        >> 0x00000023U)))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 7U;
    }
    if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
          >> 0x00000012U) & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                             >> 0x0000000bU)) 
                             == (0x0000007fU & (IData)(
                                                       (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__addr_wb 
                                                        >> 0x00000023U)))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 8U;
    }
    if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
          >> 0x00000012U) & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                             >> 0x0000000bU)) 
                             == (0x0000007fU & (IData)(
                                                       (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__addr_wb 
                                                        >> 0x00000023U)))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 9U;
    }
    if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
          >> 0x00000012U) & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                             >> 0x0000000bU)) 
                             == (0x0000007fU & (IData)(
                                                       (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__addr_wb 
                                                        >> 0x00000023U)))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 0x0aU;
    }
    if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
          >> 0x00000012U) & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                             >> 0x0000000bU)) 
                             == (0x0000007fU & (IData)(
                                                       (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__addr_wb 
                                                        >> 0x00000023U)))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 0x0bU;
    }
    if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
          >> 0x00000012U) & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                             >> 0x0000000bU)) 
                             == (0x0000007fU & (IData)(
                                                       (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__addr_wb 
                                                        >> 0x00000023U)))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 0x0cU;
    }
    if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
          >> 0x00000012U) & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                             >> 0x0000000bU)) 
                             == (0x0000007fU & (IData)(
                                                       (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__addr_wb 
                                                        >> 0x00000023U)))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 0x0dU;
    }
    if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
          >> 0x00000012U) & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                             >> 0x0000000bU)) 
                             == (0x0000007fU & (IData)(
                                                       (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__addr_wb 
                                                        >> 0x00000023U)))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 0x0eU;
    }
    if (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
          >> 0x00000012U) & ((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                             >> 0x0000000bU)) 
                             == (0x0000007fU & (IData)(
                                                       (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__addr_wb 
                                                        >> 0x00000023U)))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 0x0fU;
    }
    vlSelfRef.core__DOT__execute__DOT__next_agu_out[0U][0U] 
        = ((0xffffffe0U & vlSelfRef.core__DOT__execute__DOT__next_agu_out[0U][0U]) 
           | ((((IData)(vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__is_store)
                 ? 0U : 1U) << 3U) | (((IData)(vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__data_size) 
                                       << 1U) | (IData)(vlSelfRef.core__DOT__execute__DOT__genblk3__BRA__0__KET____DOT__AGU_i__DOT__is_unsigned))));
    vlSelfRef.core__DOT__execute__DOT__next_agu_out[0U][0U] 
        = ((0x0000001fU & vlSelfRef.core__DOT__execute__DOT__next_agu_out[0U][0U]) 
           | (0xffffffe0U & ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U] 
                              << 0x0000001bU) | (0x07ffffe0U 
                                                 & (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U] 
                                                    >> 5U)))));
    vlSelfRef.core__DOT__execute__DOT__next_agu_out[0U][1U] 
        = ((0xffffffe0U & vlSelfRef.core__DOT__execute__DOT__next_agu_out[0U][1U]) 
           | (0x0000001fU & (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U] 
                             >> 5U)));
    vlSelfRef.core__DOT__execute__DOT__next_agu_out[0U][1U] 
        = ((0x0000001fU & vlSelfRef.core__DOT__execute__DOT__next_agu_out[0U][1U]) 
           | ((((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U] 
                 << 0x00000016U) | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                                    >> 0x0000000aU)) 
               + ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                   << 0x00000016U) | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U] 
                                      >> 0x0000000aU))) 
              << 5U));
    vlSelfRef.core__DOT__execute__DOT__next_agu_out[0U][2U] 
        = ((0x00001fe0U & vlSelfRef.core__DOT__execute__DOT__next_agu_out[0U][2U]) 
           | (0x00001fffU & ((((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U] 
                                << 0x00000016U) | (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                                                   >> 0x0000000aU)) 
                              + ((vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                                  << 0x00000016U) | 
                                 (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U] 
                                  >> 0x0000000aU))) 
                             >> 0x0000001bU)));
    vlSelfRef.core__DOT__execute__DOT__next_agu_out[0U][2U] 
        = ((0x0000001fU & vlSelfRef.core__DOT__execute__DOT__next_agu_out[0U][2U]) 
           | (0x00001fe0U & (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U] 
                             >> 5U)));
    vlSelfRef.core__DOT__execute__DOT__int_fu_out[0U] 
        = (((QData)((IData)((0x000000ffU & (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                                            >> 0x0000000aU)))) 
            << 0x00000026U) | (((QData)((IData)((0x0000003fU 
                                                 & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U]))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.core__DOT__execute__DOT__genblk1__BRA__0__KET____DOT__ALU_i__DOT__alu_result))));
    vlSelfRef.core__DOT__execute__DOT__int_fu_out[1U] 
        = (((QData)((IData)((0x000000ffU & (vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                                            >> 0x0000000aU)))) 
            << 0x00000026U) | (((QData)((IData)((0x0000003fU 
                                                 & vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U]))) 
                                << 0x00000020U) | (QData)((IData)(vlSelfRef.core__DOT__execute__DOT__genblk1__BRA__1__KET____DOT__ALU_i__DOT__alu_result))));
    vlSelfRef.core__DOT__dispatch__DOT__commit_sqN[0U] 
        = vlSelfRef.core__DOT__commit_sqN[0U];
    vlSelfRef.core__DOT__dispatch__DOT__commit_sqN[1U] 
        = vlSelfRef.core__DOT__commit_sqN[1U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__commit_sqN[0U] 
        = vlSelfRef.core__DOT__commit_sqN[0U];
    vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__commit_sqN[1U] 
        = vlSelfRef.core__DOT__commit_sqN[1U];
    vlSelfRef.core__DOT__lsu__DOT__commit_sqN[0U] = vlSelfRef.core__DOT__commit_sqN[0U];
    vlSelfRef.core__DOT__lsu__DOT__commit_sqN[1U] = vlSelfRef.core__DOT__commit_sqN[1U];
    vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__commit_sqN[0U] 
        = vlSelfRef.core__DOT__commit_sqN[0U];
    vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__commit_sqN[1U] 
        = vlSelfRef.core__DOT__commit_sqN[1U];
    vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[0U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U];
    vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[1U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U];
    vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[2U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U];
    vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[3U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U];
    vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[4U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U];
    vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[5U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U];
    vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[6U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U];
    vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[7U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U];
    vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[8U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U];
    vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[9U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U];
    vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[10U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U];
    vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[11U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U];
    vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[12U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U];
    vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[13U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U];
    vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[14U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U];
    vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__fwd[15U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U];
    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[0U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U];
    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[1U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U];
    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[2U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U];
    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[3U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U];
    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[4U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U];
    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[5U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U];
    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[6U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U];
    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[7U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U];
    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[8U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U];
    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[9U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U];
    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[10U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U];
    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[11U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U];
    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[12U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U];
    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[13U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U];
    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[14U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U];
    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stb_fwd[15U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U];
    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall = 0U;
    if ((0x00040000U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U])) {
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
    }
    if ((0x00040000U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U])) {
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
    }
    if ((0x00040000U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U])) {
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
    }
    if ((0x00040000U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U])) {
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
    }
    if ((0x00040000U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U])) {
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
    }
    if ((0x00040000U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U])) {
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
    }
    if ((0x00040000U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U])) {
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
    }
    if ((0x00040000U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U])) {
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
    }
    if ((0x00040000U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U])) {
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                                                >> 3U)))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    }
                } else {
                    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                }
            } else {
                vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                    = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
            }
        }
    }
}
