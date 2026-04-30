`timescale 1ns / 1ps

module tb_ujtype;

    localparam WIDTH = 32;
    logic clk;
    logic rst;
    logic [31:0] pc_debug;
    logic [31:0] fail_counter;
    cpu dut(.*);

    `include "clear_memories.sv"
    `include "print_cpu_dashboard.sv"

    task check_lui;
        begin
            clear_memories();
            dut.mem_inst.mem_arr[20] = 32'h12345237; // lui x4, 0x12345

            force dut.pc_current = 32'd20;
            #1;
            release dut.pc_current;

            @(posedge clk); #1;
            assert(dut.reg_file.mem_arr[4] == 32'h12345000)
            else begin fail_counter += 1; $display("LUI fail: got %h", dut.reg_file.mem_arr[4]); end
            assert(dut.pc_current == 32'd21)
            else begin fail_counter += 1; $display("LUI PC fail: got %0d", dut.pc_current); end
        end
    endtask

    task check_auipc;
        begin
            clear_memories();
            dut.mem_inst.mem_arr[24] = 32'h00001297; // auipc x5, 0x1

            force dut.pc_current = 32'd24;
            #1;
            release dut.pc_current;

            @(posedge clk); #1;
            assert(dut.reg_file.mem_arr[5] == 32'd4120)
            else begin fail_counter += 1; $display("AUIPC fail: got %0d", dut.reg_file.mem_arr[5]); end
            assert(dut.pc_current == 32'd25)
            else begin fail_counter += 1; $display("AUIPC PC fail: got %0d", dut.pc_current); end
        end
    endtask

    task check_jal;
        begin
            clear_memories();
            dut.mem_inst.mem_arr[40] = 32'h0040036F; // jal x6, +4

            force dut.pc_current = 32'd40;
            #1;
            release dut.pc_current;

            @(posedge clk); #1;
            assert(dut.reg_file.mem_arr[6] == 32'd41)
            else begin fail_counter += 1; $display("JAL link fail: got %0d", dut.reg_file.mem_arr[6]); end
            assert(dut.pc_current == 32'd44)
            else begin fail_counter += 1; $display("JAL target fail: got %0d", dut.pc_current); end
        end
    endtask

    task check_jalr;
        begin
            clear_memories();
            dut.mem_inst.mem_arr[50] = 32'h003403E7; // jalr x7, 3(x8)
            dut.reg_file.mem_arr[8] = 32'd100;

            force dut.pc_current = 32'd50;
            #1;
            release dut.pc_current;

            @(posedge clk); #1;
            assert(dut.reg_file.mem_arr[7] == 32'd51)
            else begin fail_counter += 1; $display("JALR link fail: got %0d", dut.reg_file.mem_arr[7]); end
            assert(dut.pc_current == 32'd102)
            else begin fail_counter += 1; $display("JALR target fail: got %0d", dut.pc_current); end
        end
    endtask

    initial begin
        clk = 0;
        rst = 1;
        fail_counter = 0;

        @(posedge clk);
        rst = 0;
        #1;

        check_lui();
        check_auipc();
        check_jal();
        check_jalr();

        $display("--- U/J-Type Tests Completed with %0d errors ---", fail_counter);
        $finish;
    end

    always begin #5 clk = ~clk; end

endmodule