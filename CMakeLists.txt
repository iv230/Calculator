cmake_minimum_required(VERSION 3.12)
project(Calculator C)

set(CMAKE_C_STANDARD 99)

add_library(Calculator library.c library.h)