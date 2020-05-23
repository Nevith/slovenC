cmake_minimum_required(VERSION 3.15)
project(slovenC)

set(CMAKE_CXX_STANDARD 17)

# Include source files
include_directories(${CMAKE_SOURCE_DIR}/src)
file(GLOB_RECURSE sourcesc CONFIGURE_DEPENDS ${CMAKE_SOURCE_DIR}/src/*.cpp)
file(GLOB_RECURSE sourcesh CONFIGURE_DEPENDS ${CMAKE_SOURCE_DIR}/src/*.h)

# Include antlr4 runtime
include_directories(${CMAKE_SOURCE_DIR}/lib/antlr4-runtime/src/)
add_subdirectory(${CMAKE_SOURCE_DIR}/lib/antlr4-runtime)

# Create executable
add_executable(serializer serializer.cpp ${sourcesc} ${sourcesh})
add_executable(interpreter interpreter.cpp ${sourcesc} ${sourcesh})
add_executable(IDE_backend IDE_backend.cpp ${sourcesc} ${sourcesh})

# Link with antlr4_runtime
add_definitions("-DANTLR4CPP_STATIC")
target_link_libraries(serializer antlr4_static)
target_link_libraries(interpreter antlr4_static)
target_link_libraries(IDE_backend antlr4_static)

