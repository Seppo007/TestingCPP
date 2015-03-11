cmake_minimum_required(VERSION 2.8)
project(templates)

aux_source_directory(. SRC_LIST)

file(GLOB MY_SOURCES "*.hpp" "*.cpp")

add_executable(templates ${SRC_LIST} ${MY_SOURCES})
