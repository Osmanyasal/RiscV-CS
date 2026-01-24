`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/23/2026 10:40:49 PM
// Design Name: 
// Module Name: memory_data
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


module memory_data #(
    parameter WIDTH = 32, 
    parameter ADDR_LOG = 10,           // 10 bits = 1024 rows
    parameter DEPTH = 1 << ADDR_LOG    // Calculates 1024 automatically
)(
    input  logic clk,
    input  logic [ADDR_LOG-1:0] addr, 
    input  logic [WIDTH-1:0] write_data,
    input  logic we, 
    output logic [WIDTH-1:0] read_data
);
    
    // Declare memory array (e.g., 1024 rows of 32 bits = 4Kib)
    (* ram_style = "block" *) // Forces BRAM on Xilinx
    logic [WIDTH-1:0] mem_arr [0:DEPTH-1];
         
    always_ff @(posedge clk) begin
        if (we) begin
            mem_arr[addr] <= write_data;
        end
    end
    
    always_comb begin
        read_data = mem_arr[addr]; 
    end

endmodule
