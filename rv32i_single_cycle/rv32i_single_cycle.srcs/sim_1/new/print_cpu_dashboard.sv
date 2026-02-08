`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/08/2026 07:09:20 PM
// Design Name: 
// Module Name: print_cpu_dashboard
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
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 02/08/2026 07:02:18 PM
// Design Name: 
// Module Name: print_cpu_dashboard
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


// cpu_utils.svh
task print_cpu_dashboard();
    string inst_name;
    logic [31:0] current_imm;
    
    // Simple Disassembler & Imm Selector
    case(dut.control_opcode)
        7'b0110011: begin inst_name = "R-TYPE"; current_imm = 32'h0; end
        7'b0010011: begin inst_name = "I-TYPE (OP-IMM)"; current_imm = dut.control_imm_i_type; end
        7'b0000011: begin inst_name = "I-TYPE (LOAD)";   current_imm = dut.control_imm_i_type; end
        7'b0100011: begin inst_name = "S-TYPE (STORE)";  current_imm = dut.control_imm_s_type; end
        7'b1100011: begin inst_name = "B-TYPE (BRANCH)"; current_imm = dut.control_imm_b_type; end
        7'b0110111: begin inst_name = "U-TYPE (LUI)";    current_imm = dut.control_imm_u_type; end
        7'b1101111: begin inst_name = "J-TYPE (JAL)";    current_imm = dut.control_imm_j_type; end
        default:    begin inst_name = "UNKNOWN";         current_imm = 32'h0; end
    endcase

    $display("\n==================================================");
    $display("      RISC-V CPU DEBUG DASHBOARD | %s", inst_name);
    $display("==================================================");
    
    $display("\n[FETCH PHASE]");
    $display("\tPC Current    : %0d", dut.pc_current);
    $display("\tRaw Hex       : 0x%h", dut.inst_out);
    
    // Dynamic Binary Splitting based on Type
    if (dut.control_opcode == 7'b0110011) begin // R-Type
        $display("\tBinary Split  : %b_%b_%b_%b_%b_%b", 
            dut.inst_out[31:25], dut.inst_out[24:20], dut.inst_out[19:15], 
            dut.inst_out[14:12], dut.inst_out[11:7],  dut.inst_out[6:0]);
        $display("\tField Map     : [ f7 ] [rs2] [rs1] [f3] [rd ] [ opcode ]");
    end else if (dut.control_opcode == 7'b0100011) begin // S-Type
        $display("\tBinary Split  : %b_%b_%b_%b_%b_%b", 
            dut.inst_out[31:25], dut.inst_out[24:20], dut.inst_out[19:15], 
            dut.inst_out[14:12], dut.inst_out[11:7],  dut.inst_out[6:0]);
        $display("\tField Map     : [imm] [rs2] [rs1] [f3] [imm] [ opcode ]");
    end else begin // Default to I-Type style for others
        $display("\tBinary Split  : %b_%b_%b_%b_%b", 
            dut.inst_out[31:20], dut.inst_out[19:15], 
            dut.inst_out[14:12], dut.inst_out[11:7], dut.inst_out[6:0]);
        $display("\tField Map     : [    imm    ] [rs1] [f3] [rd ] [ opcode ]");
    end

    $display("\n[DECODE PHASE]");
    $display("\tReg Access    : RS1(x%0d)=0x%h, RS2(x%0d)=0x%h", 
              dut.control_rs1, dut.rd1, dut.control_rs2, dut.rd2);
    $display("\tImm Decoded   : %0d (0x%h)", $signed(current_imm), current_imm);

    $display("\n[EXECUTE PHASE]");
    $display("\tALU Inputs    : A=0x%h, B=0x%h", dut.alu_src_a, dut.alu_src_b);
    $display("\tALU Result    : 0x%h", dut.alu_out_addr);
    
    $display("\n[MEMORY/WB PHASE]");
    if (dut.control_data_mem_we) 
        $display("\tAction        : MEM_WRITE [0x%h] <= 0x%h", dut.alu_out_addr, dut.rd2);
    else if (dut.control_opcode == 7'b0000011)
        $display("\tAction        : MEM_READ  [0x%h] => 0x%h", dut.alu_out_addr, dut.data_mem_rd);
    else
        $display("\tAction        : ALU_RESULT 0x%h => Register x%0d", dut.alu_out_addr, dut.control_rd);
    
    $display("==================================================\n");
endtask
