cmake_minimum_required(VERSION 3.13)

project(testlibrary VERSION 1.0 DESCRIPTION "Static target issue - Library" LANGUAGES C)

add_library(testlib lib.c)
target_link_libraries(testlib uuid)
