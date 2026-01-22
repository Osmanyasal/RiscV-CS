`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Osman Yasal
// 
// Create Date: 01/22/2026 03:29:31 PM
// Design Name: 
// Module Name: alu
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module alu #(parameter WIDTH = 32)(
        input logic [WIDTH-1:0] alu_control,
        input logic [WIDTH-1:0] in_a,   // N bit input a
        input logic [WIDTH-1:0] in_b,   // N bit input b
        output logic [2*WIDTH-1:0] out_c,    // multiplication makes it 2N, otherwise N+1 with carry.
        output logic zero,
        output logic overflow,
        output logic negative,
        output logic carry 
    );
endmodule
