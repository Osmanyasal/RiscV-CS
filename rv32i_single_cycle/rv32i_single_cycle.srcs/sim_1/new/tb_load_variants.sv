`timescale 1ns / 1ps

module tb_load_variants;

    localparam WIDTH = 32;
    logic clk;
    logic rst;
    logic [31:0] pc_debug;
    logic [31:0] fail_counter;
    cpu dut(.*);

    `include "clear_memories.sv"
    `include "print_cpu_dashboard.sv"

    task check_load_variants;
        begin
            clear_memories();

            dut.mem_inst.mem_arr[60] = 32'h00048503; // lb  x10, 0(x9)
            dut.mem_inst.mem_arr[61] = 32'h00049583; // lh  x11, 0(x9)
            dut.mem_inst.mem_arr[62] = 32'h0004C603; // lbu x12, 0(x9)
            dut.mem_inst.mem_arr[63] = 32'h0004D683; // lhu x13, 0(x9)

            dut.reg_file.mem_arr[9] = 32'd200;
            dut.mem_data.mem_arr[200] = 32'h00008081;

            force dut.pc_current = 32'd60;
            #1;
            release dut.pc_current;

            @(posedge clk); #1;
            assert(dut.reg_file.mem_arr[10] == 32'hFFFF_FF81)
            else begin fail_counter += 1; $display("LB fail: got %h", dut.reg_file.mem_arr[10]); end

            @(posedge clk); #1;
            assert(dut.reg_file.mem_arr[11] == 32'hFFFF_8081)
            else begin fail_counter += 1; $display("LH fail: got %h", dut.reg_file.mem_arr[11]); end

            @(posedge clk); #1;
            assert(dut.reg_file.mem_arr[12] == 32'h0000_0081)
            else begin fail_counter += 1; $display("LBU fail: got %h", dut.reg_file.mem_arr[12]); end

            @(posedge clk); #1;
            assert(dut.reg_file.mem_arr[13] == 32'h0000_8081)
            else begin fail_counter += 1; $display("LHU fail: got %h", dut.reg_file.mem_arr[13]); end

            assert(dut.pc_current == 32'd64)
            else begin fail_counter += 1; $display("LOAD variant PC fail: got %0d", dut.pc_current); end
        end
    endtask

    initial begin
        clk = 0;
        rst = 1;
        fail_counter = 0;

        @(posedge clk);
        rst = 0;
        #1;

        check_load_variants();

        $display("--- Load Variant Tests Completed with %0d errors ---", fail_counter);
        $finish;
    end

    always begin #5 clk = ~clk; end

endmodule