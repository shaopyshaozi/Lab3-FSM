// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vlight.h"
#include "Vlight__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vlight::Vlight(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vlight__Syms(contextp(), _vcname__, this)}
    , rst2{vlSymsp->TOP.rst2}
    , clk{vlSymsp->TOP.clk}
    , rst1{vlSymsp->TOP.rst1}
    , data_out{vlSymsp->TOP.data_out}
    , offset{vlSymsp->TOP.offset}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vlight::Vlight(const char* _vcname__)
    : Vlight(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vlight::~Vlight() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vlight___024root___eval_initial(Vlight___024root* vlSelf);
void Vlight___024root___eval_settle(Vlight___024root* vlSelf);
void Vlight___024root___eval(Vlight___024root* vlSelf);
#ifdef VL_DEBUG
void Vlight___024root___eval_debug_assertions(Vlight___024root* vlSelf);
#endif  // VL_DEBUG
void Vlight___024root___final(Vlight___024root* vlSelf);

static void _eval_initial_loop(Vlight__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vlight___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vlight___024root___eval_settle(&(vlSymsp->TOP));
        Vlight___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vlight::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vlight::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vlight___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vlight___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vlight::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vlight::final() {
    Vlight___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vlight::hierName() const { return vlSymsp->name(); }
const char* Vlight::modelName() const { return "Vlight"; }
unsigned Vlight::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vlight::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vlight___024root__trace_init_top(Vlight___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vlight___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vlight___024root*>(voidSelf);
    Vlight__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vlight___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vlight___024root__trace_register(Vlight___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vlight::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vlight___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
