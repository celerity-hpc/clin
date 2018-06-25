cmake_minimum_required(VERSION 3.1)

project(clin LANGUAGES C)

if(CMAKE_C_COMPILER_ID MATCHES "GNU|Clang|AppleClang")
	set(CMAKE_C_FLAGS "-Wall -Wextra ${CMAKE_C_FLAGS}")
endif()

if(MSVC)
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} /D_CRT_SECURE_NO_WARNINGS /MP /W3")
endif()

# Library

file(GLOB LIB_HEADER_FILES platforms/*.h generator/*.h)
add_library(clin_lib SHARED clin.c ${LIB_HEADER_FILES})
target_include_directories(clin_lib PRIVATE "ext" "generator")

set_target_properties(clin_lib PROPERTIES OUTPUT_NAME opencl)
