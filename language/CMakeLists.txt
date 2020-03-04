cmake_minimum_required(VERSION 3.15)
project(antlr_test3)

set(CMAKE_CXX_STANDARD 17)

# Include source files
include_directories(${CMAKE_SOURCE_DIR}/src)
file(GLOB_RECURSE SOURCES "${CMAKE_SOURCE_DIR}/src/*.cpp")

# Include antlr4 runtime
include_directories(${CMAKE_SOURCE_DIR}/lib/antlr4-runtime/src/)
add_subdirectory(${CMAKE_SOURCE_DIR}/lib/antlr4-runtime)

# Create executable
add_executable(main main.cpp ${SOURCES})

# Link with antlr4_runtime
target_link_libraries(main antlr4_static)

