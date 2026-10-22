cmake_minimum_required(VERSION 4.2)
project(tp4)

set(CMAKE_CXX_STANDARD 20)

add_executable(tp4 main.cpp
        Developpeur.h
        Developpeur.cpp
        DeveloppeurJunior.cpp
        DeveloppeurJunior.h
        DeveloppeurSenior.cpp
        DeveloppeurSenior.h)
