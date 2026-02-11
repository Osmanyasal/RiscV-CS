`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Osman Yasal
// 
// Create Date: 01/24/2026 02:05:29 PM
// Design Name: 
// Module Name: cpu
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


module cpu #(
    parameter WIDTH = 32
)(
    input logic clk, 
    input logic rst,
    
    output logic [WIDTH-1:0] pc_debug
);
    //** CONTROL UNIT **//
    
    // Instruction segments
    logic [3:0] control_alu;
    logic [6:0] control_opcode;
    logic [2:0] control_func3;
    logic [6:0] control_func7; 
    logic [4:0] control_rd;
    logic [4:0] control_rs1;
    logic [4:0] control_rs2;
    
    // Immediate deconstruction by type
    logic [WIDTH-1:0] control_imm_i_type;
    logic [WIDTH-1:0] control_imm_s_type;
    logic [WIDTH-1:0] control_imm_b_type;
    logic [WIDTH-1:0] control_imm_u_type;
    logic [WIDTH-1:0] control_imm_j_type;
    
    // Write enable signals
    logic control_pc_en;
    logic control_regfile_we;
    logic control_data_mem_we;
     
    
    control_unit _cu (
        // inputs
        .control_opcode      (control_opcode),
        .control_func3       (control_func3),
        .control_func7       (control_func7),
        // outputs
        .control_alu         (control_alu),
        .control_pc_en       (control_pc_en),
        .control_regfile_we  (control_regfile_we),
        .control_data_mem_we (control_data_mem_we)
    );
    
    //** PC INCREMENT **//
    logic [WIDTH-1:0] next_pc; 
    logic [WIDTH-1:0] pc_current; 
    pc #(.WIDTH(WIDTH)) _pc (
        .clk(clk), 
        .rst(rst), 
        .pc_en(control_pc_en),      
        .next_pc(next_pc), 
        .pc(pc_current)     
    );
    assign next_pc = pc_current + 32'd4;
    
    //** FETCH STAGE  **//
    logic [WIDTH-1:0] inst_out;
    memory_instruction#(
    .WIDTH(WIDTH), 
    .ADDR_LOG(10)           // 10 bits = 1024 words (4KB)
    ) mem_inst(.clk(clk),.addr_word(pc_current[9:0]),.inst_out(inst_out));
    
    
    //** DECODE STAGE **//
    assign control_opcode = inst_out[6:0];
    assign control_rd = inst_out[11:7];
    assign control_func3 = inst_out[14:12]; 
    assign control_rs1 = inst_out[19:15];
    assign control_rs2 = inst_out[24:20];
    assign control_func7 = inst_out[31:25];
    
    assign control_imm_i_type = { {20{inst_out[31]}}, inst_out[31:20] };
    assign control_imm_s_type = { {20{inst_out[31]}}, inst_out[31:25], inst_out[11:7] };
    assign control_imm_b_type = { {19{inst_out[31]}}, inst_out[31], inst_out[7], inst_out[30:25], inst_out[11:8], 1'b0 };
    assign control_imm_u_type = { inst_out[31:12], 12'b0 };
    assign control_imm_j_type = { {11{inst_out[31]}}, inst_out[31], inst_out[19:12], inst_out[20], inst_out[30:21], 1'b0 };
    
    
    logic [WIDTH-1:0] imm_sign_ext;
    logic [WIDTH-1:0] rd1, rd2, data_mem_rd;    // output comes from reg file and data memory read op.
    regfile reg_file(.clk(clk), .a1(control_rs1), .a2(control_rs2), .a3(control_rd), .wd3(data_mem_rd), .we(control_regfile_we), .rd1(rd1), .rd2(rd2));
    
    always_comb begin
        case(control_opcode)
            7'b0000011, 7'b0010011: imm_sign_ext = control_imm_i_type;
            7'b0100011:             imm_sign_ext = control_imm_s_type;
            7'b1100011:             imm_sign_ext = control_imm_b_type;
            7'b0110111:             imm_sign_ext = control_imm_u_type;
            7'b1101111:             imm_sign_ext = control_imm_j_type;
            default:                imm_sign_ext = 32'h0;
        endcase
    end

    //** EXECUTE STAGE (ALU) **//
    logic signed [WIDTH-1:0] alu_src_a;
    logic signed [WIDTH-1:0] alu_src_b;

    assign alu_src_a = rd1;
    assign alu_src_b = imm_sign_ext;
 
    logic [2*WIDTH-1:0] alu_out;
    logic alu_zero;
    logic alu_overflow;
    logic alu_negative;
    logic alu_carry;
    alu #(.WIDTH(WIDTH)) _alu (
        .alu_control(control_alu),
        .alu_func3(alu_func3),
        .alu_func7(alu_func7),
        .alu_src_a(alu_src_a),
        .alu_src_b(alu_src_b),
        .alu_out(alu_out),
        .alu_zero(alu_zero),
        .alu_overflow(alu_overflow),
        .alu_negative(alu_negative),
        .alu_carry(alu_carry)
    );
    
    //** WRITE BACK STAGE **//
    logic [WIDTH-1:0] alu_out_addr;
    assign alu_out_addr = alu_out[WIDTH-1:0];
    
    memory_data #(.WIDTH(WIDTH), .ADDR_LOG(10)) mem_data (.clk(clk), .addr(alu_out_addr), .we(control_data_mem_we), .read_data(data_mem_rd));
    
    
    
    assign pc_debug = pc_current;
endmodule
