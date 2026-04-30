vlib questa_lib/work
vlib questa_lib/msim

vlib questa_lib/msim/xpm
vlib questa_lib/msim/xil_defaultlib

vmap xpm questa_lib/msim/xpm
vmap xil_defaultlib questa_lib/msim/xil_defaultlib

vlog -work xpm -64 -incr -mfcu  -sv "+incdir+../../../ipstatic" "+incdir+../../../../../../../Documents/Xilinx/2025.1/data/rsb/busdef" \
"/home/rt7/Documents/Xilinx/2025.1/Vivado/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \

vcom -work xpm -64 -93  \
"/home/rt7/Documents/Xilinx/2025.1/data/ip/xpm/xpm_VCOMP.vhd" \

vlog -work xil_defaultlib -64 -incr -mfcu  "+incdir+../../../ipstatic" "+incdir+../../../../../../../Documents/Xilinx/2025.1/data/rsb/busdef" \
"../../../../axi_mmu_0_ex.gen/sources_1/ip/axi_mmu_0_example_clk_wiz_0/axi_mmu_0_example_clk_wiz_0_clk_wiz.v" \
"../../../../axi_mmu_0_ex.gen/sources_1/ip/axi_mmu_0_example_clk_wiz_0/axi_mmu_0_example_clk_wiz_0.v" \

vlog -work xil_defaultlib \
"glbl.v"

