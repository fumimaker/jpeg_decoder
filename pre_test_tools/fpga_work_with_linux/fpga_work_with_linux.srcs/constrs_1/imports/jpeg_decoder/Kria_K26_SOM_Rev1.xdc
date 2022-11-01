# Xilinx design constraints (XDC) file for Kria K26 SOM - Rev 1

#Other net   PACKAGE_PIN U12      - GND                       Bank   0 - DXN
#Other net   PACKAGE_PIN P12      - VCC_PLADC                 Bank   0 - VCCADC
#Other net   PACKAGE_PIN P13      - PLADC_AGND                Bank   0 - GNDADC
#Other net   PACKAGE_PIN U13      - GND                       Bank   0 - DXP
#Other net   PACKAGE_PIN T13      - PLADC_AGND                Bank   0 - VREFP
#Other net   PACKAGE_PIN R12      - PLADC_AGND                Bank   0 - VREFN
#Other net   PACKAGE_PIN R13      - VAUX_5V0_P                Bank   0 - VP
#Other net   PACKAGE_PIN T12      - VAUX_5V0_N                Bank   0 - VN
#Other net   PACKAGE_PIN U7       - FPGA_PUDC_B               Bank   0 - PUDC_B
#Other net   PACKAGE_PIN W7       - FPGA_POR_OVERRIDE         Bank   0 - POR_OVERRIDE

set_property PACKAGE_PIN H12       [get_ports "pmod[0]"] ;  set_property IOSTANDARD LVCMOS33   [get_ports {pmod[0]}];
set_property PACKAGE_PIN B10       [get_ports "pmod[1]"] ;  set_property IOSTANDARD LVCMOS33   [get_ports {pmod[1]}];
set_property PACKAGE_PIN E10       [get_ports "pmod[2]"] ;  set_property IOSTANDARD LVCMOS33   [get_ports {pmod[2]}];
set_property PACKAGE_PIN E12       [get_ports "pmod[3]"] ;  set_property IOSTANDARD LVCMOS33   [get_ports {pmod[3]}];
set_property PACKAGE_PIN D10       [get_ports "pmod[4]"] ;  set_property IOSTANDARD LVCMOS33   [get_ports {pmod[4]}];
set_property PACKAGE_PIN D11       [get_ports "pmod[5]"] ;  set_property IOSTANDARD LVCMOS33   [get_ports {pmod[5]}];
set_property PACKAGE_PIN C11       [get_ports "pmod[6]"] ;  set_property IOSTANDARD LVCMOS33   [get_ports {pmod[6]}];
set_property PACKAGE_PIN B11       [get_ports "pmod[7]"] ;  set_property IOSTANDARD LVCMOS33   [get_ports {pmod[7]}];

#GPIO
#Fan Speed Enable
set_property PACKAGE_PIN A12 [get_ports {fan_en_b}]
set_property IOSTANDARD LVCMOS33 [get_ports {fan_en_b}]
set_property SLEW SLOW [get_ports {fan_en_b}]
set_property DRIVE 4 [get_ports {fan_en_b}]

#I2C signals --> I2C switch 0--> ISP AP1302 + Sensor AR1335
set_property PACKAGE_PIN G11 [get_ports iic_scl_io]
set_property PACKAGE_PIN F10 [get_ports iic_sda_io]
set_property IOSTANDARD LVCMOS33 [get_ports iic_*]
set_property SLEW SLOW [get_ports iic_*]
set_property DRIVE 4 [get_ports iic_*]

set_property BITSTREAM.CONFIG.OVERTEMPSHUTDOWN ENABLE [current_design]