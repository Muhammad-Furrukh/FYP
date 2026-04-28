// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"
#include "Vcore__Syms.h"
#include "Vcore___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__act(Vcore___024root* vlSelf);
#endif  // VL_DEBUG

void Vcore___024root___eval_triggers__act(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->core__DOT__flush) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__core__DOT__flush__1)));
    vlSelf->__VactTriggered.set(1U, vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_alu.neq(vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_alu__1));
    vlSelf->__VactTriggered.set(2U, vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu.neq(vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu__1));
    vlSelf->__VactTriggered.set(3U, vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_mul.neq(vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_mul__1));
    vlSelf->__VactTriggered.set(4U, vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_mul.neq(vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_ready_mul__1));
    vlSelf->__VactTriggered.set(5U, vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_lsu.neq(vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_lsu__1));
    vlSelf->__VactTriggered.set(6U, vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_lsu.neq(vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_ready_lsu__1));
    vlSelf->__VactTriggered.set(7U, vlSelf->core__DOT__rename__DOT__masked.neq(vlSelf->__Vtrigprevexpr___TOP__core__DOT__rename__DOT__masked__1));
    vlSelf->__VactTriggered.set(8U, ((IData)(vlSelf->clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))));
    vlSelf->__VactTriggered.set(9U, (((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk__0))) 
                                     | ((IData)(vlSelf->rst) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__rst__0)))));
    vlSelf->__VactTriggered.set(0xaU, (((IData)(vlSelf->clk_m) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_m__0))) 
                                       | ((IData)(vlSelf->rst_m) 
                                          & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__rst_m__0)))));
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__flush__1 
        = vlSelf->core__DOT__flush;
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_alu__1.assign(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_alu);
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu__1.assign(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu);
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_mul__1.assign(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_mul);
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_ready_mul__1.assign(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_mul);
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_lsu__1.assign(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_lsu);
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_ready_lsu__1.assign(vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_lsu);
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__rename__DOT__masked__1.assign(vlSelf->core__DOT__rename__DOT__masked);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = vlSelf->rst;
    vlSelf->__Vtrigprevexpr___TOP__clk_m__0 = vlSelf->clk_m;
    vlSelf->__Vtrigprevexpr___TOP__rst_m__0 = vlSelf->rst_m;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
        vlSelf->__VactTriggered.set(1U, 1U);
        vlSelf->__VactTriggered.set(2U, 1U);
        vlSelf->__VactTriggered.set(3U, 1U);
        vlSelf->__VactTriggered.set(4U, 1U);
        vlSelf->__VactTriggered.set(5U, 1U);
        vlSelf->__VactTriggered.set(6U, 1U);
        vlSelf->__VactTriggered.set(7U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcore___024root___dump_triggers__act(vlSelf);
    }
#endif
}
