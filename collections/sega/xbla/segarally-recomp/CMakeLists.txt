# segarally - ReXGlue Recompiled Project
#
# SDK boilerplate lives in generated/rexglue.cmake.

cmake_minimum_required(VERSION 3.25)
project(segarally LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(generated/rexglue.cmake)

# Sources
set(SEGARALLY_SOURCES
    src/main.cpp
)

if(WIN32)
    add_executable(segarally WIN32 ${SEGARALLY_SOURCES})
else()
    add_executable(segarally ${SEGARALLY_SOURCES})
endif()

rexglue_setup_target(segarally)
