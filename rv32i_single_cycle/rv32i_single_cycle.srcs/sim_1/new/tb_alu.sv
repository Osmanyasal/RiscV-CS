`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Osman Yasa
// 
// Create Date: 01/31/2026 11:58:57 AM
// Design Name: 
// Module Name: tb_alu
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

module tb_alu;
    parameter WIDTH = 32;

    logic [3:0]                alu_control;
    logic signed [WIDTH-1:0]   alu_src_a;
    logic signed [WIDTH-1:0]   alu_src_b;
    logic signed [2*WIDTH-1:0] alu_out;
    logic                      alu_zero;
    logic                      alu_overflow;
    logic                      alu_negative;
    logic                      alu_carry;

    typedef enum logic [3:0] {
        ALU_ADD = 4'd0,
        ALU_SUB = 4'd1,
        ALU_MUL = 4'd2,
        ALU_AND = 4'd3,
        ALU_OR  = 4'd4,
        ALU_XOR = 4'd5,
        ALU_SLL = 4'd6, 
        ALU_SRA = 4'd7,
        ALU_SRL = 4'd8,
        ALU_SLT = 4'd9,
        ALU_SLTU = 4'd10 
    } alu_op_t;
    
    // Instantiate the ALU
    alu #(.WIDTH(WIDTH)) dut (
        .alu_control  (alu_control), 
        .alu_src_a    (alu_src_a),
        .alu_src_b    (alu_src_b),
        .alu_out      (alu_out),
        .alu_zero     (alu_zero),
        .alu_overflow (alu_overflow),
        .alu_negative (alu_negative),
        .alu_carry    (alu_carry)
    );

    // --- Verification Task ---
    
    task check_mul_result(input string name, input logic signed [2*WIDTH-1:0] expected);
        begin
            #5; // Wait for logic to settle
            if (alu_out !== expected) begin
                $error("FAIL: %s | A: %0d, B: %0d | Exp: %0d, Got: %0d", 
                        name, alu_src_a, alu_src_b, expected, alu_out);
            end else begin
                $display("PASS: %s, Got: %0d", name, alu_out);
            end
        end
    endtask
    
    task check_result(input string name, input logic signed [2*WIDTH-1:0] expected);
        begin
            #5; // Wait for logic to settle
            if (alu_out !== expected) begin
                $error("FAIL: %s | A: %0d, B: %0d | Exp: %0d, Got: %0d", 
                        name, alu_src_a, alu_src_b, expected, alu_out[WIDTH-1:0]);
            end else begin
                $display("PASS: %s, Got: %0d", name, alu_out);
            end
        end
    endtask

    // --- Test Stimulus ---
    initial begin
        $display("### Starting ALU Testbench ###");
        
        // 0. Test ZERO Flag
        alu_src_a = 12345; alu_src_b = 12345;
        alu_control = ALU_SUB;
        #5; 
        check_result("SUB Zero Check!, Fatality!", 0);
        if (alu_zero !== 1'b1) $error("FAIL: alu_zero flag not set");
        
        // 0. Test OVERFLOW (Max Positive + 1)
        alu_src_a = 32'h7FFF_FFFF; 
        alu_src_b = 1;
        alu_control = ALU_ADD;
        #5;
        if (alu_overflow !== 1'b1) $error("FAIL: alu_overflow flag missing for MaxPos + 1");
        if (alu_negative !== 1'b1) $error("FAIL: Wrap around should appear negative");
        
        // 0. Test negative flag
        alu_src_a = 10; alu_src_b = 20;
        alu_control = ALU_SUB;
        #5; 
        if (alu_negative !== 1'b1) $error("FAIL: alu_negative flag not set for -10");
        
        // 0. Test carry flag (Arithmetic Carry)
        alu_src_a = 32'hFFFF_FFFF; 
        alu_src_b = 32'h0000_0001;
        alu_control = ALU_ADD;
        #5;
        if (alu_carry !== 1'b1) $error("FAIL: alu_carry flag not set");
        
        // 1. Test ADD (Positive + Positive)
        alu_src_a = 15; 
        alu_src_b = 10;
        alu_control = ALU_ADD;
        check_result("ADD (15+10)", 25);

        // 2. Test SUB (Positive - Positive = Negative)
        alu_src_a = 10; 
        alu_src_b = 20;
        alu_control = ALU_SUB;
        check_result("SUB (10-20)", -10);
        if (alu_negative !== 1'b1) $error("FAIL: alu_negative flag not set for -10");

        // 3. Test MUL (Large Numbers)
        alu_src_a = 9999; 
        alu_src_b = 9999;
        alu_control = ALU_MUL;
        check_mul_result("MUL (9999 * 9999)", 99980001);

        // 6. Test Logical Shift Left (SLL)
        alu_src_a = 1; 
        alu_src_b = 4; 
        alu_control = ALU_SLL;
        check_result("SLL (1<<4)", 16);

        // 7. Test Shift Right Arithmetic (SRA) - Sign Extension
        alu_src_a = -16; 
        alu_src_b = 2;   
        alu_control = ALU_SRA;
        check_result("SRA (-16 >>> 2)", -4); 

        // 8. Test Shift Right Logical (SRL) - Sign Extension
        alu_src_a = -16; 
        alu_src_b = 2;   
        alu_control = ALU_SRL;
        check_result("SRL (-16 >> 2)", 1_073_741_820); 

        // 9. Test Set Less Than  (SLT) - Sign Extension
        alu_src_a = -16; 
        alu_src_b = 2;   
        alu_control = ALU_SLT;
        check_result("SLT (-16 < 2 ?)", 1); 
        
        alu_src_a = 16; 
        alu_src_b = 2;   
        alu_control = ALU_SLT;
        check_result("SLT (16 < 2 ?)", 0); 
        
        // 10. Test Set Less Than Unsigned (SLTU) - 
        alu_src_a = 1; 
        alu_src_b = 2;   
        alu_control = ALU_SLTU;
        check_result("SLTU (1 < 2)", 1); 
        
        alu_src_a = 5; 
        alu_src_b = 2;   
        alu_control = ALU_SLTU;
        check_result("SLTU (5 < 2)", 0); 

        // 8. Random Stress Test
        $display("--- Running Random Vectors ---");
        repeat (20) begin
            alu_src_a = $random;
            alu_src_b = $random;
            alu_control = $urandom_range(0, 10); 
            #5;
            if (alu_out === 'x) $error("FAIL: ALU output is X state!");
        end

        $display("### Testbench Complete ###");
        $finish;
    end

endmodule