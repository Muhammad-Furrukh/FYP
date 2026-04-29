// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcore.h for the primary calling header

#include "Vcore__pch.h"

void Vcore___024unit___ctor_var_reset(Vcore___024unit* vlSelf);

Vcore___024unit::Vcore___024unit() = default;
Vcore___024unit::~Vcore___024unit() = default;

void Vcore___024unit::ctor(Vcore__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vcore___024unit___ctor_var_reset(this);
}

void Vcore___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vcore___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
