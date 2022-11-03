// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vlight.h for the primary calling header

#ifndef VERILATED_VLIGHT___024ROOT_H_
#define VERILATED_VLIGHT___024ROOT_H_  // guard

#include "verilated.h"

class Vlight__Syms;

class Vlight___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(rst2,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(rst1,0,0);
    VL_OUT8(data_out,7,0);
    CData/*0:0*/ light__DOT__tick;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst2;
    VL_IN16(offset,15,0);
    SData/*15:0*/ light__DOT__clktick1__DOT__count;
    SData/*15:0*/ __Vdly__light__DOT__clktick1__DOT__count;
    IData/*31:0*/ light__DOT__f1_fsm__DOT__current_state;
    IData/*31:0*/ light__DOT__f1_fsm__DOT__next_state;

    // INTERNAL VARIABLES
    Vlight__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vlight___024root(Vlight__Syms* symsp, const char* name);
    ~Vlight___024root();
    VL_UNCOPYABLE(Vlight___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
