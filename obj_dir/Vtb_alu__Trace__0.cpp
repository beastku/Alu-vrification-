// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_alu__Syms.h"


void Vtb_alu___024root__trace_chg_0_sub_0(Vtb_alu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_alu___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root__trace_chg_0\n"); );
    // Init
    Vtb_alu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_alu___024root*>(voidSelf);
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_alu___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_alu___024root__trace_chg_0_sub_0(Vtb_alu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgCData(oldp+0,(vlSelf->tb_alu__DOT__a),8);
    bufp->chgCData(oldp+1,(vlSelf->tb_alu__DOT__b),8);
    bufp->chgCData(oldp+2,(vlSelf->tb_alu__DOT__opcode),2);
    bufp->chgCData(oldp+3,((0xffU & ((0U == (IData)(vlSelf->tb_alu__DOT__opcode))
                                      ? ((IData)(vlSelf->tb_alu__DOT__a) 
                                         + (IData)(vlSelf->tb_alu__DOT__b))
                                      : ((1U == (IData)(vlSelf->tb_alu__DOT__opcode))
                                          ? ((IData)(vlSelf->tb_alu__DOT__a) 
                                             - (IData)(vlSelf->tb_alu__DOT__b))
                                          : 0U)))),8);
}

void Vtb_alu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_alu___024root__trace_cleanup\n"); );
    // Init
    Vtb_alu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_alu___024root*>(voidSelf);
    Vtb_alu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
