# geometrywars - ReXGlue Recompiled Project
#
# SDK boilerplate lives in generated/rexglue.cmake.

cmake_minimum_required(VERSION 3.25)
project(geometrywars LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(generated/rexglue.cmake)

# Sources
set(GEOMETRYWARS_SOURCES
    src/main.cpp
    src/native_kernel.cpp
)

if(ANDROID)
    add_library(geometrywars SHARED ${GEOMETRYWARS_SOURCES})
    set_target_properties(geometrywars PROPERTIES OUTPUT_NAME main)
elseif(WIN32)
    add_executable(geometrywars WIN32 ${GEOMETRYWARS_SOURCES})
else()
    add_executable(geometrywars ${GEOMETRYWARS_SOURCES})
endif()

rexglue_setup_target(geometrywars)
