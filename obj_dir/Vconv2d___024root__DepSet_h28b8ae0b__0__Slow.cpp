// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconv2d.h for the primary calling header

#include "verilated.h"

#include "Vconv2d__Syms.h"
#include "Vconv2d___024root.h"

VL_ATTR_COLD void Vconv2d___024root___eval_static(Vconv2d___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv2d___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vconv2d___024root___eval_initial(Vconv2d___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv2d___024root___eval_initial\n"); );
}

VL_ATTR_COLD void Vconv2d___024root___eval_final(Vconv2d___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv2d___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vconv2d___024root___eval_settle(Vconv2d___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv2d___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconv2d___024root___dump_triggers__act(Vconv2d___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv2d___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vconv2d___024root___dump_triggers__nba(Vconv2d___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv2d___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vconv2d___024root___ctor_var_reset(Vconv2d___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv2d___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->num_of_conv_layers = VL_RAND_RESET_I(6);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 2; ++__Vi2) {
                vlSelf->image[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(8);
            }
        }
    }
    vlSelf->relu = VL_RAND_RESET_I(1);
    vlSelf->stride_x = VL_RAND_RESET_I(3);
    vlSelf->stride_y = VL_RAND_RESET_I(3);
}
