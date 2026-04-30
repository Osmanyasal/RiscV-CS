transcript off
onbreak {quit -force}
onerror {quit -force}
transcript on

vlib work
vlib riviera/xpm
vlib riviera/axi_infrastructure_v1_1_0
vlib riviera/axi_register_slice_v2_1_35
vlib riviera/axi_mmu_v2_1_33
vlib riviera/xil_defaultlib

vmap xpm riviera/xpm
vmap axi_infrastructure_v1_1_0 riviera/axi_infrastructure_v1_1_0
vmap axi_register_slice_v2_1_35 riviera/axi_register_slice_v2_1_35
vmap axi_mmu_v2_1_33 riviera/axi_mmu_v2_1_33
vmap xil_defaultlib riviera/xil_defaultlib

vlog -work xpm  -incr "+incdir+../../../ipstatic/ipshared/ec67/hdl" "+incdir+../../../../../../../Documents/Xilinx/2025.1/data/rsb/busdef" -l xpm -l axi_infrastructure_v1_1_0 -l axi_register_slice_v2_1_35 -l axi_mmu_v2_1_33 -l xil_defaultlib \
"/home/rt7/Documents/Xilinx/2025.1/Vivado/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \

vcom -work xpm -93  -incr \
"/home/rt7/Documents/Xilinx/2025.1/data/ip/xpm/xpm_VCOMP.vhd" \

vlog -work axi_infrastructure_v1_1_0  -incr -v2k5 "+incdir+../../../ipstatic/ipshared/ec67/hdl" "+incdir+../../../../../../../Documents/Xilinx/2025.1/data/rsb/busdef" -l xpm -l axi_infrastructure_v1_1_0 -l axi_register_slice_v2_1_35 -l axi_mmu_v2_1_33 -l xil_defaultlib \
"../../../ipstatic/ipshared/ec67/hdl/axi_infrastructure_v1_1_vl_rfs.v" \

vlog -work axi_register_slice_v2_1_35  -incr -v2k5 "+incdir+../../../ipstatic/ipshared/ec67/hdl" "+incdir+../../../../../../../Documents/Xilinx/2025.1/data/rsb/busdef" -l xpm -l axi_infrastructure_v1_1_0 -l axi_register_slice_v2_1_35 -l axi_mmu_v2_1_33 -l xil_defaultlib \
"../../../ipstatic/ipshared/c5b7/hdl/axi_register_slice_v2_1_vl_rfs.v" \

vlog -work axi_mmu_v2_1_33  -incr -v2k5 "+incdir+../../../ipstatic/ipshared/ec67/hdl" "+incdir+../../../../../../../Documents/Xilinx/2025.1/data/rsb/busdef" -l xpm -l axi_infrastructure_v1_1_0 -l axi_register_slice_v2_1_35 -l axi_mmu_v2_1_33 -l xil_defaultlib \
"../../../ipstatic/ipshared/a27c/hdl/axi_mmu_v2_1_vl_rfs.v" \

vlog -work xil_defaultlib  -incr -v2k5 "+incdir+../../../ipstatic/ipshared/ec67/hdl" "+incdir+../../../../../../../Documents/Xilinx/2025.1/data/rsb/busdef" -l xpm -l axi_infrastructure_v1_1_0 -l axi_register_slice_v2_1_35 -l axi_mmu_v2_1_33 -l xil_defaultlib \
"../../../../axi_mmu_0_ex.gen/sources_1/ip/axi_mmu_0/sim/axi_mmu_0.v" \


vlog -work xil_defaultlib \
"glbl.v"

