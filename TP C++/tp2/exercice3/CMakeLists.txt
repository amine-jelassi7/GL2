cmake_minimum_required(VERSION 4.2)
project(exercice3)

set(CMAKE_CXX_STANDARD 20)

add_executable(exercice3 main.cpp
        Personnel.cpp
        Personnel.h
        Patron.cpp
        Patron.h)
