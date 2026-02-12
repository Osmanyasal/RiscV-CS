`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/12/2026 04:01:19 PM
// Design Name: 
// Module Name: clear_memories
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


task clear_memories();

    foreach(dut.mem_inst.mem_arr[i]) dut.mem_inst.mem_arr[i] = 32'h0;
    foreach(dut.reg_file.mem_arr[i]) dut.reg_file.mem_arr[i] = 32'h0;
    foreach(dut.mem_data.mem_arr[i]) dut.mem_data.mem_arr[i] = 32'h0;

endtask