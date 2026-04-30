transcript off
onbreak {quit -force}
onerror {quit -force}
transcript on

vlib work
vlib riviera/xpm
vlib riviera/proc_sys_reset_v5_0_17
vlib riviera/xil_defaultlib

vmap xpm riviera/xpm
vmap proc_sys_reset_v5_0_17 riviera/proc_sys_reset_v5_0_17
vmap xil_defaultlib riviera/xil_defaultlib

vlog -work xpm  -incr "+incdir+../../../../../../../Documents/Xilinx/2025.1/data/rsb/busdef" -l xpm -l proc_sys_reset_v5_0_17 -l xil_defaultlib \
"/home/rt7/Documents/Xilinx/2025.1/Vivado/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \

vcom -work xpm -93  -incr \
"/home/rt7/Documents/Xilinx/2025.1/data/ip/xpm/xpm_VCOMP.vhd" \

vcom -work proc_sys_reset_v5_0_17 -93  -incr \
"../../../ipstatic/hdl/proc_sys_reset_v5_0_vh_rfs.vhd" \

vcom -work xil_defaultlib -93  -incr \
"../../../../axi_mmu_0_ex.gen/sources_1/ip/axi_mmu_0_example_psr_0/sim/axi_mmu_0_example_psr_0.vhd" \


vlog -work xil_defaultlib \
"glbl.v"

