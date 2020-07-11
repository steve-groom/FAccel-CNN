# TCL File Generated by Component Editor 18.1
# Wed Jun 17 13:26:19 NZST 2020
# DO NOT MODIFY


# 
# pad_stream "pad_stream" v1.0
#  2020.06.17.13:26:19
# 
# 

# 
# request TCL package from ACDS 16.1
# 
package require -exact qsys 16.1


# 
# module pad_stream
# 
set_module_property DESCRIPTION ""
set_module_property NAME pad_stream
set_module_property VERSION 1.0
set_module_property INTERNAL false
set_module_property OPAQUE_ADDRESS_MAP true
set_module_property GROUP CustomIP
set_module_property AUTHOR ""
set_module_property DISPLAY_NAME pad_stream
set_module_property INSTANTIATE_IN_SYSTEM_MODULE true
set_module_property EDITABLE true
set_module_property REPORT_TO_TALKBACK false
set_module_property ALLOW_GREYBOX_GENERATION false
set_module_property REPORT_HIERARCHY false


# 
# file sets
# 
add_fileset QUARTUS_SYNTH QUARTUS_SYNTH "" ""
set_fileset_property QUARTUS_SYNTH TOP_LEVEL pad_stream
set_fileset_property QUARTUS_SYNTH ENABLE_RELATIVE_INCLUDE_PATHS false
set_fileset_property QUARTUS_SYNTH ENABLE_FILE_OVERWRITE_MODE false
add_fileset_file pad_stream.sv SYSTEM_VERILOG PATH pad_stream.sv TOP_LEVEL_FILE


# 
# parameters
# 
add_parameter PAD INTEGER 1
set_parameter_property PAD DEFAULT_VALUE 1
set_parameter_property PAD DISPLAY_NAME PAD
set_parameter_property PAD TYPE INTEGER
set_parameter_property PAD UNITS None
set_parameter_property PAD HDL_PARAMETER true


# 
# display items
# 


# 
# connection point clock
# 
add_interface clock clock end
set_interface_property clock clockRate 0
set_interface_property clock ENABLED true
set_interface_property clock EXPORT_OF ""
set_interface_property clock PORT_NAME_MAP ""
set_interface_property clock CMSIS_SVD_VARIABLES ""
set_interface_property clock SVD_ADDRESS_GROUP ""

add_interface_port clock clock clk Input 1


# 
# connection point clock_sreset
# 
add_interface clock_sreset reset end
set_interface_property clock_sreset associatedClock clock
set_interface_property clock_sreset synchronousEdges DEASSERT
set_interface_property clock_sreset ENABLED true
set_interface_property clock_sreset EXPORT_OF ""
set_interface_property clock_sreset PORT_NAME_MAP ""
set_interface_property clock_sreset CMSIS_SVD_VARIABLES ""
set_interface_property clock_sreset SVD_ADDRESS_GROUP ""

add_interface_port clock_sreset clock_sreset reset Input 1


# 
# connection point source
# 
add_interface source avalon_streaming start
set_interface_property source associatedClock clock
set_interface_property source associatedReset clock_sreset
set_interface_property source dataBitsPerSymbol 8
set_interface_property source errorDescriptor ""
set_interface_property source firstSymbolInHighOrderBits true
set_interface_property source maxChannel 0
set_interface_property source readyLatency 1
set_interface_property source ENABLED true
set_interface_property source EXPORT_OF ""
set_interface_property source PORT_NAME_MAP ""
set_interface_property source CMSIS_SVD_VARIABLES ""
set_interface_property source SVD_ADDRESS_GROUP ""

add_interface_port source so_ready ready Input 1
add_interface_port source so_valid valid Output 1
add_interface_port source so_sop startofpacket Output 1
add_interface_port source so_eop endofpacket Output 1
add_interface_port source so_data data Output 16


# 
# connection point sink
# 
add_interface sink avalon_streaming end
set_interface_property sink associatedClock clock
set_interface_property sink associatedReset clock_sreset
set_interface_property sink dataBitsPerSymbol 8
set_interface_property sink errorDescriptor ""
set_interface_property sink firstSymbolInHighOrderBits true
set_interface_property sink maxChannel 0
set_interface_property sink readyLatency 1
set_interface_property sink ENABLED true
set_interface_property sink EXPORT_OF ""
set_interface_property sink PORT_NAME_MAP ""
set_interface_property sink CMSIS_SVD_VARIABLES ""
set_interface_property sink SVD_ADDRESS_GROUP ""

add_interface_port sink si_ready ready Output 1
add_interface_port sink si_valid valid Input 1
add_interface_port sink si_sop startofpacket Input 1
add_interface_port sink si_eop endofpacket Input 1
add_interface_port sink si_data data Input 16

