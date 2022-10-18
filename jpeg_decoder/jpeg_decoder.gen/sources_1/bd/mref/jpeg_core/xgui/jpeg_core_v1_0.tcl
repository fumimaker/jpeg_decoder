# Definitional proc to organize widgets for parameters.
proc init_gui { IPINST } {
  ipgui::add_param $IPINST -name "Component_Name"
  #Adding Page
  set Page_0 [ipgui::add_page $IPINST -name "Page 0"]
  ipgui::add_param $IPINST -name "SUPPORT_WRITABLE_DHT" -parent ${Page_0}


}

proc update_PARAM_VALUE.SUPPORT_WRITABLE_DHT { PARAM_VALUE.SUPPORT_WRITABLE_DHT } {
	# Procedure called to update SUPPORT_WRITABLE_DHT when any of the dependent parameters in the arguments change
}

proc validate_PARAM_VALUE.SUPPORT_WRITABLE_DHT { PARAM_VALUE.SUPPORT_WRITABLE_DHT } {
	# Procedure called to validate SUPPORT_WRITABLE_DHT
	return true
}


proc update_MODELPARAM_VALUE.SUPPORT_WRITABLE_DHT { MODELPARAM_VALUE.SUPPORT_WRITABLE_DHT PARAM_VALUE.SUPPORT_WRITABLE_DHT } {
	# Procedure called to set VHDL generic/Verilog parameter value(s) based on TCL parameter value
	set_property value [get_property value ${PARAM_VALUE.SUPPORT_WRITABLE_DHT}] ${MODELPARAM_VALUE.SUPPORT_WRITABLE_DHT}
}

