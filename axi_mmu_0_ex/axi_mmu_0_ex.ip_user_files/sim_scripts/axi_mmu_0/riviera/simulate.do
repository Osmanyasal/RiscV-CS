transcript off
onbreak {quit -force}
onerror {quit -force}
transcript on

asim +access +r +m+axi_mmu_0  -L xil_defaultlib -L xpm -L axi_infrastructure_v1_1_0 -L axi_register_slice_v2_1_35 -L axi_mmu_v2_1_33 -L unisims_ver -L unimacro_ver -L secureip -O5 xil_defaultlib.axi_mmu_0 xil_defaultlib.glbl

do {axi_mmu_0.udo}

run 1000ns

endsim

quit -force
