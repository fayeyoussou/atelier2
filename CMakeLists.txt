cmake_minimum_required(VERSION 4.0)
project(untitled1)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled1 exemple-string.cpp
        exemple_avec_std_vector.cpp
        std_vector.cpp
        unique_ptr.cpp
        main.cpp
)
