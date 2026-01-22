`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Osman Yasal
// 
// Create Date: 01/22/2026 07:42:22 PM
// Design Name: 
// Module Name: memory_instruction
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

module memory_instruction #(
    parameter WIDTH = 32, 
    parameter DEPTH = 32
)(
    // 1. Use $clog2(DEPTH) to get the number of bits needed (e.g., 5 bits for 32 depth)
    // 2. Subtract 1 to get the correct range (e.g., [4:0])
    input  logic [$clog2(DEPTH)-1:0] addr1, 
    output logic [WIDTH-1:0]         addr1_out
);
    
    logic [WIDTH-1:0] mem_arr [0:DEPTH-1];
    
    //    This loads machine code from a hex file at the start of simulation.
    initial begin
        // format: $readmemh("filename.mem", array_name);
        $readmemh("instructions.mem", mem_arr); 
    end
    
    always_comb begin
        addr1_out = mem_arr[addr1];
    end

endmodule