// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore___024root___ctor_var_reset(Vcore___024root* vlSelf);

Vcore___024root::Vcore___024root(Vcore__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vcore___024root___ctor_var_reset(this);
}

void Vcore___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcore___024root::~Vcore___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
