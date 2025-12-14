cmake_minimum_required(VERSION 4.0)
project(progoobj)

set(CMAKE_CXX_STANDARD 20)

add_executable(progoobj main.cpp
        etudiant.cpp
        etudiant.hpp)
