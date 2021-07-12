cmake_minimum_required(VERSION 3.13)

project(cmake-issue VERSION 1.0 DESCRIPTION "Static target issue" LANGUAGES C)

add_subdirectory(lib)


add_executable(main-dynamic main.c)
target_link_libraries(main-dynamic uuid libcmake.a)
add_dependencies(main-dynamic libcmake)

add_executable(main-static main.c)
target_link_libraries(main-static uuid libcmake.a -static)
add_dependencies(main-static libcmake)
