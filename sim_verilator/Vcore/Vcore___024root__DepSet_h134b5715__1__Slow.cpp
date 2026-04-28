// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"
#include "Vcore___024root.h"

VL_ATTR_COLD void Vcore___024root___stl_sequent__TOP__1(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___stl_sequent__TOP__1\n"); );
    // Body
    vlSelf->core__DOT__decode__DOT__decoder_out[1U][3U] 
        = ((0x1fU & vlSelf->core__DOT__decode__DOT__decoder_out
            [1U][3U]) | (0x20U & (vlSelf->core__DOT__fetch_instr
                                  [1U][2U] >> 2U)));
    vlSelf->core__DOT__decode__DOT__decoder_out[1U][2U] 
        = ((0x3fffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
            [1U][2U]) | (vlSelf->core__DOT__fetch_instr
                         [1U][2U] << 0x1eU));
    vlSelf->core__DOT__decode__DOT__decoder_out[1U][3U] 
        = ((0x20U & vlSelf->core__DOT__decode__DOT__decoder_out
            [1U][3U]) | (0x1fU & (vlSelf->core__DOT__fetch_instr
                                  [1U][2U] >> 2U)));
    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
        = ((0x3fffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
            [1U][1U]) | (vlSelf->core__DOT__fetch_instr
                         [1U][1U] << 0x1eU));
    vlSelf->core__DOT__decode__DOT__decoder_out[1U][2U] 
        = ((0xc0000000U & vlSelf->core__DOT__decode__DOT__decoder_out
            [1U][2U]) | (vlSelf->core__DOT__fetch_instr
                         [1U][1U] >> 2U));
    vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode[1U] 
        = (0x7fU & vlSelf->core__DOT__fetch_instr[1U][0U]);
    if ((0x40U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
         [1U])) {
        if ((0x20U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
             [1U])) {
            if ((0x10U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                 [1U])) {
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0x10000000U | (0xcfffffffU & 
                                      vlSelf->core__DOT__decode__DOT__decoder_out
                                      [1U][1U]));
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
            } else if ((8U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                        [1U])) {
                if ((4U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                     [1U])) {
                    if ((2U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                         [1U])) {
                        if ((1U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                             [1U])) {
                            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                                = (0x10000000U | (0xcfffffffU 
                                                  & vlSelf->core__DOT__decode__DOT__decoder_out
                                                  [1U][1U]));
                            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                                = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                   [1U][1U]);
                            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                                = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                   [1U][1U]);
                            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                                = ((0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                    [1U][1U]) | (0x3e00U 
                                                 & (vlSelf->core__DOT__fetch_instr
                                                    [1U][0U] 
                                                    << 2U)));
                            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                                = ((0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                    [1U][0U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                                 [1U] 
                                                 << 9U));
                            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                                = ((0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                                    [1U][1U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                                 [1U] 
                                                 >> 0x17U));
                            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                                = (0x100U | vlSelf->core__DOT__decode__DOT__decoder_out
                                   [1U][0U]);
                            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                                = (0x40U | (0xffffff3fU 
                                            & vlSelf->core__DOT__decode__DOT__decoder_out
                                            [1U][0U]));
                            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                                = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                                   [1U][0U]);
                            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                                = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                                   [1U][0U]);
                            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                                = (0x1000000U | (0xf0ffffffU 
                                                 & vlSelf->core__DOT__decode__DOT__decoder_out
                                                 [1U][1U]));
                        } else {
                            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                                = (0x10000000U | (0xcfffffffU 
                                                  & vlSelf->core__DOT__decode__DOT__decoder_out
                                                  [1U][1U]));
                            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                                = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                   [1U][1U]);
                            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                                = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                   [1U][1U]);
                            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                                = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                   [1U][1U]);
                            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                                = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                   [1U][0U]);
                            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                                = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                                   [1U][1U]);
                            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                                = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                   [1U][0U]);
                            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                                = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                                   [1U][0U]);
                            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                                = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                                   [1U][0U]);
                            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                                = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                                   [1U][0U]);
                            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                                = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                   [1U][1U]);
                        }
                    } else {
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = (0x10000000U | (0xcfffffffU 
                                              & vlSelf->core__DOT__decode__DOT__decoder_out
                                              [1U][1U]));
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][1U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][1U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][1U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                            = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][1U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                            = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                            = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                            = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                            = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][1U]);
                    }
                } else {
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0x10000000U | (0xcfffffffU 
                                          & vlSelf->core__DOT__decode__DOT__decoder_out
                                          [1U][1U]));
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                }
            } else if ((4U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                        [1U])) {
                if ((2U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                     [1U])) {
                    if ((1U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                         [1U])) {
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = (0x10000000U | (0xcfffffffU 
                                              & vlSelf->core__DOT__decode__DOT__decoder_out
                                              [1U][1U]));
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = ((0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                [1U][1U]) | (0xf80000U 
                                             & (vlSelf->core__DOT__fetch_instr
                                                [1U][0U] 
                                                << 4U)));
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][1U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = ((0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                [1U][1U]) | (0x3e00U 
                                             & (vlSelf->core__DOT__fetch_instr
                                                [1U][0U] 
                                                << 2U)));
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                            = ((0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                [1U][0U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                             [1U] << 9U));
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = ((0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                                [1U][1U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                             [1U] >> 0x17U));
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                            = (0x100U | vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                            = (0x80U | (0xffffff3fU 
                                        & vlSelf->core__DOT__decode__DOT__decoder_out
                                        [1U][0U]));
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                            = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                            = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = (0x1000000U | (0xf0ffffffU 
                                             & vlSelf->core__DOT__decode__DOT__decoder_out
                                             [1U][1U]));
                    } else {
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = (0x10000000U | (0xcfffffffU 
                                              & vlSelf->core__DOT__decode__DOT__decoder_out
                                              [1U][1U]));
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][1U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][1U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][1U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                            = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][1U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                            = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                            = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                            = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                            = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][1U]);
                    }
                } else {
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0x10000000U | (0xcfffffffU 
                                          & vlSelf->core__DOT__decode__DOT__decoder_out
                                          [1U][1U]));
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                }
            } else if ((2U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                        [1U])) {
                if ((1U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                     [1U])) {
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0x10000000U | (0xcfffffffU 
                                          & vlSelf->core__DOT__decode__DOT__decoder_out
                                          [1U][1U]));
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = ((0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                            [1U][1U]) | (0xf80000U 
                                         & (vlSelf->core__DOT__fetch_instr
                                            [1U][0U] 
                                            << 4U)));
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = ((0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                            [1U][1U]) | (0x7c000U & 
                                         (vlSelf->core__DOT__fetch_instr
                                          [1U][0U] 
                                          >> 6U)));
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = ((0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                            [1U][0U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                         [1U] << 9U));
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = ((0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                            [1U][1U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                         [1U] >> 0x17U));
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0x100U | vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xb000000U | (0xf0ffffffU 
                                         & vlSelf->core__DOT__decode__DOT__decoder_out
                                         [1U][1U]));
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = ((0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                            [1U][0U]) | (((0x4000U 
                                           & vlSelf->core__DOT__fetch_instr
                                           [1U][0U])
                                           ? ((0x2000U 
                                               & vlSelf->core__DOT__fetch_instr
                                               [1U][0U])
                                               ? ((0x1000U 
                                                   & vlSelf->core__DOT__fetch_instr
                                                   [1U][0U])
                                                   ? 6U
                                                   : 5U)
                                               : ((0x1000U 
                                                   & vlSelf->core__DOT__fetch_instr
                                                   [1U][0U])
                                                   ? 4U
                                                   : 3U))
                                           : ((0x2000U 
                                               & vlSelf->core__DOT__fetch_instr
                                               [1U][0U])
                                               ? 0U
                                               : ((0x1000U 
                                                   & vlSelf->core__DOT__fetch_instr
                                                   [1U][0U])
                                                   ? 2U
                                                   : 1U))) 
                                         << 2U));
                } else {
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0x10000000U | (0xcfffffffU 
                                          & vlSelf->core__DOT__decode__DOT__decoder_out
                                          [1U][1U]));
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                }
            } else {
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0x10000000U | (0xcfffffffU & 
                                      vlSelf->core__DOT__decode__DOT__decoder_out
                                      [1U][1U]));
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
            }
        } else {
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0x10000000U | (0xcfffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                  [1U][1U]));
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
        }
    } else if ((0x20U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                [1U])) {
        if ((0x10U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
             [1U])) {
            if ((8U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                 [1U])) {
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0x10000000U | (0xcfffffffU & 
                                      vlSelf->core__DOT__decode__DOT__decoder_out
                                      [1U][1U]));
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
            } else if ((4U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                        [1U])) {
                if ((2U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                     [1U])) {
                    if ((1U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                         [1U])) {
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = (0x10000000U | (0xcfffffffU 
                                              & vlSelf->core__DOT__decode__DOT__decoder_out
                                              [1U][1U]));
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][1U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][1U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = ((0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                [1U][1U]) | (0x3e00U 
                                             & (vlSelf->core__DOT__fetch_instr
                                                [1U][0U] 
                                                << 2U)));
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                            = ((0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                [1U][0U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                             [1U] << 9U));
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = ((0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                                [1U][1U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                             [1U] >> 0x17U));
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                            = (0x100U | vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                            = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                            = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                            = (2U | (0xfffffffcU & 
                                     vlSelf->core__DOT__decode__DOT__decoder_out
                                     [1U][0U]));
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = (0xb000000U | (0xf0ffffffU 
                                             & vlSelf->core__DOT__decode__DOT__decoder_out
                                             [1U][1U]));
                    } else {
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = (0x10000000U | (0xcfffffffU 
                                              & vlSelf->core__DOT__decode__DOT__decoder_out
                                              [1U][1U]));
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][1U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][1U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][1U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                            = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][1U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                            = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                            = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                            = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                            = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][0U]);
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                               [1U][1U]);
                    }
                } else {
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0x10000000U | (0xcfffffffU 
                                          & vlSelf->core__DOT__decode__DOT__decoder_out
                                          [1U][1U]));
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                }
            } else if ((2U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                        [1U])) {
                if ((1U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                     [1U])) {
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = ((0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                            [1U][1U]) | (0xf80000U 
                                         & (vlSelf->core__DOT__fetch_instr
                                            [1U][0U] 
                                            << 4U)));
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = ((0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                            [1U][1U]) | (0x7c000U & 
                                         (vlSelf->core__DOT__fetch_instr
                                          [1U][0U] 
                                          >> 6U)));
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = ((0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                            [1U][1U]) | (0x3e00U & 
                                         (vlSelf->core__DOT__fetch_instr
                                          [1U][0U] 
                                          << 2U)));
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    if ((1U == (vlSelf->core__DOT__fetch_instr
                                [1U][0U] >> 0x19U))) {
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = (0x20000000U | (0xcfffffffU 
                                              & vlSelf->core__DOT__decode__DOT__decoder_out
                                              [1U][1U]));
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = ((0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                [1U][1U]) | (((0x4000U 
                                               & vlSelf->core__DOT__fetch_instr
                                               [1U][0U])
                                               ? ((0x2000U 
                                                   & vlSelf->core__DOT__fetch_instr
                                                   [1U][0U])
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->core__DOT__fetch_instr
                                                    [1U][0U])
                                                    ? 8U
                                                    : 7U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->core__DOT__fetch_instr
                                                    [1U][0U])
                                                    ? 6U
                                                    : 5U))
                                               : ((0x2000U 
                                                   & vlSelf->core__DOT__fetch_instr
                                                   [1U][0U])
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->core__DOT__fetch_instr
                                                    [1U][0U])
                                                    ? 4U
                                                    : 3U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->core__DOT__fetch_instr
                                                    [1U][0U])
                                                    ? 2U
                                                    : 1U))) 
                                             << 0x18U));
                    } else {
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = (0x10000000U | (0xcfffffffU 
                                              & vlSelf->core__DOT__decode__DOT__decoder_out
                                              [1U][1U]));
                        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                            = ((0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                [1U][1U]) | (((0x4000U 
                                               & vlSelf->core__DOT__fetch_instr
                                               [1U][0U])
                                               ? ((0x2000U 
                                                   & vlSelf->core__DOT__fetch_instr
                                                   [1U][0U])
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->core__DOT__fetch_instr
                                                    [1U][0U])
                                                    ? 0xaU
                                                    : 9U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->core__DOT__fetch_instr
                                                    [1U][0U])
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (vlSelf->core__DOT__fetch_instr
                                                      [1U][0U] 
                                                      >> 0x19U))
                                                     ? 7U
                                                     : 8U)
                                                    : 6U))
                                               : ((0x2000U 
                                                   & vlSelf->core__DOT__fetch_instr
                                                   [1U][0U])
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->core__DOT__fetch_instr
                                                    [1U][0U])
                                                    ? 5U
                                                    : 4U)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->core__DOT__fetch_instr
                                                    [1U][0U])
                                                    ? 3U
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (vlSelf->core__DOT__fetch_instr
                                                      [1U][0U] 
                                                      >> 0x19U))
                                                     ? 1U
                                                     : 2U)))) 
                                             << 0x18U));
                    }
                } else {
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0x10000000U | (0xcfffffffU 
                                          & vlSelf->core__DOT__decode__DOT__decoder_out
                                          [1U][1U]));
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                }
            } else {
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0x10000000U | (0xcfffffffU & 
                                      vlSelf->core__DOT__decode__DOT__decoder_out
                                      [1U][1U]));
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
            }
        } else if ((8U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                    [1U])) {
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0x10000000U | (0xcfffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                  [1U][1U]));
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
        } else if ((4U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                    [1U])) {
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0x10000000U | (0xcfffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                  [1U][1U]));
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
        } else if ((2U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                    [1U])) {
            if ((1U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                 [1U])) {
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0x30000000U | vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = ((0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                        [1U][1U]) | (0xf80000U & (vlSelf->core__DOT__fetch_instr
                                                  [1U][0U] 
                                                  << 4U)));
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = ((0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                        [1U][1U]) | (0x7c000U & (vlSelf->core__DOT__fetch_instr
                                                 [1U][0U] 
                                                 >> 6U)));
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = ((0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                        [1U][0U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                     [1U] << 9U));
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = ((0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                        [1U][1U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                     [1U] >> 0x17U));
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0x100U | vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = ((0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                        [1U][1U]) | (((0U == (7U & 
                                              (vlSelf->core__DOT__fetch_instr
                                               [1U][0U] 
                                               >> 0xcU)))
                                       ? 6U : ((1U 
                                                == 
                                                (7U 
                                                 & (vlSelf->core__DOT__fetch_instr
                                                    [1U][0U] 
                                                    >> 0xcU)))
                                                ? 7U
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (vlSelf->core__DOT__fetch_instr
                                                        [1U][0U] 
                                                        >> 0xcU)))
                                                    ? 8U
                                                    : 0U))) 
                                     << 0x18U));
            } else {
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0x10000000U | (0xcfffffffU & 
                                      vlSelf->core__DOT__decode__DOT__decoder_out
                                      [1U][1U]));
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
            }
        } else {
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0x10000000U | (0xcfffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                  [1U][1U]));
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
        }
    } else if ((0x10U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                [1U])) {
        if ((8U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
             [1U])) {
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0x10000000U | (0xcfffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                  [1U][1U]));
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
        } else if ((4U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                    [1U])) {
            if ((2U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                 [1U])) {
                if ((1U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                     [1U])) {
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0x10000000U | (0xcfffffffU 
                                          & vlSelf->core__DOT__decode__DOT__decoder_out
                                          [1U][1U]));
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = ((0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                            [1U][1U]) | (0x3e00U & 
                                         (vlSelf->core__DOT__fetch_instr
                                          [1U][0U] 
                                          << 2U)));
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = ((0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                            [1U][0U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                         [1U] << 9U));
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = ((0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                            [1U][1U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                         [1U] >> 0x17U));
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0x100U | vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (1U | (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                                 [1U][0U]));
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0x1000000U | (0xf0ffffffU 
                                         & vlSelf->core__DOT__decode__DOT__decoder_out
                                         [1U][1U]));
                } else {
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0x10000000U | (0xcfffffffU 
                                          & vlSelf->core__DOT__decode__DOT__decoder_out
                                          [1U][1U]));
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                        = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][0U]);
                    vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                        = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                           [1U][1U]);
                }
            } else {
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0x10000000U | (0xcfffffffU & 
                                      vlSelf->core__DOT__decode__DOT__decoder_out
                                      [1U][1U]));
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
            }
        } else if ((2U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                    [1U])) {
            if ((1U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                 [1U])) {
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0x10000000U | (0xcfffffffU & 
                                      vlSelf->core__DOT__decode__DOT__decoder_out
                                      [1U][1U]));
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = ((0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                        [1U][1U]) | (0xf80000U & (vlSelf->core__DOT__fetch_instr
                                                  [1U][0U] 
                                                  << 4U)));
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = ((0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                        [1U][1U]) | (0x3e00U & (vlSelf->core__DOT__fetch_instr
                                                [1U][0U] 
                                                << 2U)));
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = ((0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                        [1U][0U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                     [1U] << 9U));
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = ((0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                        [1U][1U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                     [1U] >> 0x17U));
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0x100U | vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = ((0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                        [1U][1U]) | (((0x4000U & vlSelf->core__DOT__fetch_instr
                                       [1U][0U]) ? 
                                      ((0x2000U & vlSelf->core__DOT__fetch_instr
                                        [1U][0U]) ? 
                                       ((0x1000U & 
                                         vlSelf->core__DOT__fetch_instr
                                         [1U][0U]) ? 0xaU
                                         : 9U) : ((0x1000U 
                                                   & vlSelf->core__DOT__fetch_instr
                                                   [1U][0U])
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (vlSelf->core__DOT__fetch_instr
                                                     [1U][0U] 
                                                     >> 0x19U))
                                                    ? 7U
                                                    : 8U)
                                                   : 6U))
                                       : ((0x2000U 
                                           & vlSelf->core__DOT__fetch_instr
                                           [1U][0U])
                                           ? ((0x1000U 
                                               & vlSelf->core__DOT__fetch_instr
                                               [1U][0U])
                                               ? 5U
                                               : 4U)
                                           : ((0x1000U 
                                               & vlSelf->core__DOT__fetch_instr
                                               [1U][0U])
                                               ? 3U
                                               : 1U))) 
                                     << 0x18U));
            } else {
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0x10000000U | (0xcfffffffU & 
                                      vlSelf->core__DOT__decode__DOT__decoder_out
                                      [1U][1U]));
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                    = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][0U]);
                vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                    = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                       [1U][1U]);
            }
        } else {
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0x10000000U | (0xcfffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                  [1U][1U]));
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
        }
    } else if ((8U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                [1U])) {
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
            = (0x10000000U | (0xcfffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                              [1U][1U]));
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
            = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [1U][1U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
            = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [1U][1U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
            = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [1U][1U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
            = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [1U][0U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
            = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
               [1U][1U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
            = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [1U][0U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
            = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
               [1U][0U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
            = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
               [1U][0U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
            = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
               [1U][0U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
            = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [1U][1U]);
    } else if ((4U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                [1U])) {
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
            = (0x10000000U | (0xcfffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                              [1U][1U]));
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
            = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [1U][1U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
            = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [1U][1U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
            = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [1U][1U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
            = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [1U][0U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
            = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
               [1U][1U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
            = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [1U][0U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
            = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
               [1U][0U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
            = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
               [1U][0U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
            = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
               [1U][0U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
            = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [1U][1U]);
    } else if ((2U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
                [1U])) {
        if ((1U & vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode
             [1U])) {
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0x30000000U | vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = ((0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                    [1U][1U]) | (0xf80000U & (vlSelf->core__DOT__fetch_instr
                                              [1U][0U] 
                                              << 4U)));
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = ((0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                    [1U][1U]) | (0x3e00U & (vlSelf->core__DOT__fetch_instr
                                            [1U][0U] 
                                            << 2U)));
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = ((0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                    [1U][0U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                 [1U] << 9U));
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = ((0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                    [1U][1U]) | (vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate
                                 [1U] >> 0x17U));
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0x100U | vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = ((0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                    [1U][1U]) | (((0x4000U & vlSelf->core__DOT__fetch_instr
                                   [1U][0U]) ? ((0x2000U 
                                                 & vlSelf->core__DOT__fetch_instr
                                                 [1U][0U])
                                                 ? 0U
                                                 : 
                                                ((0x1000U 
                                                  & vlSelf->core__DOT__fetch_instr
                                                  [1U][0U])
                                                  ? 5U
                                                  : 4U))
                                   : ((0x2000U & vlSelf->core__DOT__fetch_instr
                                       [1U][0U]) ? 
                                      ((0x1000U & vlSelf->core__DOT__fetch_instr
                                        [1U][0U]) ? 0U
                                        : 3U) : ((0x1000U 
                                                  & vlSelf->core__DOT__fetch_instr
                                                  [1U][0U])
                                                  ? 2U
                                                  : 1U))) 
                                 << 0x18U));
        } else {
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0x10000000U | (0xcfffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                                  [1U][1U]));
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
                = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][0U]);
            vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
                = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                   [1U][1U]);
        }
    } else {
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
            = (0x10000000U | (0xcfffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
                              [1U][1U]));
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
            = (0xff07ffffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [1U][1U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
            = (0xfff83fffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [1U][1U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
            = (0xffffc1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [1U][1U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
            = (0x1ffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [1U][0U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
            = (0xfffffe00U & vlSelf->core__DOT__decode__DOT__decoder_out
               [1U][1U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
            = (0xfffffeffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [1U][0U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
            = (0xffffff3fU & vlSelf->core__DOT__decode__DOT__decoder_out
               [1U][0U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
            = (0xffffffc3U & vlSelf->core__DOT__decode__DOT__decoder_out
               [1U][0U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][0U] 
            = (0xfffffffcU & vlSelf->core__DOT__decode__DOT__decoder_out
               [1U][0U]);
        vlSelf->core__DOT__decode__DOT__decoder_out[1U][1U] 
            = (0xf0ffffffU & vlSelf->core__DOT__decode__DOT__decoder_out
               [1U][1U]);
    }
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

VL_ATTR_COLD void Vcore___024root___stl_comb__TOP__7(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___stl_comb__TOP__7\n"); );
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
                    goto __Vlabel1;
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
            __Vlabel1: ;
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

VL_ATTR_COLD void Vcore___024root___stl_sequent__TOP__0(Vcore___024root* vlSelf);
void Vcore___024root___act_sequent__TOP__0(Vcore___024root* vlSelf);
void Vcore___024root___act_sequent__TOP__1(Vcore___024root* vlSelf);
void Vcore___024root___act_sequent__TOP__2(Vcore___024root* vlSelf);
void Vcore___024root___act_sequent__TOP__3(Vcore___024root* vlSelf);
void Vcore___024root___act_sequent__TOP__4(Vcore___024root* vlSelf);
void Vcore___024root___act_sequent__TOP__5(Vcore___024root* vlSelf);
void Vcore___024root___act_sequent__TOP__6(Vcore___024root* vlSelf);
void Vcore___024root___act_comb__TOP__0(Vcore___024root* vlSelf);
void Vcore___024root___act_comb__TOP__1(Vcore___024root* vlSelf);
void Vcore___024root___act_comb__TOP__2(Vcore___024root* vlSelf);
void Vcore___024root___act_comb__TOP__3(Vcore___024root* vlSelf);
void Vcore___024root___act_comb__TOP__4(Vcore___024root* vlSelf);

VL_ATTR_COLD void Vcore___024root___eval_stl(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vcore___024root___stl_sequent__TOP__0(vlSelf);
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
        Vcore___024root___stl_sequent__TOP__1(vlSelf);
    }
    if ((0x81ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vcore___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x101ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vcore___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((5ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vcore___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x11ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vcore___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((0x41ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vcore___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((0x21ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vcore___024root___act_sequent__TOP__5(vlSelf);
    }
    if ((9ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vcore___024root___act_sequent__TOP__6(vlSelf);
    }
    if ((3ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vcore___024root___stl_comb__TOP__7(vlSelf);
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
    }
    if ((0xc1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vcore___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x31ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vcore___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0xdULL & vlSelf->__VstlTriggered.word(0U))) {
        Vcore___024root___act_comb__TOP__2(vlSelf);
    }
    if ((0x103ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vcore___024root___act_comb__TOP__3(vlSelf);
    }
    if ((0xfdULL & vlSelf->__VstlTriggered.word(0U))) {
        Vcore___024root___act_comb__TOP__4(vlSelf);
    }
}

VL_ATTR_COLD void Vcore___024root___eval_triggers__stl(Vcore___024root* vlSelf);

VL_ATTR_COLD bool Vcore___024root___eval_phase__stl(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcore___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vcore___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__act(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] core.flush)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] core.dispatch.DU.prefix_alu)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([hybrid] core.dispatch.DU.prefix_ready_alu)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([hybrid] core.dispatch.DU.prefix_mul)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([hybrid] core.dispatch.DU.prefix_ready_mul)\n");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([hybrid] core.dispatch.DU.prefix_lsu)\n");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([hybrid] core.dispatch.DU.prefix_ready_lsu)\n");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([hybrid] core.rename.masked)\n");
    }
    if ((0x100ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @(posedge clk)\n");
    }
    if ((0x200ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @(posedge clk or posedge rst)\n");
    }
    if ((0x400ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @(posedge clk_m or posedge rst_m)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcore___024root___dump_triggers__nba(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] core.flush)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] core.dispatch.DU.prefix_alu)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([hybrid] core.dispatch.DU.prefix_ready_alu)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([hybrid] core.dispatch.DU.prefix_mul)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([hybrid] core.dispatch.DU.prefix_ready_mul)\n");
    }
    if ((0x20ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([hybrid] core.dispatch.DU.prefix_lsu)\n");
    }
    if ((0x40ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([hybrid] core.dispatch.DU.prefix_ready_lsu)\n");
    }
    if ((0x80ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([hybrid] core.rename.masked)\n");
    }
    if ((0x100ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @(posedge clk)\n");
    }
    if ((0x200ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @(posedge clk or posedge rst)\n");
    }
    if ((0x400ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @(posedge clk_m or posedge rst_m)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcore___024root___ctor_var_reset(Vcore___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcore__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcore___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->clk_m = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->rst_m = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__jump1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__jump2 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__consumed = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__jta1 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__jta2 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__prefetch_instr[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->core__DOT__rename_busy = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__flush = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(72, vlSelf->core__DOT__fetch_instr[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(102, vlSelf->core__DOT__decode_instr[__Vi0]);
    }
    vlSelf->core__DOT__ROB_busy = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dispatch_busy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->core__DOT__restore_specTag[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->core__DOT__restore_free[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__commit_packet[__Vi0] = VL_RAND_RESET_I(19);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->core__DOT__read_ready[__Vi0][__Vi1] = VL_RAND_RESET_I(6);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->core__DOT__reg_ready[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(105, vlSelf->core__DOT__rename_instr[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__chkpt[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__chkpt_sqN[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->core__DOT__store_specTag[__Vi0][__Vi1] = VL_RAND_RESET_I(6);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 64; ++__Vi1) {
            vlSelf->core__DOT__store_free[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->core__DOT__CDB[__Vi0] = VL_RAND_RESET_Q(46);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->core__DOT__CDB_tag[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->core__DOT__CDB_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->core__DOT__CDB_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->core__DOT__CDB_sqN[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__rename_rob_rd[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__rename_rob[__Vi0] = VL_RAND_RESET_I(19);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__alu_buffer_busy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->core__DOT__mul_div_buffer_busy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->core__DOT__lsu_buffer_busy[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->core__DOT__flush_sqN = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__commit_sqN[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(103, vlSelf->core__DOT__alu_dispatch_instr[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->core__DOT__mul_div_dispatch_instr[__Vi0] = VL_RAND_RESET_I(30);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->core__DOT__lsu_dispatch_instr[__Vi0] = VL_RAND_RESET_Q(63);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->core__DOT__issue_buffer_busy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->core__DOT__RF_raddr[__Vi0][__Vi1] = VL_RAND_RESET_I(6);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            vlSelf->core__DOT__RF_read_data[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->core__DOT__mul_div_fu_busy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        VL_RAND_RESET_W(82, vlSelf->core__DOT__int_issue_instr[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(114, vlSelf->core__DOT__lsu_issue_instr[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__br_taken[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__jump_type[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__br_jalr_sqN[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT____Vcellinp__flush_controller__jump_type[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT____Vcellinp__flush_controller__sqN[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT____Vcellinp__flush_controller__br_taken[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(77, vlSelf->core__DOT__agu_out[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->core__DOT__int_cdb_lines[__Vi0] = VL_RAND_RESET_Q(46);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->core__DOT__lsu_cdb_lines[__Vi0] = VL_RAND_RESET_Q(46);
    }
    vlSelf->core__DOT____Vcellout__lsu__OUT_cdb = VL_RAND_RESET_Q(46);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->core__DOT__rs1_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->core__DOT__rs2_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->core__DOT__rs1_addr[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->core__DOT__rs2_addr[__Vi0] = VL_RAND_RESET_I(6);
    }
    vlSelf->core__DOT__prefetch__DOT__in_pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__prefetch__DOT__PC__DOT__pc_reg = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->core__DOT__prefetch__DOT__IMEM__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->core__DOT__prefetch__DOT__IMEM__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->core__DOT__prefetch__DOT__IMEM__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->core__DOT__fetch__DOT__q = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__fetch__DOT__invalidate = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->core__DOT__fetch__DOT__aligner_out[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__fetch__DOT__pc_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__fetch__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__fetch__DOT__opcode[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__fetch__DOT__imm[__Vi0] = VL_RAND_RESET_I(21);
    }
    vlSelf->core__DOT__fetch__DOT__iw = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__fetch__DOT__IA__DOT__pc_align = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__fetch__DOT__IA__DOT__pc_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->core__DOT__fetch__DOT__JTA1__DOT__jump_valid = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__fetch__DOT__JTA1__DOT__jump_index = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(71, vlSelf->core__DOT__fetch__DOT__FB__DOT__buffer[__Vi0]);
    }
    vlSelf->core__DOT__fetch__DOT__FB__DOT__head = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__fetch__DOT__FB__DOT__tail = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__fetch__DOT__FB__DOT__count = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__fetch__DOT__FB__DOT__sqN_counter = VL_RAND_RESET_I(7);
    vlSelf->core__DOT__fetch__DOT__FB__DOT__in_valid_count = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__fetch__DOT__FB__DOT__out_count = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__fetch__DOT__FB__DOT__can_read = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__fetch__DOT__FB__DOT__idx_head = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__fetch__DOT__FB__DOT__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(102, vlSelf->core__DOT__decode__DOT__decoder_out[__Vi0]);
    }
    vlSelf->core__DOT__decode__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__decode__DOT__Decoder__DOT__opcode[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__decode__DOT__Decoder__DOT__immediate[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm12 = VL_RAND_RESET_I(12);
    vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm13 = VL_RAND_RESET_I(13);
    vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__imm21 = VL_RAND_RESET_I(21);
    vlSelf->core__DOT__decode__DOT__Decoder__DOT__IG__DOT__iw = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->core__DOT__rename__DOT__tag_buffer[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->core__DOT__rename__DOT__rename_table[__Vi0] = VL_RAND_RESET_I(12);
    }
    vlSelf->core__DOT__rename__DOT__ftb = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__rename__DOT__req_valid = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->core__DOT__rename__DOT__masked[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__rename__DOT__onehot[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__rename__DOT__chosen[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->core__DOT__rename__DOT__free_count[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__rename__DOT__req_count[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->core__DOT__rename__DOT__chkpt_need = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->core__DOT__rename__DOT__local_rat[__Vi0][__Vi1] = VL_RAND_RESET_I(6);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__rename__DOT__free_CommTag[__Vi0] = VL_RAND_RESET_I(6);
    }
    vlSelf->core__DOT__rename__DOT__unnamedblk9__DOT__i = 0;
    vlSelf->core__DOT__rename__DOT__unnamedblk10__DOT__i = 0;
    vlSelf->core__DOT__rename__DOT__unnamedblk11__DOT__i = 0;
    vlSelf->core__DOT__rename__DOT__unnamedblk11__DOT__unnamedblk12__DOT__r = 0;
    vlSelf->core__DOT__rename__DOT__unnamedblk11__DOT__unnamedblk13__DOT__b = 0;
    vlSelf->core__DOT__rename__DOT__unnamedblk14__DOT__i = 0;
    vlSelf->core__DOT__rename__DOT__unnamedblk14__DOT__unnamedblk15__DOT__r = 0;
    vlSelf->core__DOT__rename__DOT__unnamedblk14__DOT__unnamedblk16__DOT__b = 0;
    vlSelf->core__DOT__rename__DOT__unnamedblk17__DOT__i = 0;
    vlSelf->core__DOT__rename__DOT__unnamedblk18__DOT__i = 0;
    vlSelf->core__DOT__rename__DOT__unnamedblk19__DOT__b = 0;
    vlSelf->core__DOT__rename__DOT__unnamedblk20__DOT__i = 0;
    vlSelf->core__DOT__rename__DOT__unnamedblk21__DOT__i = 0;
    vlSelf->core__DOT__rename__DOT__unnamedblk22__DOT__i = 0;
    vlSelf->core__DOT__rename__DOT__unnamedblk23__DOT__r = 0;
    vlSelf->core__DOT__rename__DOT__unnamedblk24__DOT__r = 0;
    vlSelf->core__DOT__rename__DOT__unnamedblk25__DOT__i = 0;
    vlSelf->core__DOT__rename__DOT__unnamedblk26__DOT__r = 0;
    vlSelf->core__DOT__rename__DOT__unnamedblk27__DOT__i = 0;
    vlSelf->core__DOT__rename__DOT____Vlvbound_h1e224336__0 = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(103, vlSelf->core__DOT__dispatch__DOT__alu_dispatch_out[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->core__DOT__dispatch__DOT__mul_div_dispatch_out[__Vi0] = VL_RAND_RESET_I(30);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->core__DOT__dispatch__DOT__lsu_dispatch_out[__Vi0] = VL_RAND_RESET_Q(63);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(105, vlSelf->core__DOT__dispatch__DOT__DU__DOT__packet[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__dispatch__DOT__DU__DOT__dispatched[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__dispatch__DOT__DU__DOT__alu_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->core__DOT__dispatch__DOT__DU__DOT__mul_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->core__DOT__dispatch__DOT__DU__DOT__lsu_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__dispatch__DOT__DU__DOT__slot_pending[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__dispatch__DOT__DU__DOT__slot_is_alu[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__dispatch__DOT__DU__DOT__slot_is_mul[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__dispatch__DOT__DU__DOT__slot_is_lsu[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_alu[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_mul[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_lsu[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_mul[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__dispatch__DOT__DU__DOT__prefix_ready_lsu[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__dispatch__DOT__DU__DOT__alu_slot[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__dispatch__DOT__DU__DOT__alu_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->core__DOT__dispatch__DOT__DU__DOT__mul_slot[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->core__DOT__dispatch__DOT__DU__DOT__mul_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->core__DOT__dispatch__DOT__DU__DOT__lsu_slot[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->core__DOT__dispatch__DOT__DU__DOT__lsu_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__dispatch__DOT__DU__DOT__can_dispatch[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->core__DOT__dispatch__DOT__DU__DOT__packet_done = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__dispatch__DOT__DU__DOT__unnamedblk1__DOT__g_alu_assign__DOT__unnamedblk2__DOT__s = 0;
    vlSelf->core__DOT__dispatch__DOT__DU__DOT__unnamedblk3__DOT__unnamedblk4__DOT__s = 0;
    vlSelf->core__DOT__dispatch__DOT__DU__DOT__unnamedblk5__DOT__unnamedblk6__DOT__s = 0;
    vlSelf->core__DOT__dispatch__DOT__DU__DOT__unnamedblk12__DOT__p = 0;
    vlSelf->core__DOT__dispatch__DOT__DU__DOT__unnamedblk13__DOT__p = 0;
    vlSelf->core__DOT__dispatch__DOT__DU__DOT__unnamedblk14__DOT__p = 0;
    vlSelf->core__DOT__dispatch__DOT__DU__DOT__unnamedblk15__DOT__i = 0;
    vlSelf->core__DOT__dispatch__DOT__DU__DOT__unnamedblk16__DOT__i = 0;
    vlSelf->core__DOT__dispatch__DOT__DU__DOT__unnamedblk17__DOT__i = 0;
    vlSelf->core__DOT__dispatch__DOT__DU__DOT____Vlvbound_h1aff00cd__0 = VL_RAND_RESET_I(7);
    vlSelf->core__DOT__dispatch__DOT__DU__DOT____Vlvbound_h0a971624__0 = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__dispatch__DOT__DU__DOT____Vlvbound_h0c642120__0 = VL_RAND_RESET_I(6);
    vlSelf->core__DOT__dispatch__DOT__DU__DOT____Vlvbound_h0c63fe7a__0 = VL_RAND_RESET_I(6);
    vlSelf->core__DOT__dispatch__DOT__DU__DOT____Vlvbound_h0c65601b__0 = VL_RAND_RESET_I(6);
    vlSelf->core__DOT__dispatch__DOT__DU__DOT____Vlvbound_he58089a1__0 = VL_RAND_RESET_I(7);
    vlSelf->core__DOT__dispatch__DOT__DU__DOT____Vlvbound_h8cde0a2a__0 = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__dispatch__DOT__DU__DOT____Vlvbound_hdbd66b77__0 = VL_RAND_RESET_I(6);
    vlSelf->core__DOT__dispatch__DOT__DU__DOT____Vlvbound_hdbd65884__0 = VL_RAND_RESET_I(6);
    vlSelf->core__DOT__dispatch__DOT__DU__DOT____Vlvbound_hdbd638f6__0 = VL_RAND_RESET_I(6);
    vlSelf->core__DOT__dispatch__DOT__DU__DOT____Vlvbound_h09f7461c__0 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__dispatch__DOT__DU__DOT____Vlvbound_heace712a__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->core__DOT__dispatch__DOT__BC__DOT__valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 32; ++__Vi1) {
            vlSelf->core__DOT__dispatch__DOT__BC__DOT__specTag[__Vi0][__Vi1] = VL_RAND_RESET_I(6);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 64; ++__Vi1) {
            vlSelf->core__DOT__dispatch__DOT__BC__DOT__free[__Vi0][__Vi1] = VL_RAND_RESET_I(1);
        }
    }
    vlSelf->core__DOT__dispatch__DOT__BC__DOT__count = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__dispatch__DOT__BC__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->core__DOT__dispatch__DOT__BC__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->core__DOT__dispatch__DOT__BC__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->core__DOT__dispatch__DOT__BC__DOT__unnamedblk5__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__issue__DOT__pc[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__issue__DOT__instr_sqN[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__issue__DOT__instr_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__issue__DOT__alu_rs1_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__issue__DOT__alu_imm[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__read_tag[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__check_ready[__Vi0] = VL_RAND_RESET_I(6);
    }
    vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__imm = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__rs1_result = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_jump_type = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(82, vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__OUT_instr);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__RF_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__tag_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__read_tag[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__check_ready[__Vi0] = VL_RAND_RESET_I(6);
    }
    vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__imm = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__rs1_result = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_pc = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_jump_type = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(82, vlSelf->core__DOT__issue__DOT____Vcellout__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__OUT_instr);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__RF_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__issue__DOT____Vcellinp__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__tag_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__issue__DOT____Vcellout__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__read_tag[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__issue__DOT____Vcellout__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__check_ready[__Vi0] = VL_RAND_RESET_I(6);
    }
    VL_RAND_RESET_W(82, vlSelf->core__DOT__issue__DOT____Vcellout__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__OUT_instr);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__issue__DOT____Vcellinp__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__RF_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__issue__DOT____Vcellinp__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__tag_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__read_tag[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__check_ready[__Vi0] = VL_RAND_RESET_I(6);
    }
    VL_RAND_RESET_W(114, vlSelf->core__DOT__issue__DOT____Vcellout__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__OUT_instr);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__issue__DOT____Vcellinp__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__RF_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__issue__DOT____Vcellinp__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__tag_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->core__DOT__issue__DOT__ta_gen2__DOT__oldest_idx = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__issue__DOT__ta_gen2__DOT__oldest_sqN = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(105, vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__queue[__Vi0]);
    }
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__tail = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__ready_mask = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_idx = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_found = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__sel2 = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__is_jump = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__issue_valid = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 0;
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk4__DOT__j = 0;
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk5__DOT__j = 0;
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk6__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(105, vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[__Vi0]);
    }
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff = VL_RAND_RESET_I(7);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk10__DOT__i = 0;
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk11__DOT__i = 0;
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0;
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk13__DOT__i = 0;
    VL_ZERO_RESET_W(105, vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__0__KET____DOT__alu_issue_buffer_i__DOT__pe__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(105, vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__queue[__Vi0]);
    }
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__tail = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__ready_mask = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_idx = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_found = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs1_data_selected = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__rs2_data_selected = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__sel2 = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__is_jump = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__issue_valid = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____Vcellinp__bc__br_type = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 0;
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk4__DOT__j = 0;
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk5__DOT__j = 0;
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk6__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(105, vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_queue[__Vi0]);
    }
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__next_tail = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff = VL_RAND_RESET_I(7);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk10__DOT__i = 0;
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk11__DOT__i = 0;
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0;
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk13__DOT__i = 0;
    VL_ZERO_RESET_W(105, vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT____VdfgTmp_h256fc990__0);
    vlSelf->core__DOT__issue__DOT__gen_alu_buffer__BRA__1__KET____DOT__alu_issue_buffer_i__DOT__pe__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__tail = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__ready_mask = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_idx = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_found = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs1_data_selected = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__rs2_data_selected = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__issue_valid = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 0;
    vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk4__DOT__j = 0;
    vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk5__DOT__j = 0;
    vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk6__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff = VL_RAND_RESET_I(7);
    vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk10__DOT__i = 0;
    vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk11__DOT__i = 0;
    vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0;
    vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk13__DOT__i = 0;
    vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT____VdfgTmp_h256a4fc8__0 = 0;
    vlSelf->core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__pe__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__queue[__Vi0]);
    }
    vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__tail = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__ready_mask = VL_RAND_RESET_I(8);
    vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_idx = VL_RAND_RESET_I(3);
    vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_found = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs1_data_selected = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__rs2_data_selected = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__issue_valid = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__r2 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j = 0;
    vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk4__DOT__j = 0;
    vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk5__DOT__j = 0;
    vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk6__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        VL_RAND_RESET_W(65, vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_queue[__Vi0]);
    }
    vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__v_tail = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__diff = VL_RAND_RESET_I(7);
    vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk10__DOT__i = 0;
    vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk11__DOT__i = 0;
    vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0;
    vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__unnamedblk7__DOT__unnamedblk13__DOT__i = 0;
    VL_ZERO_RESET_W(65, vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT____VdfgTmp_h25684f9f__0);
    vlSelf->core__DOT__issue__DOT__gen_agu_buffer__BRA__0__KET____DOT__lsu_issue_buffer_i__DOT__pe__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->core__DOT__flush_controller__DOT__unnamedblk1__DOT__valid0 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__flush_controller__DOT__unnamedblk1__DOT__valid1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__flush_controller__DOT__unnamedblk1__DOT__diff = VL_RAND_RESET_I(7);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->core__DOT__execute__DOT__int_fu_out[__Vi0] = VL_RAND_RESET_Q(46);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        VL_RAND_RESET_W(77, vlSelf->core__DOT__execute__DOT__next_agu_out[__Vi0]);
    }
    vlSelf->core__DOT__execute__DOT____Vcellout__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__OUT_cdb = VL_RAND_RESET_Q(46);
    vlSelf->core__DOT__execute__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->core__DOT__execute__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->core__DOT__execute__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->core__DOT__execute__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->core__DOT__execute__DOT__gen_alu_fu__BRA__0__KET____DOT__ALU_i__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__execute__DOT__gen_alu_fu__BRA__1__KET____DOT__ALU_i__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__state = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(82, vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r);
    vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__result = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_valid = VL_RAND_RESET_I(3);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_sqN[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_tag[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_oper[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_dividend = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_divisor = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_quotient = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_remainder = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_partial = VL_RAND_RESET_Q(64);
    vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_count = VL_RAND_RESET_I(6);
    vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_quot_sign = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_rem_sign = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_by_zero = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_op1_s = VL_RAND_RESET_Q(33);
    VL_RAND_RESET_W(66, vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_result_ss);
    VL_RAND_RESET_W(66, vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_result_uu);
    VL_RAND_RESET_W(66, vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_result_su);
    vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk1__DOT__s = 0;
    vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk2__DOT__s = 0;
    vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__op1 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__op2 = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__s1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk3__DOT__s2 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk4__DOT__q = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk4__DOT__r = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk5__DOT__partial_high = VL_RAND_RESET_Q(33);
    vlSelf->core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__unnamedblk5__DOT__sub_result = VL_RAND_RESET_Q(33);
    vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__is_load = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__is_store = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__data_size = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__execute__DOT__gen_agu_fu__BRA__0__KET____DOT__AGU_i__DOT__is_unsigned = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT__is_store = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT__is_load = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT__stb_alloc = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(74, vlSelf->core__DOT__lsu__DOT__stb_wb);
    vlSelf->core__DOT__lsu__DOT__ldb_alloc = VL_RAND_RESET_I(14);
    vlSelf->core__DOT__lsu__DOT__ldb_addr_wb = VL_RAND_RESET_Q(43);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(67, vlSelf->core__DOT__lsu__DOT__stb_mem_req[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__lsu__DOT__mem_stall[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->core__DOT__lsu__DOT__stb_fwd[__Vi0] = VL_RAND_RESET_Q(43);
    }
    vlSelf->core__DOT__lsu__DOT__str_busy = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__lsu__DOT__ldb_mem_req[__Vi0] = VL_RAND_RESET_Q(43);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__lsu__DOT__ldb_mem_resp[__Vi0] = VL_RAND_RESET_Q(40);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(76, vlSelf->core__DOT__lsu__DOT__u_stb__DOT__entries[__Vi0]);
    }
    vlSelf->core__DOT__lsu__DOT__u_stb__DOT__tail_ptr = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__lsu__DOT__u_stb__DOT__drain_ptr = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__lsu__DOT__u_stb__DOT__count = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__lsu__DOT__u_stb__DOT__new_tail = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__lsu__DOT__u_stb__DOT__on_flush_valid = VL_RAND_RESET_I(16);
    vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk2__DOT__unnamedblk3__DOT__idx = 0;
    vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__idx = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk4__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk7__DOT__drain_inc = VL_RAND_RESET_I(5);
    vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk7__DOT__unnamedblk9__DOT__c = 0;
    vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk7__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i = 0;
    vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__i = 0;
    vlSelf->core__DOT__lsu__DOT__u_stb__DOT__unnamedblk7__DOT__unnamedblk11__DOT__unnamedblk12__DOT__idx = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        VL_RAND_RESET_W(83, vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__entries[__Vi0]);
    }
    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__alloc_idx = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__ta_wb_idx = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__req_idx[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__broadcast_idx = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__stall = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0;
    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__num_flush = 0;
    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk9__DOT__unnamedblk10__DOT__i = 0;
    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk11__DOT__i = 0;
    vlSelf->core__DOT__lsu__DOT__u_ldb__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_stall[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        VL_RAND_RESET_W(67, vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_req_held[__Vi0]);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_req_held[__Vi0] = VL_RAND_RESET_Q(43);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_pending[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_pending[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_sync[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_sync[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 128; ++__Vi1) {
            vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__bank[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_mem[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_mem[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_data_mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_tag_mem[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_resp_valid_mem[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__wr_valid_sync_r[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__rd_valid_sync_r[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__be = VL_RAND_RESET_I(4);
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__bsel = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk5__DOT__unnamedblk6__DOT__boff = VL_RAND_RESET_I(7);
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__unnamedblk9__DOT__i = 0;
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_wr_sync__DOT__ff1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_wr_sync__DOT__ff2 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_rd_sync__DOT__ff1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__0__KET____DOT__u_rd_sync__DOT__ff2 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_wr_sync__DOT__ff1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_wr_sync__DOT__ff2 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_rd_sync__DOT__ff1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_req_sync__BRA__1__KET____DOT__u_rd_sync__DOT__ff2 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_wr_ack__DOT__ff1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_wr_ack__DOT__ff2 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_rd_ack__DOT__ff1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__0__KET____DOT__u_rd_ack__DOT__ff2 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_wr_ack__DOT__ff1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_wr_ack__DOT__ff2 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_rd_ack__DOT__ff1 = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__lsu__DOT__u_dmem__DOT__g_ack_sync__BRA__1__KET____DOT__u_rd_ack__DOT__ff2 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->core__DOT__register_file__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->core__DOT__register_file__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->core__DOT__ROB__DOT__commit = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__ROB__DOT__dataout_valid = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__ROB__DOT__write_en = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__ROB__DOT__count = VL_RAND_RESET_I(7);
    vlSelf->core__DOT__ROB__DOT__next_count = VL_RAND_RESET_I(7);
    vlSelf->core__DOT__ROB__DOT__head = VL_RAND_RESET_I(6);
    vlSelf->core__DOT__ROB__DOT__tail = VL_RAND_RESET_I(6);
    vlSelf->core__DOT__ROB__DOT__next_head = VL_RAND_RESET_I(6);
    vlSelf->core__DOT__ROB__DOT__next_tail = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->core__DOT__ROB__DOT__rob[__Vi0] = VL_RAND_RESET_I(19);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__ROB__DOT__alloc_index[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->core__DOT__ROB__DOT__commit_index[__Vi0] = VL_RAND_RESET_I(6);
    }
    vlSelf->core__DOT__ROB__DOT__num_wr = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__ROB__DOT__num_commit = VL_RAND_RESET_I(2);
    vlSelf->core__DOT__ROB__DOT__empty = VL_RAND_RESET_I(1);
    vlSelf->core__DOT__ROB__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->core__DOT__ROB__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->core__DOT__ROB__DOT__unnamedblk7__DOT__i = 0;
    vlSelf->core__DOT__ROB__DOT__unnamedblk8__DOT__i = 0;
    vlSelf->core__DOT__ROB__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j = 0;
    vlSelf->__Vdly__core__DOT__fetch__DOT__FB__DOT__count = VL_RAND_RESET_I(5);
    vlSelf->__Vdlyvset__core__DOT__rename__DOT__tag_buffer__v0 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v64 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v64 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__core__DOT__rename__DOT__tag_buffer__v64 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v65 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v65 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v66 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v66 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v67 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v67 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v68 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v68 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v69 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v69 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v70 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v70 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v71 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v71 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v72 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v72 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v73 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v73 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v74 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v74 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v75 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v75 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v76 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v76 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v77 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v77 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v78 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v78 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v79 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v79 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v80 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v80 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v81 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v81 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v82 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v82 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v83 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v83 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v84 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v84 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v85 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v85 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v86 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v86 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v87 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v87 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v88 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v88 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v89 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v89 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v90 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v90 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v91 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v91 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v92 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v92 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v93 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v93 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v94 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v94 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v95 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v95 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v96 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v96 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v97 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v97 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v98 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v98 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v99 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v99 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v100 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v100 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v101 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v101 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v102 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v102 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v103 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v103 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v104 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v104 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v105 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v105 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v106 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v106 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v107 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v107 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v108 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v108 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v109 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v109 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v110 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v110 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v111 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v111 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v112 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v112 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v113 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v113 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v114 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v114 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v115 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v115 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v116 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v116 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v117 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v117 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v118 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v118 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v119 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v119 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v120 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v120 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v121 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v121 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v122 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v122 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v123 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v123 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v124 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v124 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v125 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v125 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v126 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v126 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v127 = 0;
    vlSelf->__Vdlyvval__core__DOT__rename__DOT__tag_buffer__v127 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__rename__DOT__tag_buffer__v128 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v128 = 0;
    vlSelf->__Vdlyvset__core__DOT__rename__DOT__tag_buffer__v128 = 0;
    vlSelf->__Vdlyvdim0__core__DOT__rename__DOT__tag_buffer__v129 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v129 = 0;
    vlSelf->__Vdlyvset__core__DOT__rename__DOT__tag_buffer__v129 = 0;
    vlSelf->__Vdlyvdim0__core__DOT__rename__DOT__tag_buffer__v130 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v130 = 0;
    vlSelf->__Vdlyvset__core__DOT__rename__DOT__tag_buffer__v130 = 0;
    vlSelf->__Vdlyvdim0__core__DOT__rename__DOT__tag_buffer__v131 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v131 = 0;
    vlSelf->__Vdlyvset__core__DOT__rename__DOT__tag_buffer__v131 = 0;
    vlSelf->__Vdlyvdim0__core__DOT__rename__DOT__tag_buffer__v132 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v132 = 0;
    vlSelf->__Vdlyvset__core__DOT__rename__DOT__tag_buffer__v132 = 0;
    vlSelf->__Vdlyvdim0__core__DOT__rename__DOT__tag_buffer__v133 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v133 = 0;
    vlSelf->__Vdlyvdim0__core__DOT__rename__DOT__tag_buffer__v134 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v134 = 0;
    vlSelf->__Vdlyvdim0__core__DOT__rename__DOT__tag_buffer__v135 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v135 = 0;
    vlSelf->__Vdlyvset__core__DOT__rename__DOT__tag_buffer__v135 = 0;
    vlSelf->__Vdlyvdim0__core__DOT__rename__DOT__tag_buffer__v136 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v136 = 0;
    vlSelf->__Vdlyvdim0__core__DOT__rename__DOT__tag_buffer__v137 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v137 = 0;
    vlSelf->__Vdlyvdim0__core__DOT__rename__DOT__tag_buffer__v138 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v138 = 0;
    vlSelf->__Vdlyvset__core__DOT__rename__DOT__tag_buffer__v138 = 0;
    vlSelf->__Vdlyvdim0__core__DOT__rename__DOT__tag_buffer__v139 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v139 = 0;
    vlSelf->__Vdlyvdim0__core__DOT__rename__DOT__tag_buffer__v140 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v140 = 0;
    vlSelf->__Vdlyvset__core__DOT__rename__DOT__tag_buffer__v140 = 0;
    vlSelf->__Vdlyvdim0__core__DOT__rename__DOT__tag_buffer__v141 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__rename__DOT__tag_buffer__v141 = 0;
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v64 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v64 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__core__DOT__dispatch__DOT__BC__DOT__free__v64 = 0;
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v65 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v65 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v66 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v66 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v67 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v67 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v68 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v68 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v69 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v69 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v70 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v70 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v71 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v71 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v72 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v72 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v73 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v73 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v74 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v74 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v75 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v75 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v76 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v76 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v77 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v77 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v78 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v78 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v79 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v79 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v80 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v80 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v81 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v81 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v82 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v82 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v83 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v83 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v84 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v84 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v85 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v85 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v86 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v86 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v87 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v87 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v88 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v88 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v89 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v89 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v90 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v90 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v91 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v91 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v92 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v92 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v93 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v93 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v94 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v94 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v95 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v95 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v96 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v96 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v97 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v97 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v98 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v98 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v99 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v99 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v100 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v100 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v101 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v101 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v102 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v102 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v103 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v103 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v104 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v104 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v105 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v105 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v106 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v106 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v107 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v107 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v108 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v108 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v109 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v109 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v110 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v110 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v111 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v111 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v112 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v112 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v113 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v113 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v114 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v114 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v115 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v115 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v116 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v116 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v117 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v117 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v118 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v118 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v119 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v119 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v120 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v120 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v121 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v121 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v122 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v122 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v123 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v123 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v124 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v124 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v125 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v125 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v126 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v126 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__dispatch__DOT__BC__DOT__free__v127 = 0;
    vlSelf->__Vdlyvval__core__DOT__dispatch__DOT__BC__DOT__free__v127 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__core__DOT__int_cdb_lines__v0 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__int_cdb_lines__v3 = 0;
    vlSelf->__Vdlyvset__core__DOT__int_cdb_lines__v3 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__int_cdb_lines__v4 = 0;
    vlSelf->__Vdlyvset__core__DOT__int_cdb_lines__v4 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__int_cdb_lines__v5 = 0;
    vlSelf->__Vdlyvset__core__DOT__int_cdb_lines__v5 = 0;
    vlSelf->__Vdlyvval__core__DOT__int_cdb_lines__v6 = VL_RAND_RESET_Q(46);
    vlSelf->__Vdlyvset__core__DOT__int_cdb_lines__v6 = 0;
    vlSelf->__Vdlyvval__core__DOT__int_cdb_lines__v7 = VL_RAND_RESET_Q(46);
    vlSelf->__Vdlyvval__core__DOT__int_cdb_lines__v8 = VL_RAND_RESET_Q(46);
    vlSelf->__Vdly__core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_valid = VL_RAND_RESET_I(3);
    vlSelf->__Vdlyvval__core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_sqN__v0 = VL_RAND_RESET_I(7);
    vlSelf->__Vdlyvval__core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_sqN__v1 = VL_RAND_RESET_I(7);
    vlSelf->__Vdlyvval__core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_sqN__v2 = VL_RAND_RESET_I(7);
    vlSelf->__Vdlyvval__core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_tag__v0 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_tag__v1 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_tag__v2 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvval__core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_oper__v0 = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvval__core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_oper__v1 = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvval__core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__mul_pipe_oper__v2 = VL_RAND_RESET_I(4);
    vlSelf->__Vdly__core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__state = VL_RAND_RESET_I(3);
    VL_RAND_RESET_W(82, vlSelf->__Vdly__core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__instr_r);
    vlSelf->__Vdly__core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__result = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_count = VL_RAND_RESET_I(6);
    vlSelf->__Vdly__core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_partial = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_divisor = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_quot_sign = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_rem_sign = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__core__DOT__execute__DOT__gen_mul_div_fu__BRA__0__KET____DOT__MUL_DIV_i__DOT__div_by_zero = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v0 = 0;
    vlSelf->__Vdly__core__DOT__lsu__DOT__u_ldb__DOT__count = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v1 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v16 = 0;
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v16 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v17 = 0;
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v17 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v18 = 0;
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v18 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v19 = 0;
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v19 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v20 = 0;
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v20 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v21 = 0;
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v21 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v22 = 0;
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v22 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v23 = 0;
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v23 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v24 = 0;
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v24 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v25 = 0;
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v25 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v26 = 0;
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v26 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v27 = 0;
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v27 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v28 = 0;
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v28 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v29 = 0;
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v29 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v30 = 0;
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v30 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v31 = 0;
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v31 = 0;
    vlSelf->__Vdlyvdim0__core__DOT__lsu__DOT__u_ldb__DOT__entries__v32 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v32 = 0;
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v32 = 0;
    vlSelf->__Vdlyvdim0__core__DOT__lsu__DOT__u_ldb__DOT__entries__v33 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v33 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v33 = VL_RAND_RESET_I(7);
    vlSelf->__Vdlyvdim0__core__DOT__lsu__DOT__u_ldb__DOT__entries__v34 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v34 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v34 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvdim0__core__DOT__lsu__DOT__u_ldb__DOT__entries__v35 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v35 = 0;
    vlSelf->__Vdlyvdim0__core__DOT__lsu__DOT__u_ldb__DOT__entries__v36 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v36 = 0;
    vlSelf->__Vdlyvdim0__core__DOT__lsu__DOT__u_ldb__DOT__entries__v37 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v37 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v37 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v37 = 0;
    vlSelf->__Vdlyvdim0__core__DOT__lsu__DOT__u_ldb__DOT__entries__v38 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v38 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v38 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__core__DOT__lsu__DOT__u_ldb__DOT__entries__v39 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v39 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v39 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvdim0__core__DOT__lsu__DOT__u_ldb__DOT__entries__v40 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v40 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v40 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v41 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v41 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v41 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v42 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v43 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v43 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v43 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v44 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v45 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v45 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v45 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v46 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v47 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v47 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v47 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v48 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v49 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v49 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v49 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v50 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v51 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v51 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v51 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v52 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v53 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v53 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v53 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v54 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v55 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v55 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v55 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v56 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v57 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v57 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v57 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v58 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v59 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v59 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v59 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v60 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v61 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v61 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v61 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v62 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v63 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v63 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v63 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v64 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v65 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v65 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v65 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v66 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v67 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v67 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v67 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v68 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v69 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v69 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v69 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v70 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v71 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v71 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v71 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v72 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v73 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v73 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v73 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v74 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v75 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v75 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v75 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v76 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v77 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v77 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v77 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v78 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v79 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v79 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v79 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v80 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v81 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v81 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v81 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v82 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v83 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v83 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v83 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v84 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v85 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v85 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v85 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v86 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v87 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v87 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v87 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v88 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v89 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v89 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v89 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v90 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v91 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v91 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v91 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v92 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v93 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v93 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v93 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v94 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v95 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v95 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v95 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v96 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v97 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v97 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v97 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v98 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v99 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v99 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v99 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v100 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v101 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v101 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v101 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v102 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v103 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_ldb__DOT__entries__v103 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v103 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v104 = 0;
    vlSelf->__Vdlyvdim0__core__DOT__lsu__DOT__u_ldb__DOT__entries__v105 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__u_ldb__DOT__entries__v105 = 0;
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_ldb__DOT__entries__v105 = 0;
    vlSelf->__Vdlyvset__core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue__v0 = 0;
    vlSelf->__Vdly__core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__tail = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvset__core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue__v1 = 0;
    vlSelf->__Vdlyvset__core__DOT__issue__DOT__gen_mul_div_buffer__BRA__0__KET____DOT__mul_div_issue_buffer_i__DOT__queue__v8 = 0;
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__ldb_mem_resp__v0 = 0;
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__ldb_mem_resp__v2 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__ldb_mem_resp__v3 = 0;
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__ldb_mem_resp__v3 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__ldb_mem_resp__v4 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__ldb_mem_resp__v4 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__ldb_mem_resp__v5 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__ldb_mem_resp__v6 = 0;
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__ldb_mem_resp__v6 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__lsu__DOT__ldb_mem_resp__v7 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__ldb_mem_resp__v7 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvlsb__core__DOT__commit_packet__v0 = 0;
    vlSelf->__Vdlyvset__core__DOT__commit_packet__v0 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__commit_packet__v1 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__commit_packet__v2 = 0;
    vlSelf->__Vdlyvset__core__DOT__commit_packet__v2 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__commit_packet__v3 = 0;
    vlSelf->__Vdlyvset__core__DOT__commit_packet__v3 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__commit_packet__v4 = 0;
    vlSelf->__Vdlyvval__core__DOT__commit_packet__v4 = VL_RAND_RESET_I(7);
    vlSelf->__Vdlyvset__core__DOT__commit_packet__v4 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__commit_packet__v5 = 0;
    vlSelf->__Vdlyvval__core__DOT__commit_packet__v5 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvlsb__core__DOT__commit_packet__v6 = 0;
    vlSelf->__Vdlyvval__core__DOT__commit_packet__v6 = VL_RAND_RESET_I(5);
    vlSelf->__Vdlyvlsb__core__DOT__commit_packet__v7 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__commit_packet__v8 = 0;
    vlSelf->__Vdlyvset__core__DOT__commit_packet__v8 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__commit_packet__v9 = 0;
    vlSelf->__Vdlyvval__core__DOT__commit_packet__v9 = VL_RAND_RESET_I(7);
    vlSelf->__Vdlyvset__core__DOT__commit_packet__v9 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__commit_packet__v10 = 0;
    vlSelf->__Vdlyvval__core__DOT__commit_packet__v10 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvlsb__core__DOT__commit_packet__v11 = 0;
    vlSelf->__Vdlyvval__core__DOT__commit_packet__v11 = VL_RAND_RESET_I(5);
    vlSelf->__Vdlyvlsb__core__DOT__commit_packet__v12 = 0;
    vlSelf->__Vdlyvlsb__core__DOT__commit_packet__v13 = 0;
    vlSelf->__Vdlyvset__core__DOT__commit_packet__v13 = 0;
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_mem__v0 = 0;
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_mem__v2 = 0;
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_mem__v4 = 0;
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_dmem__DOT__wr_ack_mem__v5 = 0;
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_mem__v0 = 0;
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_dmem__DOT__rd_ack_mem__v2 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_dmem__DOT__rd_data_mem__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_dmem__DOT__rd_data_mem__v0 = 0;
    vlSelf->__Vdlyvval__core__DOT__lsu__DOT__u_dmem__DOT__rd_data_mem__v1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__core__DOT__lsu__DOT__u_dmem__DOT__rd_data_mem__v1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__flush__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_alu__0[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu__0[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_mul__0[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_ready_mul__0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_lsu__0[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_ready_lsu__0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__core__DOT__rename__DOT__masked__0[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__VstlDidInit = 0;
    vlSelf->__Vtrigprevexpr___TOP__core__DOT__flush__1 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_alu__1[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_ready_alu__1[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_mul__1[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_ready_mul__1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_lsu__1[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__core__DOT__dispatch__DOT__DU__DOT__prefix_ready_lsu__1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__core__DOT__rename__DOT__masked__1[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk_m__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst_m__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
