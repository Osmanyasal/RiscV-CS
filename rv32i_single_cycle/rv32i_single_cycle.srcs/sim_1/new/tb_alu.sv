`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 01/30/2026 09:25:08 PM
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

`timescale 1ns / 1ps

module tb_alu;

    // --- Parameters ---
    parameter WIDTH = 32;

    // --- DUT Signals ---
    logic [WIDTH-1:0] alu_control;
    logic signed [WIDTH-1:0] src_a;
    logic signed [WIDTH-1:0] src_b;
    logic signed [2*WIDTH-1:0] out_alu;
    logic zero;
    logic overflow;
    logic negative;
    logic carry;

    // --- Enum Definition (Must match DUT) ---
    typedef enum logic [3:0] {
        ALU_ADD = 4'd0,
        ALU_SUB = 4'd1,
        ALU_MUL = 4'd2,
        ALU_AND = 4'd3,
        ALU_OR  = 4'd4,
        ALU_XOR = 4'd5,
        ALU_SLL = 4'd6,
        ALU_SRA = 4'd7
    } alu_op_t;

    // --- Instantiate the ALU ---
    alu #(
        .WIDTH(WIDTH)
    ) dut (
        .alu_control (alu_control),
        .src_a       (src_a),
        .src_b       (src_b),
        .out_alu     (out_alu),
        .zero        (zero),
        .overflow    (overflow),
        .negative    (negative),
        .carry       (carry)
    );

    // --- Verification Task ---
    // Automates checking the result against an expected value
    task check_result(input string name, input logic signed [2*WIDTH-1:0] expected);
        begin
            #5; // Wait for logic to settle
            if (out_alu !== expected) begin
                $error("FAIL: %s | A: %0d, B: %0d | Exp: %0d, Got: %0d", 
                        name, src_a, src_b, expected, out_alu);
            end else begin
                $display("PASS: %s", name);
            end
        end
    endtask

    // --- Test Stimulus ---
    initial begin
        $display("### Starting ALU Testbench ###");
        
        // 1. Test ADD (Positive + Positive)
        src_a = 15; src_b = 10;
        alu_control = ALU_ADD;
        check_result("ADD (15+10)", 25);

        // 2. Test SUB (Positive - Positive = Negative)
        src_a = 10; src_b = 20;
        alu_control = ALU_SUB;
        check_result("SUB (10-20)", -10);
        // Check Negative Flag
        if (negative !== 1'b1) $error("FAIL: Negative flag not set for -10");

        // 3. Test MUL (Large Numbers)
        // 1000 * 1000 = 1,000,000. Fits in 32 bits, but uses 64-bit container.
        src_a = 1000; src_b = 1000;
        alu_control = ALU_MUL;
        check_result("MUL (1k*1k)", 1000000);

        // 4. Test OVERFLOW (Max Positive + 1)
        src_a = 32'h7FFF_FFFF; // Max signed 32-bit positive
        src_b = 1;
        alu_control = ALU_ADD;
        #5;
        if (overflow !== 1'b1) $error("FAIL: Overflow flag missing for MaxPos + 1");
        if (negative !== 1'b1) $error("FAIL: Wrap around should appear negative");

        // 5. Test ZERO Flag
        src_a = 12345; src_b = 12345;
        alu_control = ALU_SUB;
        check_result("SUB Zero Check", 0);
        if (zero !== 1'b1) $error("FAIL: Zero flag not set");

        // 6. Test Logical Shift Left (SLL)
        src_a = 1; src_b = 4; // Shift 1 by 4 spots
        alu_control = ALU_SLL;
        check_result("SLL (1<<4)", 16);

        // 7. Test Arithmetic Shift Right (SRA) - Sign Extension
        src_a = -16; // Binary ...11110000
        src_b = 2;   // Shift right by 2
        alu_control = ALU_SRA;
        check_result("SRA (-16>>>2)", -4); 
        // Note: Logical shift would have resulted in a large positive number.

        // 8. Random Stress Test
        $display("--- Running Random Vectors ---");
        repeat (20) begin
            src_a = $random;
            src_b = $random;
            // Pick random enum
            alu_control = $urandom_range(0, 7); 
            #5;
            // Just ensuring no 'X' states propagate
            if (out_alu === 'x) $error("FAIL: ALU output is X state!");
        end

        $display("### Testbench Complete ###");
        $finish;
    end

endmodule