# soulcalibur2 - ReXGlue Recompiled Project
#
# SDK boilerplate lives in generated/rexglue.cmake.

cmake_minimum_required(VERSION 3.25)
project(soulcalibur2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(generated/rexglue.cmake)

# Sources
set(SOULCALIBUR2_SOURCES
    src/main.cpp
)

if(ANDROID)
    add_library(soulcalibur2 SHARED ${SOULCALIBUR2_SOURCES})
    set_target_properties(soulcalibur2 PROPERTIES OUTPUT_NAME main)
elseif(WIN32)
    add_executable(soulcalibur2 WIN32 ${SOULCALIBUR2_SOURCES})
else()
    add_executable(soulcalibur2 ${SOULCALIBUR2_SOURCES})
endif()

rexglue_setup_target(soulcalibur2)
