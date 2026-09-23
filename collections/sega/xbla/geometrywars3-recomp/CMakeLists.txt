# geometrywars3 - ReXGlue Recompiled Project
#
# SDK boilerplate lives in generated/rexglue.cmake.

cmake_minimum_required(VERSION 3.25)
project(geometrywars3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(generated/rexglue.cmake)

# Sources
set(GEOMETRYWARS3_SOURCES
    src/main.cpp
)

if(ANDROID)
    add_library(geometrywars3 SHARED ${GEOMETRYWARS3_SOURCES})
    set_target_properties(geometrywars3 PROPERTIES OUTPUT_NAME main)
elseif(WIN32)
    add_executable(geometrywars3 WIN32 ${GEOMETRYWARS3_SOURCES})
else()
    add_executable(geometrywars3 ${GEOMETRYWARS3_SOURCES})
endif()

rexglue_setup_target(geometrywars3)
