`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/12/2026 03:59:18 PM
// Design Name: 
// Module Name: tb_sw
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


module tb_sw;
    
    localparam WIDTH = 32;
    logic clk;
    logic rst;
    logic [31:0] pc_debug;
    
    cpu dut(.*);
    `include "clear_memories.sv";
    `include "print_cpu_dashboard.sv";
    
    always begin #5 clk = ~clk; end
    
    initial begin
        // --- 1. Memory Initialization ---
        clear_memories();
        clk = 0;
        rst = 1;
        @(posedge clk);
        rst = 0; 
        #1 
        
        // --- 2. Load Memory Data ---
        dut.mem_inst.mem_arr[110]  = 32'h0064A423;
        dut.reg_file.mem_arr[9]    = 32'h104; 
        dut.reg_file.mem_arr[6]  = 32'd10;    
        
        // --- 3. Update PC ---
        dut.pc_current = 32'd106;
        dut.control_pc_en = 1'b1;
        @(posedge clk); // it becomes 110
        #1;
                
        
        print_cpu_dashboard();
    end

endmodule
