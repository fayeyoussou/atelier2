cmake_minimum_required(VERSION 4.0)
project(test)

set(CMAKE_CXX_STANDARD 14)

add_executable(test main.cpp
        les_commentaires.cpp
        operateurs.cpp
        cours3.cpp
        cours_4.cpp
        cours_4.hpp
        noeud_simple.cpp
        noeud_simple.hpp
        noeud_double.cpp
        noeud_double.hpp
        chaine_list.cpp
        chaine_list.h
)
