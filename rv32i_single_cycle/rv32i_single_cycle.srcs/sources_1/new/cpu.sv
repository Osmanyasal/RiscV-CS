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
    logic control_pc_en;
    logic control_we;
    control_unit cu(.control_pc_en(control_pc_en));
    
    //** PC INCREMENT **//
    logic [WIDTH-1:0] next_pc; 
    logic [WIDTH-1:0] pc_current; 
    pc #(.WIDTH(WIDTH)) __pc (
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
    logic [WIDTH-1:0] imm_sign_ext;
    logic [WIDTH-1:0] rd1, rd2, data_mem_rd;    // output comes from reg file and data memory read op.
    regfile ref_file(.clk(clk), .a1(inst_out[19:15]), .a2(inst_out[24:20]), .a3(inst_out[11:7]), .wd3(data_mem_rd), .we(control_we), .rd1(rd1), .rd2(rd2));
    
    assign imm_sign_ext = {{25{inst_out[31]}}, inst_out[31:25]};

    //** EXECUTE STAGE **//
    
    
    //** WRITE BACK STAGE **//
    
    assign pc_debug = pc_current;
endmodule
