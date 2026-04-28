// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcore.h for the primary calling header

#ifndef VERILATED_VCORE___024UNIT_H_
#define VERILATED_VCORE___024UNIT_H_  // guard

#include "verilated.h"


class Vcore__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcore___024unit final {
  public:

    // INTERNAL VARIABLES
    Vcore__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcore___024unit();
    ~Vcore___024unit();
    void ctor(Vcore__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vcore___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
