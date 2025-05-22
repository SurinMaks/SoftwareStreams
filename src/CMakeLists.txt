cmake_minimum_required(VERSION 3.20)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(PROJ_NAME lib_software_streams)

project(${PROJ_NAME} VERSION 0.1.0 LANGUAGES CXX)

find_package(libssh REQUIRED)

add_library(connect SHARED Connect.cpp)

target_include_directories(connect
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
)