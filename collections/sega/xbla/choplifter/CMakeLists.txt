# choplifter - ReXGlue Recompiled Project
#
# SDK boilerplate lives in generated/rexglue.cmake.

cmake_minimum_required(VERSION 3.25)
project(choplifter LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(generated/rexglue.cmake)

# Sources
set(CHOPLIFTER_SOURCES
    src/main.cpp
)

if(WIN32)
    add_executable(choplifter WIN32 ${CHOPLIFTER_SOURCES})
else()
    add_executable(choplifter ${CHOPLIFTER_SOURCES})
endif()

rexglue_setup_target(choplifter GPU_PLUGINS xenos)
