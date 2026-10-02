cmake_minimum_required(VERSION 4.2)
project(tp)

set(CMAKE_CXX_STANDARD 20)

add_executable(tp main.cpp
        Ellipse.cpp
        Ellipse.h
        Cercle.cpp
        Cercle.h)
