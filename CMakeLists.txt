cmake_minimum_required(VERSION 3.26)
project(klimentevLabs C)

set(CMAKE_C_STANDARD 23)

add_executable(klimentevLabs main.c
        lab01/print01.c
        lab01/print01.h
        tools.c
        tools.h
        lab02/print02.c
        lab02/print02.h)
