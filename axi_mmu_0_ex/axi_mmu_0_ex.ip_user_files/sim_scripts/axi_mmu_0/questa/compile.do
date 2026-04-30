vlib questa_lib/work
vlib questa_lib/msim

vlib questa_lib/msim/xpm
vlib questa_lib/msim/axi_infrastructure_v1_1_0
vlib questa_lib/msim/axi_register_slice_v2_1_35
vlib questa_lib/msim/axi_mmu_v2_1_33
vlib questa_lib/msim/xil_defaultlib

vmap xpm questa_lib/msim/xpm
vmap axi_infrastructure_v1_1_0 questa_lib/msim/axi_infrastructure_v1_1_0
vmap axi_register_slice_v2_1_35 questa_lib/msim/axi_register_slice_v2_1_35
vmap axi_mmu_v2_1_33 questa_lib/msim/axi_mmu_v2_1_33
vmap xil_defaultlib questa_lib/msim/xil_defaultlib

vlog -work xpm -64 -incr -mfcu  -sv "+incdir+../../../ipstatic/ipshared/ec67/hdl" "+incdir+../../../../../../../Documents/Xilinx/2025.1/data/rsb/busdef" \
"/home/rt7/Documents/Xilinx/2025.1/Vivado/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \

vcom -work xpm -64 -93  \
"/home/rt7/Documents/Xilinx/2025.1/data/ip/xpm/xpm_VCOMP.vhd" \

vlog -work axi_infrastructure_v1_1_0 -64 -incr -mfcu  "+incdir+../../../ipstatic/ipshared/ec67/hdl" "+incdir+../../../../../../../Documents/Xilinx/2025.1/data/rsb/busdef" \
"../../../ipstatic/ipshared/ec67/hdl/axi_infrastructure_v1_1_vl_rfs.v" \

vlog -work axi_register_slice_v2_1_35 -64 -incr -mfcu  "+incdir+../../../ipstatic/ipshared/ec67/hdl" "+incdir+../../../../../../../Documents/Xilinx/2025.1/data/rsb/busdef" \
"../../../ipstatic/ipshared/c5b7/hdl/axi_register_slice_v2_1_vl_rfs.v" \

vlog -work axi_mmu_v2_1_33 -64 -incr -mfcu  "+incdir+../../../ipstatic/ipshared/ec67/hdl" "+incdir+../../../../../../../Documents/Xilinx/2025.1/data/rsb/busdef" \
"../../../ipstatic/ipshared/a27c/hdl/axi_mmu_v2_1_vl_rfs.v" \

vlog -work xil_defaultlib -64 -incr -mfcu  "+incdir+../../../ipstatic/ipshared/ec67/hdl" "+incdir+../../../../../../../Documents/Xilinx/2025.1/data/rsb/busdef" \
"../../../../axi_mmu_0_ex.gen/sources_1/ip/axi_mmu_0/sim/axi_mmu_0.v" \


vlog -work xil_defaultlib \
"glbl.v"

