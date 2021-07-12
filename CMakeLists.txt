cmake_minimum_required(VERSION 3.13)

project(cmake-issue VERSION 1.0 DESCRIPTION "Static target issue" LANGUAGES C)

add_subdirectory(lib ./bin)
link_directories(./lib/ ./bin)

add_executable(main-dynamic main.c)
add_dependencies(main-dynamic testlib)
target_link_libraries(main-dynamic libtestlib.a uuid -static)

link_libraries("-static")

add_executable(main-static main.c)
target_link_libraries(main-static PUBLIC "-static" libtestlib.a uuid)
add_dependencies(main-static testlib)
#target_link_libraries(main-static libtestlib.a uuid -static)
