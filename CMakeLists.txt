cmake_minimum_required(VERSION 3.1)

project(clin LANGUAGES C)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSTIONS ON)

# Library

file(GLOB LIB_HEADER_FILES *.h platforms/*.h generator/*.h)
add_library(clin_lib SHARED clin.c ${LIB_HEADER_FILES})
target_include_directories(clin_lib PRIVATE "ext" "generator")

# Platform-specific

if(MSVC)
	set_target_properties(clin_lib PROPERTIES OUTPUT_NAME OpenCL)
	set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} /D_CRT_SECURE_NO_WARNINGS /MP /W3")
endif()

if(CMAKE_C_COMPILER_ID MATCHES "GNU|Clang|AppleClang")
	set(CMAKE_C_FLAGS "-Wall -Wextra ${CMAKE_C_FLAGS}")
	add_definitions(-D_GNU_SOURCE)
	target_link_libraries(clin_lib dl)
	if(NOT CMAKE_BUILD_TYPE)
		set(CMAKE_BUILD_TYPE "Release" CACHE STRING "CMake Build Type" FORCE)
	endif()
endif()

