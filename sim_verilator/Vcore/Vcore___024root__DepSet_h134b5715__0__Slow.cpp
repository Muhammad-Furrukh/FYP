// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"
#include "Vcore___024root.h"

VL_ATTR_COLD void Vcore___024root___eval_static(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vcore___024root___eval_initial__TOP(Vcore___024root* vlSelf);

VL_ATTR_COLD void Vcore___024root___eval_initial(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_initial\n"); );
    // Body
    Vcore___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[0xaU] = 1U;
    vlSelf->__Vm_traceActivity[9U] = 1U;
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__flush__0 
        = vlSelf->core__DOT__flush;
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_alu__0 
        = vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_alu;
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu__0 
        = vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu;
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_mul__0 
        = vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_mul;
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_ready_mul__0 
        = vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_mul;
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_lsu__0 
        = vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_lsu;
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_ready_lsu__0 
        = vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_lsu;
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__rename__DOT__masked__0 
        = vlSelf->core__DOT__rename__DOT__masked;
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__flush__1 
        = vlSelf->core__DOT__flush;
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_alu__1 
        = vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_alu;
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu__1 
        = vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu;
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_mul__1 
        = vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_mul;
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_ready_mul__1 
        = vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_mul;
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_lsu__1 
        = vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_lsu;
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_ready_lsu__1 
        = vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_lsu;
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__rename__DOT__masked__1 
        = vlSelf->core__DOT__rename__DOT__masked;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = vlSelf->rst;
    vlSelf->__Vtrigprevexpr___TOP__clk_m__0 = vlSelf->clk_m;
    vlSelf->__Vtrigprevexpr___TOP__rst_m__0 = vlSelf->rst_m;
}

VL_ATTR_COLD void Vcore___024root___eval_initial__TOP(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_initial__TOP\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->core__DOT__register_file__DOT__i = 4U;
    vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_alu[0U] = 0U;
    vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu[0U] = 0U;
    vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_mul[0U] = 0U;
    vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_mul[0U] = 0U;
    vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_lsu[0U] = 0U;
    vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_lsu[0U] = 0U;
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->core__DOT__prefetch__DOT__IMEM__DOT__mem[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->core__DOT__prefetch__DOT__IMEM__DOT__unnamedblk1__DOT__i = 0x40U;
    VL_READMEM_N(true, 32, 64, 0, std::string{"imem.hex"}
                 ,  &(vlSelf->core__DOT__prefetch__DOT__IMEM__DOT__mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vcore___024root___eval_final(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__stl(Vcore___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcore___024root___eval_phase__stl(Vcore___024root* vlSelf);

VL_ATTR_COLD void Vcore___024root___eval_settle(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_settle\n"); );
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
            Vcore___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("rtl/core.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcore___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__stl(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] core.flush)\n");
    }
    if ((4ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] core.dispatch.DU.prefix_alu)\n");
    }
    if ((8ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 3 is active: @([hybrid] core.dispatch.DU.prefix_ready_alu)\n");
    }
    if ((0x10ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 4 is active: @([hybrid] core.dispatch.DU.prefix_mul)\n");
    }
    if ((0x20ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 5 is active: @([hybrid] core.dispatch.DU.prefix_ready_mul)\n");
    }
    if ((0x40ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 6 is active: @([hybrid] core.dispatch.DU.prefix_lsu)\n");
    }
    if ((0x80ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 7 is active: @([hybrid] core.dispatch.DU.prefix_ready_lsu)\n");
    }
    if ((0x100ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 8 is active: @([hybrid] core.rename.masked)\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*2:0*/, 256> Vcore__ConstPool__TABLE_h571c794b_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vcore__ConstPool__TABLE_hf049cce3_0;
extern const VlUnpacked<IData/*31:0*/, 256> Vcore__ConstPool__TABLE_h159da5ed_0;

VL_ATTR_COLD void Vcore___024root___stl_sequent__TOP__0(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ core__DOT____Vlvbound_h5ca31882__0;
    core__DOT____Vlvbound_h5ca31882__0 = 0;
    IData/*31:0*/ __Vilp;
    CData/*0:0*/ core__DOT__dispatch__DOT__DU__DOT____VdfgTmp_hfe8e9762__0;
    core__DOT__dispatch__DOT__DU__DOT____VdfgTmp_hfe8e9762__0 = 0;
    CData/*0:0*/ core__DOT__dispatch__DOT__DU__DOT____VdfgTmp_hfe220149__0;
    core__DOT__dispatch__DOT__DU__DOT____VdfgTmp_hfe220149__0 = 0;
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*7:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    VlWide<3>/*95:0*/ __Vtemp_22;
    // Body
    vlSelf->core__DOT__commit_sqN[0U] = (0x7fU & (vlSelf->core__DOT__commit_packet
                                                  [0U] 
                                                  >> 0xbU));
    vlSelf->core__DOT__commit_sqN[1U] = (0x7fU & (vlSelf->core__DOT__commit_packet
                                                  [1U] 
                                                  >> 0xbU));
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
         [0U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
         [1U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
         [2U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
         [3U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
         [4U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
         [5U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
         [6U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
         [0U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
         [1U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
         [2U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
         [3U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
         [4U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
         [5U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
         [6U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
    if ((vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
         [0U] >> 0x1fU)) {
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
    if ((vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
         [1U] >> 0x1fU)) {
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
    if ((vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
         [2U] >> 0x1fU)) {
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
    if ((vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
         [3U] >> 0x1fU)) {
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
    if ((vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
         [4U] >> 0x1fU)) {
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
    if ((vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
         [5U] >> 0x1fU)) {
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
    if ((vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
         [6U] >> 0x1fU)) {
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
    if ((1U & vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
         [0U][2U])) {
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
    if ((1U & vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
         [1U][2U])) {
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
    if ((1U & vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
         [2U][2U])) {
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
    if ((1U & vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
         [3U][2U])) {
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
    if ((1U & vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
         [4U][2U])) {
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
    if ((1U & vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
         [5U][2U])) {
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
    if ((1U & vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
         [6U][2U])) {
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
    vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_op1_s 
        = (((QData)((IData)((1U & (vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[2U] 
                                   >> 9U)))) << 0x20U) 
           | (QData)((IData)(((vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[2U] 
                               << 0x16U) | (vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r[1U] 
                                            >> 0xaU)))));
    vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__is_load = 0U;
    if ((1U & (~ (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                  [0xfU][2U] >> 0x12U)))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 0xfU;
    }
    if ((1U & (~ (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                  [0xeU][2U] >> 0x12U)))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 0xeU;
    }
    if ((1U & (~ (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                  [0xdU][2U] >> 0x12U)))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 0xdU;
    }
    if ((1U & (~ (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                  [0xcU][2U] >> 0x12U)))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 0xcU;
    }
    if ((1U & (~ (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                  [0xbU][2U] >> 0x12U)))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 0xbU;
    }
    if ((1U & (~ (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                  [0xaU][2U] >> 0x12U)))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 0xaU;
    }
    if ((1U & (~ (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                  [9U][2U] >> 0x12U)))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 9U;
    }
    if ((1U & (~ (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                  [8U][2U] >> 0x12U)))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 8U;
    }
    if ((1U & (~ (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                  [7U][2U] >> 0x12U)))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 7U;
    }
    if ((1U & (~ (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                  [6U][2U] >> 0x12U)))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 6U;
    }
    if ((1U & (~ (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                  [5U][2U] >> 0x12U)))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 5U;
    }
    if ((1U & (~ (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                  [4U][2U] >> 0x12U)))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 4U;
    }
    if ((1U & (~ (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                  [3U][2U] >> 0x12U)))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 3U;
    }
    if ((1U & (~ (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                  [2U][2U] >> 0x12U)))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 2U;
    }
    if ((1U & (~ (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                  [1U][2U] >> 0x12U)))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 1U;
    }
    if ((1U & (~ (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                  [0U][2U] >> 0x12U)))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = 0U;
    }
    vlSelf->core__DOT__ROB__DOT__dataout_valid = ((2U 
                                                   & (vlSelf->core__DOT__commit_packet
                                                      [1U] 
                                                      >> 0x11U)) 
                                                  | (1U 
                                                     & (vlSelf->core__DOT__commit_packet
                                                        [0U] 
                                                        >> 0x12U)));
    vlSelf->core__DOT__ROB__DOT__alloc_index[0U] = vlSelf->core__DOT__ROB__DOT__tail;
    vlSelf->core__DOT__ROB__DOT__alloc_index[1U] = 
        (0x3fU & ((IData)(1U) + (IData)(vlSelf->core__DOT__ROB__DOT__tail)));
    vlSelf->core__DOT__lsu__DOT__str_busy = (0xfU == (IData)(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__count));
    vlSelf->core__DOT__lsu__DOT__stb_wb[0U] = (((vlSelf->core__DOT__agu_out
                                                 [0U][1U] 
                                                 << 0x1dU) 
                                                | (0x1ffffffcU 
                                                   & (vlSelf->core__DOT__agu_out
                                                      [0U][0U] 
                                                      >> 3U))) 
                                               | (3U 
                                                  & (vlSelf->core__DOT__agu_out
                                                     [0U][0U] 
                                                     >> 1U)));
    vlSelf->core__DOT__lsu__DOT__stb_wb[1U] = ((3U 
                                                & (vlSelf->core__DOT__agu_out
                                                   [0U][1U] 
                                                   >> 3U)) 
                                               | ((vlSelf->core__DOT__agu_out
                                                   [0U][2U] 
                                                   << 0x1dU) 
                                                  | (0x1ffffffcU 
                                                     & (vlSelf->core__DOT__agu_out
                                                        [0U][1U] 
                                                        >> 3U))));
    vlSelf->core__DOT__lsu__DOT__stb_wb[2U] = ((0x1ffffe00U 
                                                & ((vlSelf->core__DOT__agu_out
                                                    [0U][2U] 
                                                    >> 3U) 
                                                   & ((0U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->core__DOT__agu_out
                                                           [0U][0U] 
                                                           >> 3U))) 
                                                      << 9U))) 
                                               | ((3U 
                                                   & (vlSelf->core__DOT__agu_out
                                                      [0U][2U] 
                                                      >> 3U)) 
                                                  | (0x1fcU 
                                                     & (vlSelf->core__DOT__agu_out
                                                        [0U][2U] 
                                                        >> 3U))));
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__is_jump 
        = ((2U == (3U & (vlSelf->core__DOT__alu_dispatch_instr
                         [0U][0U] >> 6U))) | (1U == 
                                              (3U & 
                                               (vlSelf->core__DOT__alu_dispatch_instr
                                                [0U][0U] 
                                                >> 6U))));
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__is_jump 
        = ((2U == (3U & (vlSelf->core__DOT__alu_dispatch_instr
                         [1U][0U] >> 6U))) | (1U == 
                                              (3U & 
                                               (vlSelf->core__DOT__alu_dispatch_instr
                                                [1U][0U] 
                                                >> 6U))));
    vlSelf->core__DOT__mul_div_fu_busy[0U] = (0U != (IData)(vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__state));
    vlSelf->core__DOT__lsu_issue_instr[0U][0U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U];
    vlSelf->core__DOT__lsu_issue_instr[0U][1U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U];
    vlSelf->core__DOT__lsu_issue_instr[0U][2U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U];
    vlSelf->core__DOT__lsu_issue_instr[0U][3U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U];
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_sync[0U] 
        = vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_wr_ack__DOT__ff2;
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_sync[1U] 
        = vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_wr_ack__DOT__ff2;
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_sync[0U] 
        = vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_rd_ack__DOT__ff2;
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_sync[1U] 
        = vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_rd_ack__DOT__ff2;
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync[0U] 
        = vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_wr_sync__DOT__ff2;
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync[1U] 
        = vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_wr_sync__DOT__ff2;
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync[0U] 
        = vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_rd_sync__DOT__ff2;
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync[1U] 
        = vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_rd_sync__DOT__ff2;
    vlSelf->core__DOT__rename__DOT__free_CommTag[0U] 
        = (0x3fU & (vlSelf->core__DOT__rename__DOT__rename_table
                    [(0x1fU & (vlSelf->core__DOT__commit_packet
                               [0U] >> 6U))] >> 6U));
    vlSelf->core__DOT__rename__DOT__free_CommTag[1U] 
        = (0x3fU & (vlSelf->core__DOT__rename__DOT__rename_table
                    [(0x1fU & (vlSelf->core__DOT__commit_packet
                               [1U] >> 6U))] >> 6U));
    vlSelf->core__DOT__execute__DOT__int_fu_out[2U] 
        = vlSelf->core__DOT__execute__DOT____Vcellout__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__OUT_cdb;
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_stall[0U] 
        = ((~ (IData)(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_rd_ack__DOT__ff2)) 
           & vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_pending
           [0U]);
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_stall[1U] 
        = ((~ (IData)(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_rd_ack__DOT__ff2)) 
           & vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_pending
           [1U]);
    vlSelf->core__DOT__lsu__DOT__is_store = 0U;
    vlSelf->core__DOT__lsu__DOT__is_load = 0U;
    if ((1U & (IData)((vlSelf->core__DOT__lsu_dispatch_instr
                       [0U] >> 0x3eU)))) {
        if ((1U & (IData)((vlSelf->core__DOT__lsu_dispatch_instr
                           [0U] >> 0x36U)))) {
            vlSelf->core__DOT__lsu__DOT__is_store = 
                ((1U & (~ (IData)((vlSelf->core__DOT__lsu_dispatch_instr
                                   [0U] >> 0x35U)))) 
                 && ((1U & (~ (IData)((vlSelf->core__DOT__lsu_dispatch_instr
                                       [0U] >> 0x34U)))) 
                     && (1U & (~ (IData)((vlSelf->core__DOT__lsu_dispatch_instr
                                          [0U] >> 0x33U))))));
            if ((1U & (IData)((vlSelf->core__DOT__lsu_dispatch_instr
                               [0U] >> 0x35U)))) {
                vlSelf->core__DOT__lsu__DOT__is_load = 0U;
            } else if ((1U & (IData)((vlSelf->core__DOT__lsu_dispatch_instr
                                      [0U] >> 0x34U)))) {
                vlSelf->core__DOT__lsu__DOT__is_load = 0U;
            } else if ((1U & (IData)((vlSelf->core__DOT__lsu_dispatch_instr
                                      [0U] >> 0x33U)))) {
                vlSelf->core__DOT__lsu__DOT__is_load = 0U;
            }
        } else if ((1U & (IData)((vlSelf->core__DOT__lsu_dispatch_instr
                                  [0U] >> 0x35U)))) {
            if ((1U & (IData)((vlSelf->core__DOT__lsu_dispatch_instr
                               [0U] >> 0x34U)))) {
                vlSelf->core__DOT__lsu__DOT__is_store = 1U;
            }
            if ((1U & (~ (IData)((vlSelf->core__DOT__lsu_dispatch_instr
                                  [0U] >> 0x34U))))) {
                vlSelf->core__DOT__lsu__DOT__is_load = 1U;
            }
        } else {
            if ((1U & (~ (IData)((vlSelf->core__DOT__lsu_dispatch_instr
                                  [0U] >> 0x34U))))) {
                if ((1U & (~ (IData)((vlSelf->core__DOT__lsu_dispatch_instr
                                      [0U] >> 0x33U))))) {
                    vlSelf->core__DOT__lsu__DOT__is_store = 0U;
                }
            }
            vlSelf->core__DOT__lsu__DOT__is_load = 
                ((1U & (IData)((vlSelf->core__DOT__lsu_dispatch_instr
                                [0U] >> 0x34U))) || 
                 (1U & (IData)((vlSelf->core__DOT__lsu_dispatch_instr
                                [0U] >> 0x33U))));
        }
    }
    vlSelf->core__DOT__lsu__DOT__ldb_addr_wb = (((QData)((IData)(
                                                                 ((vlSelf->core__DOT__agu_out
                                                                   [0U][2U] 
                                                                   >> 0xcU) 
                                                                  & (1U 
                                                                     == 
                                                                     (3U 
                                                                      & (vlSelf->core__DOT__agu_out
                                                                         [0U][0U] 
                                                                         >> 3U)))))) 
                                                 << 0x2aU) 
                                                | ((0x3fffffffff8ULL 
                                                    & (((QData)((IData)(
                                                                        vlSelf->core__DOT__agu_out
                                                                        [0U][2U])) 
                                                        << 0x1eU) 
                                                       | (0x3ffffffffffffff8ULL 
                                                          & ((QData)((IData)(
                                                                             vlSelf->core__DOT__agu_out
                                                                             [0U][1U])) 
                                                             >> 2U)))) 
                                                   | (QData)((IData)(
                                                                     (7U 
                                                                      & vlSelf->core__DOT__agu_out
                                                                      [0U][0U])))));
    vlSelf->core__DOT__dispatch__DOT__DU__DOT__slot_pending[0U] 
        = (1U & ((~ vlSelf->core__DOT__dispatch__DOT__DU__DOT__dispatched
                  [0U]) & (vlSelf->core__DOT__dispatch__DOT__DU__DOT__packet
                           [0U][3U] >> 8U)));
    vlSelf->core__DOT__dispatch__DOT__DU__DOT__slot_pending[1U] 
        = (1U & ((~ vlSelf->core__DOT__dispatch__DOT__DU__DOT__dispatched
                  [1U]) & (vlSelf->core__DOT__dispatch__DOT__DU__DOT__packet
                           [1U][3U] >> 8U)));
    vlSelf->core__DOT__execute__DOT__gen_alu_fu__BRA__0__KET____DOT__ALU_i__DOT__alu_result 
        = ((0x200U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
            ? ((0x100U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                ? 0U : ((0x80U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                         ? ((0x40U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                             ? ((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                                 << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                              >> 0xaU))
                             : (((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                                  << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                               >> 0xaU)) 
                                & ((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                    << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                                 >> 0xaU))))
                         : ((0x40U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                             ? (((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                                  << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                               >> 0xaU)) 
                                | ((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                    << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                                 >> 0xaU)))
                             : (((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                                  << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                               >> 0xaU)) 
                                >> (0x1fU & (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                             >> 0xaU))))))
            : ((0x100U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                ? ((0x80U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                    ? ((0x40U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                        ? (((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                             << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                          >> 0xaU)) 
                           >> (0x1fU & (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                        >> 0xaU))) : 
                       (((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                          << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                       >> 0xaU)) ^ 
                        ((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                          << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                       >> 0xaU)))) : 
                   ((0x40U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                     ? (((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                          << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                       >> 0xaU)) < 
                        ((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                          << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                       >> 0xaU))) : 
                    VL_LTS_III(32, ((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                                     << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                                  >> 0xaU)), 
                               ((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                 << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                              >> 0xaU)))))
                : ((0x80U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                    ? ((0x40U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                        ? (((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                             << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                          >> 0xaU)) 
                           << (0x1fU & (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                        >> 0xaU))) : 
                       (((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                          << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                       >> 0xaU)) - 
                        ((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                          << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                       >> 0xaU)))) : 
                   ((0x40U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                     ? (((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                          << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                       >> 0xaU)) + 
                        ((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                          << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                       >> 0xaU))) : 0U))));
    vlSelf->core__DOT__execute__DOT__gen_alu_fu__BRA__1__KET____DOT__ALU_i__DOT__alu_result 
        = ((0x200U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
            ? ((0x100U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                ? 0U : ((0x80U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                         ? ((0x40U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                             ? ((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                                 << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                              >> 0xaU))
                             : (((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                                  << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                               >> 0xaU)) 
                                & ((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                    << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                                 >> 0xaU))))
                         : ((0x40U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                             ? (((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                                  << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                               >> 0xaU)) 
                                | ((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                    << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                                 >> 0xaU)))
                             : (((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                                  << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                               >> 0xaU)) 
                                >> (0x1fU & (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                             >> 0xaU))))))
            : ((0x100U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                ? ((0x80U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                    ? ((0x40U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                        ? (((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                             << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                          >> 0xaU)) 
                           >> (0x1fU & (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                        >> 0xaU))) : 
                       (((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                          << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                       >> 0xaU)) ^ 
                        ((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                          << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                       >> 0xaU)))) : 
                   ((0x40U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                     ? (((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                          << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                       >> 0xaU)) < 
                        ((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                          << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                       >> 0xaU))) : 
                    VL_LTS_III(32, ((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                                     << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                                  >> 0xaU)), 
                               ((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                 << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                              >> 0xaU)))))
                : ((0x80U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                    ? ((0x40U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                        ? (((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                             << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                          >> 0xaU)) 
                           << (0x1fU & (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                        >> 0xaU))) : 
                       (((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                          << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                       >> 0xaU)) - 
                        ((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                          << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                       >> 0xaU)))) : 
                   ((0x40U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U])
                     ? (((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                          << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                                       >> 0xaU)) + 
                        ((vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U] 
                          << 0x16U) | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U] 
                                       >> 0xaU))) : 0U))));
    vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__is_unsigned = 0U;
    vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__data_size = 3U;
    vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__is_store = 0U;
    if ((0x20000U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U])) {
        if ((0x200U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U])) {
            if ((0x100U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U])) {
                vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__is_load = 0U;
                vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__is_unsigned = 0U;
            } else if ((0x80U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U])) {
                vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__is_load = 0U;
                vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__is_unsigned = 0U;
            } else if ((0x40U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U])) {
                vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__is_load = 0U;
                vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__is_unsigned = 0U;
            }
            vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__data_size = 3U;
            vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__is_store 
                = ((1U & (~ (vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U] 
                             >> 8U))) && ((1U & (~ 
                                                 (vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U] 
                                                  >> 7U))) 
                                          && (1U & 
                                              (~ (vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U] 
                                                  >> 6U)))));
        } else if ((0x100U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U])) {
            if ((1U & (~ (vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U] 
                          >> 7U)))) {
                vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__is_load = 1U;
                vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__is_unsigned = 1U;
            }
            if ((0x80U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U])) {
                vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__data_size 
                    = ((0x40U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U])
                        ? 1U : 0U);
                vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__is_store = 1U;
            } else {
                vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__data_size 
                    = ((0x40U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U])
                        ? 1U : 0U);
            }
        } else {
            vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__is_load 
                = ((1U & (vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U] 
                          >> 7U)) || (1U & (vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U] 
                                            >> 6U)));
            vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__is_unsigned = 0U;
            vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__data_size 
                = ((0x80U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U])
                    ? ((0x40U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U])
                        ? 3U : 1U) : ((0x40U & vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U])
                                       ? 0U : 3U));
            if ((1U & (~ (vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U] 
                          >> 7U)))) {
                if ((1U & (~ (vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U] 
                              >> 6U)))) {
                    vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__is_store = 0U;
                }
            }
        }
    }
    vlSelf->core__DOT__lsu__DOT__mem_stall[0U] = ((~ (IData)(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_wr_ack__DOT__ff2)) 
                                                  & vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_pending
                                                  [0U]);
    vlSelf->core__DOT__lsu__DOT__mem_stall[1U] = ((~ (IData)(vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_wr_ack__DOT__ff2)) 
                                                  & vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_pending
                                                  [1U]);
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0U] = ((0x3ffffffffffULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [0U]) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [0U][2U] 
                                                                       >> 0xbU)))) 
                                                   << 0x2aU));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0U] = ((0x407ffffffffULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [0U]) 
                                                | ((QData)((IData)(
                                                                   (0x7fU 
                                                                    & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [0U][2U] 
                                                                       >> 2U)))) 
                                                   << 0x23U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0U] = ((0x7f800000007ULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [0U]) 
                                                | ((QData)((IData)(
                                                                   ((vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                     [0U][2U] 
                                                                     << 0x1eU) 
                                                                    | (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [0U][1U] 
                                                                       >> 2U)))) 
                                                   << 3U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0U] = ((0x7fffffffffeULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [0U]) 
                                                | (IData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                      [0U][2U] 
                                                                      >> 0xaU)))));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0U] = ((0x7fffffffff9ULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [0U]) 
                                                | ((QData)((IData)(
                                                                   (3U 
                                                                    & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                    [0U][0U]))) 
                                                   << 1U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[1U] = ((0x3ffffffffffULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [1U]) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [1U][2U] 
                                                                       >> 0xbU)))) 
                                                   << 0x2aU));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[1U] = ((0x407ffffffffULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [1U]) 
                                                | ((QData)((IData)(
                                                                   (0x7fU 
                                                                    & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [1U][2U] 
                                                                       >> 2U)))) 
                                                   << 0x23U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[1U] = ((0x7f800000007ULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [1U]) 
                                                | ((QData)((IData)(
                                                                   ((vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                     [1U][2U] 
                                                                     << 0x1eU) 
                                                                    | (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [1U][1U] 
                                                                       >> 2U)))) 
                                                   << 3U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[1U] = ((0x7fffffffffeULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [1U]) 
                                                | (IData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                      [1U][2U] 
                                                                      >> 0xaU)))));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[1U] = ((0x7fffffffff9ULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [1U]) 
                                                | ((QData)((IData)(
                                                                   (3U 
                                                                    & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                    [1U][0U]))) 
                                                   << 1U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[2U] = ((0x3ffffffffffULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [2U]) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [2U][2U] 
                                                                       >> 0xbU)))) 
                                                   << 0x2aU));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[2U] = ((0x407ffffffffULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [2U]) 
                                                | ((QData)((IData)(
                                                                   (0x7fU 
                                                                    & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [2U][2U] 
                                                                       >> 2U)))) 
                                                   << 0x23U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[2U] = ((0x7f800000007ULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [2U]) 
                                                | ((QData)((IData)(
                                                                   ((vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                     [2U][2U] 
                                                                     << 0x1eU) 
                                                                    | (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [2U][1U] 
                                                                       >> 2U)))) 
                                                   << 3U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[2U] = ((0x7fffffffffeULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [2U]) 
                                                | (IData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                      [2U][2U] 
                                                                      >> 0xaU)))));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[2U] = ((0x7fffffffff9ULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [2U]) 
                                                | ((QData)((IData)(
                                                                   (3U 
                                                                    & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                    [2U][0U]))) 
                                                   << 1U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[3U] = ((0x3ffffffffffULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [3U]) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [3U][2U] 
                                                                       >> 0xbU)))) 
                                                   << 0x2aU));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[3U] = ((0x407ffffffffULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [3U]) 
                                                | ((QData)((IData)(
                                                                   (0x7fU 
                                                                    & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [3U][2U] 
                                                                       >> 2U)))) 
                                                   << 0x23U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[3U] = ((0x7f800000007ULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [3U]) 
                                                | ((QData)((IData)(
                                                                   ((vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                     [3U][2U] 
                                                                     << 0x1eU) 
                                                                    | (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [3U][1U] 
                                                                       >> 2U)))) 
                                                   << 3U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[3U] = ((0x7fffffffffeULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [3U]) 
                                                | (IData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                      [3U][2U] 
                                                                      >> 0xaU)))));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[3U] = ((0x7fffffffff9ULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [3U]) 
                                                | ((QData)((IData)(
                                                                   (3U 
                                                                    & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                    [3U][0U]))) 
                                                   << 1U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[4U] = ((0x3ffffffffffULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [4U]) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [4U][2U] 
                                                                       >> 0xbU)))) 
                                                   << 0x2aU));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[4U] = ((0x407ffffffffULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [4U]) 
                                                | ((QData)((IData)(
                                                                   (0x7fU 
                                                                    & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [4U][2U] 
                                                                       >> 2U)))) 
                                                   << 0x23U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[4U] = ((0x7f800000007ULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [4U]) 
                                                | ((QData)((IData)(
                                                                   ((vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                     [4U][2U] 
                                                                     << 0x1eU) 
                                                                    | (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [4U][1U] 
                                                                       >> 2U)))) 
                                                   << 3U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[4U] = ((0x7fffffffffeULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [4U]) 
                                                | (IData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                      [4U][2U] 
                                                                      >> 0xaU)))));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[4U] = ((0x7fffffffff9ULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [4U]) 
                                                | ((QData)((IData)(
                                                                   (3U 
                                                                    & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                    [4U][0U]))) 
                                                   << 1U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[5U] = ((0x3ffffffffffULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [5U]) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [5U][2U] 
                                                                       >> 0xbU)))) 
                                                   << 0x2aU));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[5U] = ((0x407ffffffffULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [5U]) 
                                                | ((QData)((IData)(
                                                                   (0x7fU 
                                                                    & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [5U][2U] 
                                                                       >> 2U)))) 
                                                   << 0x23U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[5U] = ((0x7f800000007ULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [5U]) 
                                                | ((QData)((IData)(
                                                                   ((vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                     [5U][2U] 
                                                                     << 0x1eU) 
                                                                    | (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [5U][1U] 
                                                                       >> 2U)))) 
                                                   << 3U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[5U] = ((0x7fffffffffeULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [5U]) 
                                                | (IData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                      [5U][2U] 
                                                                      >> 0xaU)))));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[5U] = ((0x7fffffffff9ULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [5U]) 
                                                | ((QData)((IData)(
                                                                   (3U 
                                                                    & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                    [5U][0U]))) 
                                                   << 1U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[6U] = ((0x3ffffffffffULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [6U]) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [6U][2U] 
                                                                       >> 0xbU)))) 
                                                   << 0x2aU));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[6U] = ((0x407ffffffffULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [6U]) 
                                                | ((QData)((IData)(
                                                                   (0x7fU 
                                                                    & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [6U][2U] 
                                                                       >> 2U)))) 
                                                   << 0x23U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[6U] = ((0x7f800000007ULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [6U]) 
                                                | ((QData)((IData)(
                                                                   ((vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                     [6U][2U] 
                                                                     << 0x1eU) 
                                                                    | (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [6U][1U] 
                                                                       >> 2U)))) 
                                                   << 3U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[6U] = ((0x7fffffffffeULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [6U]) 
                                                | (IData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                      [6U][2U] 
                                                                      >> 0xaU)))));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[6U] = ((0x7fffffffff9ULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [6U]) 
                                                | ((QData)((IData)(
                                                                   (3U 
                                                                    & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                    [6U][0U]))) 
                                                   << 1U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[7U] = ((0x3ffffffffffULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [7U]) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [7U][2U] 
                                                                       >> 0xbU)))) 
                                                   << 0x2aU));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[7U] = ((0x407ffffffffULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [7U]) 
                                                | ((QData)((IData)(
                                                                   (0x7fU 
                                                                    & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [7U][2U] 
                                                                       >> 2U)))) 
                                                   << 0x23U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[7U] = ((0x7f800000007ULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [7U]) 
                                                | ((QData)((IData)(
                                                                   ((vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                     [7U][2U] 
                                                                     << 0x1eU) 
                                                                    | (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [7U][1U] 
                                                                       >> 2U)))) 
                                                   << 3U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[7U] = ((0x7fffffffffeULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [7U]) 
                                                | (IData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                      [7U][2U] 
                                                                      >> 0xaU)))));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[7U] = ((0x7fffffffff9ULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [7U]) 
                                                | ((QData)((IData)(
                                                                   (3U 
                                                                    & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                    [7U][0U]))) 
                                                   << 1U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[8U] = ((0x3ffffffffffULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [8U]) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [8U][2U] 
                                                                       >> 0xbU)))) 
                                                   << 0x2aU));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[8U] = ((0x407ffffffffULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [8U]) 
                                                | ((QData)((IData)(
                                                                   (0x7fU 
                                                                    & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [8U][2U] 
                                                                       >> 2U)))) 
                                                   << 0x23U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[8U] = ((0x7f800000007ULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [8U]) 
                                                | ((QData)((IData)(
                                                                   ((vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                     [8U][2U] 
                                                                     << 0x1eU) 
                                                                    | (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [8U][1U] 
                                                                       >> 2U)))) 
                                                   << 3U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[8U] = ((0x7fffffffffeULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [8U]) 
                                                | (IData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                      [8U][2U] 
                                                                      >> 0xaU)))));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[8U] = ((0x7fffffffff9ULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [8U]) 
                                                | ((QData)((IData)(
                                                                   (3U 
                                                                    & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                    [8U][0U]))) 
                                                   << 1U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[9U] = ((0x3ffffffffffULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [9U]) 
                                                | ((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [9U][2U] 
                                                                       >> 0xbU)))) 
                                                   << 0x2aU));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[9U] = ((0x407ffffffffULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [9U]) 
                                                | ((QData)((IData)(
                                                                   (0x7fU 
                                                                    & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [9U][2U] 
                                                                       >> 2U)))) 
                                                   << 0x23U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[9U] = ((0x7f800000007ULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [9U]) 
                                                | ((QData)((IData)(
                                                                   ((vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                     [9U][2U] 
                                                                     << 0x1eU) 
                                                                    | (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [9U][1U] 
                                                                       >> 2U)))) 
                                                   << 3U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[9U] = ((0x7fffffffffeULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [9U]) 
                                                | (IData)((IData)(
                                                                  (1U 
                                                                   & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                      [9U][2U] 
                                                                      >> 0xaU)))));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[9U] = ((0x7fffffffff9ULL 
                                                 & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                 [9U]) 
                                                | ((QData)((IData)(
                                                                   (3U 
                                                                    & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                    [9U][0U]))) 
                                                   << 1U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0xaU] = ((0x3ffffffffffULL 
                                                   & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                   [0xaU]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                         [0xaU][2U] 
                                                                         >> 0xbU)))) 
                                                     << 0x2aU));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0xaU] = ((0x407ffffffffULL 
                                                   & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                   [0xaU]) 
                                                  | ((QData)((IData)(
                                                                     (0x7fU 
                                                                      & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                         [0xaU][2U] 
                                                                         >> 2U)))) 
                                                     << 0x23U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0xaU] = ((0x7f800000007ULL 
                                                   & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                   [0xaU]) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [0xaU][2U] 
                                                                       << 0x1eU) 
                                                                      | (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                         [0xaU][1U] 
                                                                         >> 2U)))) 
                                                     << 3U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0xaU] = ((0x7fffffffffeULL 
                                                   & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                   [0xaU]) 
                                                  | (IData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                        [0xaU][2U] 
                                                                        >> 0xaU)))));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0xaU] = ((0x7fffffffff9ULL 
                                                   & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                   [0xaU]) 
                                                  | ((QData)((IData)(
                                                                     (3U 
                                                                      & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                      [0xaU][0U]))) 
                                                     << 1U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0xbU] = ((0x3ffffffffffULL 
                                                   & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                   [0xbU]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                         [0xbU][2U] 
                                                                         >> 0xbU)))) 
                                                     << 0x2aU));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0xbU] = ((0x407ffffffffULL 
                                                   & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                   [0xbU]) 
                                                  | ((QData)((IData)(
                                                                     (0x7fU 
                                                                      & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                         [0xbU][2U] 
                                                                         >> 2U)))) 
                                                     << 0x23U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0xbU] = ((0x7f800000007ULL 
                                                   & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                   [0xbU]) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [0xbU][2U] 
                                                                       << 0x1eU) 
                                                                      | (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                         [0xbU][1U] 
                                                                         >> 2U)))) 
                                                     << 3U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0xbU] = ((0x7fffffffffeULL 
                                                   & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                   [0xbU]) 
                                                  | (IData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                        [0xbU][2U] 
                                                                        >> 0xaU)))));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0xbU] = ((0x7fffffffff9ULL 
                                                   & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                   [0xbU]) 
                                                  | ((QData)((IData)(
                                                                     (3U 
                                                                      & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                      [0xbU][0U]))) 
                                                     << 1U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0xcU] = ((0x3ffffffffffULL 
                                                   & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                   [0xcU]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                         [0xcU][2U] 
                                                                         >> 0xbU)))) 
                                                     << 0x2aU));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0xcU] = ((0x407ffffffffULL 
                                                   & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                   [0xcU]) 
                                                  | ((QData)((IData)(
                                                                     (0x7fU 
                                                                      & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                         [0xcU][2U] 
                                                                         >> 2U)))) 
                                                     << 0x23U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0xcU] = ((0x7f800000007ULL 
                                                   & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                   [0xcU]) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [0xcU][2U] 
                                                                       << 0x1eU) 
                                                                      | (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                         [0xcU][1U] 
                                                                         >> 2U)))) 
                                                     << 3U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0xcU] = ((0x7fffffffffeULL 
                                                   & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                   [0xcU]) 
                                                  | (IData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                        [0xcU][2U] 
                                                                        >> 0xaU)))));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0xcU] = ((0x7fffffffff9ULL 
                                                   & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                   [0xcU]) 
                                                  | ((QData)((IData)(
                                                                     (3U 
                                                                      & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                      [0xcU][0U]))) 
                                                     << 1U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0xdU] = ((0x3ffffffffffULL 
                                                   & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                   [0xdU]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                         [0xdU][2U] 
                                                                         >> 0xbU)))) 
                                                     << 0x2aU));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0xdU] = ((0x407ffffffffULL 
                                                   & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                   [0xdU]) 
                                                  | ((QData)((IData)(
                                                                     (0x7fU 
                                                                      & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                         [0xdU][2U] 
                                                                         >> 2U)))) 
                                                     << 0x23U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0xdU] = ((0x7f800000007ULL 
                                                   & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                   [0xdU]) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [0xdU][2U] 
                                                                       << 0x1eU) 
                                                                      | (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                         [0xdU][1U] 
                                                                         >> 2U)))) 
                                                     << 3U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0xdU] = ((0x7fffffffffeULL 
                                                   & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                   [0xdU]) 
                                                  | (IData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                        [0xdU][2U] 
                                                                        >> 0xaU)))));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0xdU] = ((0x7fffffffff9ULL 
                                                   & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                   [0xdU]) 
                                                  | ((QData)((IData)(
                                                                     (3U 
                                                                      & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                      [0xdU][0U]))) 
                                                     << 1U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0xeU] = ((0x3ffffffffffULL 
                                                   & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                   [0xeU]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                         [0xeU][2U] 
                                                                         >> 0xbU)))) 
                                                     << 0x2aU));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0xeU] = ((0x407ffffffffULL 
                                                   & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                   [0xeU]) 
                                                  | ((QData)((IData)(
                                                                     (0x7fU 
                                                                      & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                         [0xeU][2U] 
                                                                         >> 2U)))) 
                                                     << 0x23U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0xeU] = ((0x7f800000007ULL 
                                                   & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                   [0xeU]) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [0xeU][2U] 
                                                                       << 0x1eU) 
                                                                      | (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                         [0xeU][1U] 
                                                                         >> 2U)))) 
                                                     << 3U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0xeU] = ((0x7fffffffffeULL 
                                                   & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                   [0xeU]) 
                                                  | (IData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                        [0xeU][2U] 
                                                                        >> 0xaU)))));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0xeU] = ((0x7fffffffff9ULL 
                                                   & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                   [0xeU]) 
                                                  | ((QData)((IData)(
                                                                     (3U 
                                                                      & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                      [0xeU][0U]))) 
                                                     << 1U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0xfU] = ((0x3ffffffffffULL 
                                                   & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                   [0xfU]) 
                                                  | ((QData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                         [0xfU][2U] 
                                                                         >> 0xbU)))) 
                                                     << 0x2aU));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0xfU] = ((0x407ffffffffULL 
                                                   & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                   [0xfU]) 
                                                  | ((QData)((IData)(
                                                                     (0x7fU 
                                                                      & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                         [0xfU][2U] 
                                                                         >> 2U)))) 
                                                     << 0x23U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0xfU] = ((0x7f800000007ULL 
                                                   & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                   [0xfU]) 
                                                  | ((QData)((IData)(
                                                                     ((vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                       [0xfU][2U] 
                                                                       << 0x1eU) 
                                                                      | (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                         [0xfU][1U] 
                                                                         >> 2U)))) 
                                                     << 3U));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0xfU] = ((0x7fffffffffeULL 
                                                   & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                   [0xfU]) 
                                                  | (IData)((IData)(
                                                                    (1U 
                                                                     & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                        [0xfU][2U] 
                                                                        >> 0xaU)))));
    vlSelf->core__DOT__lsu__DOT__stb_fwd[0xfU] = ((0x7fffffffff9ULL 
                                                   & vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                   [0xfU]) 
                                                  | ((QData)((IData)(
                                                                     (3U 
                                                                      & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                                                      [0xfU][0U]))) 
                                                     << 1U));
    vlSelf->core__DOT__issue__DOT__pc[0U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_pc;
    vlSelf->core__DOT__issue__DOT__pc[1U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_pc;
    vlSelf->core__DOT__issue__DOT__alu_rs1_result[0U] 
        = vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__rs1_result;
    vlSelf->core__DOT__issue__DOT__alu_rs1_result[1U] 
        = vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__rs1_result;
    vlSelf->core__DOT__issue__DOT__alu_imm[0U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__imm;
    vlSelf->core__DOT__issue__DOT__alu_imm[1U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__imm;
    vlSelf->core__DOT__rename__DOT__chkpt_need = 0U;
    if ((0x20U & vlSelf->core__DOT__decode_instr[0U][3U])) {
        vlSelf->core__DOT__rename__DOT__chkpt_need 
            = ((IData)(vlSelf->core__DOT__rename__DOT__chkpt_need) 
               | ((0U != (0xfU & (vlSelf->core__DOT__decode_instr
                                  [0U][0U] >> 2U))) 
                  | (2U == (3U & (vlSelf->core__DOT__decode_instr
                                  [0U][0U] >> 6U)))));
    }
    if ((0x20U & vlSelf->core__DOT__decode_instr[1U][3U])) {
        vlSelf->core__DOT__rename__DOT__chkpt_need 
            = ((IData)(vlSelf->core__DOT__rename__DOT__chkpt_need) 
               | ((0U != (0xfU & (vlSelf->core__DOT__decode_instr
                                  [1U][0U] >> 2U))) 
                  | (2U == (3U & (vlSelf->core__DOT__decode_instr
                                  [1U][0U] >> 6U)))));
    }
    vlSelf->core__DOT__dispatch__DOT__BC__DOT__count 
        = vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid
        [0U];
    vlSelf->core__DOT__dispatch__DOT__BC__DOT__count 
        = (0x1fU & ((IData)(vlSelf->core__DOT__dispatch__DOT__BC__DOT__count) 
                    + vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid
                    [1U]));
    vlSelf->core__DOT__dispatch__DOT__BC__DOT__count 
        = (0x1fU & ((IData)(vlSelf->core__DOT__dispatch__DOT__BC__DOT__count) 
                    + vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid
                    [2U]));
    vlSelf->core__DOT__dispatch__DOT__BC__DOT__count 
        = (0x1fU & ((IData)(vlSelf->core__DOT__dispatch__DOT__BC__DOT__count) 
                    + vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid
                    [3U]));
    vlSelf->core__DOT__dispatch__DOT__BC__DOT__count 
        = (0x1fU & ((IData)(vlSelf->core__DOT__dispatch__DOT__BC__DOT__count) 
                    + vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid
                    [4U]));
    vlSelf->core__DOT__dispatch__DOT__BC__DOT__count 
        = (0x1fU & ((IData)(vlSelf->core__DOT__dispatch__DOT__BC__DOT__count) 
                    + vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid
                    [5U]));
    vlSelf->core__DOT__dispatch__DOT__BC__DOT__count 
        = (0x1fU & ((IData)(vlSelf->core__DOT__dispatch__DOT__BC__DOT__count) 
                    + vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid
                    [6U]));
    vlSelf->core__DOT__dispatch__DOT__BC__DOT__count 
        = (0x1fU & ((IData)(vlSelf->core__DOT__dispatch__DOT__BC__DOT__count) 
                    + vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid
                    [7U]));
    vlSelf->core__DOT__dispatch__DOT__BC__DOT__count 
        = (0x1fU & ((IData)(vlSelf->core__DOT__dispatch__DOT__BC__DOT__count) 
                    + vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid
                    [8U]));
    vlSelf->core__DOT__dispatch__DOT__BC__DOT__count 
        = (0x1fU & ((IData)(vlSelf->core__DOT__dispatch__DOT__BC__DOT__count) 
                    + vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid
                    [9U]));
    vlSelf->core__DOT__dispatch__DOT__BC__DOT__count 
        = (0x1fU & ((IData)(vlSelf->core__DOT__dispatch__DOT__BC__DOT__count) 
                    + vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid
                    [0xaU]));
    vlSelf->core__DOT__dispatch__DOT__BC__DOT__count 
        = (0x1fU & ((IData)(vlSelf->core__DOT__dispatch__DOT__BC__DOT__count) 
                    + vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid
                    [0xbU]));
    vlSelf->core__DOT__dispatch__DOT__BC__DOT__count 
        = (0x1fU & ((IData)(vlSelf->core__DOT__dispatch__DOT__BC__DOT__count) 
                    + vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid
                    [0xcU]));
    vlSelf->core__DOT__dispatch__DOT__BC__DOT__count 
        = (0x1fU & ((IData)(vlSelf->core__DOT__dispatch__DOT__BC__DOT__count) 
                    + vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid
                    [0xdU]));
    vlSelf->core__DOT__dispatch__DOT__BC__DOT__count 
        = (0x1fU & ((IData)(vlSelf->core__DOT__dispatch__DOT__BC__DOT__count) 
                    + vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid
                    [0xeU]));
    vlSelf->core__DOT__dispatch__DOT__BC__DOT__count 
        = (0x1fU & ((IData)(vlSelf->core__DOT__dispatch__DOT__BC__DOT__count) 
                    + vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid
                    [0xfU]));
    vlSelf->core__DOT__rename__DOT__ftb = ((0xfffffffffffffffcULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | (IData)((IData)(
                                                             (2U 
                                                              & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                 [1U] 
                                                                 << 1U)))));
    vlSelf->core__DOT__rename__DOT__ftb = ((0xfffffffffffffff3ULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                   [3U] 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                  [2U])))) 
                                              << 2U));
    vlSelf->core__DOT__rename__DOT__ftb = ((0xffffffffffffffcfULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                   [5U] 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                  [4U])))) 
                                              << 4U));
    vlSelf->core__DOT__rename__DOT__ftb = ((0xffffffffffffff3fULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                   [7U] 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                  [6U])))) 
                                              << 6U));
    vlSelf->core__DOT__rename__DOT__ftb = ((0xfffffffffffffcffULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                   [9U] 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                  [8U])))) 
                                              << 8U));
    vlSelf->core__DOT__rename__DOT__ftb = ((0xfffffffffffff3ffULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                   [0xbU] 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                  [0xaU])))) 
                                              << 0xaU));
    vlSelf->core__DOT__rename__DOT__ftb = ((0xffffffffffffcfffULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                   [0xdU] 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                  [0xcU])))) 
                                              << 0xcU));
    vlSelf->core__DOT__rename__DOT__ftb = ((0xffffffffffff3fffULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                   [0xfU] 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                  [0xeU])))) 
                                              << 0xeU));
    vlSelf->core__DOT__rename__DOT__ftb = ((0xfffffffffffcffffULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                   [0x11U] 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                  [0x10U])))) 
                                              << 0x10U));
    vlSelf->core__DOT__rename__DOT__ftb = ((0xfffffffffff3ffffULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                   [0x13U] 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                  [0x12U])))) 
                                              << 0x12U));
    vlSelf->core__DOT__rename__DOT__ftb = ((0xffffffffffcfffffULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                   [0x15U] 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                  [0x14U])))) 
                                              << 0x14U));
    vlSelf->core__DOT__rename__DOT__ftb = ((0xffffffffff3fffffULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                   [0x17U] 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                  [0x16U])))) 
                                              << 0x16U));
    vlSelf->core__DOT__rename__DOT__ftb = ((0xfffffffffcffffffULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                   [0x19U] 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                  [0x18U])))) 
                                              << 0x18U));
    vlSelf->core__DOT__rename__DOT__ftb = ((0xfffffffff3ffffffULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                   [0x1bU] 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                  [0x1aU])))) 
                                              << 0x1aU));
    vlSelf->core__DOT__rename__DOT__ftb = ((0xffffffffcfffffffULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                   [0x1dU] 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                  [0x1cU])))) 
                                              << 0x1cU));
    vlSelf->core__DOT__rename__DOT__ftb = ((0xffffffff3fffffffULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                   [0x1fU] 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                  [0x1eU])))) 
                                              << 0x1eU));
    vlSelf->core__DOT__rename__DOT__ftb = ((0xfffffffcffffffffULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                   [0x21U] 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                  [0x20U])))) 
                                              << 0x20U));
    vlSelf->core__DOT__rename__DOT__ftb = ((0xfffffff3ffffffffULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                   [0x23U] 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                  [0x22U])))) 
                                              << 0x22U));
    vlSelf->core__DOT__rename__DOT__ftb = ((0xffffffcfffffffffULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                   [0x25U] 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                  [0x24U])))) 
                                              << 0x24U));
    vlSelf->core__DOT__rename__DOT__ftb = ((0xffffff3fffffffffULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                   [0x27U] 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                  [0x26U])))) 
                                              << 0x26U));
    vlSelf->core__DOT__rename__DOT__ftb = ((0xfffffcffffffffffULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                   [0x29U] 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                  [0x28U])))) 
                                              << 0x28U));
    vlSelf->core__DOT__rename__DOT__ftb = ((0xfffff3ffffffffffULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                   [0x2bU] 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                  [0x2aU])))) 
                                              << 0x2aU));
    vlSelf->core__DOT__rename__DOT__ftb = ((0xffffcfffffffffffULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                   [0x2dU] 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                  [0x2cU])))) 
                                              << 0x2cU));
    vlSelf->core__DOT__rename__DOT__ftb = ((0xffff3fffffffffffULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                   [0x2fU] 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                  [0x2eU])))) 
                                              << 0x2eU));
    vlSelf->core__DOT__rename__DOT__ftb = ((0xfffcffffffffffffULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                   [0x31U] 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                  [0x30U])))) 
                                              << 0x30U));
    vlSelf->core__DOT__rename__DOT__ftb = ((0xfff3ffffffffffffULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                   [0x33U] 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                  [0x32U])))) 
                                              << 0x32U));
    vlSelf->core__DOT__rename__DOT__ftb = ((0xffcfffffffffffffULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                   [0x35U] 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                  [0x34U])))) 
                                              << 0x34U));
    vlSelf->core__DOT__rename__DOT__ftb = ((0xff3fffffffffffffULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                   [0x37U] 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                  [0x36U])))) 
                                              << 0x36U));
    vlSelf->core__DOT__rename__DOT__ftb = ((0xfcffffffffffffffULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                   [0x39U] 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                  [0x38U])))) 
                                              << 0x38U));
    vlSelf->core__DOT__rename__DOT__ftb = ((0xf3ffffffffffffffULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                   [0x3bU] 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                  [0x3aU])))) 
                                              << 0x3aU));
    vlSelf->core__DOT__rename__DOT__ftb = ((0xcfffffffffffffffULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                   [0x3dU] 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                  [0x3cU])))) 
                                              << 0x3cU));
    vlSelf->core__DOT__rename__DOT__ftb = ((0x3fffffffffffffffULL 
                                            & vlSelf->core__DOT__rename__DOT__ftb) 
                                           | ((QData)((IData)(
                                                              ((2U 
                                                                & (vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                   [0x3fU] 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & vlSelf->core__DOT__rename__DOT__tag_buffer
                                                                  [0x3eU])))) 
                                              << 0x3eU));
    vlSelf->core__DOT__dispatch__DOT__DU__DOT__lsu_ready[0U] 
        = (1U & (~ (vlSelf->core__DOT__lsu_buffer_busy
                    [0U] | (0xfU == (IData)(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__count)))));
    vlSelf->core__DOT__rename_rob[0U] = ((0x3ffffU 
                                          & vlSelf->core__DOT__rename_rob
                                          [0U]) | (0x40000U 
                                                   & (vlSelf->core__DOT__rename_instr
                                                      [0U][3U] 
                                                      << 0xaU)));
    vlSelf->core__DOT__rename_rob[0U] = ((0x407ffU 
                                          & vlSelf->core__DOT__rename_rob
                                          [0U]) | (0x3f800U 
                                                   & (vlSelf->core__DOT__rename_instr
                                                      [0U][3U] 
                                                      << 0xaU)));
    vlSelf->core__DOT__rename_rob[0U] = ((0x7f83fU 
                                          & vlSelf->core__DOT__rename_rob
                                          [0U]) | (
                                                   vlSelf->core__DOT__rename_rob_rd
                                                   [0U] 
                                                   << 6U));
    vlSelf->core__DOT__rename_rob[0U] = ((0x7ffc0U 
                                          & vlSelf->core__DOT__rename_rob
                                          [0U]) | (0x3fU 
                                                   & (vlSelf->core__DOT__rename_instr
                                                      [0U][1U] 
                                                      >> 9U)));
    vlSelf->core__DOT__rename_rob[1U] = ((0x3ffffU 
                                          & vlSelf->core__DOT__rename_rob
                                          [1U]) | (0x40000U 
                                                   & (vlSelf->core__DOT__rename_instr
                                                      [1U][3U] 
                                                      << 0xaU)));
    vlSelf->core__DOT__rename_rob[1U] = ((0x407ffU 
                                          & vlSelf->core__DOT__rename_rob
                                          [1U]) | (0x3f800U 
                                                   & (vlSelf->core__DOT__rename_instr
                                                      [1U][3U] 
                                                      << 0xaU)));
    vlSelf->core__DOT__rename_rob[1U] = ((0x7f83fU 
                                          & vlSelf->core__DOT__rename_rob
                                          [1U]) | (
                                                   vlSelf->core__DOT__rename_rob_rd
                                                   [1U] 
                                                   << 6U));
    vlSelf->core__DOT__rename_rob[1U] = ((0x7ffc0U 
                                          & vlSelf->core__DOT__rename_rob
                                          [1U]) | (0x3fU 
                                                   & (vlSelf->core__DOT__rename_instr
                                                      [1U][1U] 
                                                      >> 9U)));
    vlSelf->core__DOT__rename__DOT__req_valid = ((2U 
                                                  & (IData)(vlSelf->core__DOT__rename__DOT__req_valid)) 
                                                 | ((vlSelf->core__DOT__decode_instr
                                                     [0U][3U] 
                                                     >> 5U) 
                                                    & (0U 
                                                       != 
                                                       (0x1fU 
                                                        & (vlSelf->core__DOT__decode_instr
                                                           [0U][1U] 
                                                           >> 9U)))));
    vlSelf->core__DOT__rename__DOT__req_valid = ((1U 
                                                  & (IData)(vlSelf->core__DOT__rename__DOT__req_valid)) 
                                                 | (0xffffffeU 
                                                    & ((vlSelf->core__DOT__decode_instr
                                                        [1U][3U] 
                                                        >> 4U) 
                                                       & ((0U 
                                                           != 
                                                           (0x1fU 
                                                            & (vlSelf->core__DOT__decode_instr
                                                               [1U][1U] 
                                                               >> 9U))) 
                                                          << 1U))));
    vlSelf->core__DOT__issue_buffer_busy[0U] = (7U 
                                                == (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__tail));
    vlSelf->core__DOT__issue_buffer_busy[1U] = (7U 
                                                == (IData)(vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__tail));
    vlSelf->core__DOT__issue_buffer_busy[2U] = (8U 
                                                == (IData)(vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__tail));
    vlSelf->core__DOT__issue_buffer_busy[3U] = (8U 
                                                == (IData)(vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__tail));
    core__DOT__dispatch__DOT__DU__DOT____VdfgTmp_hfe8e9762__0 
        = (1U & ((~ vlSelf->core__DOT__dispatch__DOT__DU__DOT__dispatched
                  [0U]) & (vlSelf->core__DOT__dispatch__DOT__DU__DOT__packet
                           [0U][3U] >> 8U)));
    core__DOT__dispatch__DOT__DU__DOT____VdfgTmp_hfe220149__0 
        = (1U & ((~ vlSelf->core__DOT__dispatch__DOT__DU__DOT__dispatched
                  [1U]) & (vlSelf->core__DOT__dispatch__DOT__DU__DOT__packet
                           [1U][3U] >> 8U)));
    vlSelf->core__DOT__jump_type[0U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_jump_type;
    vlSelf->core__DOT__jump_type[1U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_jump_type;
    vlSelf->core__DOT__int_issue_instr[0U][0U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U];
    vlSelf->core__DOT__int_issue_instr[0U][1U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[1U];
    vlSelf->core__DOT__int_issue_instr[0U][2U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U];
    vlSelf->core__DOT__int_issue_instr[1U][0U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U];
    vlSelf->core__DOT__int_issue_instr[1U][1U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[1U];
    vlSelf->core__DOT__int_issue_instr[1U][2U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U];
    vlSelf->core__DOT__int_issue_instr[2U][0U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr[0U];
    vlSelf->core__DOT__int_issue_instr[2U][1U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr[1U];
    vlSelf->core__DOT__int_issue_instr[2U][2U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr[2U];
    vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__check_ready[0U] 
        = (0x3fU & (IData)((vlSelf->core__DOT__lsu_dispatch_instr
                            [0U] >> 0x2dU)));
    vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__check_ready[1U] 
        = (0x3fU & (IData)((vlSelf->core__DOT__lsu_dispatch_instr
                            [0U] >> 0x27U)));
    vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__check_ready[0U] 
        = (0x3fU & (vlSelf->core__DOT__alu_dispatch_instr
                    [0U][1U] >> 0x15U));
    vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__check_ready[1U] 
        = (0x3fU & (vlSelf->core__DOT__alu_dispatch_instr
                    [0U][1U] >> 0xfU));
    vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__check_ready[0U] 
        = (0x3fU & (vlSelf->core__DOT__alu_dispatch_instr
                    [1U][1U] >> 0x15U));
    vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__check_ready[1U] 
        = (0x3fU & (vlSelf->core__DOT__alu_dispatch_instr
                    [1U][1U] >> 0xfU));
    vlSelf->core__DOT__issue__DOT____Vcellout__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__check_ready[0U] 
        = (0x3fU & (vlSelf->core__DOT__mul_div_dispatch_instr
                    [0U] >> 0xcU));
    vlSelf->core__DOT__issue__DOT____Vcellout__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__check_ready[1U] 
        = (0x3fU & (vlSelf->core__DOT__mul_div_dispatch_instr
                    [0U] >> 6U));
    if ((1U & ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                [0U][2U] >> 0x12U) & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
               [0U][0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 0U;
    }
    if ((1U & ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                [0xfU][2U] >> 0x12U) & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
               [0xfU][0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 0xfU;
    }
    if ((1U & ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                [0xeU][2U] >> 0x12U) & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
               [0xeU][0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 0xeU;
    }
    if ((1U & ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                [0xdU][2U] >> 0x12U) & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
               [0xdU][0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 0xdU;
    }
    if ((1U & ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                [0xcU][2U] >> 0x12U) & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
               [0xcU][0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 0xcU;
    }
    if ((1U & ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                [0xbU][2U] >> 0x12U) & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
               [0xbU][0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 0xbU;
    }
    if ((1U & ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                [0xaU][2U] >> 0x12U) & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
               [0xaU][0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 0xaU;
    }
    if ((1U & ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                [9U][2U] >> 0x12U) & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
               [9U][0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 9U;
    }
    if ((1U & ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                [8U][2U] >> 0x12U) & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
               [8U][0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 8U;
    }
    if ((1U & ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                [7U][2U] >> 0x12U) & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
               [7U][0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 7U;
    }
    if ((1U & ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                [6U][2U] >> 0x12U) & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
               [6U][0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 6U;
    }
    if ((1U & ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                [5U][2U] >> 0x12U) & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
               [5U][0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 5U;
    }
    if ((1U & ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                [4U][2U] >> 0x12U) & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
               [4U][0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 4U;
    }
    if ((1U & ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                [3U][2U] >> 0x12U) & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
               [3U][0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 3U;
    }
    if ((1U & ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                [2U][2U] >> 0x12U) & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
               [2U][0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 2U;
    }
    if ((1U & ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                [1U][2U] >> 0x12U) & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
               [1U][0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 1U;
    }
    if ((1U & ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                [0U][2U] >> 0x12U) & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
               [0U][0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = 0U;
    }
    if ((1U & ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                [vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx][2U] 
                >> 0x12U) & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
               [vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx][0U]))) {
        vlSelf->core__DOT____Vcellout__lsu__OUT_cdb 
            = ((0x3fffffffffULL & vlSelf->core__DOT____Vcellout__lsu__OUT_cdb) 
               | ((QData)((IData)((0x80U | (0x7fU & 
                                            (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                             [vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx][2U] 
                                             >> 0xbU))))) 
                  << 0x26U));
        vlSelf->core__DOT____Vcellout__lsu__OUT_cdb 
            = ((0x3fc000000000ULL & vlSelf->core__DOT____Vcellout__lsu__OUT_cdb) 
               | (((QData)((IData)((0x3fU & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                             [vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx][2U] 
                                             >> 5U)))) 
                   << 0x20U) | (QData)((IData)(((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                 [vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx][1U] 
                                                 << 0x1fU) 
                                                | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                   [vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx][0U] 
                                                   >> 1U))))));
    } else {
        vlSelf->core__DOT____Vcellout__lsu__OUT_cdb 
            = (0x1fffffffffffULL & vlSelf->core__DOT____Vcellout__lsu__OUT_cdb);
    }
    vlSelf->core__DOT__lsu__DOT__stb_alloc = ((((IData)(
                                                        (vlSelf->core__DOT__lsu_dispatch_instr
                                                         [0U] 
                                                         >> 0x3eU)) 
                                                & (IData)(vlSelf->core__DOT__lsu__DOT__is_store)) 
                                               << 7U) 
                                              | (0x7fU 
                                                 & (IData)(
                                                           (vlSelf->core__DOT__lsu_dispatch_instr
                                                            [0U] 
                                                            >> 0x37U))));
    vlSelf->core__DOT__lsu__DOT__ldb_alloc = ((((IData)(
                                                        (vlSelf->core__DOT__lsu_dispatch_instr
                                                         [0U] 
                                                         >> 0x3eU)) 
                                                & (IData)(vlSelf->core__DOT__lsu__DOT__is_load)) 
                                               << 0xdU) 
                                              | ((0x1fc0U 
                                                  & ((IData)(
                                                             (vlSelf->core__DOT__lsu_dispatch_instr
                                                              [0U] 
                                                              >> 0x37U)) 
                                                     << 6U)) 
                                                 | (0x3fU 
                                                    & (IData)(
                                                              (vlSelf->core__DOT__lsu_dispatch_instr
                                                               [0U] 
                                                               >> 0x21U)))));
    if (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
          [0U][2U] >> 0x12U) & ((0x7fU & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                          [0U][2U] 
                                          >> 0xbU)) 
                                == (0x7fU & (IData)(
                                                    (vlSelf->core__DOT__lsu__DOT__ldb_addr_wb 
                                                     >> 0x23U)))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 0U;
    }
    if (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
          [1U][2U] >> 0x12U) & ((0x7fU & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                          [1U][2U] 
                                          >> 0xbU)) 
                                == (0x7fU & (IData)(
                                                    (vlSelf->core__DOT__lsu__DOT__ldb_addr_wb 
                                                     >> 0x23U)))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 1U;
    }
    if (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
          [2U][2U] >> 0x12U) & ((0x7fU & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                          [2U][2U] 
                                          >> 0xbU)) 
                                == (0x7fU & (IData)(
                                                    (vlSelf->core__DOT__lsu__DOT__ldb_addr_wb 
                                                     >> 0x23U)))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 2U;
    }
    if (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
          [3U][2U] >> 0x12U) & ((0x7fU & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                          [3U][2U] 
                                          >> 0xbU)) 
                                == (0x7fU & (IData)(
                                                    (vlSelf->core__DOT__lsu__DOT__ldb_addr_wb 
                                                     >> 0x23U)))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 3U;
    }
    if (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
          [4U][2U] >> 0x12U) & ((0x7fU & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                          [4U][2U] 
                                          >> 0xbU)) 
                                == (0x7fU & (IData)(
                                                    (vlSelf->core__DOT__lsu__DOT__ldb_addr_wb 
                                                     >> 0x23U)))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 4U;
    }
    if (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
          [5U][2U] >> 0x12U) & ((0x7fU & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                          [5U][2U] 
                                          >> 0xbU)) 
                                == (0x7fU & (IData)(
                                                    (vlSelf->core__DOT__lsu__DOT__ldb_addr_wb 
                                                     >> 0x23U)))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 5U;
    }
    if (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
          [6U][2U] >> 0x12U) & ((0x7fU & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                          [6U][2U] 
                                          >> 0xbU)) 
                                == (0x7fU & (IData)(
                                                    (vlSelf->core__DOT__lsu__DOT__ldb_addr_wb 
                                                     >> 0x23U)))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 6U;
    }
    if (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
          [7U][2U] >> 0x12U) & ((0x7fU & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                          [7U][2U] 
                                          >> 0xbU)) 
                                == (0x7fU & (IData)(
                                                    (vlSelf->core__DOT__lsu__DOT__ldb_addr_wb 
                                                     >> 0x23U)))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 7U;
    }
    if (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
          [8U][2U] >> 0x12U) & ((0x7fU & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                          [8U][2U] 
                                          >> 0xbU)) 
                                == (0x7fU & (IData)(
                                                    (vlSelf->core__DOT__lsu__DOT__ldb_addr_wb 
                                                     >> 0x23U)))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 8U;
    }
    if (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
          [9U][2U] >> 0x12U) & ((0x7fU & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                          [9U][2U] 
                                          >> 0xbU)) 
                                == (0x7fU & (IData)(
                                                    (vlSelf->core__DOT__lsu__DOT__ldb_addr_wb 
                                                     >> 0x23U)))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 9U;
    }
    if (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
          [0xaU][2U] >> 0x12U) & ((0x7fU & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                            [0xaU][2U] 
                                            >> 0xbU)) 
                                  == (0x7fU & (IData)(
                                                      (vlSelf->core__DOT__lsu__DOT__ldb_addr_wb 
                                                       >> 0x23U)))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 0xaU;
    }
    if (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
          [0xbU][2U] >> 0x12U) & ((0x7fU & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                            [0xbU][2U] 
                                            >> 0xbU)) 
                                  == (0x7fU & (IData)(
                                                      (vlSelf->core__DOT__lsu__DOT__ldb_addr_wb 
                                                       >> 0x23U)))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 0xbU;
    }
    if (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
          [0xcU][2U] >> 0x12U) & ((0x7fU & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                            [0xcU][2U] 
                                            >> 0xbU)) 
                                  == (0x7fU & (IData)(
                                                      (vlSelf->core__DOT__lsu__DOT__ldb_addr_wb 
                                                       >> 0x23U)))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 0xcU;
    }
    if (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
          [0xdU][2U] >> 0x12U) & ((0x7fU & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                            [0xdU][2U] 
                                            >> 0xbU)) 
                                  == (0x7fU & (IData)(
                                                      (vlSelf->core__DOT__lsu__DOT__ldb_addr_wb 
                                                       >> 0x23U)))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 0xdU;
    }
    if (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
          [0xeU][2U] >> 0x12U) & ((0x7fU & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                            [0xeU][2U] 
                                            >> 0xbU)) 
                                  == (0x7fU & (IData)(
                                                      (vlSelf->core__DOT__lsu__DOT__ldb_addr_wb 
                                                       >> 0x23U)))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 0xeU;
    }
    if (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
          [0xfU][2U] >> 0x12U) & ((0x7fU & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                            [0xfU][2U] 
                                            >> 0xbU)) 
                                  == (0x7fU & (IData)(
                                                      (vlSelf->core__DOT__lsu__DOT__ldb_addr_wb 
                                                       >> 0x23U)))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = 0xfU;
    }
    vlSelf->core__DOT__dispatch__DOT__DU__DOT__packet_done = 1U;
    if (vlSelf->core__DOT__dispatch__DOT__DU__DOT__slot_pending
        [0U]) {
        vlSelf->core__DOT__dispatch__DOT__DU__DOT__packet_done = 0U;
    }
    if (vlSelf->core__DOT__dispatch__DOT__DU__DOT__slot_pending
        [1U]) {
        vlSelf->core__DOT__dispatch__DOT__DU__DOT__packet_done = 0U;
    }
    vlSelf->core__DOT__execute__DOT__int_fu_out[0U] 
        = (((QData)((IData)((0xffU & (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                                      >> 0xaU)))) << 0x26U) 
           | (((QData)((IData)((0x3fU & vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr[0U]))) 
               << 0x20U) | (QData)((IData)(vlSelf->core__DOT__execute__DOT__gen_alu_fu__BRA__0__KET____DOT__ALU_i__DOT__alu_result))));
    vlSelf->core__DOT__execute__DOT__int_fu_out[1U] 
        = (((QData)((IData)((0xffU & (vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[2U] 
                                      >> 0xaU)))) << 0x26U) 
           | (((QData)((IData)((0x3fU & vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr[0U]))) 
               << 0x20U) | (QData)((IData)(vlSelf->core__DOT__execute__DOT__gen_alu_fu__BRA__1__KET____DOT__ALU_i__DOT__alu_result))));
    __Vtemp_22[1U] = (((IData)((((QData)((IData)(((
                                                   (vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U] 
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
    vlSelf->core__DOT__execute__DOT__next_agu_out[0U][0U] 
        = (((IData)((((QData)((IData)((((vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U] 
                                         << 0x16U) 
                                        | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                                           >> 0xaU)) 
                                       + ((vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[2U] 
                                           << 0x16U) 
                                          | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U] 
                                             >> 0xaU))))) 
                      << 0x20U) | (QData)((IData)((
                                                   (vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[1U] 
                                                    << 0x16U) 
                                                   | (vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[0U] 
                                                      >> 0xaU)))))) 
            << 5U) | ((((IData)(vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__is_store)
                         ? 0U : 1U) << 3U) | (((IData)(vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__data_size) 
                                               << 1U) 
                                              | (IData)(vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__is_unsigned))));
    vlSelf->core__DOT__execute__DOT__next_agu_out[0U][1U] 
        = __Vtemp_22[1U];
    vlSelf->core__DOT__execute__DOT__next_agu_out[0U][2U] 
        = ((0x1fe0U & (vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr[3U] 
                       >> 5U)) | ((IData)(((((QData)((IData)(
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
    vlSelf->core__DOT__lsu__DOT__stb_mem_req[0U][0U] = 0U;
    vlSelf->core__DOT__lsu__DOT__stb_mem_req[0U][1U] = 0U;
    vlSelf->core__DOT__lsu__DOT__stb_mem_req[0U][2U] = 0U;
    vlSelf->core__DOT__lsu__DOT__stb_mem_req[1U][0U] = 0U;
    vlSelf->core__DOT__lsu__DOT__stb_mem_req[1U][1U] = 0U;
    vlSelf->core__DOT__lsu__DOT__stb_mem_req[1U][2U] = 0U;
    vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx 
        = (0xfU & (IData)(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__drain_ptr));
    if ((1U & ((((vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                  [(0xfU & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][2U] 
                  >> 0xbU) & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                              [(0xfU & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][2U] 
                              >> 9U)) & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                         [(0xfU & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][2U] 
                                         >> 0xaU)) 
               & (~ vlSelf->core__DOT__lsu__DOT__mem_stall
                  [0U])))) {
        vlSelf->core__DOT__lsu__DOT__stb_mem_req[0U][2U] 
            = (4U | vlSelf->core__DOT__lsu__DOT__stb_mem_req
               [0U][2U]);
        vlSelf->core__DOT__lsu__DOT__stb_mem_req[0U][1U] 
            = ((3U & vlSelf->core__DOT__lsu__DOT__stb_mem_req
                [0U][1U]) | (0xfffffffcU & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                             [(0xfU & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][1U]));
        vlSelf->core__DOT__lsu__DOT__stb_mem_req[0U][2U] 
            = ((4U & vlSelf->core__DOT__lsu__DOT__stb_mem_req
                [0U][2U]) | (3U & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                             [(0xfU & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][2U]));
        vlSelf->core__DOT__lsu__DOT__stb_mem_req[0U][0U] 
            = ((3U & vlSelf->core__DOT__lsu__DOT__stb_mem_req
                [0U][0U]) | (0xfffffffcU & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                             [(0xfU & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][0U]));
        vlSelf->core__DOT__lsu__DOT__stb_mem_req[0U][1U] 
            = ((0xfffffffcU & vlSelf->core__DOT__lsu__DOT__stb_mem_req
                [0U][1U]) | (3U & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                             [(0xfU & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][1U]));
        vlSelf->core__DOT__lsu__DOT__stb_mem_req[0U][0U] 
            = ((0xfffffffcU & vlSelf->core__DOT__lsu__DOT__stb_mem_req
                [0U][0U]) | (3U & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                             [(0xfU & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][0U]));
    }
    vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx 
        = (0xfU & ((IData)(1U) + (IData)(vlSelf->core__DOT__lsu__DOT__u_stb__DOT__drain_ptr)));
    if ((1U & ((((vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                  [(0xfU & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][2U] 
                  >> 0xbU) & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                              [(0xfU & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][2U] 
                              >> 9U)) & (vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                                         [(0xfU & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][2U] 
                                         >> 0xaU)) 
               & (~ vlSelf->core__DOT__lsu__DOT__mem_stall
                  [1U])))) {
        vlSelf->core__DOT__lsu__DOT__stb_mem_req[1U][2U] 
            = (4U | vlSelf->core__DOT__lsu__DOT__stb_mem_req
               [1U][2U]);
        vlSelf->core__DOT__lsu__DOT__stb_mem_req[1U][1U] 
            = ((3U & vlSelf->core__DOT__lsu__DOT__stb_mem_req
                [1U][1U]) | (0xfffffffcU & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                             [(0xfU & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][1U]));
        vlSelf->core__DOT__lsu__DOT__stb_mem_req[1U][2U] 
            = ((4U & vlSelf->core__DOT__lsu__DOT__stb_mem_req
                [1U][2U]) | (3U & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                             [(0xfU & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][2U]));
        vlSelf->core__DOT__lsu__DOT__stb_mem_req[1U][0U] 
            = ((3U & vlSelf->core__DOT__lsu__DOT__stb_mem_req
                [1U][0U]) | (0xfffffffcU & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                             [(0xfU & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][0U]));
        vlSelf->core__DOT__lsu__DOT__stb_mem_req[1U][1U] 
            = ((0xfffffffcU & vlSelf->core__DOT__lsu__DOT__stb_mem_req
                [1U][1U]) | (3U & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                             [(0xfU & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][1U]));
        vlSelf->core__DOT__lsu__DOT__stb_mem_req[1U][0U] 
            = ((0xfffffffcU & vlSelf->core__DOT__lsu__DOT__stb_mem_req
                [1U][0U]) | (3U & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries
                             [(0xfU & vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][0U]));
    }
    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall = 0U;
    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i = 0U;
    while ((0x10U > vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)) {
        if ((0x40000U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
             [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U])) {
            if (((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                          [0U] >> 0x2aU)) & (0x40U 
                                             > (0x7fU 
                                                & ((0x7fU 
                                                    & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                       [
                                                       (0xfU 
                                                        & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                                       >> 0xbU)) 
                                                   - 
                                                   (0x7fU 
                                                    & (IData)(
                                                              (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                               [0U] 
                                                               >> 0x23U)))))))) {
                if ((1U & (IData)(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                  [0U]))) {
                    if ((2U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                         [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U])) {
                        if ((((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                       [0U] >> 3U)) 
                              <= ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                   [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                   << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                [(0xfU 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                                >> 2U))) 
                             & (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                  [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                  << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                <= ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                             [0U] >> 3U)) 
                                    + (3U & (IData)(
                                                    (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                     [0U] 
                                                     >> 1U))))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        } else if (((((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                       << 0x1eU) | 
                                      (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                       >> 2U)) <= (IData)(
                                                          (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                           [0U] 
                                                           >> 3U))) 
                                    & ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                [0U] 
                                                >> 3U)) 
                                       <= (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                             [(0xfU 
                                               & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                             << 0x1eU) 
                                            | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                           + (3U & 
                                              (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                               >> 3U)))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        }
                    } else {
                        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                               | (0xfU & ((IData)(1U) 
                                          << (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                    }
                } else {
                    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           | (0xfU & ((IData)(1U) << 
                                      (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                }
            }
            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0x10U;
            if (((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                          [1U] >> 0x2aU)) & (0x40U 
                                             > (0x7fU 
                                                & ((0x7fU 
                                                    & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                       [
                                                       (0xfU 
                                                        & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                                       >> 0xbU)) 
                                                   - 
                                                   (0x7fU 
                                                    & (IData)(
                                                              (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                               [1U] 
                                                               >> 0x23U)))))))) {
                if ((1U & (IData)(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                  [1U]))) {
                    if ((2U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                         [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U])) {
                        if ((((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                       [1U] >> 3U)) 
                              <= ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                   [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                   << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                [(0xfU 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                                >> 2U))) 
                             & (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                  [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                  << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                <= ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                             [1U] >> 3U)) 
                                    + (3U & (IData)(
                                                    (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                     [1U] 
                                                     >> 1U))))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        } else if (((((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                       << 0x1eU) | 
                                      (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                       >> 2U)) <= (IData)(
                                                          (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                           [1U] 
                                                           >> 3U))) 
                                    & ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                [1U] 
                                                >> 3U)) 
                                       <= (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                             [(0xfU 
                                               & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                             << 0x1eU) 
                                            | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                           + (3U & 
                                              (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                               >> 3U)))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        }
                    } else {
                        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                               | (0xfU & ((IData)(1U) 
                                          << (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                    }
                } else {
                    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           | (0xfU & ((IData)(1U) << 
                                      (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                }
            }
            if (((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                          [2U] >> 0x2aU)) & (0x40U 
                                             > (0x7fU 
                                                & ((0x7fU 
                                                    & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                       [
                                                       (0xfU 
                                                        & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                                       >> 0xbU)) 
                                                   - 
                                                   (0x7fU 
                                                    & (IData)(
                                                              (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                               [2U] 
                                                               >> 0x23U)))))))) {
                if ((1U & (IData)(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                  [2U]))) {
                    if ((2U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                         [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U])) {
                        if ((((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                       [2U] >> 3U)) 
                              <= ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                   [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                   << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                [(0xfU 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                                >> 2U))) 
                             & (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                  [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                  << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                <= ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                             [2U] >> 3U)) 
                                    + (3U & (IData)(
                                                    (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                     [2U] 
                                                     >> 1U))))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        } else if (((((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                       << 0x1eU) | 
                                      (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                       >> 2U)) <= (IData)(
                                                          (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                           [2U] 
                                                           >> 3U))) 
                                    & ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                [2U] 
                                                >> 3U)) 
                                       <= (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                             [(0xfU 
                                               & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                             << 0x1eU) 
                                            | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                           + (3U & 
                                              (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                               >> 3U)))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        }
                    } else {
                        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                               | (0xfU & ((IData)(1U) 
                                          << (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                    }
                } else {
                    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           | (0xfU & ((IData)(1U) << 
                                      (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                }
            }
            if (((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                          [3U] >> 0x2aU)) & (0x40U 
                                             > (0x7fU 
                                                & ((0x7fU 
                                                    & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                       [
                                                       (0xfU 
                                                        & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                                       >> 0xbU)) 
                                                   - 
                                                   (0x7fU 
                                                    & (IData)(
                                                              (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                               [3U] 
                                                               >> 0x23U)))))))) {
                if ((1U & (IData)(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                  [3U]))) {
                    if ((2U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                         [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U])) {
                        if ((((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                       [3U] >> 3U)) 
                              <= ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                   [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                   << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                [(0xfU 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                                >> 2U))) 
                             & (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                  [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                  << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                <= ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                             [3U] >> 3U)) 
                                    + (3U & (IData)(
                                                    (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                     [3U] 
                                                     >> 1U))))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        } else if (((((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                       << 0x1eU) | 
                                      (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                       >> 2U)) <= (IData)(
                                                          (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                           [3U] 
                                                           >> 3U))) 
                                    & ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                [3U] 
                                                >> 3U)) 
                                       <= (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                             [(0xfU 
                                               & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                             << 0x1eU) 
                                            | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                           + (3U & 
                                              (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                               >> 3U)))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        }
                    } else {
                        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                               | (0xfU & ((IData)(1U) 
                                          << (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                    }
                } else {
                    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           | (0xfU & ((IData)(1U) << 
                                      (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                }
            }
            if (((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                          [4U] >> 0x2aU)) & (0x40U 
                                             > (0x7fU 
                                                & ((0x7fU 
                                                    & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                       [
                                                       (0xfU 
                                                        & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                                       >> 0xbU)) 
                                                   - 
                                                   (0x7fU 
                                                    & (IData)(
                                                              (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                               [4U] 
                                                               >> 0x23U)))))))) {
                if ((1U & (IData)(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                  [4U]))) {
                    if ((2U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                         [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U])) {
                        if ((((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                       [4U] >> 3U)) 
                              <= ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                   [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                   << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                [(0xfU 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                                >> 2U))) 
                             & (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                  [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                  << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                <= ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                             [4U] >> 3U)) 
                                    + (3U & (IData)(
                                                    (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                     [4U] 
                                                     >> 1U))))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        } else if (((((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                       << 0x1eU) | 
                                      (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                       >> 2U)) <= (IData)(
                                                          (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                           [4U] 
                                                           >> 3U))) 
                                    & ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                [4U] 
                                                >> 3U)) 
                                       <= (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                             [(0xfU 
                                               & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                             << 0x1eU) 
                                            | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                           + (3U & 
                                              (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                               >> 3U)))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        }
                    } else {
                        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                               | (0xfU & ((IData)(1U) 
                                          << (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                    }
                } else {
                    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           | (0xfU & ((IData)(1U) << 
                                      (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                }
            }
            if (((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                          [5U] >> 0x2aU)) & (0x40U 
                                             > (0x7fU 
                                                & ((0x7fU 
                                                    & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                       [
                                                       (0xfU 
                                                        & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                                       >> 0xbU)) 
                                                   - 
                                                   (0x7fU 
                                                    & (IData)(
                                                              (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                               [5U] 
                                                               >> 0x23U)))))))) {
                if ((1U & (IData)(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                  [5U]))) {
                    if ((2U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                         [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U])) {
                        if ((((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                       [5U] >> 3U)) 
                              <= ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                   [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                   << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                [(0xfU 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                                >> 2U))) 
                             & (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                  [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                  << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                <= ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                             [5U] >> 3U)) 
                                    + (3U & (IData)(
                                                    (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                     [5U] 
                                                     >> 1U))))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        } else if (((((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                       << 0x1eU) | 
                                      (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                       >> 2U)) <= (IData)(
                                                          (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                           [5U] 
                                                           >> 3U))) 
                                    & ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                [5U] 
                                                >> 3U)) 
                                       <= (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                             [(0xfU 
                                               & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                             << 0x1eU) 
                                            | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                           + (3U & 
                                              (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                               >> 3U)))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        }
                    } else {
                        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                               | (0xfU & ((IData)(1U) 
                                          << (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                    }
                } else {
                    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           | (0xfU & ((IData)(1U) << 
                                      (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                }
            }
            if (((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                          [6U] >> 0x2aU)) & (0x40U 
                                             > (0x7fU 
                                                & ((0x7fU 
                                                    & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                       [
                                                       (0xfU 
                                                        & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                                       >> 0xbU)) 
                                                   - 
                                                   (0x7fU 
                                                    & (IData)(
                                                              (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                               [6U] 
                                                               >> 0x23U)))))))) {
                if ((1U & (IData)(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                  [6U]))) {
                    if ((2U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                         [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U])) {
                        if ((((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                       [6U] >> 3U)) 
                              <= ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                   [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                   << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                [(0xfU 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                                >> 2U))) 
                             & (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                  [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                  << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                <= ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                             [6U] >> 3U)) 
                                    + (3U & (IData)(
                                                    (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                     [6U] 
                                                     >> 1U))))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        } else if (((((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                       << 0x1eU) | 
                                      (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                       >> 2U)) <= (IData)(
                                                          (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                           [6U] 
                                                           >> 3U))) 
                                    & ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                [6U] 
                                                >> 3U)) 
                                       <= (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                             [(0xfU 
                                               & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                             << 0x1eU) 
                                            | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                           + (3U & 
                                              (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                               >> 3U)))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        }
                    } else {
                        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                               | (0xfU & ((IData)(1U) 
                                          << (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                    }
                } else {
                    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           | (0xfU & ((IData)(1U) << 
                                      (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                }
            }
            if (((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                          [7U] >> 0x2aU)) & (0x40U 
                                             > (0x7fU 
                                                & ((0x7fU 
                                                    & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                       [
                                                       (0xfU 
                                                        & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                                       >> 0xbU)) 
                                                   - 
                                                   (0x7fU 
                                                    & (IData)(
                                                              (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                               [7U] 
                                                               >> 0x23U)))))))) {
                if ((1U & (IData)(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                  [7U]))) {
                    if ((2U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                         [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U])) {
                        if ((((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                       [7U] >> 3U)) 
                              <= ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                   [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                   << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                [(0xfU 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                                >> 2U))) 
                             & (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                  [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                  << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                <= ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                             [7U] >> 3U)) 
                                    + (3U & (IData)(
                                                    (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                     [7U] 
                                                     >> 1U))))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        } else if (((((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                       << 0x1eU) | 
                                      (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                       >> 2U)) <= (IData)(
                                                          (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                           [7U] 
                                                           >> 3U))) 
                                    & ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                [7U] 
                                                >> 3U)) 
                                       <= (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                             [(0xfU 
                                               & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                             << 0x1eU) 
                                            | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                           + (3U & 
                                              (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                               >> 3U)))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        }
                    } else {
                        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                               | (0xfU & ((IData)(1U) 
                                          << (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                    }
                } else {
                    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           | (0xfU & ((IData)(1U) << 
                                      (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                }
            }
            if (((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                          [8U] >> 0x2aU)) & (0x40U 
                                             > (0x7fU 
                                                & ((0x7fU 
                                                    & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                       [
                                                       (0xfU 
                                                        & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                                       >> 0xbU)) 
                                                   - 
                                                   (0x7fU 
                                                    & (IData)(
                                                              (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                               [8U] 
                                                               >> 0x23U)))))))) {
                if ((1U & (IData)(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                  [8U]))) {
                    if ((2U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                         [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U])) {
                        if ((((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                       [8U] >> 3U)) 
                              <= ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                   [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                   << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                [(0xfU 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                                >> 2U))) 
                             & (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                  [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                  << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                <= ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                             [8U] >> 3U)) 
                                    + (3U & (IData)(
                                                    (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                     [8U] 
                                                     >> 1U))))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        } else if (((((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                       << 0x1eU) | 
                                      (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                       >> 2U)) <= (IData)(
                                                          (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                           [8U] 
                                                           >> 3U))) 
                                    & ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                [8U] 
                                                >> 3U)) 
                                       <= (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                             [(0xfU 
                                               & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                             << 0x1eU) 
                                            | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                           + (3U & 
                                              (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                               >> 3U)))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        }
                    } else {
                        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                               | (0xfU & ((IData)(1U) 
                                          << (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                    }
                } else {
                    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           | (0xfU & ((IData)(1U) << 
                                      (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                }
            }
            if (((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                          [9U] >> 0x2aU)) & (0x40U 
                                             > (0x7fU 
                                                & ((0x7fU 
                                                    & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                       [
                                                       (0xfU 
                                                        & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                                       >> 0xbU)) 
                                                   - 
                                                   (0x7fU 
                                                    & (IData)(
                                                              (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                               [9U] 
                                                               >> 0x23U)))))))) {
                if ((1U & (IData)(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                  [9U]))) {
                    if ((2U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                         [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U])) {
                        if ((((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                       [9U] >> 3U)) 
                              <= ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                   [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                   << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                [(0xfU 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                                >> 2U))) 
                             & (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                  [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                  << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                <= ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                             [9U] >> 3U)) 
                                    + (3U & (IData)(
                                                    (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                     [9U] 
                                                     >> 1U))))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        } else if (((((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                       << 0x1eU) | 
                                      (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                       >> 2U)) <= (IData)(
                                                          (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                           [9U] 
                                                           >> 3U))) 
                                    & ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                [9U] 
                                                >> 3U)) 
                                       <= (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                             [(0xfU 
                                               & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                             << 0x1eU) 
                                            | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                           + (3U & 
                                              (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                               >> 3U)))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        }
                    } else {
                        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                               | (0xfU & ((IData)(1U) 
                                          << (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                    }
                } else {
                    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           | (0xfU & ((IData)(1U) << 
                                      (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                }
            }
            if (((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                          [0xaU] >> 0x2aU)) & (0x40U 
                                               > (0x7fU 
                                                  & ((0x7fU 
                                                      & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                         [
                                                         (0xfU 
                                                          & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                                         >> 0xbU)) 
                                                     - 
                                                     (0x7fU 
                                                      & (IData)(
                                                                (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                                 [0xaU] 
                                                                 >> 0x23U)))))))) {
                if ((1U & (IData)(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                  [0xaU]))) {
                    if ((2U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                         [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U])) {
                        if ((((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                       [0xaU] >> 3U)) 
                              <= ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                   [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                   << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                [(0xfU 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                                >> 2U))) 
                             & (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                  [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                  << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                <= ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                             [0xaU] 
                                             >> 3U)) 
                                    + (3U & (IData)(
                                                    (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                     [0xaU] 
                                                     >> 1U))))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        } else if (((((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                       << 0x1eU) | 
                                      (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                       >> 2U)) <= (IData)(
                                                          (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                           [0xaU] 
                                                           >> 3U))) 
                                    & ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                [0xaU] 
                                                >> 3U)) 
                                       <= (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                             [(0xfU 
                                               & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                             << 0x1eU) 
                                            | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                           + (3U & 
                                              (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                               >> 3U)))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        }
                    } else {
                        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                               | (0xfU & ((IData)(1U) 
                                          << (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                    }
                } else {
                    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           | (0xfU & ((IData)(1U) << 
                                      (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                }
            }
            if (((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                          [0xbU] >> 0x2aU)) & (0x40U 
                                               > (0x7fU 
                                                  & ((0x7fU 
                                                      & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                         [
                                                         (0xfU 
                                                          & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                                         >> 0xbU)) 
                                                     - 
                                                     (0x7fU 
                                                      & (IData)(
                                                                (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                                 [0xbU] 
                                                                 >> 0x23U)))))))) {
                if ((1U & (IData)(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                  [0xbU]))) {
                    if ((2U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                         [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U])) {
                        if ((((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                       [0xbU] >> 3U)) 
                              <= ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                   [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                   << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                [(0xfU 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                                >> 2U))) 
                             & (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                  [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                  << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                <= ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                             [0xbU] 
                                             >> 3U)) 
                                    + (3U & (IData)(
                                                    (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                     [0xbU] 
                                                     >> 1U))))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        } else if (((((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                       << 0x1eU) | 
                                      (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                       >> 2U)) <= (IData)(
                                                          (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                           [0xbU] 
                                                           >> 3U))) 
                                    & ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                [0xbU] 
                                                >> 3U)) 
                                       <= (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                             [(0xfU 
                                               & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                             << 0x1eU) 
                                            | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                           + (3U & 
                                              (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                               >> 3U)))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        }
                    } else {
                        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                               | (0xfU & ((IData)(1U) 
                                          << (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                    }
                } else {
                    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           | (0xfU & ((IData)(1U) << 
                                      (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                }
            }
            if (((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                          [0xcU] >> 0x2aU)) & (0x40U 
                                               > (0x7fU 
                                                  & ((0x7fU 
                                                      & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                         [
                                                         (0xfU 
                                                          & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                                         >> 0xbU)) 
                                                     - 
                                                     (0x7fU 
                                                      & (IData)(
                                                                (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                                 [0xcU] 
                                                                 >> 0x23U)))))))) {
                if ((1U & (IData)(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                  [0xcU]))) {
                    if ((2U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                         [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U])) {
                        if ((((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                       [0xcU] >> 3U)) 
                              <= ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                   [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                   << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                [(0xfU 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                                >> 2U))) 
                             & (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                  [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                  << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                <= ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                             [0xcU] 
                                             >> 3U)) 
                                    + (3U & (IData)(
                                                    (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                     [0xcU] 
                                                     >> 1U))))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        } else if (((((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                       << 0x1eU) | 
                                      (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                       >> 2U)) <= (IData)(
                                                          (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                           [0xcU] 
                                                           >> 3U))) 
                                    & ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                [0xcU] 
                                                >> 3U)) 
                                       <= (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                             [(0xfU 
                                               & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                             << 0x1eU) 
                                            | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                           + (3U & 
                                              (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                               >> 3U)))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        }
                    } else {
                        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                               | (0xfU & ((IData)(1U) 
                                          << (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                    }
                } else {
                    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           | (0xfU & ((IData)(1U) << 
                                      (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                }
            }
            if (((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                          [0xdU] >> 0x2aU)) & (0x40U 
                                               > (0x7fU 
                                                  & ((0x7fU 
                                                      & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                         [
                                                         (0xfU 
                                                          & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                                         >> 0xbU)) 
                                                     - 
                                                     (0x7fU 
                                                      & (IData)(
                                                                (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                                 [0xdU] 
                                                                 >> 0x23U)))))))) {
                if ((1U & (IData)(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                  [0xdU]))) {
                    if ((2U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                         [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U])) {
                        if ((((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                       [0xdU] >> 3U)) 
                              <= ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                   [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                   << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                [(0xfU 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                                >> 2U))) 
                             & (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                  [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                  << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                <= ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                             [0xdU] 
                                             >> 3U)) 
                                    + (3U & (IData)(
                                                    (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                     [0xdU] 
                                                     >> 1U))))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        } else if (((((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                       << 0x1eU) | 
                                      (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                       >> 2U)) <= (IData)(
                                                          (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                           [0xdU] 
                                                           >> 3U))) 
                                    & ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                [0xdU] 
                                                >> 3U)) 
                                       <= (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                             [(0xfU 
                                               & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                             << 0x1eU) 
                                            | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                           + (3U & 
                                              (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                               >> 3U)))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        }
                    } else {
                        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                               | (0xfU & ((IData)(1U) 
                                          << (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                    }
                } else {
                    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           | (0xfU & ((IData)(1U) << 
                                      (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                }
            }
            if (((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                          [0xeU] >> 0x2aU)) & (0x40U 
                                               > (0x7fU 
                                                  & ((0x7fU 
                                                      & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                         [
                                                         (0xfU 
                                                          & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                                         >> 0xbU)) 
                                                     - 
                                                     (0x7fU 
                                                      & (IData)(
                                                                (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                                 [0xeU] 
                                                                 >> 0x23U)))))))) {
                if ((1U & (IData)(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                  [0xeU]))) {
                    if ((2U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                         [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U])) {
                        if ((((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                       [0xeU] >> 3U)) 
                              <= ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                   [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                   << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                [(0xfU 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                                >> 2U))) 
                             & (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                  [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                  << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                <= ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                             [0xeU] 
                                             >> 3U)) 
                                    + (3U & (IData)(
                                                    (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                     [0xeU] 
                                                     >> 1U))))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        } else if (((((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                       << 0x1eU) | 
                                      (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                       >> 2U)) <= (IData)(
                                                          (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                           [0xeU] 
                                                           >> 3U))) 
                                    & ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                [0xeU] 
                                                >> 3U)) 
                                       <= (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                             [(0xfU 
                                               & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                             << 0x1eU) 
                                            | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                           + (3U & 
                                              (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                               >> 3U)))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        }
                    } else {
                        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                               | (0xfU & ((IData)(1U) 
                                          << (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                    }
                } else {
                    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           | (0xfU & ((IData)(1U) << 
                                      (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                }
            }
            if (((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                          [0xfU] >> 0x2aU)) & (0x40U 
                                               > (0x7fU 
                                                  & ((0x7fU 
                                                      & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                         [
                                                         (0xfU 
                                                          & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                                         >> 0xbU)) 
                                                     - 
                                                     (0x7fU 
                                                      & (IData)(
                                                                (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                                 [0xfU] 
                                                                 >> 0x23U)))))))) {
                if ((1U & (IData)(vlSelf->core__DOT__lsu__DOT__stb_fwd
                                  [0xfU]))) {
                    if ((2U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                         [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U])) {
                        if ((((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                       [0xfU] >> 3U)) 
                              <= ((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                   [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                   << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                [(0xfU 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                                >> 2U))) 
                             & (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                  [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                  << 0x1eU) | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                <= ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                             [0xfU] 
                                             >> 3U)) 
                                    + (3U & (IData)(
                                                    (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                     [0xfU] 
                                                     >> 1U))))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        } else if (((((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                       << 0x1eU) | 
                                      (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                       [(0xfU & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                       >> 2U)) <= (IData)(
                                                          (vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                           [0xfU] 
                                                           >> 3U))) 
                                    & ((IData)((vlSelf->core__DOT__lsu__DOT__stb_fwd
                                                [0xfU] 
                                                >> 3U)) 
                                       <= (((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                             [(0xfU 
                                               & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                             << 0x1eU) 
                                            | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][1U] 
                                               >> 2U)) 
                                           + (3U & 
                                              (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [(0xfU 
                                                 & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i)][2U] 
                                               >> 3U)))))) {
                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                                = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                                   | (0xfU & ((IData)(1U) 
                                              << (3U 
                                                  & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                        }
                    } else {
                        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                               | (0xfU & ((IData)(1U) 
                                          << (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                    }
                } else {
                    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall 
                        = ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           | (0xfU & ((IData)(1U) << 
                                      (3U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i))));
                }
            }
        }
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i 
            = ((IData)(1U) + vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i);
    }
    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 0U;
    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] = 0U;
    if ((((~ ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
              >> 3U)) & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                         [0xfU][2U] >> 0x12U)) & (0U 
                                                  != 
                                                  vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                                  [0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
            [0U];
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 0xfU;
    } else if ((1U & (((~ ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           >> 3U)) & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                      [0xfU][2U] >> 0x12U)) 
                      & (~ (IData)((0U != vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                    [0U])))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 0xfU;
    }
    if ((((~ ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
              >> 2U)) & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                         [0xeU][2U] >> 0x12U)) & (0U 
                                                  != 
                                                  vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                                  [0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
            [0U];
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 0xeU;
    } else if ((1U & (((~ ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           >> 2U)) & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                      [0xeU][2U] >> 0x12U)) 
                      & (~ (IData)((0U != vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                    [0U])))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 0xeU;
    }
    if ((((~ ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
              >> 1U)) & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                         [0xdU][2U] >> 0x12U)) & (0U 
                                                  != 
                                                  vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                                  [0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
            [0U];
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 0xdU;
    } else if ((1U & (((~ ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           >> 1U)) & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                      [0xdU][2U] >> 0x12U)) 
                      & (~ (IData)((0U != vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                    [0U])))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 0xdU;
    }
    if ((((~ (IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall)) 
          & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
             [0xcU][2U] >> 0x12U)) & (0U != vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                      [0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
            [0U];
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 0xcU;
    } else if ((1U & (((~ (IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall)) 
                       & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                          [0xcU][2U] >> 0x12U)) & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                                              [0U])))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 0xcU;
    }
    if ((((~ ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
              >> 3U)) & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                         [0xbU][2U] >> 0x12U)) & (0U 
                                                  != 
                                                  vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                                  [0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
            [0U];
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 0xbU;
    } else if ((1U & (((~ ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           >> 3U)) & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                      [0xbU][2U] >> 0x12U)) 
                      & (~ (IData)((0U != vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                    [0U])))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 0xbU;
    }
    if ((((~ ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
              >> 2U)) & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                         [0xaU][2U] >> 0x12U)) & (0U 
                                                  != 
                                                  vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                                  [0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
            [0U];
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 0xaU;
    } else if ((1U & (((~ ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           >> 2U)) & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                      [0xaU][2U] >> 0x12U)) 
                      & (~ (IData)((0U != vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                    [0U])))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 0xaU;
    }
    if ((((~ ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
              >> 1U)) & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                         [9U][2U] >> 0x12U)) & (0U 
                                                != 
                                                vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                                [0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
            [0U];
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 9U;
    } else if ((1U & (((~ ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           >> 1U)) & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                      [9U][2U] >> 0x12U)) 
                      & (~ (IData)((0U != vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                    [0U])))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 9U;
    }
    if ((((~ (IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall)) 
          & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
             [8U][2U] >> 0x12U)) & (0U != vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                    [0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
            [0U];
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 8U;
    } else if ((1U & (((~ (IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall)) 
                       & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                          [8U][2U] >> 0x12U)) & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                                            [0U])))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 8U;
    }
    if ((((~ ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
              >> 3U)) & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                         [7U][2U] >> 0x12U)) & (0U 
                                                != 
                                                vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                                [0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
            [0U];
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 7U;
    } else if ((1U & (((~ ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           >> 3U)) & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                      [7U][2U] >> 0x12U)) 
                      & (~ (IData)((0U != vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                    [0U])))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 7U;
    }
    if ((((~ ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
              >> 2U)) & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                         [6U][2U] >> 0x12U)) & (0U 
                                                != 
                                                vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                                [0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
            [0U];
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 6U;
    } else if ((1U & (((~ ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           >> 2U)) & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                      [6U][2U] >> 0x12U)) 
                      & (~ (IData)((0U != vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                    [0U])))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 6U;
    }
    if ((((~ ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
              >> 1U)) & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                         [5U][2U] >> 0x12U)) & (0U 
                                                != 
                                                vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                                [0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
            [0U];
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 5U;
    } else if ((1U & (((~ ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           >> 1U)) & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                      [5U][2U] >> 0x12U)) 
                      & (~ (IData)((0U != vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                    [0U])))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 5U;
    }
    if ((((~ (IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall)) 
          & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
             [4U][2U] >> 0x12U)) & (0U != vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                    [0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
            [0U];
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 4U;
    } else if ((1U & (((~ (IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall)) 
                       & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                          [4U][2U] >> 0x12U)) & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                                            [0U])))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 4U;
    }
    if ((((~ ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
              >> 3U)) & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                         [3U][2U] >> 0x12U)) & (0U 
                                                != 
                                                vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                                [0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
            [0U];
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 3U;
    } else if ((1U & (((~ ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           >> 3U)) & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                      [3U][2U] >> 0x12U)) 
                      & (~ (IData)((0U != vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                    [0U])))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 3U;
    }
    if ((((~ ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
              >> 2U)) & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                         [2U][2U] >> 0x12U)) & (0U 
                                                != 
                                                vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                                [0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
            [0U];
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 2U;
    } else if ((1U & (((~ ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           >> 2U)) & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                      [2U][2U] >> 0x12U)) 
                      & (~ (IData)((0U != vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                    [0U])))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 2U;
    }
    if ((((~ ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
              >> 1U)) & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                         [1U][2U] >> 0x12U)) & (0U 
                                                != 
                                                vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                                [0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
            [0U];
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 1U;
    } else if ((1U & (((~ ((IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           >> 1U)) & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                      [1U][2U] >> 0x12U)) 
                      & (~ (IData)((0U != vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                    [0U])))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 1U;
    }
    if ((((~ (IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall)) 
          & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
             [0U][2U] >> 0x12U)) & (0U != vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                    [0U]))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
            [0U];
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 0U;
    } else if ((1U & (((~ (IData)(vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall)) 
                       & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                          [0U][2U] >> 0x12U)) & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                                            [0U])))))) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 0U;
    }
    if ((0x40000U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
         [vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
         [0U]][2U])) {
        vlSelf->core__DOT__lsu__DOT__ldb_mem_req[0U] 
            = (0x40000000000ULL | vlSelf->core__DOT__lsu__DOT__ldb_mem_req
               [0U]);
        vlSelf->core__DOT__lsu__DOT__ldb_mem_req[0U] 
            = ((0x407ffffffffULL & vlSelf->core__DOT__lsu__DOT__ldb_mem_req
                [0U]) | ((QData)((IData)((0x7fU & (
                                                   vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                   [
                                                   vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                                   [0U]][2U] 
                                                   >> 0xbU)))) 
                         << 0x23U));
        vlSelf->core__DOT__lsu__DOT__ldb_mem_req[0U] 
            = ((0x7f800000007ULL & vlSelf->core__DOT__lsu__DOT__ldb_mem_req
                [0U]) | ((QData)((IData)(((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                           [vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                           [0U]][2U] 
                                           << 0x1eU) 
                                          | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                             [vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                             [0U]][1U] 
                                             >> 2U)))) 
                         << 3U));
        vlSelf->core__DOT__lsu__DOT__ldb_mem_req[0U] 
            = ((0x7fffffffff9ULL & vlSelf->core__DOT__lsu__DOT__ldb_mem_req
                [0U]) | ((QData)((IData)((3U & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                [vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                                [0U]][2U] 
                                                >> 3U)))) 
                         << 1U));
        vlSelf->core__DOT__lsu__DOT__ldb_mem_req[0U] 
            = ((0x7fffffffffeULL & vlSelf->core__DOT__lsu__DOT__ldb_mem_req
                [0U]) | (IData)((IData)((1U & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                               [0U]][2U] 
                                               >> 2U)))));
    }
    if ((0x40000U & vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
         [vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
         [1U]][2U])) {
        vlSelf->core__DOT__lsu__DOT__ldb_mem_req[1U] 
            = (0x40000000000ULL | vlSelf->core__DOT__lsu__DOT__ldb_mem_req
               [1U]);
        vlSelf->core__DOT__lsu__DOT__ldb_mem_req[1U] 
            = ((0x407ffffffffULL & vlSelf->core__DOT__lsu__DOT__ldb_mem_req
                [1U]) | ((QData)((IData)((0x7fU & (
                                                   vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                   [
                                                   vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                                   [1U]][2U] 
                                                   >> 0xbU)))) 
                         << 0x23U));
        vlSelf->core__DOT__lsu__DOT__ldb_mem_req[1U] 
            = ((0x7f800000007ULL & vlSelf->core__DOT__lsu__DOT__ldb_mem_req
                [1U]) | ((QData)((IData)(((vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                           [vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                           [1U]][2U] 
                                           << 0x1eU) 
                                          | (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                             [vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                             [1U]][1U] 
                                             >> 2U)))) 
                         << 3U));
        vlSelf->core__DOT__lsu__DOT__ldb_mem_req[1U] 
            = ((0x7fffffffff9ULL & vlSelf->core__DOT__lsu__DOT__ldb_mem_req
                [1U]) | ((QData)((IData)((3U & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                [vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                                [1U]][2U] 
                                                >> 3U)))) 
                         << 1U));
        vlSelf->core__DOT__lsu__DOT__ldb_mem_req[1U] 
            = ((0x7fffffffffeULL & vlSelf->core__DOT__lsu__DOT__ldb_mem_req
                [1U]) | (IData)((IData)((1U & (vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries
                                               [vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx
                                               [1U]][2U] 
                                               >> 2U)))));
    }
    vlSelf->core__DOT__rename__DOT__masked[0U] = vlSelf->core__DOT__rename__DOT__ftb;
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->core__DOT__rename__DOT__free_count[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->core__DOT__rename__DOT__free_count[1U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0U] + (1U & (IData)(vlSelf->core__DOT__rename__DOT__ftb))));
    vlSelf->core__DOT__rename__DOT__free_count[2U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [1U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                          >> 1U)))));
    vlSelf->core__DOT__rename__DOT__free_count[3U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [2U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                          >> 2U)))));
    vlSelf->core__DOT__rename__DOT__free_count[4U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [3U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                          >> 3U)))));
    vlSelf->core__DOT__rename__DOT__free_count[5U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [4U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                          >> 4U)))));
    vlSelf->core__DOT__rename__DOT__free_count[6U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [5U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                          >> 5U)))));
    vlSelf->core__DOT__rename__DOT__free_count[7U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [6U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                          >> 6U)))));
    vlSelf->core__DOT__rename__DOT__free_count[8U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [7U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                          >> 7U)))));
    vlSelf->core__DOT__rename__DOT__free_count[9U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [8U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                          >> 8U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0xaU] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [9U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                          >> 9U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0xbU] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0xaU] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                            >> 0xaU)))));
    vlSelf->core__DOT__rename__DOT__free_count[0xcU] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0xbU] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                            >> 0xbU)))));
    vlSelf->core__DOT__rename__DOT__free_count[0xdU] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0xcU] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                            >> 0xcU)))));
    vlSelf->core__DOT__rename__DOT__free_count[0xeU] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0xdU] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                            >> 0xdU)))));
    vlSelf->core__DOT__rename__DOT__free_count[0xfU] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0xeU] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                            >> 0xeU)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x10U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0xfU] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                            >> 0xfU)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x11U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x10U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x10U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x12U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x11U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x11U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x13U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x12U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x12U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x14U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x13U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x13U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x15U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x14U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x14U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x16U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x15U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x15U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x17U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x16U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x16U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x18U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x17U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x17U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x19U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x18U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x18U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x1aU] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x19U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x19U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x1bU] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x1aU] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x1aU)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x1cU] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x1bU] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x1bU)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x1dU] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x1cU] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x1cU)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x1eU] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x1dU] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x1dU)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x1fU] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x1eU] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x1eU)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x20U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x1fU] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x1fU)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x21U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x20U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x20U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x22U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x21U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x21U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x23U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x22U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x22U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x24U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x23U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x23U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x25U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x24U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x24U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x26U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x25U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x25U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x27U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x26U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x26U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x28U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x27U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x27U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x29U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x28U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x28U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x2aU] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x29U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x29U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x2bU] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x2aU] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x2aU)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x2cU] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x2bU] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x2bU)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x2dU] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x2cU] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x2cU)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x2eU] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x2dU] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x2dU)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x2fU] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x2eU] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x2eU)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x30U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x2fU] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x2fU)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x31U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x30U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x30U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x32U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x31U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x31U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x33U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x32U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x32U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x34U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x33U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x33U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x35U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x34U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x34U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x36U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x35U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x35U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x37U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x36U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x36U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x38U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x37U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x37U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x39U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x38U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x38U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x3aU] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x39U] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x39U)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x3bU] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x3aU] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x3aU)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x3cU] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x3bU] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x3bU)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x3dU] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x3cU] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x3cU)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x3eU] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x3dU] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x3dU)))));
    vlSelf->core__DOT__rename__DOT__free_count[0x3fU] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x3eU] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x3eU)))));
    vlSelf->core__DOT__rename__DOT__free_count[0U] 
        = (0x7fU & (vlSelf->core__DOT__rename__DOT__free_count
                    [0x3fU] + (1U & (IData)((vlSelf->core__DOT__rename__DOT__ftb 
                                             >> 0x3fU)))));
    if (vlSelf->core__DOT__dispatch__DOT__DU__DOT__lsu_ready
        [0U]) {
        vlSelf->core__DOT__dispatch__DOT__DU__DOT__unnamedblk5__DOT__unnamedblk6__DOT__s = 2U;
    }
    vlSelf->core__DOT__ROB_busy = (0x3eU < (IData)(vlSelf->core__DOT__ROB__DOT__count));
    vlSelf->core__DOT__ROB__DOT__empty = (0U == (IData)(vlSelf->core__DOT__ROB__DOT__count));
    vlSelf->core__DOT__ROB__DOT__write_en = ((2U & (IData)(vlSelf->core__DOT__ROB__DOT__write_en)) 
                                             | (1U 
                                                & ((vlSelf->core__DOT__rename_rob
                                                    [0U] 
                                                    >> 0x12U) 
                                                   & (~ (IData)(vlSelf->core__DOT__ROB_busy)))));
    vlSelf->core__DOT__ROB__DOT__write_en = ((1U & (IData)(vlSelf->core__DOT__ROB__DOT__write_en)) 
                                             | (2U 
                                                & ((vlSelf->core__DOT__rename_rob
                                                    [1U] 
                                                    >> 0x11U) 
                                                   & ((~ (IData)(vlSelf->core__DOT__ROB_busy)) 
                                                      << 1U))));
    vlSelf->core__DOT__ROB__DOT__next_tail = vlSelf->core__DOT__ROB__DOT__tail;
    vlSelf->core__DOT__ROB__DOT__next_tail = (0x3fU 
                                              & ((IData)(vlSelf->core__DOT__ROB__DOT__next_tail) 
                                                 + 
                                                 (1U 
                                                  & (IData)(vlSelf->core__DOT__ROB__DOT__write_en))));
    vlSelf->core__DOT__ROB__DOT__next_tail = (0x3fU 
                                              & ((IData)(vlSelf->core__DOT__ROB__DOT__next_tail) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlSelf->core__DOT__ROB__DOT__write_en) 
                                                     >> 1U))));
    vlSelf->core__DOT__ROB__DOT__commit_index[0U] = vlSelf->core__DOT__ROB__DOT__head;
    vlSelf->core__DOT__ROB__DOT__commit = ((2U & (IData)(vlSelf->core__DOT__ROB__DOT__commit)) 
                                           | (1U & 
                                              ((vlSelf->core__DOT__ROB__DOT__rob
                                                [vlSelf->core__DOT__ROB__DOT__commit_index
                                                [0U]] 
                                                >> 0x12U) 
                                               & (~ (IData)(vlSelf->core__DOT__ROB__DOT__empty)))));
    vlSelf->core__DOT__ROB__DOT__commit_index[1U] = 
        (0x3fU & ((IData)(1U) + (IData)(vlSelf->core__DOT__ROB__DOT__head)));
    vlSelf->core__DOT__ROB__DOT__commit = ((1U & (IData)(vlSelf->core__DOT__ROB__DOT__commit)) 
                                           | (2U & 
                                              ((vlSelf->core__DOT__ROB__DOT__rob
                                                [vlSelf->core__DOT__ROB__DOT__commit_index
                                                [1U]] 
                                                >> 0x11U) 
                                               & ((~ (IData)(vlSelf->core__DOT__ROB__DOT__empty)) 
                                                  << 1U))));
    vlSelf->core__DOT__ROB__DOT__next_head = vlSelf->core__DOT__ROB__DOT__head;
    vlSelf->core__DOT__ROB__DOT__next_head = (0x3fU 
                                              & ((IData)(vlSelf->core__DOT__ROB__DOT__next_head) 
                                                 + 
                                                 (1U 
                                                  & (IData)(vlSelf->core__DOT__ROB__DOT__commit))));
    vlSelf->core__DOT__ROB__DOT__next_head = (0x3fU 
                                              & ((IData)(vlSelf->core__DOT__ROB__DOT__next_head) 
                                                 + 
                                                 (1U 
                                                  & ((IData)(vlSelf->core__DOT__ROB__DOT__commit) 
                                                     >> 1U))));
    vlSelf->core__DOT__ROB__DOT__next_count = (0x7fU 
                                               & (((IData)(vlSelf->core__DOT__ROB__DOT__count) 
                                                   + 
                                                   ((IData)(vlSelf->core__DOT__ROB__DOT__next_tail) 
                                                    - (IData)(vlSelf->core__DOT__ROB__DOT__tail))) 
                                                  - 
                                                  ((IData)(vlSelf->core__DOT__ROB__DOT__next_head) 
                                                   - (IData)(vlSelf->core__DOT__ROB__DOT__head))));
    vlSelf->core__DOT__rename__DOT__req_count[0U] = 0U;
    vlSelf->core__DOT__rename__DOT__req_count[1U] = 0U;
    vlSelf->core__DOT__rename__DOT__req_count[1U] = 
        (3U & (vlSelf->core__DOT__rename__DOT__req_count
               [0U] + (1U & (IData)(vlSelf->core__DOT__rename__DOT__req_valid))));
    vlSelf->core__DOT__rename__DOT__req_count[0U] = 
        (3U & (vlSelf->core__DOT__rename__DOT__req_count
               [1U] + (1U & ((IData)(vlSelf->core__DOT__rename__DOT__req_valid) 
                             >> 1U))));
    core__DOT____Vlvbound_h5ca31882__0 = vlSelf->core__DOT__issue_buffer_busy
        [2U];
    vlSelf->core__DOT__mul_div_buffer_busy[0U] = core__DOT____Vlvbound_h5ca31882__0;
    vlSelf->core__DOT__alu_buffer_busy[0U] = vlSelf->core__DOT__issue_buffer_busy
        [0U];
    vlSelf->core__DOT__alu_buffer_busy[1U] = vlSelf->core__DOT__issue_buffer_busy
        [1U];
    vlSelf->core__DOT__dispatch__DOT__DU__DOT__slot_is_alu[0U] 
        = ((IData)(core__DOT__dispatch__DOT__DU__DOT____VdfgTmp_hfe8e9762__0) 
           & (1U == (3U & ((vlSelf->core__DOT__dispatch__DOT__DU__DOT__packet
                            [0U][2U] << 1U) | (vlSelf->core__DOT__dispatch__DOT__DU__DOT__packet
                                               [0U][1U] 
                                               >> 0x1fU)))));
    vlSelf->core__DOT__dispatch__DOT__DU__DOT__slot_is_mul[0U] 
        = ((IData)(core__DOT__dispatch__DOT__DU__DOT____VdfgTmp_hfe8e9762__0) 
           & (2U == (3U & ((vlSelf->core__DOT__dispatch__DOT__DU__DOT__packet
                            [0U][2U] << 1U) | (vlSelf->core__DOT__dispatch__DOT__DU__DOT__packet
                                               [0U][1U] 
                                               >> 0x1fU)))));
    vlSelf->core__DOT__dispatch__DOT__DU__DOT__slot_is_lsu[0U] 
        = ((IData)(core__DOT__dispatch__DOT__DU__DOT____VdfgTmp_hfe8e9762__0) 
           & (3U == (3U & ((vlSelf->core__DOT__dispatch__DOT__DU__DOT__packet
                            [0U][2U] << 1U) | (vlSelf->core__DOT__dispatch__DOT__DU__DOT__packet
                                               [0U][1U] 
                                               >> 0x1fU)))));
    vlSelf->core__DOT__dispatch__DOT__DU__DOT__slot_is_alu[1U] 
        = ((IData)(core__DOT__dispatch__DOT__DU__DOT____VdfgTmp_hfe220149__0) 
           & (1U == (3U & ((vlSelf->core__DOT__dispatch__DOT__DU__DOT__packet
                            [1U][2U] << 1U) | (vlSelf->core__DOT__dispatch__DOT__DU__DOT__packet
                                               [1U][1U] 
                                               >> 0x1fU)))));
    vlSelf->core__DOT__dispatch__DOT__DU__DOT__slot_is_mul[1U] 
        = ((IData)(core__DOT__dispatch__DOT__DU__DOT____VdfgTmp_hfe220149__0) 
           & (2U == (3U & ((vlSelf->core__DOT__dispatch__DOT__DU__DOT__packet
                            [1U][2U] << 1U) | (vlSelf->core__DOT__dispatch__DOT__DU__DOT__packet
                                               [1U][1U] 
                                               >> 0x1fU)))));
    vlSelf->core__DOT__dispatch__DOT__DU__DOT__slot_is_lsu[1U] 
        = ((IData)(core__DOT__dispatch__DOT__DU__DOT____VdfgTmp_hfe220149__0) 
           & (3U == (3U & ((vlSelf->core__DOT__dispatch__DOT__DU__DOT__packet
                            [1U][2U] << 1U) | (vlSelf->core__DOT__dispatch__DOT__DU__DOT__packet
                                               [1U][1U] 
                                               >> 0x1fU)))));
    vlSelf->core__DOT____Vcellinp__flush_controller__jump_type[0U] 
        = vlSelf->core__DOT__jump_type[0U];
    vlSelf->core__DOT____Vcellinp__flush_controller__jump_type[1U] 
        = vlSelf->core__DOT__jump_type[1U];
    vlSelf->core__DOT__issue__DOT__instr_sqN[0U] = 
        (0x7fU & (vlSelf->core__DOT__int_issue_instr
                  [0U][2U] >> 0xaU));
    vlSelf->core__DOT__issue__DOT__instr_sqN[1U] = 
        (0x7fU & (vlSelf->core__DOT__int_issue_instr
                  [1U][2U] >> 0xaU));
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue
         [7U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
    vlSelf->core__DOT__issue__DOT__instr_valid[0U] 
        = (1U & (vlSelf->core__DOT__int_issue_instr
                 [0U][2U] >> 0x11U));
    vlSelf->core__DOT__issue__DOT__instr_valid[1U] 
        = (1U & (vlSelf->core__DOT__int_issue_instr
                 [1U][2U] >> 0x11U));
    vlSelf->core__DOT__br_jalr_sqN[0U] = (0x7fU & (
                                                   vlSelf->core__DOT__int_issue_instr
                                                   [0U][2U] 
                                                   >> 0xaU));
    vlSelf->core__DOT__br_jalr_sqN[1U] = (0x7fU & (
                                                   vlSelf->core__DOT__int_issue_instr
                                                   [1U][2U] 
                                                   >> 0xaU));
    vlSelf->core__DOT__read_ready[3U][0U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__check_ready
        [0U];
    vlSelf->core__DOT__read_ready[3U][1U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__check_ready
        [1U];
    vlSelf->core__DOT__read_ready[0U][0U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__check_ready
        [0U];
    if ((0x100U & vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue
         [7U][3U])) {
        vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
    vlSelf->core__DOT__read_ready[0U][1U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__check_ready
        [1U];
    vlSelf->core__DOT__read_ready[1U][0U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__check_ready
        [0U];
    vlSelf->core__DOT__read_ready[1U][1U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__check_ready
        [1U];
    vlSelf->core__DOT__read_ready[2U][0U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__check_ready
        [0U];
    vlSelf->core__DOT__read_ready[2U][1U] = vlSelf->core__DOT__issue__DOT____Vcellout__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__check_ready
        [1U];
    vlSelf->core__DOT__lsu_cdb_lines[0U] = vlSelf->core__DOT____Vcellout__lsu__OUT_cdb;
    vlSelf->core__DOT__rename_busy = ((IData)(vlSelf->core__DOT__ROB_busy) 
                                      | ((IData)(vlSelf->core__DOT__dispatch_busy) 
                                         | (((QData)((IData)(
                                                             vlSelf->core__DOT__rename__DOT__free_count
                                                             [0x3fU])) 
                                             < (QData)((IData)(
                                                               vlSelf->core__DOT__rename__DOT__req_count
                                                               [1U]))) 
                                            | (((IData)(vlSelf->core__DOT__dispatch__DOT__BC__DOT__count) 
                                                >> 4U) 
                                               & (IData)(vlSelf->core__DOT__rename__DOT__chkpt_need)))));
    if ((vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue
         [7U] >> 0x1fU)) {
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
    vlSelf->core__DOT__dispatch__DOT__DU__DOT__mul_ready[0U] 
        = (1U & (~ vlSelf->core__DOT__mul_div_buffer_busy
                 [0U]));
    vlSelf->core__DOT__dispatch__DOT__DU__DOT__alu_ready[0U] 
        = (1U & (~ vlSelf->core__DOT__alu_buffer_busy
                 [0U]));
    vlSelf->core__DOT__dispatch__DOT__DU__DOT__alu_ready[1U] 
        = (1U & (~ vlSelf->core__DOT__alu_buffer_busy
                 [1U]));
    vlSelf->core__DOT____Vcellinp__flush_controller__sqN[0U] 
        = vlSelf->core__DOT__br_jalr_sqN[0U];
    vlSelf->core__DOT____Vcellinp__flush_controller__sqN[1U] 
        = vlSelf->core__DOT__br_jalr_sqN[1U];
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
    if ((1U & vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue
         [7U][2U])) {
        vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 4U;
    }
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
    vlSelf->core__DOT__CDB[0U] = vlSelf->core__DOT__int_cdb_lines
        [0U];
    vlSelf->core__DOT__CDB[1U] = vlSelf->core__DOT__int_cdb_lines
        [1U];
    vlSelf->core__DOT__CDB[2U] = vlSelf->core__DOT__int_cdb_lines
        [2U];
    vlSelf->core__DOT__CDB[3U] = vlSelf->core__DOT__lsu_cdb_lines
        [0U];
    vlSelf->core__DOT__fetch__DOT__FB__DOT__can_read 
        = ((~ (IData)(vlSelf->core__DOT__rename_busy)) 
           & (0U < (IData)(vlSelf->core__DOT__fetch__DOT__FB__DOT__count)));
    if (vlSelf->core__DOT__dispatch__DOT__DU__DOT__mul_ready
        [0U]) {
        vlSelf->core__DOT__dispatch__DOT__DU__DOT__unnamedblk3__DOT__unnamedblk4__DOT__s = 2U;
    }
    if (vlSelf->core__DOT__dispatch__DOT__DU__DOT__alu_ready
        [0U]) {
        vlSelf->core__DOT__dispatch__DOT__DU__DOT__unnamedblk1__DOT__g_alu_assign__DOT__unnamedblk2__DOT__s = 2U;
    }
    if (vlSelf->core__DOT__dispatch__DOT__DU__DOT__alu_ready
        [1U]) {
        vlSelf->core__DOT__dispatch__DOT__DU__DOT__unnamedblk1__DOT__g_alu_assign__DOT__unnamedblk2__DOT__s = 2U;
    }
    vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__tag_ready[0U] 
        = vlSelf->core__DOT__reg_ready[0U][0U];
    vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__tag_ready[1U] 
        = vlSelf->core__DOT__reg_ready[0U][1U];
    vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__tag_ready[0U] 
        = vlSelf->core__DOT__reg_ready[1U][0U];
    vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__tag_ready[1U] 
        = vlSelf->core__DOT__reg_ready[1U][1U];
    vlSelf->core__DOT__issue__DOT____Vcellinp__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__tag_ready[0U] 
        = vlSelf->core__DOT__reg_ready[2U][0U];
    vlSelf->core__DOT__issue__DOT____Vcellinp__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__tag_ready[1U] 
        = vlSelf->core__DOT__reg_ready[2U][1U];
    vlSelf->core__DOT__issue__DOT____Vcellinp__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__tag_ready[0U] 
        = vlSelf->core__DOT__reg_ready[3U][0U];
    vlSelf->core__DOT__issue__DOT____Vcellinp__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__tag_ready[1U] 
        = vlSelf->core__DOT__reg_ready[3U][1U];
    vlSelf->core__DOT__CDB_sqN[0U] = (0x7fU & (IData)(
                                                      (vlSelf->core__DOT__CDB
                                                       [0U] 
                                                       >> 0x26U)));
    vlSelf->core__DOT__CDB_sqN[1U] = (0x7fU & (IData)(
                                                      (vlSelf->core__DOT__CDB
                                                       [1U] 
                                                       >> 0x26U)));
    vlSelf->core__DOT__CDB_sqN[2U] = (0x7fU & (IData)(
                                                      (vlSelf->core__DOT__CDB
                                                       [2U] 
                                                       >> 0x26U)));
    vlSelf->core__DOT__CDB_sqN[3U] = (0x7fU & (IData)(
                                                      (vlSelf->core__DOT__CDB
                                                       [3U] 
                                                       >> 0x26U)));
    vlSelf->core__DOT__CDB_result[0U] = (IData)(vlSelf->core__DOT__CDB
                                                [0U]);
    vlSelf->core__DOT__CDB_result[1U] = (IData)(vlSelf->core__DOT__CDB
                                                [1U]);
    vlSelf->core__DOT__CDB_result[2U] = (IData)(vlSelf->core__DOT__CDB
                                                [2U]);
    vlSelf->core__DOT__CDB_result[3U] = (IData)(vlSelf->core__DOT__CDB
                                                [3U]);
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
    vlSelf->core__DOT__fetch__DOT__FB__DOT__out_count 
        = ((IData)(vlSelf->core__DOT__fetch__DOT__FB__DOT__can_read)
            ? ((2U <= (IData)(vlSelf->core__DOT__fetch__DOT__FB__DOT__count))
                ? 2U : (3U & (IData)(vlSelf->core__DOT__fetch__DOT__FB__DOT__count)))
            : 0U);
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
    vlSelf->core__DOT__fetch__DOT__FB__DOT__idx_head 
        = vlSelf->core__DOT__fetch__DOT__FB__DOT__head;
    if ((0U < (IData)(vlSelf->core__DOT__fetch__DOT__FB__DOT__out_count))) {
        vlSelf->core__DOT__fetch_instr[0U][0U] = ((
                                                   vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                                                   [vlSelf->core__DOT__fetch__DOT__FB__DOT__idx_head][2U] 
                                                   << 0x19U) 
                                                  | (vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                                                     [vlSelf->core__DOT__fetch__DOT__FB__DOT__idx_head][1U] 
                                                     >> 7U));
        vlSelf->core__DOT__fetch_instr[0U][1U] = ((
                                                   vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                                                   [vlSelf->core__DOT__fetch__DOT__FB__DOT__idx_head][1U] 
                                                   << 0x19U) 
                                                  | (vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                                                     [vlSelf->core__DOT__fetch__DOT__FB__DOT__idx_head][0U] 
                                                     >> 7U));
        vlSelf->core__DOT__fetch_instr[0U][2U] = (0x80U 
                                                  | vlSelf->core__DOT__fetch_instr
                                                  [0U][2U]);
    } else {
        vlSelf->core__DOT__fetch_instr[0U][2U] = (0x7fU 
                                                  & vlSelf->core__DOT__fetch_instr
                                                  [0U][2U]);
    }
    vlSelf->core__DOT__fetch__DOT__FB__DOT__idx_head 
        = (0xfU & ((0x10U > ((IData)(1U) + (IData)(vlSelf->core__DOT__fetch__DOT__FB__DOT__head)))
                    ? ((IData)(1U) + (IData)(vlSelf->core__DOT__fetch__DOT__FB__DOT__head))
                    : ((IData)(0xfffffff1U) + (IData)(vlSelf->core__DOT__fetch__DOT__FB__DOT__head))));
    if ((1U < (IData)(vlSelf->core__DOT__fetch__DOT__FB__DOT__out_count))) {
        vlSelf->core__DOT__fetch_instr[1U][0U] = ((
                                                   vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                                                   [vlSelf->core__DOT__fetch__DOT__FB__DOT__idx_head][2U] 
                                                   << 0x19U) 
                                                  | (vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                                                     [vlSelf->core__DOT__fetch__DOT__FB__DOT__idx_head][1U] 
                                                     >> 7U));
        vlSelf->core__DOT__fetch_instr[1U][1U] = ((
                                                   vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                                                   [vlSelf->core__DOT__fetch__DOT__FB__DOT__idx_head][1U] 
                                                   << 0x19U) 
                                                  | (vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer
                                                     [vlSelf->core__DOT__fetch__DOT__FB__DOT__idx_head][0U] 
                                                     >> 7U));
        vlSelf->core__DOT__fetch_instr[1U][2U] = (0x80U 
                                                  | vlSelf->core__DOT__fetch_instr
                                                  [1U][2U]);
    } else {
        vlSelf->core__DOT__fetch_instr[1U][2U] = (0x7fU 
                                                  & vlSelf->core__DOT__fetch_instr
                                                  [1U][2U]);
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
    vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
        = vlSelf->core__DOT__fetch_instr[0U][0U];
    vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode 
        = (0x7fU & vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw);
    vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__funct3 
        = (7U & (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                 >> 0xcU));
    vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm12 
        = ((0xfe0U & (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                      >> 0x14U)) | (0x1fU & (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                             >> 7U)));
    vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm13 
        = ((0x1000U & (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                       >> 0x13U)) | ((0x800U & (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                            >> 7U)))));
    vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm21 
        = ((0x100000U & (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                         >> 0xbU)) | ((0xff000U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw) 
                                      | ((0x800U & 
                                          (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                           >> 9U)) 
                                         | (0x7feU 
                                            & (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                               >> 0x14U)))));
    vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate[0U] 
        = ((0x80U & vlSelf->core__DOT__fetch_instr[0U][2U])
            ? ((0x40U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                ? ((0x20U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                    ? ((0x10U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                        ? 0U : ((8U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                 ? ((4U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                     ? ((2U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                         ? ((1U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                             ? (((- (IData)(
                                                            (1U 
                                                             & (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm21 
                                                                >> 0x14U)))) 
                                                 << 0x15U) 
                                                | vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm21)
                                             : 0U) : 0U)
                                     : 0U) : ((4U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                               ? ((2U 
                                                   & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                       >> 0x14U))
                                                    : 0U)
                                                   : 0U)
                                               : ((2U 
                                                   & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm13) 
                                                                    >> 0xcU)))) 
                                                     << 0xdU) 
                                                    | (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm13))
                                                    : 0U)
                                                   : 0U))))
                    : 0U) : ((0x20U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                              ? ((0x10U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                  ? ((8U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                      ? 0U : ((4U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                               ? ((2U 
                                                   & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                                    ? 
                                                   (0xfffff000U 
                                                    & vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw)
                                                    : 0U)
                                                   : 0U)
                                               : 0U))
                                  : ((8U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                      ? 0U : ((4U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                               ? 0U
                                               : ((2U 
                                                   & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm12) 
                                                                    >> 0xbU)))) 
                                                     << 0xcU) 
                                                    | (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm12))
                                                    : 0U)
                                                   : 0U))))
                              : ((0x10U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                  ? ((8U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                      ? 0U : ((4U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                               ? ((2U 
                                                   & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                                    ? 
                                                   (0xfffff000U 
                                                    & vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw)
                                                    : 0U)
                                                   : 0U)
                                               : ((2U 
                                                   & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                                    ? 
                                                   (((1U 
                                                      == (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__funct3)) 
                                                     | (5U 
                                                        == (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__funct3)))
                                                     ? 
                                                    (0x1fU 
                                                     & (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                        >> 0x14U))
                                                     : 
                                                    (((- (IData)(
                                                                 (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                        >> 0x14U)))
                                                    : 0U)
                                                   : 0U)))
                                  : ((8U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                      ? 0U : ((4U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                               ? 0U
                                               : ((2U 
                                                   & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                       >> 0x14U))
                                                    : 0U)
                                                   : 0U))))))
            : 0U);
    vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
        = vlSelf->core__DOT__fetch_instr[1U][0U];
    vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode 
        = (0x7fU & vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw);
    vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__funct3 
        = (7U & (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                 >> 0xcU));
    vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm12 
        = ((0xfe0U & (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                      >> 0x14U)) | (0x1fU & (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                             >> 7U)));
    vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm13 
        = ((0x1000U & (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                       >> 0x13U)) | ((0x800U & (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                << 4U)) 
                                     | ((0x7e0U & (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                   >> 0x14U)) 
                                        | (0x1eU & 
                                           (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                            >> 7U)))));
    vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm21 
        = ((0x100000U & (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                         >> 0xbU)) | ((0xff000U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw) 
                                      | ((0x800U & 
                                          (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                           >> 9U)) 
                                         | (0x7feU 
                                            & (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                               >> 0x14U)))));
    vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate[1U] 
        = ((0x80U & vlSelf->core__DOT__fetch_instr[1U][2U])
            ? ((0x40U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                ? ((0x20U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                    ? ((0x10U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                        ? 0U : ((8U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                 ? ((4U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                     ? ((2U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                         ? ((1U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                             ? (((- (IData)(
                                                            (1U 
                                                             & (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm21 
                                                                >> 0x14U)))) 
                                                 << 0x15U) 
                                                | vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm21)
                                             : 0U) : 0U)
                                     : 0U) : ((4U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                               ? ((2U 
                                                   & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                       >> 0x14U))
                                                    : 0U)
                                                   : 0U)
                                               : ((2U 
                                                   & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm13) 
                                                                    >> 0xcU)))) 
                                                     << 0xdU) 
                                                    | (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm13))
                                                    : 0U)
                                                   : 0U))))
                    : 0U) : ((0x20U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                              ? ((0x10U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                  ? ((8U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                      ? 0U : ((4U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                               ? ((2U 
                                                   & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                                    ? 
                                                   (0xfffff000U 
                                                    & vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw)
                                                    : 0U)
                                                   : 0U)
                                               : 0U))
                                  : ((8U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                      ? 0U : ((4U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                               ? 0U
                                               : ((2U 
                                                   & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                                    ? 
                                                   (((- (IData)(
                                                                (1U 
                                                                 & ((IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm12) 
                                                                    >> 0xbU)))) 
                                                     << 0xcU) 
                                                    | (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm12))
                                                    : 0U)
                                                   : 0U))))
                              : ((0x10U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                  ? ((8U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                      ? 0U : ((4U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                               ? ((2U 
                                                   & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                                    ? 
                                                   (0xfffff000U 
                                                    & vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw)
                                                    : 0U)
                                                   : 0U)
                                               : ((2U 
                                                   & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                                    ? 
                                                   (((1U 
                                                      == (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__funct3)) 
                                                     | (5U 
                                                        == (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__funct3)))
                                                     ? 
                                                    (0x1fU 
                                                     & (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                        >> 0x14U))
                                                     : 
                                                    (((- (IData)(
                                                                 (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                        >> 0x14U)))
                                                    : 0U)
                                                   : 0U)))
                                  : ((8U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                      ? 0U : ((4U & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                               ? 0U
                                               : ((2U 
                                                   & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw 
                                                       >> 0x14U))
                                                    : 0U)
                                                   : 0U))))))
            : 0U);
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
    vlSelf->core__DOT__decode__DOT__decoder_out[0U][3U] 
        = ((0x1fU & vlSelf->core__DOT__decode__DOT__decoder_out
            [0U][3U]) | (0x20U & (vlSelf->core__DOT__fetch_instr
                                  [0U][2U] >> 2U)));
    vlSelf->core__DOT__decode__DOT__decoder_out[0U][2U] 
        = ((0x3fffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
            [0U][2U]) | (vlSelf->core__DOT__fetch_instr
                         [0U][2U] << 0x1eU));
    vlSelf->core__DOT__decode__DOT__decoder_out[0U][3U] 
        = ((0x20U & vlSelf->core__DOT__decode__DOT__decoder_out
            [0U][3U]) | (0x1fU & (vlSelf->core__DOT__fetch_instr
                                  [0U][2U] >> 2U)));
    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
        = ((0x3fffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
            [0U][1U]) | (vlSelf->core__DOT__fetch_instr
                         [0U][1U] << 0x1eU));
    vlSelf->core__DOT__decode__DOT__decoder_out[0U][2U] 
        = ((0xc0000000U & vlSelf->core__DOT__decode__DOT__decoder_out
            [0U][2U]) | (vlSelf->core__DOT__fetch_instr
                         [0U][1U] >> 2U));
    vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode[0U] 
        = (0x7fU & vlSelf->core__DOT__fetch_instr[0U][0U]);
    if ((0x40U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
         [0U])) {
        if ((0x20U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
             [0U])) {
            if ((0x10U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                 [0U])) {
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0x10000000U | (0xcfffffffU & 
                                      vlSelf->core__DOT__decode__DOT__decoder_out
                                      [0U][1U]));
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
            } else if ((8U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                        [0U])) {
                if ((4U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                     [0U])) {
                    if ((2U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                         [0U])) {
                        if ((1U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                             [0U])) {
                            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                                = (0x10000000U | (0xcfffffffU 
                                                  & vlSelf->core__DOT__decode__DOT__decoder_out
                                                  [0U][1U]));
                            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                                = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                   [0U][1U]);
                            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                                = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                   [0U][1U]);
                            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                                = ((0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                    [0U][1U]) | (0x3e00U 
                                                 & (vlSelf->core__DOT__fetch_instr
                                                    [0U][0U] 
                                                    << 2U)));
                            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                                = ((0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                    [0U][0U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                                 [0U] 
                                                 << 9U));
                            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                                = ((0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                                    [0U][1U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                                 [0U] 
                                                 >> 0x17U));
                            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                                = (0x100U | vlSelf->core__DOT__decode__DOT__decoder_out
                                   [0U][0U]);
                            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                                = (0x40U | (0xffffff3fU 
                                            & vlSelf->core__DOT__decode__DOT__decoder_out
                                            [0U][0U]));
                            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                                = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                                   [0U][0U]);
                            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                                = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                                   [0U][0U]);
                            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                                = (0x1000000U | (0xf0ffffffU 
                                                 & vlSelf->core__DOT__decode__DOT__decoder_out
                                                 [0U][1U]));
                        } else {
                            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                                = (0x10000000U | (0xcfffffffU 
                                                  & vlSelf->core__DOT__decode__DOT__decoder_out
                                                  [0U][1U]));
                            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                                = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                   [0U][1U]);
                            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                                = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                   [0U][1U]);
                            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                                = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                   [0U][1U]);
                            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                                = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                   [0U][0U]);
                            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                                = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                                   [0U][1U]);
                            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                                = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                   [0U][0U]);
                            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                                = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                                   [0U][0U]);
                            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                                = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                                   [0U][0U]);
                            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                                = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                                   [0U][0U]);
                            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                                = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                   [0U][1U]);
                        }
                    } else {
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = (0x10000000U | (0xcfffffffU 
                                              & vlSelf->core__DOT__decode__DOT__decoder_out
                                              [0U][1U]));
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][1U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][1U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][1U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                            = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][1U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                            = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                            = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                            = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                            = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][1U]);
                    }
                } else {
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0x10000000U | (0xcfffffffU 
                                          & vlSelf->core__DOT__decode__DOT__decoder_out
                                          [0U][1U]));
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                }
            } else if ((4U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                        [0U])) {
                if ((2U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                     [0U])) {
                    if ((1U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                         [0U])) {
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = (0x10000000U | (0xcfffffffU 
                                              & vlSelf->core__DOT__decode__DOT__decoder_out
                                              [0U][1U]));
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = ((0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                [0U][1U]) | (0xf80000U 
                                             & (vlSelf->core__DOT__fetch_instr
                                                [0U][0U] 
                                                << 4U)));
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][1U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = ((0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                [0U][1U]) | (0x3e00U 
                                             & (vlSelf->core__DOT__fetch_instr
                                                [0U][0U] 
                                                << 2U)));
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                            = ((0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                [0U][0U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                             [0U] << 9U));
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = ((0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                                [0U][1U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                             [0U] >> 0x17U));
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                            = (0x100U | vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                            = (0x80U | (0xffffff3fU 
                                        & vlSelf->core__DOT__decode__DOT__decoder_out
                                        [0U][0U]));
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                            = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                            = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = (0x1000000U | (0xf0ffffffU 
                                             & vlSelf->core__DOT__decode__DOT__decoder_out
                                             [0U][1U]));
                    } else {
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = (0x10000000U | (0xcfffffffU 
                                              & vlSelf->core__DOT__decode__DOT__decoder_out
                                              [0U][1U]));
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][1U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][1U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][1U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                            = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][1U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                            = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                            = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                            = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                            = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][1U]);
                    }
                } else {
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0x10000000U | (0xcfffffffU 
                                          & vlSelf->core__DOT__decode__DOT__decoder_out
                                          [0U][1U]));
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                }
            } else if ((2U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                        [0U])) {
                if ((1U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                     [0U])) {
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0x10000000U | (0xcfffffffU 
                                          & vlSelf->core__DOT__decode__DOT__decoder_out
                                          [0U][1U]));
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = ((0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                            [0U][1U]) | (0xf80000U 
                                         & (vlSelf->core__DOT__fetch_instr
                                            [0U][0U] 
                                            << 4U)));
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = ((0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                            [0U][1U]) | (0x7c000U & 
                                         (vlSelf->core__DOT__fetch_instr
                                          [0U][0U] 
                                          >> 6U)));
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = ((0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                            [0U][0U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                         [0U] << 9U));
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = ((0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                            [0U][1U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                         [0U] >> 0x17U));
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0x100U | vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xb000000U | (0xf0ffffffU 
                                         & vlSelf->core__DOT__decode__DOT__decoder_out
                                         [0U][1U]));
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = ((0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                            [0U][0U]) | (((0x4000U 
                                           & vlSelf->core__DOT__fetch_instr
                                           [0U][0U])
                                           ? ((0x2000U 
                                               & vlSelf->core__DOT__fetch_instr
                                               [0U][0U])
                                               ? ((0x1000U 
                                                   & vlSelf->core__DOT__fetch_instr
                                                   [0U][0U])
                                                   ? 6U
                                                   : 5U)
                                               : ((0x1000U 
                                                   & vlSelf->core__DOT__fetch_instr
                                                   [0U][0U])
                                                   ? 4U
                                                   : 3U))
                                           : ((0x2000U 
                                               & vlSelf->core__DOT__fetch_instr
                                               [0U][0U])
                                               ? 0U
                                               : ((0x1000U 
                                                   & vlSelf->core__DOT__fetch_instr
                                                   [0U][0U])
                                                   ? 2U
                                                   : 1U))) 
                                         << 2U));
                } else {
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0x10000000U | (0xcfffffffU 
                                          & vlSelf->core__DOT__decode__DOT__decoder_out
                                          [0U][1U]));
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                }
            } else {
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0x10000000U | (0xcfffffffU & 
                                      vlSelf->core__DOT__decode__DOT__decoder_out
                                      [0U][1U]));
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
            }
        } else {
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0x10000000U | (0xcfffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                  [0U][1U]));
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
        }
    } else if ((0x20U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                [0U])) {
        if ((0x10U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
             [0U])) {
            if ((8U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                 [0U])) {
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0x10000000U | (0xcfffffffU & 
                                      vlSelf->core__DOT__decode__DOT__decoder_out
                                      [0U][1U]));
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
            } else if ((4U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                        [0U])) {
                if ((2U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                     [0U])) {
                    if ((1U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                         [0U])) {
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = (0x10000000U | (0xcfffffffU 
                                              & vlSelf->core__DOT__decode__DOT__decoder_out
                                              [0U][1U]));
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][1U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][1U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = ((0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                [0U][1U]) | (0x3e00U 
                                             & (vlSelf->core__DOT__fetch_instr
                                                [0U][0U] 
                                                << 2U)));
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                            = ((0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                [0U][0U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                             [0U] << 9U));
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = ((0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                                [0U][1U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                             [0U] >> 0x17U));
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                            = (0x100U | vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                            = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                            = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                            = (2U | (0xfffffffcU & 
                                     vlSelf->core__DOT__decode__DOT__decoder_out
                                     [0U][0U]));
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = (0xb000000U | (0xf0ffffffU 
                                             & vlSelf->core__DOT__decode__DOT__decoder_out
                                             [0U][1U]));
                    } else {
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = (0x10000000U | (0xcfffffffU 
                                              & vlSelf->core__DOT__decode__DOT__decoder_out
                                              [0U][1U]));
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][1U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][1U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][1U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                            = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][1U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                            = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                            = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                            = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                            = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [0U][1U]);
                    }
                } else {
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0x10000000U | (0xcfffffffU 
                                          & vlSelf->core__DOT__decode__DOT__decoder_out
                                          [0U][1U]));
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                }
            } else if ((2U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                        [0U])) {
                if ((1U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                     [0U])) {
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = ((0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                            [0U][1U]) | (0xf80000U 
                                         & (vlSelf->core__DOT__fetch_instr
                                            [0U][0U] 
                                            << 4U)));
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = ((0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                            [0U][1U]) | (0x7c000U & 
                                         (vlSelf->core__DOT__fetch_instr
                                          [0U][0U] 
                                          >> 6U)));
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = ((0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                            [0U][1U]) | (0x3e00U & 
                                         (vlSelf->core__DOT__fetch_instr
                                          [0U][0U] 
                                          << 2U)));
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    if ((1U == (vlSelf->core__DOT__fetch_instr
                                [0U][0U] >> 0x19U))) {
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = (0x20000000U | (0xcfffffffU 
                                              & vlSelf->core__DOT__decode__DOT__decoder_out
                                              [0U][1U]));
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = ((0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                [0U][1U]) | (((0x4000U 
                                               & vlSelf->core__DOT__fetch_instr
                                               [0U][0U])
                                               ? ((0x2000U 
                                                   & vlSelf->core__DOT__fetch_instr
                                                   [0U][0U])
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->core__DOT__fetch_instr
                                                    [0U][0U])
                                                    ? 8U
                                                    : 7U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->core__DOT__fetch_instr
                                                    [0U][0U])
                                                    ? 6U
                                                    : 5U))
                                               : ((0x2000U 
                                                   & vlSelf->core__DOT__fetch_instr
                                                   [0U][0U])
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->core__DOT__fetch_instr
                                                    [0U][0U])
                                                    ? 4U
                                                    : 3U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->core__DOT__fetch_instr
                                                    [0U][0U])
                                                    ? 2U
                                                    : 1U))) 
                                             << 0x18U));
                    } else {
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = (0x10000000U | (0xcfffffffU 
                                              & vlSelf->core__DOT__decode__DOT__decoder_out
                                              [0U][1U]));
                        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                            = ((0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                [0U][1U]) | (((0x4000U 
                                               & vlSelf->core__DOT__fetch_instr
                                               [0U][0U])
                                               ? ((0x2000U 
                                                   & vlSelf->core__DOT__fetch_instr
                                                   [0U][0U])
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->core__DOT__fetch_instr
                                                    [0U][0U])
                                                    ? 0xaU
                                                    : 9U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->core__DOT__fetch_instr
                                                    [0U][0U])
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (vlSelf->core__DOT__fetch_instr
                                                      [0U][0U] 
                                                      >> 0x19U))
                                                     ? 7U
                                                     : 8U)
                                                    : 6U))
                                               : ((0x2000U 
                                                   & vlSelf->core__DOT__fetch_instr
                                                   [0U][0U])
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->core__DOT__fetch_instr
                                                    [0U][0U])
                                                    ? 5U
                                                    : 4U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->core__DOT__fetch_instr
                                                    [0U][0U])
                                                    ? 3U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (vlSelf->core__DOT__fetch_instr
                                                      [0U][0U] 
                                                      >> 0x19U))
                                                     ? 1U
                                                     : 2U)))) 
                                             << 0x18U));
                    }
                } else {
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0x10000000U | (0xcfffffffU 
                                          & vlSelf->core__DOT__decode__DOT__decoder_out
                                          [0U][1U]));
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                }
            } else {
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0x10000000U | (0xcfffffffU & 
                                      vlSelf->core__DOT__decode__DOT__decoder_out
                                      [0U][1U]));
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
            }
        } else if ((8U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                    [0U])) {
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0x10000000U | (0xcfffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                  [0U][1U]));
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
        } else if ((4U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                    [0U])) {
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0x10000000U | (0xcfffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                  [0U][1U]));
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
        } else if ((2U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                    [0U])) {
            if ((1U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                 [0U])) {
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0x30000000U | vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = ((0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                        [0U][1U]) | (0xf80000U & (vlSelf->core__DOT__fetch_instr
                                                  [0U][0U] 
                                                  << 4U)));
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = ((0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                        [0U][1U]) | (0x7c000U & (vlSelf->core__DOT__fetch_instr
                                                 [0U][0U] 
                                                 >> 6U)));
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = ((0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                        [0U][0U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                     [0U] << 9U));
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = ((0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                        [0U][1U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                     [0U] >> 0x17U));
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0x100U | vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = ((0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                        [0U][1U]) | (((0U == (7U & 
                                              (vlSelf->core__DOT__fetch_instr
                                               [0U][0U] 
                                               >> 0xcU)))
                                       ? 6U : ((1U 
                                                == 
                                                (7U 
                                                 & (vlSelf->core__DOT__fetch_instr
                                                    [0U][0U] 
                                                    >> 0xcU)))
                                                ? 7U
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->core__DOT__fetch_instr
                                                        [0U][0U] 
                                                        >> 0xcU)))
                                                    ? 8U
                                                    : 0U))) 
                                     << 0x18U));
            } else {
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0x10000000U | (0xcfffffffU & 
                                      vlSelf->core__DOT__decode__DOT__decoder_out
                                      [0U][1U]));
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
            }
        } else {
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0x10000000U | (0xcfffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                  [0U][1U]));
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
        }
    } else if ((0x10U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                [0U])) {
        if ((8U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
             [0U])) {
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0x10000000U | (0xcfffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                  [0U][1U]));
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
        } else if ((4U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                    [0U])) {
            if ((2U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                 [0U])) {
                if ((1U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                     [0U])) {
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0x10000000U | (0xcfffffffU 
                                          & vlSelf->core__DOT__decode__DOT__decoder_out
                                          [0U][1U]));
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = ((0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                            [0U][1U]) | (0x3e00U & 
                                         (vlSelf->core__DOT__fetch_instr
                                          [0U][0U] 
                                          << 2U)));
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = ((0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                            [0U][0U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                         [0U] << 9U));
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = ((0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                            [0U][1U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                         [0U] >> 0x17U));
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0x100U | vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (1U | (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                                 [0U][0U]));
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0x1000000U | (0xf0ffffffU 
                                         & vlSelf->core__DOT__decode__DOT__decoder_out
                                         [0U][1U]));
                } else {
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0x10000000U | (0xcfffffffU 
                                          & vlSelf->core__DOT__decode__DOT__decoder_out
                                          [0U][1U]));
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                        = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                        = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [0U][1U]);
                }
            } else {
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0x10000000U | (0xcfffffffU & 
                                      vlSelf->core__DOT__decode__DOT__decoder_out
                                      [0U][1U]));
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
            }
        } else if ((2U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                    [0U])) {
            if ((1U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                 [0U])) {
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0x10000000U | (0xcfffffffU & 
                                      vlSelf->core__DOT__decode__DOT__decoder_out
                                      [0U][1U]));
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = ((0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                        [0U][1U]) | (0xf80000U & (vlSelf->core__DOT__fetch_instr
                                                  [0U][0U] 
                                                  << 4U)));
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = ((0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                        [0U][1U]) | (0x3e00U & (vlSelf->core__DOT__fetch_instr
                                                [0U][0U] 
                                                << 2U)));
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = ((0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                        [0U][0U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                     [0U] << 9U));
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = ((0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                        [0U][1U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                     [0U] >> 0x17U));
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0x100U | vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = ((0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                        [0U][1U]) | (((0x4000U & vlSelf->core__DOT__fetch_instr
                                       [0U][0U]) ? 
                                      ((0x2000U & vlSelf->core__DOT__fetch_instr
                                        [0U][0U]) ? 
                                       ((0x1000U & 
                                         vlSelf->core__DOT__fetch_instr
                                         [0U][0U]) ? 0xaU
                                         : 9U) : ((0x1000U 
                                                   & vlSelf->core__DOT__fetch_instr
                                                   [0U][0U])
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (vlSelf->core__DOT__fetch_instr
                                                     [0U][0U] 
                                                     >> 0x19U))
                                                    ? 7U
                                                    : 8U)
                                                   : 6U))
                                       : ((0x2000U 
                                           & vlSelf->core__DOT__fetch_instr
                                           [0U][0U])
                                           ? ((0x1000U 
                                               & vlSelf->core__DOT__fetch_instr
                                               [0U][0U])
                                               ? 5U
                                               : 4U)
                                           : ((0x1000U 
                                               & vlSelf->core__DOT__fetch_instr
                                               [0U][0U])
                                               ? 3U
                                               : 1U))) 
                                     << 0x18U));
            } else {
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0x10000000U | (0xcfffffffU & 
                                      vlSelf->core__DOT__decode__DOT__decoder_out
                                      [0U][1U]));
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                    = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                    = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [0U][1U]);
            }
        } else {
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0x10000000U | (0xcfffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                  [0U][1U]));
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
        }
    } else if ((8U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                [0U])) {
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
            = (0x10000000U | (0xcfffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                              [0U][1U]));
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
            = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [0U][1U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
            = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [0U][1U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
            = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [0U][1U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
            = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [0U][0U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
            = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
               [0U][1U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
            = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [0U][0U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
            = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
               [0U][0U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
            = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
               [0U][0U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
            = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
               [0U][0U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
            = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [0U][1U]);
    } else if ((4U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                [0U])) {
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
            = (0x10000000U | (0xcfffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                              [0U][1U]));
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
            = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [0U][1U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
            = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [0U][1U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
            = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [0U][1U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
            = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [0U][0U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
            = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
               [0U][1U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
            = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [0U][0U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
            = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
               [0U][0U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
            = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
               [0U][0U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
            = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
               [0U][0U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
            = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [0U][1U]);
    } else if ((2U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                [0U])) {
        if ((1U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
             [0U])) {
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0x30000000U | vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = ((0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                    [0U][1U]) | (0xf80000U & (vlSelf->core__DOT__fetch_instr
                                              [0U][0U] 
                                              << 4U)));
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = ((0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                    [0U][1U]) | (0x3e00U & (vlSelf->core__DOT__fetch_instr
                                            [0U][0U] 
                                            << 2U)));
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = ((0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                    [0U][0U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                 [0U] << 9U));
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = ((0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                    [0U][1U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                 [0U] >> 0x17U));
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0x100U | vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = ((0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                    [0U][1U]) | (((0x4000U & vlSelf->core__DOT__fetch_instr
                                   [0U][0U]) ? ((0x2000U 
                                                 & vlSelf->core__DOT__fetch_instr
                                                 [0U][0U])
                                                 ? 0U
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->core__DOT__fetch_instr
                                                  [0U][0U])
                                                  ? 5U
                                                  : 4U))
                                   : ((0x2000U & vlSelf->core__DOT__fetch_instr
                                       [0U][0U]) ? 
                                      ((0x1000U & vlSelf->core__DOT__fetch_instr
                                        [0U][0U]) ? 0U
                                        : 3U) : ((0x1000U 
                                                  & vlSelf->core__DOT__fetch_instr
                                                  [0U][0U])
                                                  ? 2U
                                                  : 1U))) 
                                 << 0x18U));
        } else {
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0x10000000U | (0xcfffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                  [0U][1U]));
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
                = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
                = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [0U][1U]);
        }
    } else {
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
            = (0x10000000U | (0xcfffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                              [0U][1U]));
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
            = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [0U][1U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
            = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [0U][1U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
            = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [0U][1U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
            = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [0U][0U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
            = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
               [0U][1U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
            = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [0U][0U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
            = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
               [0U][0U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
            = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
               [0U][0U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][0U] 
            = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
               [0U][0U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[0U][1U] 
            = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [0U][1U]);
    }
}
