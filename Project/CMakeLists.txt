cmake_minimum_required(VERSION 3.20)

project(FSoft2026)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(headers)

file(GLOB_RECURSE SOURCES
        sources/*.cpp
)

add_executable(
        FSoft2026
        main.cpp
        ${SOURCES}
        mock/Mockdata.cpp
)