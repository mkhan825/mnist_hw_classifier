`define SIGN_BITS 1
`define EXP_BITS 8
`define MAN_BITS 23

`define BIAS 127

// 2 ^ (EXP - BIAS)

module fp32_uint8_mul (
  input clk,
  input [31:0] a, // Kernel input
  input [7:0] b, // Image input
  output [31:0] out // FP32 output
);

endmodule
