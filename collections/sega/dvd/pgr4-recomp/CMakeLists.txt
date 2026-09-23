# projectgotham4 - ReXGlue Recompiled Project
#
# SDK boilerplate lives in generated/rexglue.cmake.

cmake_minimum_required(VERSION 3.25)
project(projectgotham4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(generated/rexglue.cmake)

# Sources
set(PROJECTGOTHAM4_SOURCES
    src/main.cpp
)

if(WIN32)
    add_executable(projectgotham4 WIN32 ${PROJECTGOTHAM4_SOURCES})
else()
    add_executable(projectgotham4 ${PROJECTGOTHAM4_SOURCES})
endif()

rexglue_setup_target(projectgotham4)

# Local-machine build: the translated PPC/VMX code is the in-race CPU floor (guest
# Main thread pegged at ~1 core). The SDK ships the recomp objects at -msse4.1 for
# portability; this box has AVX2+FMA+BMI2, and native codegen (VEX 3-operand, FMA
# fusion, exact-CPU tuning) cuts vector-emulation cost. Overrides the -msse4.1 the
# SDK put on the target. Correctness-preserving (better codegen, not new semantics).
# Not for a shipped/portable binary - this is Jon's own machine.
if(NOT WIN32 AND TARGET projectgotham4_recomp)
    target_compile_options(projectgotham4_recomp PRIVATE -march=native)
endif()
