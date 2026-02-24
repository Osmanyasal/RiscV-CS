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

(* keep_hierarchy = "yes" *)
(* dont_touch = "true" *)
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
     
    (* dont_touch = "true" *)
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
    
    (* dont_touch = "true" *) 
    pc #(.WIDTH(WIDTH)) _pc (
        .clk(clk), 
        .rst(rst), 
        .pc_en(control_pc_en),      
        .next_pc(next_pc), 
        .pc(pc_current)     
    );
    assign next_pc = pc_current + 32'd1;
    
    //** FETCH STAGE  **//
    logic [WIDTH-1:0] inst_out;
    
    (* dont_touch = "true" *)
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
    
    //** EXECUTE STAGE (ALU) **//
    logic [WIDTH-1:0] _alu_src_a;
    logic [WIDTH-1:0] _alu_src_b;
    logic [WIDTH-1:0] _data_mem_wr;
    logic [WIDTH-1:0] regfile_rd1, regfile_rd2, data_mem_rd;    // output comes from reg file and data memory read op.
    
    (* dont_touch = "true" *)
    regfile reg_file(.clk(clk), .rst(rst), .a1(control_rs1), .a2(control_rs2), .a3(control_rd), .wd3(data_mem_rd), .we(control_regfile_we), .rd1(regfile_rd1), .rd2(regfile_rd2));
    
    always_comb begin
        _alu_src_a = 'h0;
        _alu_src_b = 'h0;
        _data_mem_wr = 'h0;
        case(control_opcode)
            7'b0000011: begin _alu_src_a = regfile_rd1; _alu_src_b = control_imm_i_type; end    // I type
            7'b0010011: begin _alu_src_a = regfile_rd1; _alu_src_b = regfile_rd2; end   // R Type
            7'b0100011: begin _alu_src_a = regfile_rd1; _alu_src_b = control_imm_s_type; _data_mem_wr = regfile_rd2; end    // S type    
            7'b1100011: begin _alu_src_b = control_imm_b_type;end
            7'b0110011: begin _alu_src_a = regfile_rd1; _alu_src_b = regfile_rd2;end   // U Type 
            7'b1101111: begin _alu_src_b = control_imm_j_type;end
            default:    begin /* empty is fine here since we set at the beginning */ end
        endcase
    end

    logic signed [WIDTH-1:0] alu_src_a;
    logic signed [WIDTH-1:0] alu_src_b;
    logic [2:0] alu_func3;
    logic [6:0] alu_func7; 
    
    assign alu_src_a = _alu_src_a;
    assign alu_src_b = _alu_src_b; 
    
    logic [2*WIDTH-1:0] alu_out;
    logic alu_zero;
    logic alu_overflow;
    logic alu_negative;
    logic alu_carry;
    
    (* dont_touch = "true" *)
    alu #(.WIDTH(WIDTH)) _alu (
        .alu_control(control_alu), 
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
    
    (* dont_touch = "true" *)
    memory_data #(.WIDTH(WIDTH), .ADDR_LOG(10)) mem_data (.clk(clk), .addr(alu_out_addr), .we(control_data_mem_we), .write_data(_data_mem_wr), .read_data(data_mem_rd));
    
    assign pc_debug = pc_current;
endmodule
