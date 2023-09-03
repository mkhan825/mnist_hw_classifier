// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vconv2d.h for the primary calling header

#ifndef VERILATED_VCONV2D___024ROOT_H_
#define VERILATED_VCONV2D___024ROOT_H_  // guard

#include "verilated.h"


class Vconv2d__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vconv2d___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(num_of_conv_layers,5,0);
    VL_IN8(relu,0,0);
    VL_IN8(stride_x,2,0);
    VL_IN8(stride_y,2,0);
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VL_IN8(image[5][5][2],7,0);
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vconv2d__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vconv2d___024root(Vconv2d__Syms* symsp, const char* v__name);
    ~Vconv2d___024root();
    VL_UNCOPYABLE(Vconv2d___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
