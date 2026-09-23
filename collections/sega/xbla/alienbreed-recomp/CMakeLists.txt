# alienbreed - ReXGlue Recompiled Project
#
# SDK boilerplate lives in generated/rexglue.cmake.

cmake_minimum_required(VERSION 3.25)
project(alienbreed LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(generated/rexglue.cmake)

# Sources
set(ALIENBREED_SOURCES
    src/main.cpp
)

if(WIN32)
    add_executable(alienbreed WIN32 ${ALIENBREED_SOURCES})
else()
    add_executable(alienbreed ${ALIENBREED_SOURCES})
endif()

rexglue_setup_target(alienbreed)
