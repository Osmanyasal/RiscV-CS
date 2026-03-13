`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 13.03.2026 10:31:33
// Design Name: 
// Module Name: tb_itype
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: I-Type Instruction Testbench
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////

module tb_itype;

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
        
        // --- 1. PRE-LOAD INSTRUCTION MEMORY ---  
        // Instructions below use: rd = x4, rs1 = x5 (positive val) or x6 (negative val)
        dut.mem_inst.mem_arr[8]  = 32'h00528213; // PC=32: ADDI  (x4 = x5 + 5)
        dut.mem_inst.mem_arr[9]  = 32'h00F2A213; // PC=36: SLTI  (x4 = x5 < 15)
        dut.mem_inst.mem_arr[10] = 32'h0052B213; // PC=40: SLTIU (x4 = x5 < 5 unsigned)
        dut.mem_inst.mem_arr[11] = 32'h00A2C213; // PC=44: XORI  (x4 = x5 ^ 10)
        dut.mem_inst.mem_arr[12] = 32'h0022E213; // PC=48: ORI   (x4 = x5 | 2)
        dut.mem_inst.mem_arr[13] = 32'h00D2F213; // PC=52: ANDI  (x4 = x5 & 13)
        dut.mem_inst.mem_arr[14] = 32'h00229213; // PC=56: SLLI  (x4 = x5 << 2)
        dut.mem_inst.mem_arr[15] = 32'h0022D213; // PC=60: SRLI  (x4 = x5 >> 2 logical)
        dut.mem_inst.mem_arr[16] = 32'h40235213; // PC=64: SRAI  (x4 = x6 >>> 2 arithmetic)

        // --- 2. PRE-LOAD OPERANDS ---
        dut.reg_file.mem_arr[5] = 32'd12;          // x5 = 12
        dut.reg_file.mem_arr[6] = 32'hFFFF_FFF0;   // x6 = -16 (To properly test SRAI sign extension)
 
        // --- 3. SET STARTING PC ---
        // Start PC at 28. The next fetch will increment to 32 (ADDI).
        force dut.pc_current = 32'd8;  
        #1
        release dut.pc_current; 
        
        // --- 4. EXECUTE AND ASSERT ---

        // ADDI (12 + 5 = 17)
        print_cpu_dashboard();
        $display("ADDI (Expected: 17)");
        @(posedge clk); #1;
        assert(dut.reg_file.mem_arr[4] == 32'd17)
        else begin fail_counter +=1; $display("ADDI fail: got %0d", dut.reg_file.mem_arr[4]); end
        
        // SLTI (12 < 15 -> 1)
        print_cpu_dashboard();
        $display("SLTI (Expected: 1)");
        @(posedge clk); #1;
        assert(dut.reg_file.mem_arr[4] == 32'd1)
        else begin fail_counter +=1; $display("SLTI fail: got %0d", dut.reg_file.mem_arr[4]); end
        
        // SLTIU (12 < 5 unsigned -> 0)
        print_cpu_dashboard();
        $display("SLTIU (Expected: 0)");
        @(posedge clk); #1;
        assert(dut.reg_file.mem_arr[4] == 32'd0)
        else begin fail_counter +=1; $display("SLTIU fail: got %0d", dut.reg_file.mem_arr[4]); end
        
        // XORI (12 ^ 10 = 6)
        print_cpu_dashboard();
        $display("XORI (Expected: 6)");
        @(posedge clk); #1;
        assert(dut.reg_file.mem_arr[4] == 32'd6)
        else begin fail_counter +=1; $display("XORI fail: got %0d", dut.reg_file.mem_arr[4]); end
        
        // ORI (12 | 2 = 14)
        print_cpu_dashboard();
        $display("ORI (Expected: 14)");
        @(posedge clk); #1;
        assert(dut.reg_file.mem_arr[4] == 32'd14)
        else begin fail_counter +=1; $display("ORI fail: got %0d", dut.reg_file.mem_arr[4]); end
        
        // ANDI (12 & 13 = 12)
        print_cpu_dashboard();
        $display("ANDI (Expected: 12)");
        @(posedge clk); #1;
        assert(dut.reg_file.mem_arr[4] == 32'd12)
        else begin fail_counter +=1; $display("ANDI fail: got %0d", dut.reg_file.mem_arr[4]); end
        
        // SLLI (12 << 2 = 48)
        print_cpu_dashboard();
        $display("SLLI (Expected: 48)");
        @(posedge clk); #1;
        assert(dut.reg_file.mem_arr[4] == 32'd48)
        else begin fail_counter +=1; $display("SLLI fail: got %0d", dut.reg_file.mem_arr[4]); end
        
        // SRLI (12 >> 2 = 3)
        print_cpu_dashboard();
        $display("SRLI (Expected: 3)");
        @(posedge clk); #1;
        assert(dut.reg_file.mem_arr[4] == 32'd3)
        else begin fail_counter +=1; $display("SRLI fail: got %0d", dut.reg_file.mem_arr[4]); end
        
        // SRAI (-16 >>> 2 = -4) -> Checks if sign bit is properly shifted in
        print_cpu_dashboard();
        $display("SRAI (Expected: -4 = 0xFFFF_FFFC)");
        @(posedge clk); #1;
        assert(dut.reg_file.mem_arr[4] == 32'hFFFF_FFFC)
        else begin fail_counter +=1; $display("SRAI fail: got %0h", dut.reg_file.mem_arr[4]); end

        $display("--- All I-Type Tests Completed with %0d errors ---", fail_counter);
        $finish;
        
    end
    
    // 10ns period / 100MHz clock 
    always begin #5 clk = ~clk; end 
    
endmodule