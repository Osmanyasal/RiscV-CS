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

    logic clk;
    logic rst;
    logic [31:0] pc_debug;
    
    cpu dut(.*);
    always #5 clk = ~clk;   // 10ns period
          
    initial begin
        clk = 0;
        rst = 1;
        #20
        rst = 0; // Reset released. PC is 0 now.
        
        // set pc to 1000
        $display("Forcing next_pc to be 1000");
        force dut.next_pc = 32'd1000;
        @(posedge clk)
        #1
        release dut.next_pc;
        $display("PC is now: %d", dut.pc_current); // Should be 1000
        
        dut.mem_inst.mem_arr[1000] = 32'hFFC4A303;
        dut.reg_file.mem_arr[9] = 32'h2004;
        #1
        $display("mem_inst[1000]= %h",dut.mem_inst.mem_arr[1000]);
        $display("regfile[9]= %h",dut.reg_file.mem_arr[9]);
    end
endmodule
