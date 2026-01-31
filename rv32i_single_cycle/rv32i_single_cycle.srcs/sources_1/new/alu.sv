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
        input logic [3:0] alu_control,
        input logic [2:0] func3,
        input logic [6:0] func7,
        input logic signed [WIDTH-1:0] src_a,   // N bit input a
        input logic signed [WIDTH-1:0] src_b,   // N bit input b
        output logic signed [2*WIDTH-1:0] alu_out,    // multiplication makes it 2N, otherwise N+1 with carry.
        output logic zero,
        output logic overflow,
        output logic negative,
        output logic carry 
    );
    
    // even though the input port is WIDTH bits wide.
    typedef enum logic [3:0] {
        ALU_ADD = 4'd0,
        ALU_SUB = 4'd1,
        ALU_MUL = 4'd2,
        ALU_AND = 4'd3,
        ALU_OR  = 4'd4,
        ALU_XOR = 4'd5,
        ALU_SLL = 4'd6, // Logical Shift Left
        ALU_SRA = 4'd7  // Arithmetic Shift Right
    } alu_op_t;
    
    logic [WIDTH:0] temp_add_sub;
    logic signed [2*WIDTH-1:0] result;
    always_comb begin
        result = '0;
        carry = 0;
        overflow = 0;
            case(alu_control) 
                ALU_ADD: begin 
                    temp_add_sub = {1'b0,src_a} + {1'b0,src_b};
                    result = signed'(temp_add_sub[WIDTH-1:0]);
                    carry = temp_add_sub[WIDTH];
                    
                    // Overflow: (Pos + Pos = Neg) or (Neg + Neg = Pos)
                    overflow = (src_a[WIDTH-1] == src_b[WIDTH-1]) && 
                               (result[WIDTH-1] != src_a[WIDTH-1]);
                end
                
                ALU_SUB: begin 
                    temp_add_sub = {1'b0,src_a} - {1'b0,src_b};
                    result = signed'(temp_add_sub[WIDTH-1:0]);
                    carry = temp_add_sub[WIDTH];
                    
                    // Overflow (Pos - Neg = Neg) or (Neg - Post = Pos)
                    overflow = (src_a[WIDTH-1] != src_b[WIDTH-1]) && 
                               (result[WIDTH-1] != src_a[WIDTH-1]);
                    
                end
                ALU_MUL: begin
                    result = src_a * src_b;
                    // Carry/Overflow usually ignored or handled by 2*WIDTH result
                    carry = 0; 
                    overflow = 0;
                end
                
                ALU_AND: result = src_a & src_b;
                ALU_OR:  result = src_a | src_b;
                ALU_XOR: result = src_a ^ src_b;
                
                // Shift operations
                ALU_SLL: result = src_a << src_b[4:0];
                ALU_SRA: result = src_a >>> src_b[4:0];
                
            endcase 
        end
            
        // --- Output Logic ---
        assign alu_out  = result;
        assign zero     = (result == '0);
        assign negative = result[2*WIDTH-1]; // Check MSB of the 2*WIDTH result
        
endmodule
