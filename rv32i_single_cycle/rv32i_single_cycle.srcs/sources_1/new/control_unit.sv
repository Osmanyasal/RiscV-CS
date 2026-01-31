`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/24/2026 02:07:01 PM
// Design Name: 
// Module Name: control_unit
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


module control_unit(
    input logic opcode, 
    input logic [2:0] func3, 
    input logic func7, 
    output logic [3:0] control_alu,
    output logic control_pc_en,
    output logic control_regfile_we,
    output logic control_data_mem_we
    );
    
    always_comb begin
        
        case(opcode)
            7'b0000011: begin   // I type instructions
                if(func3 == 3'h0) begin
                    control_regfile_we = 1;
                    control_alu = '0; 
                end
                else if(func3 == 3'h1) begin end
                else if(func3 == 3'h2) begin end
                else if(func3 == 3'h4) begin end
                else if(func3 == 3'h5) begin end
                else begin end
            end 
            7'b0100011:begin end  // sw
            7'b0110011:begin end  // r-type
            7'b1100011:begin end  // beq
            default: begin
                control_alu = '0;
                control_pc_en = '0;
                control_regfile_we = '0;
                control_data_mem_we = '0;
            end
        endcase
        control_pc_en = 1;
    end
endmodule
