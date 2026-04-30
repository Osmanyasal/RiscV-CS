`timescale 1ns / 1ps

module tb_program_run;

    localparam WIDTH = 32;
    localparam int FIB_STEPS = 20;
    localparam bit PRINT_DASHBOARD = 1'b0;
    localparam int MAX_CYCLES = (FIB_STEPS * 16) + 64;
    logic clk;
    logic rst;
    logic [31:0] pc_debug;
    logic [31:0] fail_counter;
    logic [31:0] loop_pc;
    int cycle_count;
    int expected_prev;
    int expected_curr;
    int expected_next;
    int step_idx;

    cpu dut(.*);

    `include "print_cpu_dashboard.sv"

    task clear_runtime_state;
        begin
            foreach (dut.reg_file.mem_arr[i]) dut.reg_file.mem_arr[i] = 32'h0;
            foreach (dut.mem_data.mem_arr[i]) dut.mem_data.mem_arr[i] = 32'h0;
        end
    endtask

    initial begin
        clk = 0;
        rst = 1;
        fail_counter = 0;
        cycle_count = 0;
        loop_pc = 32'd0;
        expected_prev = 0;
        expected_curr = 0;
        expected_next = 0;
        step_idx = 0;

        clear_runtime_state();
        dut.mem_data.mem_arr[0] = FIB_STEPS;

        @(posedge clk);
        rst = 0;
        #1;

        while ((cycle_count < MAX_CYCLES) && (dut.pc_current != 32'd15)) begin
            @(posedge clk);
            #1;
            cycle_count += 1;
            if (PRINT_DASHBOARD)
                print_cpu_dashboard();
        end

        if (dut.pc_current != 32'd15) begin
            fail_counter += 1;
            $display("Timeout fail: program did not reach halt loop within %0d cycles", MAX_CYCLES);
        end

        expected_prev = 0;
        expected_curr = 1;
        for (step_idx = 0; step_idx < FIB_STEPS; step_idx += 1) begin
            assert (dut.mem_data.mem_arr[32 + step_idx] == expected_prev)
            else begin
                fail_counter += 1;
                $display("mem[%0d] fail: got %0d expected %0d", 32 + step_idx, dut.mem_data.mem_arr[32 + step_idx], expected_prev);
            end
            expected_next = expected_prev + expected_curr;
            expected_prev = expected_curr;
            expected_curr = expected_next;
        end

        assert (dut.reg_file.mem_arr[9] == 32'd0)
        else begin fail_counter += 1; $display("x9 fail: got %0d", dut.reg_file.mem_arr[9]); end

        assert (dut.reg_file.mem_arr[10] == (32 + FIB_STEPS))
        else begin fail_counter += 1; $display("x10 fail: got %0d", dut.reg_file.mem_arr[10]); end

        $display("Generated Fibonacci sequence:");
        for (step_idx = 0; step_idx < FIB_STEPS; step_idx += 1) begin
            $display("mem[%0d] = %0d", 32 + step_idx, dut.mem_data.mem_arr[32 + step_idx]);
        end

        loop_pc = dut.pc_current;
        repeat (3) @(posedge clk);
        assert (dut.pc_current == loop_pc)
        else begin fail_counter += 1; $display("Loop PC fail: expected %0d, got %0d", loop_pc, dut.pc_current); end

        if (fail_counter == 0)
            $display("PASS: Program completed successfully and entered self-loop at PC=%0d", dut.pc_current);
        else
            $display("FAIL: Program run completed with %0d errors", fail_counter);

        $finish;
    end

    always begin #5 clk = ~clk; end

endmodule