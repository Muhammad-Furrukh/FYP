// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void Vcore___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"NOT_JUMP", "JAL", "JALR"};
        const char* __VenumItemValues[]
        = {"0", "1", "10"};
        tracep->declDTypeEnum(1, "include_pkg::jump_type_t", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"BYTE", "HALF", "WORD"};
        const char* __VenumItemValues[]
        = {"0", "1", "11"};
        tracep->declDTypeEnum(2, "include_pkg::data_size_t", 3, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "MUL_EXEC", "DIV_EXEC", "COMPLETE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(3, "MUL_DIV.state_t", 4, 3, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"MUL_INVALID", "MUL", "MULH", "MULHSU", 
                                "MULHU", "DIV", "DIVU", 
                                "REM", "REMU"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000"};
        tracep->declDTypeEnum(4, "include_pkg::mul_div_oper_t", 9, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"NOT_BRANCH", "BEQ", "BNE", "BLT", "BGE", 
                                "BLTU", "BGEU"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110"};
        tracep->declDTypeEnum(5, "include_pkg::br_type_t", 7, 4, __VenumItemNames, __VenumItemValues);
    }
}

void Vcore___024root__trace_decl_types(VerilatedFst* tracep) {
    Vcore___024root__traceDeclTypesSub0(tracep);
}
