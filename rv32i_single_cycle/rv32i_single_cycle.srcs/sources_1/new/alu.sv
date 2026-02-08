module alu #(parameter WIDTH = 32)(
        input logic [3:0] alu_control,              // Changed from alu_opcode
        input logic [2:0] alu_func3,                // Note: These aren't used in your case yet
        input logic [6:0] alu_func7,
        input logic signed [WIDTH-1:0] alu_src_a,
        input logic signed [WIDTH-1:0] alu_src_b,
        output logic signed [2*WIDTH-1:0] alu_out,
        output logic alu_zero,
        output logic alu_overflow,
        output logic alu_negative,
        output logic alu_carry 
    );
    
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
    
    logic [WIDTH:0] temp_add_sub;
    logic signed [2*WIDTH-1:0] result;

    always_comb begin
        result = '0;
        alu_overflow = 0;
        alu_carry = 0;        
            case(alu_control) // Matches input name
                ALU_ADD: begin 
                    temp_add_sub = {1'b0, alu_src_a} + {1'b0, alu_src_b};
                    // Sign-extend the 32-bit sum to the full 64-bit result
                    result = signed'({{WIDTH{temp_add_sub[WIDTH-1]}}, temp_add_sub[WIDTH-1:0]});
                    alu_carry = temp_add_sub[WIDTH];
                    alu_overflow = (alu_src_a[WIDTH-1] == alu_src_b[WIDTH-1]) && 
                                   (result[WIDTH-1] != alu_src_a[WIDTH-1]);
                end
                
                ALU_SUB: begin 
                    temp_add_sub = {1'b0, alu_src_a} - {1'b0, alu_src_b};
                    // Sign-extend the 32-bit difference to the full 64-bit result
                    result = signed'({{WIDTH{temp_add_sub[WIDTH-1]}}, temp_add_sub[WIDTH-1:0]});
                    alu_carry = temp_add_sub[WIDTH];
                    alu_overflow = (alu_src_a[WIDTH-1] != alu_src_b[WIDTH-1]) && 
                                   (result[WIDTH-1] != alu_src_a[WIDTH-1]);
                end

                ALU_MUL: result = alu_src_a * alu_src_b;
                ALU_AND: result = alu_src_a & alu_src_b;
                ALU_OR:  result = alu_src_a | alu_src_b;
                ALU_XOR: result = alu_src_a ^ alu_src_b;
                ALU_SLL: result = alu_src_a << alu_src_b[4:0];
                ALU_SRA: result = alu_src_a >>> alu_src_b[4:0];
                default: result = '0;
            endcase 
    end
            
    assign alu_out      = result;
    assign alu_zero     = (result == '0);
    assign alu_negative = result[2*WIDTH-1]; 
        
endmodule