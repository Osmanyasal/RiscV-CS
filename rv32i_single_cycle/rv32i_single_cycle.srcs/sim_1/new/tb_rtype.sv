`timescale 1ns / 1ps

module tb_rtype;

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
        // All instructions below use: rd = x4, rs1 = x5, rs2 = x6
        dut.mem_inst.mem_arr[8]  = 32'h00628233; // PC=32: ADD  (x4 = x5 + x6)
        dut.mem_inst.mem_arr[9]  = 32'h40628233; // PC=36: SUB  (x4 = x5 - x6)
        dut.mem_inst.mem_arr[10] = 32'h02628233; // PC=40: MUL  (x4 = x5 * x6)
        dut.mem_inst.mem_arr[11] = 32'h0062F233; // PC=44: AND  (x4 = x5 & x6)
        dut.mem_inst.mem_arr[12] = 32'h0062E233; // PC=48: OR   (x4 = x5 | x6)
        dut.mem_inst.mem_arr[13] = 32'h0062C233; // PC=52: XOR  (x4 = x5 ^ x6)
        dut.mem_inst.mem_arr[14] = 32'h00629233; // PC=56: SLL  (x4 = x5 << x6)
        dut.mem_inst.mem_arr[15] = 32'h4062D233; // PC=60: SRA  (x4 = x5 >>> x6)
        dut.mem_inst.mem_arr[16] = 32'h0062D233; // PC=64: SRL  (x4 = x5 >> x6)
        dut.mem_inst.mem_arr[17] = 32'h0062A233; // PC=68: SLT  (x4 = x5 < x6)
        dut.mem_inst.mem_arr[18] = 32'h0062B233; // PC=72: SLTU (x4 = x5 < x6)

        // --- 2. PRE-LOAD OPERANDS ---
        dut.reg_file.mem_arr[5] = 32'd6;       
        dut.reg_file.mem_arr[6] = 32'd10;      
 
        
        // Start PC at 28. The next fetch will increment to 32 (ADD).
        force dut.pc_current = 32'd8; 
        force dut.control_pc_en = 1'b1; 
        #1
        release dut.pc_current;
        release dut.control_pc_en;
        
        // --- 4. EXECUTE AND ASSERT ---

        // ADD (Expected: 16)
        print_cpu_dashboard();
        $display("ADD (Expected: 16)");
        @(posedge clk); #1;
        assert(dut.reg_file.mem_arr[4] == 32'd16)
        else begin fail_counter +=1; $display("ADD fail: got %0d", dut.reg_file.mem_arr[4]); end
        
        print_cpu_dashboard();
        $display("SUB (Expected: -4 = 0xFFFF_FFFC)");
        @(posedge clk); #1;
        assert(dut.reg_file.mem_arr[4] == 32'hFFFF_FFFC)
        else begin fail_counter +=1; $display("SUB fail: got %0h", dut.reg_file.mem_arr[4]); end
        
        print_cpu_dashboard();
        $display("MUL (Expected: 60)");
        @(posedge clk); #1;
        assert(dut.reg_file.mem_arr[4] == 32'd60)
        else begin fail_counter +=1; $display("MUL fail: got %0d", dut.reg_file.mem_arr[4]); end
        
        print_cpu_dashboard();
        $display("AND (Expected: 2)");
        @(posedge clk); #1;
        assert(dut.reg_file.mem_arr[4] == 32'd2)
        else begin fail_counter +=1; $display("AND fail: got %0d", dut.reg_file.mem_arr[4]); end
        
        print_cpu_dashboard();
        $display("OR (Expected: 14)");
        @(posedge clk); #1;
        assert(dut.reg_file.mem_arr[4] == 32'd14)
        else begin fail_counter +=1; $display("OR fail: got %0d", dut.reg_file.mem_arr[4]); end
        
        print_cpu_dashboard();
        $display("XOR (Expected: 12)");
        @(posedge clk); #1;
        assert(dut.reg_file.mem_arr[4] == 32'd12)
        else begin fail_counter +=1; $display("XOR fail: got %0d", dut.reg_file.mem_arr[4]); end
        
        print_cpu_dashboard();
        $display("SLL (Expected: 6144)");
        @(posedge clk); #1;
        assert(dut.reg_file.mem_arr[4] == 32'd6144)
        else begin fail_counter +=1; $display("SLL fail: got %0d", dut.reg_file.mem_arr[4]); end
        
        print_cpu_dashboard();
        $display("SRA (Expected: 0)");
        @(posedge clk); #1;
        assert(dut.reg_file.mem_arr[4] == 32'd0)
        else begin fail_counter +=1; $display("SRA fail: got %0d", dut.reg_file.mem_arr[4]); end
        
        print_cpu_dashboard();
        $display("SRL (Expected: 0)");
        @(posedge clk); #1;
        assert(dut.reg_file.mem_arr[4] == 32'd0)
        else begin fail_counter +=1; $display("SRL fail: got %0d", dut.reg_file.mem_arr[4]); end
        
        print_cpu_dashboard();
        $display("SLT (Expected: 1)");
        @(posedge clk); #1;
        assert(dut.reg_file.mem_arr[4] == 32'd1)
        else begin fail_counter +=1; $display("SLT fail: got %0d", dut.reg_file.mem_arr[4]); end
        
        print_cpu_dashboard(); 
        $display("SLTU (Expected: 1)");

        @(posedge clk); #1;
        assert(dut.reg_file.mem_arr[4] == 32'd1)
        else begin fail_counter +=1; $display("SLTU fail: got %0d", dut.reg_file.mem_arr[4]); end

        $display("--- All R-Type Tests Completed with %0d errors ---",fail_counter);
        $finish;
    end
    
    always begin #5 clk = ~clk; end // 10ns period / 100MHz clock 
    
endmodule