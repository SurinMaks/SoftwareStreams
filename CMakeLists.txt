cmake_minimum_required(VERSION 3.10.0)

set(PROJ_NAME streams)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(${PROJ_NAME} VERSION 0.1.0 LANGUAGES CXX)

add_subdirectory(src)

target_include_directories(connect
    PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(${PROJ_NAME} main.cpp)

target_link_libraries(${PROJ_NAME} PRIVATE connect)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
