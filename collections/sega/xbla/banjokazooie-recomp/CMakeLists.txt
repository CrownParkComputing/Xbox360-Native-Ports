# banjokazooie - ReXGlue Recompiled Project
#
# SDK boilerplate lives in generated/rexglue.cmake.

cmake_minimum_required(VERSION 3.25)
project(banjokazooie LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(generated/rexglue.cmake)

# Sources
set(BANJOKAZOOIE_SOURCES
    src/main.cpp
)

if(ANDROID)
    # SDLActivity loads "libmain.so" from the APK, so the title is a shared
    # library on Android rather than an executable. The output name is what
    # the Java side dlopens; the CMake target keeps the project's own name.
    add_library(banjokazooie SHARED ${BANJOKAZOOIE_SOURCES})
    set_target_properties(banjokazooie PROPERTIES OUTPUT_NAME main)
elseif(WIN32)
    add_executable(banjokazooie WIN32 ${BANJOKAZOOIE_SOURCES})
else()
    add_executable(banjokazooie ${BANJOKAZOOIE_SOURCES})
endif()

rexglue_setup_target(banjokazooie)
