# soulcalibur4 - ReXGlue Recompiled Project
#
# SDK boilerplate lives in generated/rexglue.cmake.

cmake_minimum_required(VERSION 3.25)
project(soulcalibur4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(generated/rexglue.cmake)

# Sources
set(SOULCALIBUR4_SOURCES
    src/main.cpp
)

if(WIN32)
    add_executable(soulcalibur4 WIN32 ${SOULCALIBUR4_SOURCES})
else()
    add_executable(soulcalibur4 ${SOULCALIBUR4_SOURCES})
endif()

rexglue_setup_target(soulcalibur4)
