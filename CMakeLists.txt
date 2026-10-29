cmake_minimum_required (VERSION 3.10)

project ("c-tutorial-1k-1s_illia")

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/../dist/bin")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/../dist/lib")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/../dist/bin")

if (LINUX)
 list(APPEND COMMON_DEPS pthread m)
endif()

if (CMAKE_COMPILER_IS_GNUCXX)
 add_definitions (-Wall -pedantic)
endif()

if(MSVC)
 add_definitions (/W4)
 add_compile_definitions(_USE_MATH_DEFINES)
endif()

add_subdirectory("examples")
add_subdirectory("rrr/qqq")
add_subdirectory("lab01")
add_subdirectory("інд.завд./інд.завд.1")