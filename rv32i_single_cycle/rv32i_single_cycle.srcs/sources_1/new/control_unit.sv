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
    // Inputs: Updated names to match your local signals
    input  logic [6:0] control_opcode, 
    input  logic [2:0] control_func3, 
    input  logic [6:0] control_func7, 
    
    // Outputs
    output logic [3:0] control_alu,
    output logic       control_pc_en,
    output logic       control_regfile_we,
    output logic       control_data_mem_we
);
    
    always_comb begin
        // Set defaults to avoid unwanted latches
        control_alu         = 4'b0000;
        control_regfile_we  = 1'b0;
        control_data_mem_we = 1'b0;
        control_pc_en       = 1'b1; // Default PC increment

        case(control_opcode)
            7'b0000011: begin   // I-type (e.g., Load)
                if(control_func3 == 3'b010) begin
                    control_regfile_we = 1'b1;
                    control_alu        = 4'b0000; 
                end
            end 
            
            7'b0100011: begin   // S-type (sw)
                control_data_mem_we = 1'b1;
            end 
            
            7'b0110011: begin   // R-type
                control_regfile_we = 1'b1;
            end 
            
            7'b1100011: begin   // B-type (beq)
                // Branch logic here
            end

            default: begin
                control_pc_en = 1'b0; // Halt or NOP behavior
            end
        endcase
    end
endmodule