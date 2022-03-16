cmake_minimum_required(VERSION 3.21)

project(project2)

set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE SOURCE_FILES src/*.cpp)
file(GLOB_RECURSE HEADER_FILES src/*.h  )

add_executable(project2 ${SOURCE_FILES} ${HEADER_FILES})
