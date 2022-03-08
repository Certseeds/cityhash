cmake_minimum_required(VERSION 3.16.6)

set(PROJECT_VERSION_MAJOR 1)
set(PROJECT_VERSION_MINOR 1)
set(PROJECT_VERSION_PATCH 1)
project(cityhashxx
        VERSION "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}"
        DESCRIPTION "hash functions for strings"
        HOMEPAGE_URL "https://github.com/certseeds/cityhash"
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_VERBOSE_MAKEFILE ON)

string(TIMESTAMP time_str "%Y/%m/%d  %H:%M:%S")
MESSAGE(STATUS "Compiler In \n ${time_str}")

add_library(sse4_2 INTERFACE IMPORTED)
if (MSVC)
    target_compile_options(sse4_2 INTERFACE /arch:SSE4.2)
else ()
    target_compile_options(sse4_2 INTERFACE -msse4.2)
endif ()

enable_testing()
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src)
