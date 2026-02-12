`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/23/2026 10:52:45 PM
// Design Name: 
// Module Name: regfile
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

module regfile #(
    parameter WIDTH = 32
    )(
    input logic clk,
    input logic rst,
    input logic [4:0] a1,
    input logic [4:0] a2,
    input logic [4:0] a3,
    input logic [WIDTH-1:0] wd3,
    input logic we,
    output logic [WIDTH-1:0] rd1,
    output logic [WIDTH-1:0] rd2
    );
    
    // define memory
    logic [WIDTH-1:0] mem_arr [0:31];
    
    always_ff @(posedge clk, posedge rst) begin
        if (rst) begin
            // This syntax sets all elements of the array to 0
            mem_arr <= '{default: '0};
        end else if (we) begin
            // x0 is hardwired to 0 in RISC-V, so we don't write to it
            if (a3 != 5'b00000) begin
                mem_arr[a3] <= wd3;
            end
        end  
    end
    
    always_comb begin
        // Combinational read logic
        rd1 = (a1 == 5'd0) ? '0 : mem_arr[a1];
        rd2 = (a2 == 5'd0) ? '0 : mem_arr[a2]; // Fixed a2 typo here
    end 
endmodule