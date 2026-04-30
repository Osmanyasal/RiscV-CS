transcript off
onbreak {quit -force}
onerror {quit -force}
transcript on

vlib work
vlib riviera/xpm
vlib riviera/xil_defaultlib

vmap xpm riviera/xpm
vmap xil_defaultlib riviera/xil_defaultlib

vlog -work xpm  -incr "+incdir+../../../ipstatic" "+incdir+../../../../../../../Documents/Xilinx/2025.1/data/rsb/busdef" -l xpm -l xil_defaultlib \
"/home/rt7/Documents/Xilinx/2025.1/Vivado/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \

vcom -work xpm -93  -incr \
"/home/rt7/Documents/Xilinx/2025.1/data/ip/xpm/xpm_VCOMP.vhd" \

vlog -work xil_defaultlib  -incr -v2k5 "+incdir+../../../ipstatic" "+incdir+../../../../../../../Documents/Xilinx/2025.1/data/rsb/busdef" -l xpm -l xil_defaultlib \
"../../../../axi_mmu_0_ex.gen/sources_1/ip/axi_mmu_0_example_clk_wiz_0/axi_mmu_0_example_clk_wiz_0_clk_wiz.v" \
"../../../../axi_mmu_0_ex.gen/sources_1/ip/axi_mmu_0_example_clk_wiz_0/axi_mmu_0_example_clk_wiz_0.v" \

vlog -work xil_defaultlib \
"glbl.v"

