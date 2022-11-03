// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vlight.h for the primary calling header

#include "verilated.h"

#include "Vlight___024root.h"

VL_ATTR_COLD void Vlight___024root___settle__TOP__0(Vlight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlight___024root___settle__TOP__0\n"); );
    // Body
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

VL_ATTR_COLD void Vlight___024root___eval_initial(Vlight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlight___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst2 = vlSelf->rst2;
}

VL_ATTR_COLD void Vlight___024root___eval_settle(Vlight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlight___024root___eval_settle\n"); );
    // Body
    Vlight___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vlight___024root___final(Vlight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlight___024root___final\n"); );
}

VL_ATTR_COLD void Vlight___024root___ctor_var_reset(Vlight___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vlight___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->rst1 = VL_RAND_RESET_I(1);
    vlSelf->rst2 = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->offset = VL_RAND_RESET_I(16);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->light__DOT__tick = VL_RAND_RESET_I(1);
    vlSelf->light__DOT__clktick1__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->light__DOT__f1_fsm__DOT__current_state = 0;
    vlSelf->light__DOT__f1_fsm__DOT__next_state = 0;
    vlSelf->__Vdly__light__DOT__clktick1__DOT__count = VL_RAND_RESET_I(16);
}
