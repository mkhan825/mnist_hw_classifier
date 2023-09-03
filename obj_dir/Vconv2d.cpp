// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vconv2d.h"
#include "Vconv2d__Syms.h"

//============================================================
// Constructors

Vconv2d::Vconv2d(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vconv2d__Syms(contextp(), _vcname__, this)}
    , num_of_conv_layers{vlSymsp->TOP.num_of_conv_layers}
    , relu{vlSymsp->TOP.relu}
    , stride_x{vlSymsp->TOP.stride_x}
    , stride_y{vlSymsp->TOP.stride_y}
    , image{vlSymsp->TOP.image}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vconv2d::Vconv2d(const char* _vcname__)
    : Vconv2d(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vconv2d::~Vconv2d() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vconv2d___024root___eval_debug_assertions(Vconv2d___024root* vlSelf);
#endif  // VL_DEBUG
void Vconv2d___024root___eval_static(Vconv2d___024root* vlSelf);
void Vconv2d___024root___eval_initial(Vconv2d___024root* vlSelf);
void Vconv2d___024root___eval_settle(Vconv2d___024root* vlSelf);
void Vconv2d___024root___eval(Vconv2d___024root* vlSelf);

void Vconv2d::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vconv2d::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vconv2d___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vconv2d___024root___eval_static(&(vlSymsp->TOP));
        Vconv2d___024root___eval_initial(&(vlSymsp->TOP));
        Vconv2d___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vconv2d___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vconv2d::eventsPending() { return false; }

uint64_t Vconv2d::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vconv2d::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vconv2d___024root___eval_final(Vconv2d___024root* vlSelf);

VL_ATTR_COLD void Vconv2d::final() {
    Vconv2d___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vconv2d::hierName() const { return vlSymsp->name(); }
const char* Vconv2d::modelName() const { return "Vconv2d"; }
unsigned Vconv2d::threads() const { return 1; }
void Vconv2d::prepareClone() const { contextp()->prepareClone(); }
void Vconv2d::atClone() const {
    contextp()->threadPoolpOnClone();
}
