`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/31/2026 11:58:57 AM
// Design Name: 
// Module Name: tb_lw
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

module tb_lw;
    
    localparam WIDTH = 32;
    logic clk;
    logic rst;
    logic [31:0] pc_debug;
    
    cpu dut(.*);
    
    `include "print_cpu_dashboard.sv"

    always #5 clk = ~clk;   // 10ns period 
    
     initial begin
        // --- 1. Memory Initialization ---
        foreach(dut.mem_inst.mem_arr[i]) dut.mem_inst.mem_arr[i] = 32'h0;
        foreach(dut.reg_file.mem_arr[i]) dut.reg_file.mem_arr[i] = 32'h0;
        foreach(dut.mem_data.mem_arr[i]) dut.mem_data.mem_arr[i] = 32'h0;
        clk = 0;
        rst = 1;
        #20 rst = 0; #1 

        // --- 2. Manual PC Jump ---

        force dut.next_pc = 32'd1000;
        force dut.control_pc_en = 1'b1;
        @(posedge clk);
        #1;
        release dut.next_pc;
        release dut.control_pc_en;

        // --- 3. Load Test Data (lw x4, -12(x9)) ---
        // FFC4A303 -> lw x6, -4(x9) or similar depending on your decoder
        dut.mem_inst.mem_arr[1000] = 32'hFFC4A303; 
        dut.reg_file.mem_arr[9]    = 32'd998;      // Base address
        dut.mem_data.mem_arr[994]  = 32'd12345;    // Value to load
        
        #5; // Let combinational logic settle

       print_cpu_dashboard();
        #10 $finish;
    end
endmodule