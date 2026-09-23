# sonic4ep1 - ReXGlue Recompiled Project
#
# SDK boilerplate lives in generated/rexglue.cmake.

cmake_minimum_required(VERSION 3.25)
project(sonic4ep1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(generated/rexglue.cmake)

# Sources
set(SONIC4EP1_SOURCES
    src/main.cpp
)

if(WIN32)
    add_executable(sonic4ep1 WIN32 ${SONIC4EP1_SOURCES})
else()
    add_executable(sonic4ep1 ${SONIC4EP1_SOURCES})
endif()

rexglue_setup_target(sonic4ep1)
