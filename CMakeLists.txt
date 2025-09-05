cmake_minimum_required(VERSION 3.20)

project(1brc)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(1BRC_MAIN_SOURCES
    main.cpp)

add_executable(1brc ${1BRC_MAIN_SOURCES})

target_link_libraries(1brc 1brc_file_reader)

set(1BRC_FILE_READER_SOURCES
    file_reader.cpp)

add_library(1brc_file_reader ${1BRC_FILE_READER_SOURCES})

set(1BRC_BENCH_SOURCES
    bench_1brc.cpp)

add_executable(bench_1brc ${1BRC_BENCH_SOURCES})

target_link_libraries(bench_1brc 1brc_file_reader benchmark)