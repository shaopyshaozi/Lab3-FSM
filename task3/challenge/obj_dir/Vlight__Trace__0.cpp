// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vlight__Syms.h"


void Vlight___024root__trace_chg_sub_0(Vlight___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vlight___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlight___024root__trace_chg_top_0\n"); );
    // Init
    Vlight___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlight___024root*>(voidSelf);
    Vlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vlight___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vlight___024root__trace_chg_sub_0(Vlight___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlight___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->rst1));
    bufp->chgBit(oldp+1,(vlSelf->rst2));
    bufp->chgBit(oldp+2,(vlSelf->clk));
    bufp->chgSData(oldp+3,(vlSelf->offset),16);
    bufp->chgCData(oldp+4,(vlSelf->data_out),8);
    bufp->chgBit(oldp+5,(vlSelf->light__DOT__tick));
    bufp->chgSData(oldp+6,(vlSelf->light__DOT__clktick1__DOT__count),16);
    bufp->chgIData(oldp+7,(vlSelf->light__DOT__f1_fsm__DOT__current_state),32);
    bufp->chgIData(oldp+8,((((((((((0U == vlSelf->light__DOT__f1_fsm__DOT__current_state) 
                                   | (1U == vlSelf->light__DOT__f1_fsm__DOT__current_state)) 
                                  | (2U == vlSelf->light__DOT__f1_fsm__DOT__current_state)) 
                                 | (3U == vlSelf->light__DOT__f1_fsm__DOT__current_state)) 
                                | (4U == vlSelf->light__DOT__f1_fsm__DOT__current_state)) 
                               | (5U == vlSelf->light__DOT__f1_fsm__DOT__current_state)) 
                              | (6U == vlSelf->light__DOT__f1_fsm__DOT__current_state)) 
                             | (7U == vlSelf->light__DOT__f1_fsm__DOT__current_state))
                             ? ((0U == vlSelf->light__DOT__f1_fsm__DOT__current_state)
                                 ? 1U : ((1U == vlSelf->light__DOT__f1_fsm__DOT__current_state)
                                          ? 2U : ((2U 
                                                   == vlSelf->light__DOT__f1_fsm__DOT__current_state)
                                                   ? 3U
                                                   : 
                                                  ((3U 
                                                    == vlSelf->light__DOT__f1_fsm__DOT__current_state)
                                                    ? 4U
                                                    : 
                                                   ((4U 
                                                     == vlSelf->light__DOT__f1_fsm__DOT__current_state)
                                                     ? 5U
                                                     : 
                                                    ((5U 
                                                      == vlSelf->light__DOT__f1_fsm__DOT__current_state)
                                                      ? 6U
                                                      : 
                                                     ((6U 
                                                       == vlSelf->light__DOT__f1_fsm__DOT__current_state)
                                                       ? 7U
                                                       : 8U)))))))
                             : 0U)),32);
}

void Vlight___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlight___024root__trace_cleanup\n"); );
    // Init
    Vlight___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlight___024root*>(voidSelf);
    Vlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
