cmake_minimum_required(VERSION 3.16)

project(ReverseHexNibbleProject)

add_subdirectory(reverse_hex_nibble)

add_executable(main main.c)

target_link_libraries(main reverse_hex_nibble)
