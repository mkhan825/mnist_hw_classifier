// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconv2d.h for the primary calling header

#include "verilated.h"

#include "Vconv2d__Syms.h"
#include "Vconv2d___024root.h"

void Vconv2d___024root___eval_act(Vconv2d___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv2d___024root___eval_act\n"); );
}

void Vconv2d___024root___eval_nba(Vconv2d___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv2d___024root___eval_nba\n"); );
}

void Vconv2d___024root___eval_triggers__act(Vconv2d___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vconv2d___024root___dump_triggers__act(Vconv2d___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vconv2d___024root___dump_triggers__nba(Vconv2d___024root* vlSelf);
#endif  // VL_DEBUG

void Vconv2d___024root___eval(Vconv2d___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv2d___024root___eval\n"); );
    // Init
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vconv2d___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vconv2d___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("conv2d.v", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vconv2d___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vconv2d___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("conv2d.v", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vconv2d___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vconv2d___024root___eval_debug_assertions(Vconv2d___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconv2d__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconv2d___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->num_of_conv_layers & 0xc0U))) {
        Verilated::overWidthError("num_of_conv_layers");}
    if (VL_UNLIKELY((vlSelf->relu & 0xfeU))) {
        Verilated::overWidthError("relu");}
    if (VL_UNLIKELY((vlSelf->stride_x & 0xf8U))) {
        Verilated::overWidthError("stride_x");}
    if (VL_UNLIKELY((vlSelf->stride_y & 0xf8U))) {
        Verilated::overWidthError("stride_y");}
}
#endif  // VL_DEBUG
