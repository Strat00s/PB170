project_open -force "DE2_NIOS"
set expected system_0.qip
set qsys_name system_0.qsys
foreach_in_collection item [get_all_global_assignments -name QIP_FILE] {
	set qip_name [lindex $item 2]
	if {[string compare $qip_name $expected] == 0} {
		remove_all_global_assignments -name QIP_FILE
		remove_all_global_assignments -name SOPC_FILE
		project_close
		exit 0
	}
}
exit 1
