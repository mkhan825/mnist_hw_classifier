// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconv2d.h for the primary calling header

#include "verilated.h"

#include "Vconv2d__Syms.h"
#include "Vconv2d__Syms.h"
#include "Vconv2d___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconv2d___024root___dump_triggers__act(Vconv2d___024root* vlSelf);
#endif  // VL_DEBUG

void Vconv2d___024root___eval_triggers__act(Vconv2d___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv2d___024root___eval_triggers__act\n"); );
    // Body
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vconv2d___024root___dump_triggers__act(vlSelf);
    }
#endif
}
