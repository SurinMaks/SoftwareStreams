cmake_minimum_required(VERSION 3.10.0)
set(PROJ_NAME streams)
project(${PROJ_NAME} VERSION 0.1.0 LANGUAGES C CXX)

add_executable(${PROJ_NAME} main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
