# ridgeracerunbounded - ReXGlue Recompiled Project
#
# SDK boilerplate lives in generated/rexglue.cmake.

cmake_minimum_required(VERSION 3.25)
project(ridgeracerunbounded LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(generated/rexglue.cmake)

# Sources
set(RIDGERACERUNBOUNDED_SOURCES
    src/main.cpp
    src/hle_draw_spy.cpp
)

if(ANDROID)
    # SDLActivity loads "libmain.so" from the APK, so the title is a shared
    # library on Android rather than an executable. The output name is what
    # the Java side dlopens; the CMake target keeps the project's own name.
    add_library(ridgeracerunbounded SHARED ${RIDGERACERUNBOUNDED_SOURCES})
    set_target_properties(ridgeracerunbounded PROPERTIES OUTPUT_NAME main)
elseif(WIN32)
    add_executable(ridgeracerunbounded WIN32 ${RIDGERACERUNBOUNDED_SOURCES})
else()
    add_executable(ridgeracerunbounded ${RIDGERACERUNBOUNDED_SOURCES})
endif()

rexglue_setup_target(ridgeracerunbounded)
