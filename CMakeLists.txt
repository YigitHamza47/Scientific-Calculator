cmake_minimum_required(VERSION 3.27)
project(deneyselHesapMakinesi)

set(CMAKE_CXX_STANDARD 17)

add_executable(deneyselHesapMakinesi main.cpp
        "Header Files/BasitHesapMakinesi.h"
        "Source Files/BasitHesapMakinesi.cpp"
        "Source Files/SigmaHesapMakinesi.cpp"
        "Header Files/SigmaHesapMakinesi.h"
        "Source Files/Faktöriyel.cpp"
        "Header Files/Faktöriyel.h"
        "Source Files/pisagor.cpp"
        "Header Files/pisagor.h"
        "Source Files/kokalma.cpp"
        "Header Files/kokalma.h"
        "Source Files/ungenalan.cpp"
        "Header Files/ungenalan.h"
        "Source Files/logoritma.cpp"
        "Header Files/logoritma.h"
        "Source Files/trigonemetri.cpp"
        "Header Files/trigonemetri.h"
        "Source Files/derecedonusturma.cpp"
        "Header Files/derecedonusturma.h"
)
