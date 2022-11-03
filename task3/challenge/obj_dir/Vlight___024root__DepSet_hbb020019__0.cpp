// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlight.h for the primary calling header

#include "verilated.h"

#include "Vlight___024root.h"

VL_INLINE_OPT void Vlight___024root___sequent__TOP__0(Vlight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlight___024root___sequent__TOP__0\n"); );
    // Body
    vlSelf->__Vdly__light__DOT__clktick1__DOT__count 
        = vlSelf->light__DOT__clktick1__DOT__count;
}

VL_INLINE_OPT void Vlight___024root___sequent__TOP__1(Vlight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlight___024root___sequent__TOP__1\n"); );
    // Body
    if (vlSelf->rst2) {
        vlSelf->light__DOT__f1_fsm__DOT__current_state = 0U;
    } else if (vlSelf->light__DOT__tick) {
        vlSelf->light__DOT__f1_fsm__DOT__current_state 
            = vlSelf->light__DOT__f1_fsm__DOT__next_state;
    }
    if (((((((((0U == vlSelf->light__DOT__f1_fsm__DOT__current_state) 
               | (1U == vlSelf->light__DOT__f1_fsm__DOT__current_state)) 
              | (2U == vlSelf->light__DOT__f1_fsm__DOT__current_state)) 
             | (3U == vlSelf->light__DOT__f1_fsm__DOT__current_state)) 
            | (4U == vlSelf->light__DOT__f1_fsm__DOT__current_state)) 
           | (5U == vlSelf->light__DOT__f1_fsm__DOT__current_state)) 
          | (6U == vlSelf->light__DOT__f1_fsm__DOT__current_state)) 
         | (7U == vlSelf->light__DOT__f1_fsm__DOT__current_state))) {
        if ((0U == vlSelf->light__DOT__f1_fsm__DOT__current_state)) {
            vlSelf->light__DOT__f1_fsm__DOT__next_state = 1U;
            vlSelf->data_out = 0U;
        } else if ((1U == vlSelf->light__DOT__f1_fsm__DOT__current_state)) {
            vlSelf->light__DOT__f1_fsm__DOT__next_state = 2U;
            vlSelf->data_out = 1U;
        } else if ((2U == vlSelf->light__DOT__f1_fsm__DOT__current_state)) {
            vlSelf->light__DOT__f1_fsm__DOT__next_state = 3U;
            vlSelf->data_out = 3U;
        } else if ((3U == vlSelf->light__DOT__f1_fsm__DOT__current_state)) {
            vlSelf->light__DOT__f1_fsm__DOT__next_state = 4U;
            vlSelf->data_out = 7U;
        } else if ((4U == vlSelf->light__DOT__f1_fsm__DOT__current_state)) {
            vlSelf->light__DOT__f1_fsm__DOT__next_state = 5U;
            vlSelf->data_out = 0xfU;
        } else if ((5U == vlSelf->light__DOT__f1_fsm__DOT__current_state)) {
            vlSelf->light__DOT__f1_fsm__DOT__next_state = 6U;
            vlSelf->data_out = 0x1fU;
        } else if ((6U == vlSelf->light__DOT__f1_fsm__DOT__current_state)) {
            vlSelf->light__DOT__f1_fsm__DOT__next_state = 7U;
            vlSelf->data_out = 0x3fU;
        } else {
            vlSelf->light__DOT__f1_fsm__DOT__next_state = 8U;
            vlSelf->data_out = 0x7fU;
        }
    } else {
        vlSelf->light__DOT__f1_fsm__DOT__next_state = 0U;
        vlSelf->data_out = ((8U == vlSelf->light__DOT__f1_fsm__DOT__current_state)
                             ? 0xffU : 0U);
    }
}

VL_INLINE_OPT void Vlight___024root___sequent__TOP__2(Vlight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlight___024root___sequent__TOP__2\n"); );
    // Body
    if (vlSelf->rst1) {
        vlSelf->light__DOT__tick = 0U;
        vlSelf->__Vdly__light__DOT__clktick1__DOT__count 
            = vlSelf->offset;
    } else if ((0U == (IData)(vlSelf->light__DOT__clktick1__DOT__count))) {
        vlSelf->light__DOT__tick = 1U;
        vlSelf->__Vdly__light__DOT__clktick1__DOT__count 
            = vlSelf->offset;
    } else {
        vlSelf->__Vdly__light__DOT__clktick1__DOT__count 
            = (0xffffU & ((IData)(vlSelf->light__DOT__clktick1__DOT__count) 
                          - (IData)(1U)));
        vlSelf->light__DOT__tick = 0U;
    }
    vlSelf->light__DOT__clktick1__DOT__count = vlSelf->__Vdly__light__DOT__clktick1__DOT__count;
}

void Vlight___024root___eval(Vlight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlight___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vlight___024root___sequent__TOP__0(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst2) & (~ (IData)(vlSelf->__Vclklast__TOP__rst2))))) {
        Vlight___024root___sequent__TOP__1(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vlight___024root___sequent__TOP__2(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst2 = vlSelf->rst2;
}

#ifdef VL_DEBUG
void Vlight___024root___eval_debug_assertions(Vlight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlight___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->rst1 & 0xfeU))) {
        Verilated::overWidthError("rst1");}
    if (VL_UNLIKELY((vlSelf->rst2 & 0xfeU))) {
        Verilated::overWidthError("rst2");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
