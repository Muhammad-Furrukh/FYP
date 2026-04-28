// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"
#include "Vcore__Syms.h"
#include "Vcore___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__stl(Vcore___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcore___024root___eval_triggers__stl(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
    vlSelf->__VstlTriggered.set(1U, ((IData)(vlSelf->core__DOT__flush) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__core__DOT__flush__0)));
    vlSelf->__VstlTriggered.set(2U, vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_alu.neq(vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_alu__0));
    vlSelf->__VstlTriggered.set(3U, vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu.neq(vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu__0));
    vlSelf->__VstlTriggered.set(4U, vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_mul.neq(vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_mul__0));
    vlSelf->__VstlTriggered.set(5U, vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_mul.neq(vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_ready_mul__0));
    vlSelf->__VstlTriggered.set(6U, vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_lsu.neq(vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_lsu__0));
    vlSelf->__VstlTriggered.set(7U, vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_lsu.neq(vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_ready_lsu__0));
    vlSelf->__VstlTriggered.set(8U, vlSelf->core__DOT__rename__DOT__masked.neq(vlSelf->__Vtrigprevexpr___TOP__core__DOT__rename__DOT__masked__0));
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__flush__0 
        = vlSelf->core__DOT__flush;
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_alu__0.assign(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_alu);
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu__0.assign(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu);
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_mul__0.assign(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_mul);
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_ready_mul__0.assign(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_mul);
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_lsu__0.assign(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_lsu);
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_ready_lsu__0.assign(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_lsu);
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__rename__DOT__masked__0.assign(vlSelf->core__DOT__rename__DOT__masked);
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.set(1U, 1U);
        vlSelf->__VstlTriggered.set(2U, 1U);
        vlSelf->__VstlTriggered.set(3U, 1U);
        vlSelf->__VstlTriggered.set(4U, 1U);
        vlSelf->__VstlTriggered.set(5U, 1U);
        vlSelf->__VstlTriggered.set(6U, 1U);
        vlSelf->__VstlTriggered.set(7U, 1U);
        vlSelf->__VstlTriggered.set(8U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcore___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
