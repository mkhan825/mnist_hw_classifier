`include "conv2d.d"

module conv2d (
  // Allowing up to 64 conv layers
  input [5:0] num_of_conv_layers,

  // Allowing up to 32x32 matrix (only using 28x28 for MNIST)
  input [7:0] image[4:0][4:0][1:0],

  // Allow different activation functions
  input relu,

  // Stride for how the kernel should sweep
  input [2:0] stride_x,
  input [2:0] stride_y

  // TODO: Should I support Padding Matrix?? No
);

// 3x3 of FP32 Kernel used to scan through the image
reg [31:0] kernel[2:0][2:0] = {{`RAND,`RAND,`RAND},
                               {`RAND,`RAND,`RAND},
                               {`RAND,`RAND,`RAND}};

endmodule
