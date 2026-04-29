// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

VL_ATTR_COLD void Vcore___024root___stl_sequent__TOP__1(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___stl_sequent__TOP__1\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    QData/*63:0*/ core__DOT__rename__DOT____VdfgRegularize_hf7ba7b85_0_0;
    core__DOT__rename__DOT____VdfgRegularize_hf7ba7b85_0_0 = 0;
    QData/*63:0*/ core__DOT__rename__DOT____VdfgRegularize_hf7ba7b85_0_1;
    core__DOT__rename__DOT____VdfgRegularize_hf7ba7b85_0_1 = 0;
    QData/*63:0*/ core__DOT__rename__DOT____VdfgRegularize_hf7ba7b85_0_2;
    core__DOT__rename__DOT____VdfgRegularize_hf7ba7b85_0_2 = 0;
    IData/*31:0*/ core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx;
    core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx = 0;
    IData/*31:0*/ __Vilp1;
    // Body
    if ((0x00040000U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U])) {
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
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
    if ((0x00040000U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U])) {
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
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
    if ((0x00040000U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U])) {
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
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
    if ((0x00040000U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U])) {
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (1U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
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
    if ((0x00040000U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U])) {
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (2U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
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
    if ((0x00040000U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U])) {
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (4U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
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
    if ((0x00040000U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U])) {
        if (((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                      >> 0x0000002aU)) & (0x00000040U 
                                          > (0x0000007fU 
                                             & ((0x0000007fU 
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[0U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[1U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[2U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[3U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[4U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[5U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[6U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[7U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[8U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[9U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[10U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[11U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[12U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[13U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[14U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
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
                                                 & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                    >> 0x0000000bU)) 
                                                - (0x0000007fU 
                                                   & (IData)(
                                                             (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                              >> 0x00000023U)))))))) {
            if ((1U & (IData)(vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U]))) {
                if ((2U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U])) {
                    if ((((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                   >> 3U)) <= ((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                                << 0x0000001eU) 
                                               | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                  >> 2U))) 
                         & (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                              << 0x0000001eU) | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                                 >> 2U)) 
                            <= ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                         >> 3U)) + 
                                (3U & (IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                               >> 1U))))))) {
                        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall 
                            = (8U | (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall));
                    } else if (((((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                   << 0x0000001eU) 
                                  | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                     >> 2U)) <= (IData)(
                                                        (vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                                         >> 3U))) 
                                & ((IData)((vlSelfRef.core__DOT__lsu__DOT__stb_fwd[15U] 
                                            >> 3U)) 
                                   <= (((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                         << 0x0000001eU) 
                                        | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][1U] 
                                           >> 2U)) 
                                       + (3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
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
    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 0U;
    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] = 0U;
    if ((((~ ((IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall) 
              >> 3U)) & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                         >> 0x00000012U)) & (0U != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U];
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 0x0fU;
    } else if ((1U & (((~ ((IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           >> 3U)) & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[15U][2U] 
                                      >> 0x00000012U)) 
                      & (~ (0U != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 0x0fU;
    }
    if ((((~ ((IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall) 
              >> 2U)) & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                         >> 0x00000012U)) & (0U != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U];
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 0x0eU;
    } else if ((1U & (((~ ((IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           >> 2U)) & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[14U][2U] 
                                      >> 0x00000012U)) 
                      & (~ (0U != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 0x0eU;
    }
    if ((((~ ((IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall) 
              >> 1U)) & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                         >> 0x00000012U)) & (0U != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U];
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 0x0dU;
    } else if ((1U & (((~ ((IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           >> 1U)) & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[13U][2U] 
                                      >> 0x00000012U)) 
                      & (~ (0U != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 0x0dU;
    }
    if ((((~ (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall)) 
          & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
             >> 0x00000012U)) & (0U != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U];
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 0x0cU;
    } else if ((1U & (((~ (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall)) 
                       & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[12U][2U] 
                          >> 0x00000012U)) & (~ (0U 
                                                 != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 0x0cU;
    }
    if ((((~ ((IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall) 
              >> 3U)) & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                         >> 0x00000012U)) & (0U != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U];
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 0x0bU;
    } else if ((1U & (((~ ((IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           >> 3U)) & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[11U][2U] 
                                      >> 0x00000012U)) 
                      & (~ (0U != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 0x0bU;
    }
    if ((((~ ((IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall) 
              >> 2U)) & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                         >> 0x00000012U)) & (0U != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U];
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 0x0aU;
    } else if ((1U & (((~ ((IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           >> 2U)) & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[10U][2U] 
                                      >> 0x00000012U)) 
                      & (~ (0U != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 0x0aU;
    }
    if ((((~ ((IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall) 
              >> 1U)) & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                         >> 0x00000012U)) & (0U != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U];
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 9U;
    } else if ((1U & (((~ ((IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           >> 1U)) & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[9U][2U] 
                                      >> 0x00000012U)) 
                      & (~ (0U != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 9U;
    }
    if ((((~ (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall)) 
          & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
             >> 0x00000012U)) & (0U != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U];
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 8U;
    } else if ((1U & (((~ (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall)) 
                       & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[8U][2U] 
                          >> 0x00000012U)) & (~ (0U 
                                                 != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 8U;
    }
    if ((((~ ((IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall) 
              >> 3U)) & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                         >> 0x00000012U)) & (0U != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U];
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 7U;
    } else if ((1U & (((~ ((IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           >> 3U)) & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[7U][2U] 
                                      >> 0x00000012U)) 
                      & (~ (0U != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 7U;
    }
    if ((((~ ((IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall) 
              >> 2U)) & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                         >> 0x00000012U)) & (0U != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U];
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 6U;
    } else if ((1U & (((~ ((IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           >> 2U)) & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[6U][2U] 
                                      >> 0x00000012U)) 
                      & (~ (0U != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 6U;
    }
    if ((((~ ((IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall) 
              >> 1U)) & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                         >> 0x00000012U)) & (0U != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U];
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 5U;
    } else if ((1U & (((~ ((IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           >> 1U)) & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[5U][2U] 
                                      >> 0x00000012U)) 
                      & (~ (0U != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 5U;
    }
    if ((((~ (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall)) 
          & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
             >> 0x00000012U)) & (0U != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U];
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 4U;
    } else if ((1U & (((~ (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall)) 
                       & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[4U][2U] 
                          >> 0x00000012U)) & (~ (0U 
                                                 != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 4U;
    }
    if ((((~ ((IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall) 
              >> 3U)) & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                         >> 0x00000012U)) & (0U != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U];
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 3U;
    } else if ((1U & (((~ ((IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           >> 3U)) & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[3U][2U] 
                                      >> 0x00000012U)) 
                      & (~ (0U != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 3U;
    }
    if ((((~ ((IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall) 
              >> 2U)) & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                         >> 0x00000012U)) & (0U != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U];
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 2U;
    } else if ((1U & (((~ ((IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           >> 2U)) & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[2U][2U] 
                                      >> 0x00000012U)) 
                      & (~ (0U != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 2U;
    }
    if ((((~ ((IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall) 
              >> 1U)) & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                         >> 0x00000012U)) & (0U != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U];
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 1U;
    } else if ((1U & (((~ ((IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall) 
                           >> 1U)) & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[1U][2U] 
                                      >> 0x00000012U)) 
                      & (~ (0U != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 1U;
    }
    if ((((~ (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall)) 
          & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
             >> 0x00000012U)) & (0U != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U] 
            = vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U];
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 0U;
    } else if ((1U & (((~ (IData)(vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__stall)) 
                       & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries[0U][2U] 
                          >> 0x00000012U)) & (~ (0U 
                                                 != vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]))))) {
        vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U] = 0U;
    }
    if ((0x00040000U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries
         [vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]][2U])) {
        vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[0U] 
            = (0x0000040000000000ULL | vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[0U]);
        vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[0U] 
            = ((0x00000407ffffffffULL & vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[0U]) 
               | ((QData)((IData)((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                  [vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]][2U] 
                                                  >> 0x0000000bU)))) 
                  << 0x00000023U));
        vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[0U] 
            = ((0x000007f800000007ULL & vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[0U]) 
               | ((QData)((IData)(((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries
                                    [vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]][2U] 
                                    << 0x0000001eU) 
                                   | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries
                                      [vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]][1U] 
                                      >> 2U)))) << 3U));
        vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[0U] 
            = ((0x000007fffffffff9ULL & vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[0U]) 
               | ((QData)((IData)((3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries
                                         [vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]][2U] 
                                         >> 3U)))) 
                  << 1U));
        vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[0U] 
            = ((0x000007fffffffffeULL & vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[0U]) 
               | (IData)((IData)((1U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries
                                        [vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[0U]][2U] 
                                        >> 2U)))));
    }
    if ((0x00040000U & vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries
         [vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U]][2U])) {
        vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[1U] 
            = (0x0000040000000000ULL | vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[1U]);
        vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[1U] 
            = ((0x00000407ffffffffULL & vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[1U]) 
               | ((QData)((IData)((0x0000007fU & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries
                                                  [vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U]][2U] 
                                                  >> 0x0000000bU)))) 
                  << 0x00000023U));
        vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[1U] 
            = ((0x000007f800000007ULL & vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[1U]) 
               | ((QData)((IData)(((vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries
                                    [vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U]][2U] 
                                    << 0x0000001eU) 
                                   | (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries
                                      [vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U]][1U] 
                                      >> 2U)))) << 3U));
        vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[1U] 
            = ((0x000007fffffffff9ULL & vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[1U]) 
               | ((QData)((IData)((3U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries
                                         [vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U]][2U] 
                                         >> 3U)))) 
                  << 1U));
        vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[1U] 
            = ((0x000007fffffffffeULL & vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[1U]) 
               | (IData)((IData)((1U & (vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__entries
                                        [vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__req_idx[1U]][2U] 
                                        >> 2U)))));
    }
    vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__mem_stall[0U] 
        = vlSelfRef.core__DOT__lsu__DOT__mem_stall[0U];
    vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__mem_stall[1U] 
        = vlSelfRef.core__DOT__lsu__DOT__mem_stall[1U];
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_stall[0U] 
        = vlSelfRef.core__DOT__lsu__DOT__mem_stall[0U];
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_stall[1U] 
        = vlSelfRef.core__DOT__lsu__DOT__mem_stall[1U];
    vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[0U][0U] = 0U;
    vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[0U][1U] = 0U;
    vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[0U][2U] = 0U;
    vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[1U][0U] = 0U;
    vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[1U][1U] = 0U;
    vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[1U][2U] = 0U;
    core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx 
        = (0x0000000fU & (IData)(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__drain_ptr));
    if ((1U & ((((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries
                  [(0x0000000fU & core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][2U] 
                  >> 0x0000000bU) & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries
                                     [(0x0000000fU 
                                       & core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][2U] 
                                     >> 9U)) & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries
                                                [(0x0000000fU 
                                                  & core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][2U] 
                                                >> 0x0000000aU)) 
               & (~ vlSelfRef.core__DOT__lsu__DOT__mem_stall[0U])))) {
        vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[0U][2U] 
            = (4U | vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[0U][2U]);
        vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[0U][1U] 
            = ((3U & vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[0U][1U]) 
               | (0xfffffffcU & vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries
                  [(0x0000000fU & core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][1U]));
        vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[0U][2U] 
            = ((4U & vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[0U][2U]) 
               | (3U & vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries
                  [(0x0000000fU & core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][2U]));
        vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[0U][0U] 
            = ((3U & vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[0U][0U]) 
               | (0xfffffffcU & vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries
                  [(0x0000000fU & core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][0U]));
        vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[0U][1U] 
            = ((0xfffffffcU & vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[0U][1U]) 
               | (3U & vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries
                  [(0x0000000fU & core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][1U]));
        vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[0U][0U] 
            = ((0xfffffffcU & vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[0U][0U]) 
               | (3U & vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries
                  [(0x0000000fU & core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][0U]));
    }
    core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx 
        = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__drain_ptr)));
    if ((1U & ((((vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries
                  [(0x0000000fU & core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][2U] 
                  >> 0x0000000bU) & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries
                                     [(0x0000000fU 
                                       & core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][2U] 
                                     >> 9U)) & (vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries
                                                [(0x0000000fU 
                                                  & core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][2U] 
                                                >> 0x0000000aU)) 
               & (~ vlSelfRef.core__DOT__lsu__DOT__mem_stall[1U])))) {
        vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[1U][2U] 
            = (4U | vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[1U][2U]);
        vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[1U][1U] 
            = ((3U & vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[1U][1U]) 
               | (0xfffffffcU & vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries
                  [(0x0000000fU & core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][1U]));
        vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[1U][2U] 
            = ((4U & vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[1U][2U]) 
               | (3U & vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries
                  [(0x0000000fU & core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][2U]));
        vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[1U][0U] 
            = ((3U & vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[1U][0U]) 
               | (0xfffffffcU & vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries
                  [(0x0000000fU & core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][0U]));
        vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[1U][1U] 
            = ((0xfffffffcU & vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[1U][1U]) 
               | (3U & vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries
                  [(0x0000000fU & core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][1U]));
        vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[1U][0U] 
            = ((0xfffffffcU & vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[1U][0U]) 
               | (3U & vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__entries
                  [(0x0000000fU & core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx)][0U]));
    }
    vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__pc[0U] 
        = vlSelfRef.core__DOT__issue__DOT__pc[0U];
    vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__pc[1U] 
        = vlSelfRef.core__DOT__issue__DOT__pc[1U];
    vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__alu_rs1_result[0U] 
        = vlSelfRef.core__DOT__issue__DOT__alu_rs1_result[0U];
    vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__alu_rs1_result[1U] 
        = vlSelfRef.core__DOT__issue__DOT__alu_rs1_result[1U];
    vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__imm[0U] 
        = vlSelfRef.core__DOT__issue__DOT__alu_imm[0U];
    vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__imm[1U] 
        = vlSelfRef.core__DOT__issue__DOT__alu_imm[1U];
    vlSelfRef.core__DOT__ROB__DOT__rename_rob[0U] = vlSelfRef.core__DOT__rename_rob[0U];
    vlSelfRef.core__DOT__ROB__DOT__rename_rob[1U] = vlSelfRef.core__DOT__rename_rob[1U];
    vlSelfRef.core__DOT__ROB_busy = (0x3eU < (IData)(vlSelfRef.core__DOT__ROB__DOT__count));
    vlSelfRef.core__DOT__ROB__DOT__empty = (0U == (IData)(vlSelfRef.core__DOT__ROB__DOT__count));
    vlSelfRef.core__DOT__ROB__DOT__write_en = ((2U 
                                                & (IData)(vlSelfRef.core__DOT__ROB__DOT__write_en)) 
                                               | (1U 
                                                  & ((vlSelfRef.core__DOT__rename_rob[0U] 
                                                      >> 0x00000012U) 
                                                     & (~ (IData)(vlSelfRef.core__DOT__ROB_busy)))));
    vlSelfRef.core__DOT__ROB__DOT__write_en = ((1U 
                                                & (IData)(vlSelfRef.core__DOT__ROB__DOT__write_en)) 
                                               | (2U 
                                                  & ((vlSelfRef.core__DOT__rename_rob[1U] 
                                                      >> 0x00000011U) 
                                                     & ((~ (IData)(vlSelfRef.core__DOT__ROB_busy)) 
                                                        << 1U))));
    vlSelfRef.core__DOT__ROB__DOT__unnamedblk1__DOT__next_tail 
        = vlSelfRef.core__DOT__ROB__DOT__tail;
    vlSelfRef.core__DOT__ROB__DOT__unnamedblk1__DOT__next_tail 
        = (0x0000003fU & ((IData)(vlSelfRef.core__DOT__ROB__DOT__unnamedblk1__DOT__next_tail) 
                          + (1U & (IData)(vlSelfRef.core__DOT__ROB__DOT__write_en))));
    vlSelfRef.core__DOT__ROB__DOT__unnamedblk1__DOT__next_tail 
        = (0x0000003fU & ((IData)(vlSelfRef.core__DOT__ROB__DOT__unnamedblk1__DOT__next_tail) 
                          + (1U & ((IData)(vlSelfRef.core__DOT__ROB__DOT__write_en) 
                                   >> 1U))));
    vlSelfRef.core__DOT__ROB__DOT__commit_index[0U] 
        = vlSelfRef.core__DOT__ROB__DOT__head;
    vlSelfRef.core__DOT__ROB__DOT__commit = ((2U & (IData)(vlSelfRef.core__DOT__ROB__DOT__commit)) 
                                             | (1U 
                                                & ((vlSelfRef.core__DOT__ROB__DOT__rob
                                                    [vlSelfRef.core__DOT__ROB__DOT__commit_index[0U]] 
                                                    >> 0x00000012U) 
                                                   & (~ (IData)(vlSelfRef.core__DOT__ROB__DOT__empty)))));
    vlSelfRef.core__DOT__ROB__DOT__commit_index[1U] 
        = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.core__DOT__ROB__DOT__head)));
    vlSelfRef.core__DOT__ROB__DOT__commit = ((1U & (IData)(vlSelfRef.core__DOT__ROB__DOT__commit)) 
                                             | (2U 
                                                & ((vlSelfRef.core__DOT__ROB__DOT__rob
                                                    [vlSelfRef.core__DOT__ROB__DOT__commit_index[1U]] 
                                                    >> 0x00000011U) 
                                                   & ((~ (IData)(vlSelfRef.core__DOT__ROB__DOT__empty)) 
                                                      << 1U))));
    vlSelfRef.core__DOT__ROB__DOT__unnamedblk1__DOT__next_head 
        = vlSelfRef.core__DOT__ROB__DOT__head;
    vlSelfRef.core__DOT__ROB__DOT__unnamedblk1__DOT__next_head 
        = (0x0000003fU & ((IData)(vlSelfRef.core__DOT__ROB__DOT__unnamedblk1__DOT__next_head) 
                          + (1U & (IData)(vlSelfRef.core__DOT__ROB__DOT__commit))));
    vlSelfRef.core__DOT__ROB__DOT__unnamedblk1__DOT__next_head 
        = (0x0000003fU & ((IData)(vlSelfRef.core__DOT__ROB__DOT__unnamedblk1__DOT__next_head) 
                          + (1U & ((IData)(vlSelfRef.core__DOT__ROB__DOT__commit) 
                                   >> 1U))));
    vlSelfRef.core__DOT__ROB__DOT__next_count = (0x0000007fU 
                                                 & (((IData)(vlSelfRef.core__DOT__ROB__DOT__count) 
                                                     + 
                                                     ((IData)(vlSelfRef.core__DOT__ROB__DOT__unnamedblk1__DOT__next_tail) 
                                                      - (IData)(vlSelfRef.core__DOT__ROB__DOT__tail))) 
                                                    - 
                                                    ((IData)(vlSelfRef.core__DOT__ROB__DOT__unnamedblk1__DOT__next_head) 
                                                     - (IData)(vlSelfRef.core__DOT__ROB__DOT__head))));
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_pending[1U] 
        = vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____VdfgRegularize_hed6a1df6_0_16;
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____VdfgRegularize_hed6a1df6_0_10 
        = ((IData)(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____VdfgRegularize_hed6a1df6_0_16) 
           & (1U == (3U & ((vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[1U][2U] 
                            << 1U) | (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[1U][1U] 
                                      >> 0x0000001fU)))));
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____VdfgRegularize_hed6a1df6_0_11 
        = ((IData)(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____VdfgRegularize_hed6a1df6_0_16) 
           & (2U == (3U & ((vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[1U][2U] 
                            << 1U) | (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[1U][1U] 
                                      >> 0x0000001fU)))));
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____VdfgRegularize_hed6a1df6_0_12 
        = ((IData)(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____VdfgRegularize_hed6a1df6_0_16) 
           & (3U == (3U & ((vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[1U][2U] 
                            << 1U) | (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[1U][1U] 
                                      >> 0x0000001fU)))));
    vlSelfRef.core__DOT__rename__DOT__req_count[0U] = 0U;
    vlSelfRef.core__DOT__rename__DOT__req_count[1U] = 0U;
    vlSelfRef.core__DOT__rename__DOT__req_count[1U] 
        = (3U & (vlSelfRef.core__DOT__rename__DOT__req_count[0U] 
                 + (1U & (IData)(vlSelfRef.core__DOT__rename__DOT__req_valid))));
    vlSelfRef.core__DOT__rename__DOT__req_count[0U] 
        = (3U & (vlSelfRef.core__DOT__rename__DOT__req_count[1U] 
                 + (1U & ((IData)(vlSelfRef.core__DOT__rename__DOT__req_valid) 
                          >> 1U))));
    vlSelfRef.core__DOT__rename__DOT__masked[0U] = vlSelfRef.core__DOT__rename__DOT__ftb;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x0000003fU)) {
        vlSelfRef.core__DOT__rename__DOT__free_count[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.core__DOT__rename__DOT__free_count[1U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[0U] 
                          + (1U & (IData)(vlSelfRef.core__DOT__rename__DOT__ftb))));
    vlSelfRef.core__DOT__rename__DOT__free_count[2U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[1U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 1U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[3U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[2U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 2U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[4U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[3U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 3U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[5U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[4U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 4U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[6U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[5U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 5U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[7U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[6U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 6U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[8U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[7U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 7U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[9U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[8U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 8U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[10U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[9U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 9U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[11U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[10U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x0aU)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[12U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[11U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x0bU)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[13U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[12U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x0cU)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[14U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[13U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x0dU)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[15U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[14U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x0eU)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[16U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[15U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x0fU)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[17U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[16U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x10U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[18U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[17U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x11U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[19U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[18U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x12U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[20U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[19U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x13U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[21U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[20U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x14U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[22U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[21U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x15U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[23U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[22U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x16U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[24U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[23U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x17U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[25U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[24U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x18U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[26U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[25U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x19U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[27U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[26U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x1aU)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[28U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[27U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x1bU)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[29U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[28U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x1cU)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[30U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[29U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x1dU)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[31U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[30U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x1eU)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[32U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[31U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x1fU)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[33U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[32U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x20U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[34U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[33U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x21U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[35U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[34U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x22U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[36U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[35U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x23U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[37U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[36U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x24U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[38U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[37U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x25U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[39U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[38U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x26U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[40U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[39U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x27U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[41U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[40U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x28U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[42U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[41U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x29U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[43U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[42U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x2aU)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[44U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[43U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x2bU)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[45U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[44U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x2cU)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[46U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[45U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x2dU)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[47U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[46U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x2eU)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[48U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[47U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x2fU)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[49U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[48U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x30U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[50U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[49U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x31U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[51U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[50U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x32U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[52U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[51U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x33U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[53U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[52U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x34U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[54U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[53U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x35U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[55U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[54U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x36U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[56U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[55U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x37U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[57U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[56U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x38U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[58U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[57U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x39U)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[59U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[58U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x3aU)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[60U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[59U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x3bU)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[61U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[60U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x3cU)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[62U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[61U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x3dU)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[63U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[62U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x3eU)))));
    vlSelfRef.core__DOT__rename__DOT__free_count[0U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__rename__DOT__free_count[63U] 
                          + (1U & (IData)((vlSelfRef.core__DOT__rename__DOT__ftb 
                                           >> 0x3fU)))));
    core__DOT__rename__DOT____VdfgRegularize_hf7ba7b85_0_0 
        = (vlSelfRef.core__DOT__rename__DOT__ftb & 
           (1ULL + (~ vlSelfRef.core__DOT__rename__DOT__ftb)));
    vlSelfRef.core__DOT__issue__DOT__OUT_jump_type[0U] 
        = vlSelfRef.core__DOT__jump_type[0U];
    vlSelfRef.core__DOT__issue__DOT__OUT_jump_type[1U] 
        = vlSelfRef.core__DOT__jump_type[1U];
    vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__jump_type[0U] 
        = vlSelfRef.core__DOT__jump_type[0U];
    vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__jump_type[1U] 
        = vlSelfRef.core__DOT__jump_type[1U];
    vlSelfRef.core__DOT____Vcellinp__flush_controller__jump_type[0U] 
        = vlSelfRef.core__DOT__jump_type[0U];
    vlSelfRef.core__DOT____Vcellinp__flush_controller__jump_type[1U] 
        = vlSelfRef.core__DOT__jump_type[1U];
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_pending[0U] 
        = vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____VdfgRegularize_hed6a1df6_0_17;
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____VdfgRegularize_hed6a1df6_0_6 
        = ((IData)(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____VdfgRegularize_hed6a1df6_0_17) 
           & (1U == (3U & ((vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[0U][2U] 
                            << 1U) | (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[0U][1U] 
                                      >> 0x0000001fU)))));
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____VdfgRegularize_hed6a1df6_0_7 
        = ((IData)(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____VdfgRegularize_hed6a1df6_0_17) 
           & (2U == (3U & ((vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[0U][2U] 
                            << 1U) | (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[0U][1U] 
                                      >> 0x0000001fU)))));
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____VdfgRegularize_hed6a1df6_0_8 
        = ((IData)(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____VdfgRegularize_hed6a1df6_0_17) 
           & (3U == (3U & ((vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[0U][2U] 
                            << 1U) | (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet[0U][1U] 
                                      >> 0x0000001fU)))));
    vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__check_ready[0U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__check_ready[0U];
    vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__check_ready[1U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__check_ready[1U];
    vlSelfRef.core__DOT__read_ready[2U][0U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__check_ready[0U];
    vlSelfRef.core__DOT__read_ready[2U][1U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__check_ready[1U];
    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__check_ready[0U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__check_ready[0U];
    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__check_ready[1U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__check_ready[1U];
    vlSelfRef.core__DOT__read_ready[3U][0U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__check_ready[0U];
    vlSelfRef.core__DOT__read_ready[3U][1U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__check_ready[1U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__check_ready[0U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__check_ready[0U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__check_ready[1U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__check_ready[1U];
    vlSelfRef.core__DOT__read_ready[0U][0U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__check_ready[0U];
    vlSelfRef.core__DOT__read_ready[0U][1U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__check_ready[1U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__check_ready[0U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__check_ready[0U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__check_ready[1U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__check_ready[1U];
    vlSelfRef.core__DOT__read_ready[1U][0U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__check_ready[0U];
    vlSelfRef.core__DOT__read_ready[1U][1U] = vlSelfRef.core__DOT__issue__DOT____Vcellout__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__check_ready[1U];
    vlSelfRef.core__DOT__issue__DOT__OUT_instr[0U][0U] 
        = vlSelfRef.core__DOT__int_issue_instr[0U][0U];
    vlSelfRef.core__DOT__issue__DOT__OUT_instr[0U][1U] 
        = vlSelfRef.core__DOT__int_issue_instr[0U][1U];
    vlSelfRef.core__DOT__issue__DOT__OUT_instr[0U][2U] 
        = vlSelfRef.core__DOT__int_issue_instr[0U][2U];
    vlSelfRef.core__DOT__issue__DOT__OUT_instr[1U][0U] 
        = vlSelfRef.core__DOT__int_issue_instr[1U][0U];
    vlSelfRef.core__DOT__issue__DOT__OUT_instr[1U][1U] 
        = vlSelfRef.core__DOT__int_issue_instr[1U][1U];
    vlSelfRef.core__DOT__issue__DOT__OUT_instr[1U][2U] 
        = vlSelfRef.core__DOT__int_issue_instr[1U][2U];
    vlSelfRef.core__DOT__issue__DOT__OUT_instr[2U][0U] 
        = vlSelfRef.core__DOT__int_issue_instr[2U][0U];
    vlSelfRef.core__DOT__issue__DOT__OUT_instr[2U][1U] 
        = vlSelfRef.core__DOT__int_issue_instr[2U][1U];
    vlSelfRef.core__DOT__issue__DOT__OUT_instr[2U][2U] 
        = vlSelfRef.core__DOT__int_issue_instr[2U][2U];
    vlSelfRef.core__DOT__execute__DOT__int_issue_instr[0U][0U] 
        = vlSelfRef.core__DOT__int_issue_instr[0U][0U];
    vlSelfRef.core__DOT__execute__DOT__int_issue_instr[0U][1U] 
        = vlSelfRef.core__DOT__int_issue_instr[0U][1U];
    vlSelfRef.core__DOT__execute__DOT__int_issue_instr[0U][2U] 
        = vlSelfRef.core__DOT__int_issue_instr[0U][2U];
    vlSelfRef.core__DOT__execute__DOT__int_issue_instr[1U][0U] 
        = vlSelfRef.core__DOT__int_issue_instr[1U][0U];
    vlSelfRef.core__DOT__execute__DOT__int_issue_instr[1U][1U] 
        = vlSelfRef.core__DOT__int_issue_instr[1U][1U];
    vlSelfRef.core__DOT__execute__DOT__int_issue_instr[1U][2U] 
        = vlSelfRef.core__DOT__int_issue_instr[1U][2U];
    vlSelfRef.core__DOT__execute__DOT__int_issue_instr[2U][0U] 
        = vlSelfRef.core__DOT__int_issue_instr[2U][0U];
    vlSelfRef.core__DOT__execute__DOT__int_issue_instr[2U][1U] 
        = vlSelfRef.core__DOT__int_issue_instr[2U][1U];
    vlSelfRef.core__DOT__execute__DOT__int_issue_instr[2U][2U] 
        = vlSelfRef.core__DOT__int_issue_instr[2U][2U];
    vlSelfRef.core__DOT__issue__DOT__instr_sqN[0U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__int_issue_instr[0U][2U] 
                          >> 0x0000000aU));
    vlSelfRef.core__DOT__issue__DOT__instr_sqN[1U] 
        = (0x0000007fU & (vlSelfRef.core__DOT__int_issue_instr[1U][2U] 
                          >> 0x0000000aU));
    vlSelfRef.core__DOT__issue__DOT__instr_valid[0U] 
        = (1U & (vlSelfRef.core__DOT__int_issue_instr[0U][2U] 
                 >> 0x00000011U));
    vlSelfRef.core__DOT__issue__DOT__instr_valid[1U] 
        = (1U & (vlSelfRef.core__DOT__int_issue_instr[1U][2U] 
                 >> 0x00000011U));
    vlSelfRef.core__DOT__br_jalr_sqN[0U] = (0x0000007fU 
                                            & (vlSelfRef.core__DOT__int_issue_instr[0U][2U] 
                                               >> 0x0000000aU));
    vlSelfRef.core__DOT__br_jalr_sqN[1U] = (0x0000007fU 
                                            & (vlSelfRef.core__DOT__int_issue_instr[1U][2U] 
                                               >> 0x0000000aU));
    vlSelfRef.core__DOT__lsu_cdb_lines[0U] = vlSelfRef.core__DOT____Vcellout__lsu__OUT_cdb;
    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__mem_req[0U] 
        = vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[0U];
    vlSelfRef.core__DOT__lsu__DOT__u_ldb__DOT__mem_req[1U] 
        = vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[1U];
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_req[0U] 
        = vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[0U];
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__rd_req[1U] 
        = vlSelfRef.core__DOT__lsu__DOT__ldb_mem_req[1U];
    vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__mem_req[0U][0U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[0U][0U];
    vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__mem_req[0U][1U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[0U][1U];
    vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__mem_req[0U][2U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[0U][2U];
    vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__mem_req[1U][0U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[1U][0U];
    vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__mem_req[1U][1U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[1U][1U];
    vlSelfRef.core__DOT__lsu__DOT__u_stb__DOT__mem_req[1U][2U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[1U][2U];
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req[0U][0U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[0U][0U];
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req[0U][1U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[0U][1U];
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req[0U][2U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[0U][2U];
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req[1U][0U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[1U][0U];
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req[1U][1U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[1U][1U];
    vlSelfRef.core__DOT__lsu__DOT__u_dmem__DOT__wr_req[1U][2U] 
        = vlSelfRef.core__DOT__lsu__DOT__stb_mem_req[1U][2U];
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_is_alu[1U] 
        = vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____VdfgRegularize_hed6a1df6_0_10;
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_is_mul[1U] 
        = vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____VdfgRegularize_hed6a1df6_0_11;
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_is_lsu[1U] 
        = vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____VdfgRegularize_hed6a1df6_0_12;
    vlSelfRef.core__DOT__rename__DOT__OUT_busy = ((IData)(vlSelfRef.core__DOT__ROB_busy) 
                                                  | ((IData)(vlSelfRef.core__DOT__dispatch_busy) 
                                                     | (((QData)((IData)(vlSelfRef.core__DOT__rename__DOT__free_count[63U])) 
                                                         < (QData)((IData)(vlSelfRef.core__DOT__rename__DOT__req_count[1U]))) 
                                                        | (((IData)(vlSelfRef.core__DOT__dispatch__DOT__BC__DOT__count) 
                                                            >> 4U) 
                                                           & (IData)(vlSelfRef.core__DOT__rename__DOT__chkpt_need)))));
    vlSelfRef.core__DOT__rename__DOT__onehot[0U] = 
        ((1U & (IData)(vlSelfRef.core__DOT__rename__DOT__req_valid))
          ? core__DOT__rename__DOT____VdfgRegularize_hf7ba7b85_0_0
          : 0ULL);
    core__DOT__rename__DOT____VdfgRegularize_hf7ba7b85_0_2 
        = (((1U & (IData)(vlSelfRef.core__DOT__rename__DOT__req_valid))
             ? (~ core__DOT__rename__DOT____VdfgRegularize_hf7ba7b85_0_0)
             : 0xffffffffffffffffULL) & vlSelfRef.core__DOT__rename__DOT__ftb);
    vlSelfRef.core__DOT__flush_controller__DOT__jump_type[0U] 
        = vlSelfRef.core__DOT____Vcellinp__flush_controller__jump_type[0U];
    vlSelfRef.core__DOT__flush_controller__DOT__jump_type[1U] 
        = vlSelfRef.core__DOT____Vcellinp__flush_controller__jump_type[1U];
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet_done = 1U;
    if (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_pending[0U]) {
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet_done = 0U;
    }
    if (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_pending[1U]) {
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__packet_done = 0U;
    }
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_is_alu[0U] 
        = vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____VdfgRegularize_hed6a1df6_0_6;
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_alu[1U] 
        = vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____VdfgRegularize_hed6a1df6_0_6;
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_alu[2U] 
        = (3U & ((IData)(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____VdfgRegularize_hed6a1df6_0_6) 
                 + (IData)(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____VdfgRegularize_hed6a1df6_0_10)));
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_is_mul[0U] 
        = vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____VdfgRegularize_hed6a1df6_0_7;
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_mul[1U] 
        = vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____VdfgRegularize_hed6a1df6_0_7;
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_mul[2U] 
        = (3U & ((IData)(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____VdfgRegularize_hed6a1df6_0_7) 
                 + (IData)(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____VdfgRegularize_hed6a1df6_0_11)));
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_is_lsu[0U] 
        = vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____VdfgRegularize_hed6a1df6_0_8;
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_lsu[1U] 
        = vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____VdfgRegularize_hed6a1df6_0_8;
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_lsu[2U] 
        = (3U & ((IData)(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____VdfgRegularize_hed6a1df6_0_8) 
                 + (IData)(vlSelfRef.core__DOT__dispatch__DOT__DU__DOT____VdfgRegularize_hed6a1df6_0_12)));
    vlSelfRef.core__DOT__rename__DOT__read_tag[0U][0U] 
        = vlSelfRef.core__DOT__read_ready[0U][0U];
    vlSelfRef.core__DOT__rename__DOT__read_tag[0U][1U] 
        = vlSelfRef.core__DOT__read_ready[0U][1U];
    vlSelfRef.core__DOT__rename__DOT__read_tag[1U][0U] 
        = vlSelfRef.core__DOT__read_ready[1U][0U];
    vlSelfRef.core__DOT__rename__DOT__read_tag[1U][1U] 
        = vlSelfRef.core__DOT__read_ready[1U][1U];
    vlSelfRef.core__DOT__rename__DOT__read_tag[2U][0U] 
        = vlSelfRef.core__DOT__read_ready[2U][0U];
    vlSelfRef.core__DOT__rename__DOT__read_tag[2U][1U] 
        = vlSelfRef.core__DOT__read_ready[2U][1U];
    vlSelfRef.core__DOT__rename__DOT__read_tag[3U][0U] 
        = vlSelfRef.core__DOT__read_ready[3U][0U];
    vlSelfRef.core__DOT__rename__DOT__read_tag[3U][1U] 
        = vlSelfRef.core__DOT__read_ready[3U][1U];
    vlSelfRef.core__DOT__issue__DOT__check_ready[0U][0U] 
        = vlSelfRef.core__DOT__read_ready[0U][0U];
    vlSelfRef.core__DOT__issue__DOT__check_ready[0U][1U] 
        = vlSelfRef.core__DOT__read_ready[0U][1U];
    vlSelfRef.core__DOT__issue__DOT__check_ready[1U][0U] 
        = vlSelfRef.core__DOT__read_ready[1U][0U];
    vlSelfRef.core__DOT__issue__DOT__check_ready[1U][1U] 
        = vlSelfRef.core__DOT__read_ready[1U][1U];
    vlSelfRef.core__DOT__issue__DOT__check_ready[2U][0U] 
        = vlSelfRef.core__DOT__read_ready[2U][0U];
    vlSelfRef.core__DOT__issue__DOT__check_ready[2U][1U] 
        = vlSelfRef.core__DOT__read_ready[2U][1U];
    vlSelfRef.core__DOT__issue__DOT__check_ready[3U][0U] 
        = vlSelfRef.core__DOT__read_ready[3U][0U];
    vlSelfRef.core__DOT__issue__DOT__check_ready[3U][1U] 
        = vlSelfRef.core__DOT__read_ready[3U][1U];
    vlSelfRef.core__DOT__reg_ready[0U][0U] = (1U & 
                                              (vlSelfRef.core__DOT__rename__DOT__tag_buffer
                                               [vlSelfRef.core__DOT__read_ready[0U][0U]] 
                                               >> 1U));
    vlSelfRef.core__DOT__reg_ready[0U][1U] = (1U & 
                                              (vlSelfRef.core__DOT__rename__DOT__tag_buffer
                                               [vlSelfRef.core__DOT__read_ready[0U][1U]] 
                                               >> 1U));
    vlSelfRef.core__DOT__reg_ready[1U][0U] = (1U & 
                                              (vlSelfRef.core__DOT__rename__DOT__tag_buffer
                                               [vlSelfRef.core__DOT__read_ready[1U][0U]] 
                                               >> 1U));
    vlSelfRef.core__DOT__reg_ready[1U][1U] = (1U & 
                                              (vlSelfRef.core__DOT__rename__DOT__tag_buffer
                                               [vlSelfRef.core__DOT__read_ready[1U][1U]] 
                                               >> 1U));
    vlSelfRef.core__DOT__reg_ready[2U][0U] = (1U & 
                                              (vlSelfRef.core__DOT__rename__DOT__tag_buffer
                                               [vlSelfRef.core__DOT__read_ready[2U][0U]] 
                                               >> 1U));
    vlSelfRef.core__DOT__reg_ready[2U][1U] = (1U & 
                                              (vlSelfRef.core__DOT__rename__DOT__tag_buffer
                                               [vlSelfRef.core__DOT__read_ready[2U][1U]] 
                                               >> 1U));
    vlSelfRef.core__DOT__reg_ready[3U][0U] = (1U & 
                                              (vlSelfRef.core__DOT__rename__DOT__tag_buffer
                                               [vlSelfRef.core__DOT__read_ready[3U][0U]] 
                                               >> 1U));
    vlSelfRef.core__DOT__reg_ready[3U][1U] = (1U & 
                                              (vlSelfRef.core__DOT__rename__DOT__tag_buffer
                                               [vlSelfRef.core__DOT__read_ready[3U][1U]] 
                                               >> 1U));
    vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__instr_sqN[0U] 
        = vlSelfRef.core__DOT__issue__DOT__instr_sqN[0U];
    vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__instr_sqN[1U] 
        = vlSelfRef.core__DOT__issue__DOT__instr_sqN[1U];
    vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__IN_valid[0U] 
        = vlSelfRef.core__DOT__issue__DOT__instr_valid[0U];
    vlSelfRef.core__DOT__issue__DOT__ta_gen2__DOT__IN_valid[1U] 
        = vlSelfRef.core__DOT__issue__DOT__instr_valid[1U];
    vlSelfRef.core__DOT____Vcellinp__flush_controller__sqN[0U] 
        = vlSelfRef.core__DOT__br_jalr_sqN[0U];
    vlSelfRef.core__DOT____Vcellinp__flush_controller__sqN[1U] 
        = vlSelfRef.core__DOT__br_jalr_sqN[1U];
    vlSelfRef.core__DOT__CDB[0U] = vlSelfRef.core__DOT__int_cdb_lines[0U];
    vlSelfRef.core__DOT__CDB[1U] = vlSelfRef.core__DOT__int_cdb_lines[1U];
    vlSelfRef.core__DOT__CDB[2U] = vlSelfRef.core__DOT__int_cdb_lines[2U];
    vlSelfRef.core__DOT__CDB[3U] = vlSelfRef.core__DOT__lsu_cdb_lines[0U];
    vlSelfRef.core__DOT__fetch__DOT__FB__DOT__can_read 
        = ((~ (IData)(vlSelfRef.core__DOT__rename__DOT__OUT_busy)) 
           & (0U < (IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__count)));
    vlSelfRef.core__DOT__rename__DOT__masked[1U] = core__DOT__rename__DOT____VdfgRegularize_hf7ba7b85_0_2;
    core__DOT__rename__DOT____VdfgRegularize_hf7ba7b85_0_1 
        = (core__DOT__rename__DOT____VdfgRegularize_hf7ba7b85_0_2 
           & (1ULL + (~ core__DOT__rename__DOT____VdfgRegularize_hf7ba7b85_0_2)));
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[0U] = 0U;
    if (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_ready[0U]) {
        if ((vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_is_alu[0U] 
             & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_alu[0U] 
                == vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu[0U]))) {
            vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[0U] = 0U;
        }
        if ((vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_is_alu[1U] 
             & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_alu[1U] 
                == vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu[0U]))) {
            vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[0U] = 1U;
        }
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[1U] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_valid[0U] = 0U;
        if ((vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_is_alu[0U] 
             & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_alu[0U] 
                == vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu[0U]))) {
            vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_valid[0U] = 1U;
        }
        if ((vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_is_alu[1U] 
             & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_alu[1U] 
                == vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu[0U]))) {
            vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_valid[0U] = 1U;
        }
    } else {
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[1U] = 0U;
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_valid[0U] = 0U;
    }
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_valid[1U] = 0U;
    if (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_ready[1U]) {
        if ((vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_is_alu[0U] 
             & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_alu[0U] 
                == vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu[1U]))) {
            vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[1U] = 0U;
            vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_valid[1U] = 1U;
        }
        if ((vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_is_alu[1U] 
             & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_alu[1U] 
                == vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu[1U]))) {
            vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[1U] = 1U;
            vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_valid[1U] = 1U;
        }
    }
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__mul_slot[0U] = 0U;
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__mul_valid[0U] = 0U;
    if (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__mul_ready[0U]) {
        if ((vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_is_mul[0U] 
             & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_mul[0U] 
                == vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_ready_mul[0U]))) {
            vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__mul_slot[0U] = 0U;
            vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__mul_valid[0U] = 1U;
        }
        if ((vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_is_mul[1U] 
             & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_mul[1U] 
                == vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_ready_mul[0U]))) {
            vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__mul_slot[0U] = 1U;
            vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__mul_valid[0U] = 1U;
        }
    }
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__lsu_slot[0U] = 0U;
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__lsu_valid[0U] = 0U;
    if (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__lsu_ready[0U]) {
        if ((vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_is_lsu[0U] 
             & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_lsu[0U] 
                == vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_ready_lsu[0U]))) {
            vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__lsu_slot[0U] = 0U;
            vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__lsu_valid[0U] = 1U;
        }
        if ((vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__slot_is_lsu[1U] 
             & (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_lsu[1U] 
                == vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__prefix_ready_lsu[0U]))) {
            vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__lsu_slot[0U] = 1U;
            vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__lsu_valid[0U] = 1U;
        }
    }
    vlSelfRef.core__DOT__rename__DOT__reg_ready[0U][0U] 
        = vlSelfRef.core__DOT__reg_ready[0U][0U];
    vlSelfRef.core__DOT__rename__DOT__reg_ready[0U][1U] 
        = vlSelfRef.core__DOT__reg_ready[0U][1U];
    vlSelfRef.core__DOT__rename__DOT__reg_ready[1U][0U] 
        = vlSelfRef.core__DOT__reg_ready[1U][0U];
    vlSelfRef.core__DOT__rename__DOT__reg_ready[1U][1U] 
        = vlSelfRef.core__DOT__reg_ready[1U][1U];
    vlSelfRef.core__DOT__rename__DOT__reg_ready[2U][0U] 
        = vlSelfRef.core__DOT__reg_ready[2U][0U];
    vlSelfRef.core__DOT__rename__DOT__reg_ready[2U][1U] 
        = vlSelfRef.core__DOT__reg_ready[2U][1U];
    vlSelfRef.core__DOT__rename__DOT__reg_ready[3U][0U] 
        = vlSelfRef.core__DOT__reg_ready[3U][0U];
    vlSelfRef.core__DOT__rename__DOT__reg_ready[3U][1U] 
        = vlSelfRef.core__DOT__reg_ready[3U][1U];
    vlSelfRef.core__DOT__issue__DOT__tag_ready[0U][0U] 
        = vlSelfRef.core__DOT__reg_ready[0U][0U];
    vlSelfRef.core__DOT__issue__DOT__tag_ready[0U][1U] 
        = vlSelfRef.core__DOT__reg_ready[0U][1U];
    vlSelfRef.core__DOT__issue__DOT__tag_ready[1U][0U] 
        = vlSelfRef.core__DOT__reg_ready[1U][0U];
    vlSelfRef.core__DOT__issue__DOT__tag_ready[1U][1U] 
        = vlSelfRef.core__DOT__reg_ready[1U][1U];
    vlSelfRef.core__DOT__issue__DOT__tag_ready[2U][0U] 
        = vlSelfRef.core__DOT__reg_ready[2U][0U];
    vlSelfRef.core__DOT__issue__DOT__tag_ready[2U][1U] 
        = vlSelfRef.core__DOT__reg_ready[2U][1U];
    vlSelfRef.core__DOT__issue__DOT__tag_ready[3U][0U] 
        = vlSelfRef.core__DOT__reg_ready[3U][0U];
    vlSelfRef.core__DOT__issue__DOT__tag_ready[3U][1U] 
        = vlSelfRef.core__DOT__reg_ready[3U][1U];
    vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__tag_ready[0U] 
        = vlSelfRef.core__DOT__reg_ready[0U][0U];
    vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__tag_ready[1U] 
        = vlSelfRef.core__DOT__reg_ready[0U][1U];
    vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__tag_ready[0U] 
        = vlSelfRef.core__DOT__reg_ready[1U][0U];
    vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__tag_ready[1U] 
        = vlSelfRef.core__DOT__reg_ready[1U][1U];
    vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__tag_ready[0U] 
        = vlSelfRef.core__DOT__reg_ready[2U][0U];
    vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__tag_ready[1U] 
        = vlSelfRef.core__DOT__reg_ready[2U][1U];
    vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__tag_ready[0U] 
        = vlSelfRef.core__DOT__reg_ready[3U][0U];
    vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__tag_ready[1U] 
        = vlSelfRef.core__DOT__reg_ready[3U][1U];
    vlSelfRef.core__DOT__flush_controller__DOT__sqN[0U] 
        = vlSelfRef.core__DOT____Vcellinp__flush_controller__sqN[0U];
    vlSelfRef.core__DOT__flush_controller__DOT__sqN[1U] 
        = vlSelfRef.core__DOT____Vcellinp__flush_controller__sqN[1U];
    vlSelfRef.core__DOT__CDB_sqN[0U] = (0x0000007fU 
                                        & (IData)((vlSelfRef.core__DOT__CDB[0U] 
                                                   >> 0x00000026U)));
    vlSelfRef.core__DOT__CDB_sqN[1U] = (0x0000007fU 
                                        & (IData)((vlSelfRef.core__DOT__CDB[1U] 
                                                   >> 0x00000026U)));
    vlSelfRef.core__DOT__CDB_sqN[2U] = (0x0000007fU 
                                        & (IData)((vlSelfRef.core__DOT__CDB[2U] 
                                                   >> 0x00000026U)));
    vlSelfRef.core__DOT__CDB_sqN[3U] = (0x0000007fU 
                                        & (IData)((vlSelfRef.core__DOT__CDB[3U] 
                                                   >> 0x00000026U)));
    vlSelfRef.core__DOT__CDB_result[0U] = (IData)(vlSelfRef.core__DOT__CDB[0U]);
    vlSelfRef.core__DOT__CDB_result[1U] = (IData)(vlSelfRef.core__DOT__CDB[1U]);
    vlSelfRef.core__DOT__CDB_result[2U] = (IData)(vlSelfRef.core__DOT__CDB[2U]);
    vlSelfRef.core__DOT__CDB_result[3U] = (IData)(vlSelfRef.core__DOT__CDB[3U]);
    vlSelfRef.core__DOT__CDB_tag[0U] = (0x0000003fU 
                                        & (IData)((vlSelfRef.core__DOT__CDB[0U] 
                                                   >> 0x00000020U)));
    vlSelfRef.core__DOT__CDB_tag[1U] = (0x0000003fU 
                                        & (IData)((vlSelfRef.core__DOT__CDB[1U] 
                                                   >> 0x00000020U)));
    vlSelfRef.core__DOT__CDB_tag[2U] = (0x0000003fU 
                                        & (IData)((vlSelfRef.core__DOT__CDB[2U] 
                                                   >> 0x00000020U)));
    vlSelfRef.core__DOT__CDB_tag[3U] = (0x0000003fU 
                                        & (IData)((vlSelfRef.core__DOT__CDB[3U] 
                                                   >> 0x00000020U)));
    vlSelfRef.core__DOT__CDB_valid[0U] = (1U & (IData)(
                                                       (vlSelfRef.core__DOT__CDB[0U] 
                                                        >> 0x0000002dU)));
    vlSelfRef.core__DOT__CDB_valid[1U] = (1U & (IData)(
                                                       (vlSelfRef.core__DOT__CDB[1U] 
                                                        >> 0x0000002dU)));
    vlSelfRef.core__DOT__CDB_valid[2U] = (1U & (IData)(
                                                       (vlSelfRef.core__DOT__CDB[2U] 
                                                        >> 0x0000002dU)));
    vlSelfRef.core__DOT__CDB_valid[3U] = (1U & (IData)(
                                                       (vlSelfRef.core__DOT__CDB[3U] 
                                                        >> 0x0000002dU)));
    vlSelfRef.core__DOT__fetch__DOT__FB__DOT__out_count 
        = ((IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__can_read)
            ? ((2U <= (IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__count))
                ? 2U : (3U & (IData)(vlSelfRef.core__DOT__fetch__DOT__FB__DOT__count)))
            : 0U);
    vlSelfRef.core__DOT__rename__DOT__masked[2U] = 
        (((2U & (IData)(vlSelfRef.core__DOT__rename__DOT__req_valid))
           ? (~ core__DOT__rename__DOT____VdfgRegularize_hf7ba7b85_0_1)
           : 0xffffffffffffffffULL) & core__DOT__rename__DOT____VdfgRegularize_hf7ba7b85_0_2);
    vlSelfRef.core__DOT__rename__DOT__onehot[1U] = 
        ((2U & (IData)(vlSelfRef.core__DOT__rename__DOT__req_valid))
          ? core__DOT__rename__DOT____VdfgRegularize_hf7ba7b85_0_1
          : 0ULL);
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__can_dispatch[0U] = 0U;
    vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__can_dispatch[1U] = 0U;
    if (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_valid[0U]) {
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__can_dispatch[vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[0U]] = 1U;
    }
    if (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_valid[1U]) {
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__can_dispatch[vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__alu_slot[1U]] = 1U;
    }
    if (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__mul_valid[0U]) {
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__can_dispatch[vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__mul_slot[0U]] = 1U;
    }
    if (vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__lsu_valid[0U]) {
        vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__can_dispatch[vlSelfRef.core__DOT__dispatch__DOT__DU__DOT__lsu_slot[0U]] = 1U;
    }
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__tag_ready[0U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__tag_ready[0U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__tag_ready[1U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__tag_ready[1U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__tag_ready[0U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__tag_ready[0U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__tag_ready[1U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__tag_ready[1U];
    vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__tag_ready[0U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__tag_ready[0U];
    vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__tag_ready[1U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__tag_ready[1U];
    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__tag_ready[0U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__tag_ready[0U];
    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__tag_ready[1U] 
        = vlSelfRef.core__DOT__issue__DOT____Vcellinp__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__tag_ready[1U];
    vlSelfRef.core__DOT__ROB__DOT__CDB_sqN[0U] = vlSelfRef.core__DOT__CDB_sqN[0U];
    vlSelfRef.core__DOT__ROB__DOT__CDB_sqN[1U] = vlSelfRef.core__DOT__CDB_sqN[1U];
    vlSelfRef.core__DOT__ROB__DOT__CDB_sqN[2U] = vlSelfRef.core__DOT__CDB_sqN[2U];
    vlSelfRef.core__DOT__ROB__DOT__CDB_sqN[3U] = vlSelfRef.core__DOT__CDB_sqN[3U];
    vlSelfRef.core__DOT__issue__DOT__CDB_result[0U] 
        = vlSelfRef.core__DOT__CDB_result[0U];
    vlSelfRef.core__DOT__issue__DOT__CDB_result[1U] 
        = vlSelfRef.core__DOT__CDB_result[1U];
    vlSelfRef.core__DOT__issue__DOT__CDB_result[2U] 
        = vlSelfRef.core__DOT__CDB_result[2U];
    vlSelfRef.core__DOT__issue__DOT__CDB_result[3U] 
        = vlSelfRef.core__DOT__CDB_result[3U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_result[0U] 
        = vlSelfRef.core__DOT__CDB_result[0U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_result[1U] 
        = vlSelfRef.core__DOT__CDB_result[1U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_result[2U] 
        = vlSelfRef.core__DOT__CDB_result[2U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_result[3U] 
        = vlSelfRef.core__DOT__CDB_result[3U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_result[0U] 
        = vlSelfRef.core__DOT__CDB_result[0U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_result[1U] 
        = vlSelfRef.core__DOT__CDB_result[1U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_result[2U] 
        = vlSelfRef.core__DOT__CDB_result[2U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_result[3U] 
        = vlSelfRef.core__DOT__CDB_result[3U];
    vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_result[0U] 
        = vlSelfRef.core__DOT__CDB_result[0U];
    vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_result[1U] 
        = vlSelfRef.core__DOT__CDB_result[1U];
    vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_result[2U] 
        = vlSelfRef.core__DOT__CDB_result[2U];
    vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_result[3U] 
        = vlSelfRef.core__DOT__CDB_result[3U];
    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_result[0U] 
        = vlSelfRef.core__DOT__CDB_result[0U];
    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_result[1U] 
        = vlSelfRef.core__DOT__CDB_result[1U];
    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_result[2U] 
        = vlSelfRef.core__DOT__CDB_result[2U];
    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_result[3U] 
        = vlSelfRef.core__DOT__CDB_result[3U];
    vlSelfRef.core__DOT__register_file__DOT__rd_data[0U] 
        = vlSelfRef.core__DOT__CDB_result[0U];
    vlSelfRef.core__DOT__register_file__DOT__rd_data[1U] 
        = vlSelfRef.core__DOT__CDB_result[1U];
    vlSelfRef.core__DOT__register_file__DOT__rd_data[2U] 
        = vlSelfRef.core__DOT__CDB_result[2U];
    vlSelfRef.core__DOT__register_file__DOT__rd_data[3U] 
        = vlSelfRef.core__DOT__CDB_result[3U];
    vlSelfRef.core__DOT__rename__DOT__CDB_tag[0U] = vlSelfRef.core__DOT__CDB_tag[0U];
    vlSelfRef.core__DOT__rename__DOT__CDB_tag[1U] = vlSelfRef.core__DOT__CDB_tag[1U];
    vlSelfRef.core__DOT__rename__DOT__CDB_tag[2U] = vlSelfRef.core__DOT__CDB_tag[2U];
    vlSelfRef.core__DOT__rename__DOT__CDB_tag[3U] = vlSelfRef.core__DOT__CDB_tag[3U];
    vlSelfRef.core__DOT__issue__DOT__CDB_tag[0U] = vlSelfRef.core__DOT__CDB_tag[0U];
    vlSelfRef.core__DOT__issue__DOT__CDB_tag[1U] = vlSelfRef.core__DOT__CDB_tag[1U];
    vlSelfRef.core__DOT__issue__DOT__CDB_tag[2U] = vlSelfRef.core__DOT__CDB_tag[2U];
    vlSelfRef.core__DOT__issue__DOT__CDB_tag[3U] = vlSelfRef.core__DOT__CDB_tag[3U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_tag[0U] 
        = vlSelfRef.core__DOT__CDB_tag[0U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_tag[1U] 
        = vlSelfRef.core__DOT__CDB_tag[1U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_tag[2U] 
        = vlSelfRef.core__DOT__CDB_tag[2U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_tag[3U] 
        = vlSelfRef.core__DOT__CDB_tag[3U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_tag[0U] 
        = vlSelfRef.core__DOT__CDB_tag[0U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_tag[1U] 
        = vlSelfRef.core__DOT__CDB_tag[1U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_tag[2U] 
        = vlSelfRef.core__DOT__CDB_tag[2U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_tag[3U] 
        = vlSelfRef.core__DOT__CDB_tag[3U];
    vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_tag[0U] 
        = vlSelfRef.core__DOT__CDB_tag[0U];
    vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_tag[1U] 
        = vlSelfRef.core__DOT__CDB_tag[1U];
    vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_tag[2U] 
        = vlSelfRef.core__DOT__CDB_tag[2U];
    vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_tag[3U] 
        = vlSelfRef.core__DOT__CDB_tag[3U];
    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_tag[0U] 
        = vlSelfRef.core__DOT__CDB_tag[0U];
    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_tag[1U] 
        = vlSelfRef.core__DOT__CDB_tag[1U];
    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_tag[2U] 
        = vlSelfRef.core__DOT__CDB_tag[2U];
    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_tag[3U] 
        = vlSelfRef.core__DOT__CDB_tag[3U];
    vlSelfRef.core__DOT__register_file__DOT__rd_addr[0U] 
        = vlSelfRef.core__DOT__CDB_tag[0U];
    vlSelfRef.core__DOT__register_file__DOT__rd_addr[1U] 
        = vlSelfRef.core__DOT__CDB_tag[1U];
    vlSelfRef.core__DOT__register_file__DOT__rd_addr[2U] 
        = vlSelfRef.core__DOT__CDB_tag[2U];
    vlSelfRef.core__DOT__register_file__DOT__rd_addr[3U] 
        = vlSelfRef.core__DOT__CDB_tag[3U];
    vlSelfRef.core__DOT__rename__DOT__CDB_valid[0U] 
        = vlSelfRef.core__DOT__CDB_valid[0U];
    vlSelfRef.core__DOT__rename__DOT__CDB_valid[1U] 
        = vlSelfRef.core__DOT__CDB_valid[1U];
    vlSelfRef.core__DOT__rename__DOT__CDB_valid[2U] 
        = vlSelfRef.core__DOT__CDB_valid[2U];
    vlSelfRef.core__DOT__rename__DOT__CDB_valid[3U] 
        = vlSelfRef.core__DOT__CDB_valid[3U];
    vlSelfRef.core__DOT__issue__DOT__CDB_valid[0U] 
        = vlSelfRef.core__DOT__CDB_valid[0U];
    vlSelfRef.core__DOT__issue__DOT__CDB_valid[1U] 
        = vlSelfRef.core__DOT__CDB_valid[1U];
    vlSelfRef.core__DOT__issue__DOT__CDB_valid[2U] 
        = vlSelfRef.core__DOT__CDB_valid[2U];
    vlSelfRef.core__DOT__issue__DOT__CDB_valid[3U] 
        = vlSelfRef.core__DOT__CDB_valid[3U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_valid[0U] 
        = vlSelfRef.core__DOT__CDB_valid[0U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_valid[1U] 
        = vlSelfRef.core__DOT__CDB_valid[1U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_valid[2U] 
        = vlSelfRef.core__DOT__CDB_valid[2U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__CDB_valid[3U] 
        = vlSelfRef.core__DOT__CDB_valid[3U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_valid[0U] 
        = vlSelfRef.core__DOT__CDB_valid[0U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_valid[1U] 
        = vlSelfRef.core__DOT__CDB_valid[1U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_valid[2U] 
        = vlSelfRef.core__DOT__CDB_valid[2U];
    vlSelfRef.core__DOT__issue__DOT__genblk1__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__CDB_valid[3U] 
        = vlSelfRef.core__DOT__CDB_valid[3U];
    vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_valid[0U] 
        = vlSelfRef.core__DOT__CDB_valid[0U];
    vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_valid[1U] 
        = vlSelfRef.core__DOT__CDB_valid[1U];
    vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_valid[2U] 
        = vlSelfRef.core__DOT__CDB_valid[2U];
    vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__CDB_valid[3U] 
        = vlSelfRef.core__DOT__CDB_valid[3U];
    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_valid[0U] 
        = vlSelfRef.core__DOT__CDB_valid[0U];
    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_valid[1U] 
        = vlSelfRef.core__DOT__CDB_valid[1U];
    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_valid[2U] 
        = vlSelfRef.core__DOT__CDB_valid[2U];
    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__CDB_valid[3U] 
        = vlSelfRef.core__DOT__CDB_valid[3U];
    vlSelfRef.core__DOT__register_file__DOT__rd_write_en[0U] 
        = vlSelfRef.core__DOT__CDB_valid[0U];
    vlSelfRef.core__DOT__register_file__DOT__rd_write_en[1U] 
        = vlSelfRef.core__DOT__CDB_valid[1U];
    vlSelfRef.core__DOT__register_file__DOT__rd_write_en[2U] 
        = vlSelfRef.core__DOT__CDB_valid[2U];
    vlSelfRef.core__DOT__register_file__DOT__rd_write_en[3U] 
        = vlSelfRef.core__DOT__CDB_valid[3U];
    vlSelfRef.core__DOT__ROB__DOT__CDB_valid[0U] = vlSelfRef.core__DOT__CDB_valid[0U];
    vlSelfRef.core__DOT__ROB__DOT__CDB_valid[1U] = vlSelfRef.core__DOT__CDB_valid[1U];
    vlSelfRef.core__DOT__ROB__DOT__CDB_valid[2U] = vlSelfRef.core__DOT__CDB_valid[2U];
    vlSelfRef.core__DOT__ROB__DOT__CDB_valid[3U] = vlSelfRef.core__DOT__CDB_valid[3U];
    vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask = 0U;
    if ((vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[0U] 
         >> 0x0000001fU)) {
        vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[0U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[0U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[0U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[0U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[0U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[0U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[0U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[0U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[0U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[0U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask 
            = ((0xfeU & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask)) 
               | ((IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                  & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)));
    }
    if ((vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[1U] 
         >> 0x0000001fU)) {
        vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[1U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[1U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[1U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[1U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[1U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[1U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[1U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[1U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[1U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[1U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask 
            = ((0xfdU & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 1U));
    }
    if ((vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[2U] 
         >> 0x0000001fU)) {
        vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[2U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[2U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[2U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[2U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[2U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[2U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[2U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[2U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[2U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[2U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask 
            = ((0xfbU & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 2U));
    }
    if ((vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[3U] 
         >> 0x0000001fU)) {
        vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[3U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[3U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[3U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[3U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[3U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[3U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[3U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[3U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[3U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[3U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask 
            = ((0xf7U & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 3U));
    }
    if ((vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[4U] 
         >> 0x0000001fU)) {
        vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[4U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[4U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[4U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[4U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[4U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[4U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[4U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[4U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[4U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[4U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask 
            = ((0xefU & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 4U));
    }
    if ((vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[5U] 
         >> 0x0000001fU)) {
        vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[5U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[5U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[5U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[5U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[5U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[5U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[5U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[5U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[5U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[5U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask 
            = ((0xdfU & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 5U));
    }
    if ((vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[6U] 
         >> 0x0000001fU)) {
        vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[6U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[6U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[6U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[6U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[6U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[6U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[6U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[6U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[6U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[6U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask 
            = ((0xbfU & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 6U));
    }
    if ((vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[7U] 
         >> 0x0000001fU)) {
        vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[7U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[7U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[7U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[7U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[7U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[7U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[7U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[7U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[7U] 
                                >> 0x0000000eU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[7U] 
                                >> 8U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask 
            = ((0x7fU & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk2__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 7U));
    }
    vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask = 0U;
    if ((1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[0U][2U])) {
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[0U][0U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[0U][0U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[0U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[0U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[0U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[0U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[0U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[0U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[0U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[0U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask 
            = ((0xfeU & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask)) 
               | ((IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                  & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)));
    }
    if ((1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[1U][2U])) {
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 
            = (1U & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[1U][0U] 
                     >> 1U));
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 
            = (1U & vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[1U][0U]);
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[1U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[0U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[0U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[1U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[1U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[1U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[1U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[1U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[1U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[2U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[2U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[1U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[1U][1U] 
                                >> 0x0000000fU))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = 1U;
        }
        if (((vlSelfRef.core__DOT__CDB_valid[3U] & 
              (~ (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2))) 
             & (vlSelfRef.core__DOT__CDB_tag[3U] == 
                (0x0000003fU & (vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[1U][1U] 
                                >> 9U))))) {
            vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = 1U;
        }
        vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask 
            = ((0xfdU & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask)) 
               | (((IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1) 
                   & (IData)(vlSelfRef.core__DOT__issue__DOT__genblk3__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2)) 
                  << 1U));
    }
}
