`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 28.02.2026 18:12:34
// Design Name: 
// Module Name: tb_btype
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


module tb_btype;
     
    localparam WIDTH = 32;
    logic clk;
    logic rst;
    logic [31:0] pc_debug; 
    logic [31:0] fail_counter;
    cpu dut(.*);
    
    `include "clear_memories.sv"
    `include "print_cpu_dashboard.sv"
    
    initial begin
        clear_memories();
        
        fail_counter = 0;
        // --- 0. INITIALIZE CPU STATE ---
        clk = 0;
        rst = 1;    // Put CPU in a known state.
        @(posedge clk);
        rst = 0;
        #1
        
        dut.reg_file.mem_arr[4] = 32'd14;
        dut.mem_inst.mem_arr[20]  = 32'hFE420AE3; //  beq x4, x4, L7
        
        
        // Start PC at 8. The next fetch will increment to 9
        force dut.pc_current = 32'd20; 
        force dut.control_pc_en = 1'b1; 
        #1
        release dut.pc_current;
        release dut.control_pc_en;
        #1
        
        print_cpu_dashboard();
        $display("BEQ ");
        @(posedge clk); #1;
        assert(dut.pc_current == 8)
        else begin fail_counter +=1; $display("BEQ fail: got %0d", dut.pc_current); end
        
        $display("--- All B-Type Tests Completed with %0d errors ---",fail_counter);

    end
    
    always begin #5 clk = ~clk; end // 10ns period / 100MHz clock 

endmodule
