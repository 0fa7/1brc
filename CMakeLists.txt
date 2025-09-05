cmake_minimum_required(VERSION 3.20)

project(1brc)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(1BRC_MAIN_SOURCES
    Main.cpp)

add_executable(1brc ${1BRC_MAIN_SOURCES})