cmake_minimum_required(VERSION 3.21)
project(project2)

set(CMAKE_CXX_STANDARD 20)

add_executable(project2 main.cpp scene.cpp scene.h gameObject.h renderer.cpp renderer.h player.cpp player.h grass.h)
