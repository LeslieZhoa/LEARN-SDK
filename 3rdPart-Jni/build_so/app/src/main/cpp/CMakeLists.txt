cmake_minimum_required(VERSION 3.4.1)

set(CMAKE_VERBOSE_MAKEFILE on)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
add_library(add_num SHARED src/add_num.cpp)

set(distribution_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../../../../libBuild)
set_target_properties(add_num
        PROPERTIES
        LIBRARY_OUTPUT_DIRECTORY
        "${distribution_DIR}/lib/${ANDROID_ABI}")
add_custom_command(TARGET add_num POST_BUILD
        COMMAND "${CMAKE_COMMAND}" -E
        copy "${CMAKE_CURRENT_SOURCE_DIR}/include/add_num.h"
        "${distribution_DIR}/include/add_num.h"
        COMMENT "Copying two to output directory")
