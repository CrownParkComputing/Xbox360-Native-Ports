# geometrywars2 - ReXGlue Recompiled Project
#
# SDK boilerplate lives in generated/rexglue.cmake.

cmake_minimum_required(VERSION 3.25)
project(geometrywars2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(generated/rexglue.cmake)

# Sources
set(GEOMETRYWARS2_SOURCES
    src/main.cpp
)

if(ANDROID)
    add_library(geometrywars2 SHARED ${GEOMETRYWARS2_SOURCES})
    set_target_properties(geometrywars2 PROPERTIES OUTPUT_NAME main)
elseif(WIN32)
    add_executable(geometrywars2 WIN32 ${GEOMETRYWARS2_SOURCES})
else()
    add_executable(geometrywars2 ${GEOMETRYWARS2_SOURCES})
endif()

rexglue_setup_target(geometrywars2)
