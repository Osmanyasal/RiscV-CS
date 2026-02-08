`timescale 1ns / 1ps

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
        ALU_SRA = 4'd7  
    } alu_op_t;
    
    // Instantiate the ALU
    alu #(.WIDTH(WIDTH)) dut (
        .alu_control  (alu_control),
        .alu_func3    (3'b0), // Tied to 0
        .alu_func7    (7'b0), // Tied to 0
        .alu_src_a    (alu_src_a),
        .alu_src_b    (alu_src_b),
        .alu_out      (alu_out),
        .alu_zero     (alu_zero),
        .alu_overflow (alu_overflow),
        .alu_negative (alu_negative),
        .alu_carry    (alu_carry)
    );

    // --- Verification Task ---
    task check_result(input string name, input logic signed [2*WIDTH-1:0] expected);
        begin
            #5; // Wait for logic to settle
            if (alu_out !== expected) begin
                $error("FAIL: %s | A: %0d, B: %0d | Exp: %0d, Got: %0d", 
                        name, alu_src_a, alu_src_b, expected, alu_out);
            end else begin
                $display("PASS: %s", name);
            end
        end
    endtask

    // --- Test Stimulus ---
    initial begin
        $display("### Starting ALU Testbench ###");
        
        // 1. Test ADD (Positive + Positive)
        alu_src_a = 15; alu_src_b = 10;
        alu_control = ALU_ADD;
        check_result("ADD (15+10)", 25);

        // 2. Test SUB (Positive - Positive = Negative)
        alu_src_a = 10; alu_src_b = 20;
        alu_control = ALU_SUB;
        check_result("SUB (10-20)", -10);
        if (alu_negative !== 1'b1) $error("FAIL: alu_negative flag not set for -10");

        // 3. Test MUL (Large Numbers)
        alu_src_a = 1000; alu_src_b = 1000;
        alu_control = ALU_MUL;
        check_result("MUL (1k*1k)", 1000000);

        // 4. Test OVERFLOW (Max Positive + 1)
        alu_src_a = 32'h7FFF_FFFF; 
        alu_src_b = 1;
        alu_control = ALU_ADD;
        #5;
        if (alu_overflow !== 1'b1) $error("FAIL: alu_overflow flag missing for MaxPos + 1");
        if (alu_negative !== 1'b1) $error("FAIL: Wrap around should appear negative");

        // 5. Test ZERO Flag
        alu_src_a = 12345; alu_src_b = 12345;
        alu_control = ALU_SUB;
        check_result("SUB Zero Check", 0);
        if (alu_zero !== 1'b1) $error("FAIL: alu_zero flag not set");

        // 6. Test Logical Shift Left (SLL)
        alu_src_a = 1; alu_src_b = 4; 
        alu_control = ALU_SLL;
        check_result("SLL (1<<4)", 16);

        // 7. Test Arithmetic Shift Right (SRA) - Sign Extension
        alu_src_a = -16; 
        alu_src_b = 2;   
        alu_control = ALU_SRA;
        check_result("SRA (-16>>>2)", -4); 

        // 8. Random Stress Test
        $display("--- Running Random Vectors ---");
        repeat (20) begin
            alu_src_a = $random;
            alu_src_b = $random;
            alu_control = $urandom_range(0, 7); 
            #5;
            if (alu_out === 'x) $error("FAIL: ALU output is X state!");
        end

        $display("### Testbench Complete ###");
        $finish;
    end

endmodule