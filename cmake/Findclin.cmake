cmake_minimum_required(VERSION 3.1)

set(clin_DIR ${CMAKE_CURRENT_LIST_DIR}/..)

########################################################
# add_clin_to_library
########################################################
#
# Configures a given library to be a clin library.
#
function(add_clin_to_library targetName)
	get_target_property(targetType ${targetName} TYPE)
	if(NOT targetType STREQUAL "SHARED_LIBRARY")
		message(FATAL_ERROR "add_clin_to_library(${targetName}): A clin library must be compiled as a shared library (is ${targetType}")
	endif()

	# Add source and header files
	target_include_directories(${targetName} PRIVATE ${clin_DIR} ${clin_DIR}/ext ${clin_DIR}/generator)

	# Platform-specific library setup
	if(MSVC)
		set_target_properties(${targetName} PROPERTIES OUTPUT_NAME OpenCL)
	endif()

	set(COMPILER_ID "${CMAKE_C_COMPILER_ID} ${CMAKE_CXX_COMPILER_ID}")
	if((COMPILER_ID MATCHES "GNU|Clang|AppleClang") OR ((COMPILER_ID STREQUAL " ") AND NOT MSVC))
		target_compile_definitions(${targetName} PUBLIC -D_GNU_SOURCE)
		target_link_libraries(${targetName} PUBLIC dl)
	endif()

endfunction(add_clin_to_library)

