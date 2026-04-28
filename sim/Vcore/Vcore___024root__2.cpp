// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore___024root___nba_sequent__TOP__3(Vcore___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___nba_sequent__TOP__3\n"); );
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}
