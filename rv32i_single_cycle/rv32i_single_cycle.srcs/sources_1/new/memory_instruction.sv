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
    parameter ADDR_LOG = 10,           // 10 bits = 1024 words
    parameter DEPTH = 1 << ADDR_LOG    // 1024 words (4KB)
)(
    input  logic clk, 
    input  logic [ADDR_LOG-1:0] addr_word, 
    output logic [WIDTH-1:0] inst_out
);
    
    // Inferred Block RAM
    (* ram_style = "block" *) // Forces BRAM on Xilinx
    logic [WIDTH-1:0] mem_arr [0:DEPTH-1];
    
    initial begin
        $readmemh("instructions.mem", mem_arr); 
    end
     
    always_comb begin
        inst_out = mem_arr[addr_word];
    end

endmodule