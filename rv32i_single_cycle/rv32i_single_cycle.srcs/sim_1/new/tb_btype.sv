`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Module Name: tb_btype
// Description: Tests all RISC-V B-Type branch instructions using memory indexing.
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

    // --- HELPER TASK FOR BRANCH TESTING ---
    // Added mem_idx so we properly index the memory array
    task check_branch(
        input string test_name,
        input integer mem_idx,
        input [31:0] instr_hex,
        input [31:0] expected_pc
    );
        begin
            // 1. Use the index to load the instruction into the memory array
            dut.mem_inst.mem_arr[mem_idx] = instr_hex; 
            
            // 2. Force PC to the current memory index
            force dut.pc_current = mem_idx; 
            force dut.control_pc_en = 1'b1; 
            #1;
            release dut.pc_current;
            release dut.control_pc_en;
            #1;
            
            print_cpu_dashboard();
            
            // 3. Wait for execution clock cycle
            @(posedge clk); #1;
            
            // 4. Check Result
            if (dut.pc_current !== expected_pc) begin
                fail_counter += 1;
                $display("FAIL [%s]: Expected PC %0d, Got PC %0d", test_name, expected_pc, dut.pc_current);
            end else begin
                $display("PASS [%s]", test_name);
            end
             
        end
    endtask
    
    initial begin
        clear_memories();
        fail_counter = 0;
        
        // --- 0. INITIALIZE CPU STATE ---
        clk = 0;
        rst = 1;    
        @(posedge clk);
        rst = 0;
        #1;
        
        // --- 1. SETUP REGISTERS FOR COMPARISONS ---
        dut.reg_file.mem_arr[1] = 32'd10;         // x1 = 10
        dut.reg_file.mem_arr[2] = 32'd10;         // x2 = 10
        dut.reg_file.mem_arr[3] = 32'hFFFF_FFFF;  // x3 = -1 (Signed) / Max (Unsigned)
        dut.reg_file.mem_arr[4] = 32'd1;          // x4 = 1
        
        $display("--- Starting B-Type Instruction Tests ---");

        // --- 2. EXECUTE TESTS USING INCREMENTING MEMORY INDEXES ---
        // Format: check_branch("Name", memory_index, machine_code, expected_pc);
        
        // BEQ (Branch if Equal): 10 == 10 -> Take branch to 8
        check_branch("BEQ_TAKEN",     20, 32'hFE208AE3, 32'd8); 
        
        // BNE (Branch if Not Equal): 10 != 1 -> Take branch to 12
        check_branch("BNE_TAKEN",     24, 32'hFE409AE3, 32'd12);
        
        // BNE (Branch if Not Equal): 10 == 10 -> Do NOT take branch (PC + 4 = 32)
        check_branch("BNE_NOT_TAKEN", 28, 32'hFE209AE3, 32'd16);

        // BLT (Branch Less Than - Signed): -1 < 1 -> Take branch to 20
        check_branch("BLT_TAKEN",     32, 32'hFE41CAE3, 32'd20);

        // BGE (Branch Greater/Equal - Signed): 10 >= -1 -> Take branch to 24
        check_branch("BGE_TAKEN",     36, 32'hFE30DAE3, 32'd24);

        // BLTU (Branch Less Than - Unsigned): 1 < 4,294,967,295 -> Take branch to 28
        check_branch("BLTU_TAKEN",    40, 32'hFE326AE3, 32'd28);

        // BGEU (Branch Greater/Equal - Unsigned): 4,294,967,295 >= 10 -> Take branch to 32
        check_branch("BGEU_TAKEN",    44, 32'hFE11FAE3, 32'd32);
        
        $display("--- All B-Type Tests Completed with %0d errors ---", fail_counter);
        $finish;

    end
    
    always begin #5 clk = ~clk; end 

endmodule