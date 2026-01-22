`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/22/2026 07:56:30 PM
// Design Name: 
// Module Name: pc
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


module pc #(
    parameter WIDTH = 32
)(input logic clk, 
  input logic rst, 
  input logic pc_en, 
  input logic [WIDTH-1:0] next_pc, 
  output logic [WIDTH-1:0] pc
  );  
    always_ff @(posedge clk, posedge rst) begin
        if(rst)
            pc <= '0;
        else if(pc_en)
            pc <= next_pc;
    end;
endmodule
