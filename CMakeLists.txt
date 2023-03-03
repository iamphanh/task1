cmake_minimum_required(VERSION 2.8.9)
project(task1)
set(CMAKE_BUILD_TYPE Release)

include_directories(header)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
file(GLOB SOURCES "src/*.cc")

add_executable(lession1 ${SOURCES})

target_link_libraries(lession1 PRIVATE stdc++)

