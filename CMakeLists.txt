cmake_minimum_required(VERSION 2.6)
project(graphicstutorialexercises)

add_executable(graphicstutorialexercises main.cpp)

install(TARGETS graphicstutorialexercises RUNTIME DESTINATION bin)
