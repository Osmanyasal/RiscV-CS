`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Osman Yasal
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
    `include "clear_memories.sv"

    always #5 clk = ~clk;   // 10ns period 

     initial begin
        // --- 1. Memory Initialization ---
        clear_memories();
        clk = 0;
        rst = 1;
        @(posedge clk);
        rst = 0; 
        #1 
        
        // --- 2. Load Test Data (lw x4, -12(x9)) ---
        // FFC4A303 -> lw x6, -4(x9) or similar depending on your decoder
        dut.mem_inst.mem_arr[1000] = 32'hFFC4A303; 
        dut.reg_file.mem_arr[9]    = 32'd998;      // Base address
        dut.mem_data.mem_arr[994]  = 32'd12345;    // Value to load
       
        // --- 3. Manual PC Jump ---
        dut.pc_current = 32'd996;
        dut.control_pc_en = 1'b1;
        @(posedge clk); // it becomes 1000
        #1;
        
        print_cpu_dashboard();
       
       // next clk cycle will get the value.
        @(posedge clk);
        #2.5;
       assert (dut.reg_file.mem_arr[6] == 'd12345)
            $info("Assertion Passed: mem_arr[6] correctly holds %d", dut.reg_file.mem_arr[6]);
       else 
            $error("Assertion Failed: mem_arr[6] is %d, expected 12345", dut.reg_file.mem_arr[6]);
            
       assert (dut.pc_current == 'd1004) $info("Assertion Passed: pc_current %d correctly holds 1004",dut.pc_current); else $error("Program counter is %d expected 1004", dut.pc_current);
        $finish;
    end
endmodule