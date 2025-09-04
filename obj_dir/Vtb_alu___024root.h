// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_alu.h for the primary calling header

#ifndef VERILATED_VTB_ALU___024ROOT_H_
#define VERILATED_VTB_ALU___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_alu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_alu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ tb_alu__DOT__a;
    CData/*7:0*/ tb_alu__DOT__b;
    CData/*1:0*/ tb_alu__DOT__opcode;
    CData/*7:0*/ tb_alu__DOT__result;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_alu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_alu___024root(Vtb_alu__Syms* symsp, const char* v__name);
    ~Vtb_alu___024root();
    VL_UNCOPYABLE(Vtb_alu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
