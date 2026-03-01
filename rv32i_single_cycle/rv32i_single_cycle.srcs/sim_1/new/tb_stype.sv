`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01.03.2026 15:24:19
// Design Name: 
// Module Name: tb_stype
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


module tb_stype;

    localparam WIDTH = 32;
    logic clk;
    logic rst;
    logic [31:0] pc_debug; 
    logic [31:0] fail_counter;
    cpu dut(.clk(clk),.rst(rst),.pc_debug(pc_debug));
    
    `include "clear_memories.sv"
    `include "print_cpu_dashboard.sv"
    
    task sw; begin  // store word
            dut.mem_inst.mem_arr[110]  = 32'h0064A423;
            dut.reg_file.mem_arr[9]    = 32'h104; 
            dut.reg_file.mem_arr[6]  = 32'd10;    
            
            // --- 3. Update PC ---
            force dut.pc_current = 32'd110;
            #1
            print_cpu_dashboard();
            release dut.pc_current;
            
            @(posedge clk); // writing occurs at the beginning of the next clock cycle.
            #1;
            assert(dut.pc_current == 32'd111) else begin fail_counter += 1; $display("pc is %0d, it should've been 111",dut.pc_current); end
            assert(dut.mem_data.mem_arr[32'h10C] == 32'd10) else begin fail_counter += 1; $display("Memory wrong: got %0d, expected 10", dut.mem_data.mem_arr[32'h10C]); end
        end
    endtask
    
    task sb; begin  // store byte
            dut.mem_inst.mem_arr[110]  = 32'h00648423; // sb x6, 8(x9)
            dut.reg_file.mem_arr[9]    = 32'h104;      // Base Address
            dut.reg_file.mem_arr[6]    = 32'hAABBCCDD; // Data to store
            
            // Pre-fill memory so we can verify only the lowest byte changes
            dut.mem_data.mem_arr[32'h10C] = 32'hFFFFFFFF;
            
            force dut.pc_current = 32'd110;
            #1
            print_cpu_dashboard();
            release dut.pc_current;
            
            @(posedge clk); 
            #1;
            assert(dut.pc_current == 32'd111) else begin fail_counter += 1; $display("FAIL SB: pc is %0d, expected 113",dut.pc_current); end
            
            // Expected: Top 24 bits stay F, lowest 8 bits become DD
            assert(dut.mem_data.mem_arr[32'h10C] == 32'hFFFFFFDD) else begin fail_counter += 1; $display("FAIL SB: Memory wrong: got %h, expected FFFFFFDD", dut.mem_data.mem_arr[32'h10C]); end
            $display("PASS [STORE BYTE]");
        end
    endtask
    
    task sh; begin // store half
            dut.mem_inst.mem_arr[110]  = 32'h00649423; // sh x6, 8(x9)
            dut.reg_file.mem_arr[9]    = 32'h104;      // Base Address
            dut.reg_file.mem_arr[6]    = 32'hAABBCCDD; // Data to store
            
            // Pre-fill memory so we can verify only the lowest halfword changes
            dut.mem_data.mem_arr[32'h10C] = 32'hFFFFFFFF;
            
            force dut.pc_current = 32'd110;
            #1
            print_cpu_dashboard();
            release dut.pc_current;
            
            @(posedge clk); 
            #1;
            assert(dut.pc_current == 32'd111) else begin fail_counter += 1; $display("FAIL SH: pc is %0d, expected 115",dut.pc_current); end
            
            // Expected: Top 16 bits stay F, lowest 16 bits become CCDD
            assert(dut.mem_data.mem_arr[32'h10C] == 32'hFFFFCCDD) else begin fail_counter += 1; $display("FAIL SH: Memory wrong: got %h, expected FFFFCCDD", dut.mem_data.mem_arr[32'h10C]); end
            $display("PASS [STORE HALFWORD]");
        end
    endtask
    
    initial begin
        clear_memories();
        rst = 1;
        clk = 0;
        @(posedge clk);
        rst = 0;
        fail_counter = 0;
        #1
        
        sw();
        sb();
        sh();
        
        $display("--- All S-Type Tests Completed with %0d errors ---",fail_counter);
        $finish;

    end
    
    always begin
        #5
        clk = ~clk;
    end
endmodule
