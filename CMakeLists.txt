cmake_minimum_required(VERSION 2.8)
project(TestingCPP)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${${PROJECT_NAME}_SOURCE_DIR}/cmake/modules/")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -O1 -Wextra -pedantic -std=c++1y")

aux_source_directory(. SRC_LIST)

#add_subdirectory(templates)
#add_subdirectory(smartpointer)
#add_subdirectory(moveSemantics)
#add_subdirectory(testing)
#add_subdirectory(callbacks)
#add_subdirectory(spheres)
#add_subdirectory(NLERP)
add_subdirectory(Quaternions)
