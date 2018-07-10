cmake_minimum_required(VERSION 3.1)

project(clin_example LANGUAGES C)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${PROJECT_SOURCE_DIR}/cmake)

find_package(clin REQUIRED)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSTIONS ON)

## -- Example library

add_library(clin_example_lib SHARED example/example_lib.c)
add_clin_to_library(clin_example_lib)

if(MSVC)
	set_target_properties(clin_example_lib PROPERTIES CMAKE_C_FLAGS "${CMAKE_C_FLAGS} /D_CRT_SECURE_NO_WARNINGS /MP /W3")
endif()

if(CMAKE_C_COMPILER_ID MATCHES "GNU|Clang|AppleClang")
	set_target_properties(clin_example_lib PROPERTIES CMAKE_C_FLAGS "-Wall -Wextra ${CMAKE_C_FLAGS}")
endif()

## -- Example executable

find_package(OpenCL REQUIRED)

add_executable(clin_example example/example.c)
# Note: No need to link OpenCL, as it will be loaded by clin at runtime
target_link_libraries(clin_example clin_example_lib)
# However we do need the OpenCL headers
target_include_directories(clin_example PRIVATE ${OpenCL_INCLUDE_DIRS})

