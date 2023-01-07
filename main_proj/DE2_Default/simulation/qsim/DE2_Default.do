onerror {quit -f}
vlib work
vlog -work work DE2_Default.vo
vlog -work work DE2_Default.vt
vsim -novopt -c -t 1ps -L cycloneii_ver -L altera_ver -L altera_mf_ver -L 220model_ver -L sgate work.DE2_Default_vlg_vec_tst
vcd file -direction DE2_Default.msim.vcd
vcd add -internal DE2_Default_vlg_vec_tst/*
vcd add -internal DE2_Default_vlg_vec_tst/i1/*
add wave /*
run -all
