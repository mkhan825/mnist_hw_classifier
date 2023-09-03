// Different Color Channels
`define R 0
`define G 1
`define B 2

// Different Kernel initialization methods
`define RANDOM 0
`define UNIFORM 1
`define NORMAL 2 // Gaussian?

`define MAX_POSITIVE_VALUE 4294967296
`define RAND ($urandom % `MAX_POSITIVE_VALUE)
