cmake_minimum_required(VERSION 3.20)

project(muiltiple_source_files)

set(CMAKE_C_STANDARD 99)

add_executable(main main.c print.c)
