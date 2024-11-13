cmake_minimum_required(VERSION 3.29)
project(megafetch)

set(CMAKE_CXX_STANDARD 20)

add_executable(megafetch main.cpp
        "src/utils/utils.cpp"
        src/modules.h
        src/modules/cpuinfo.cpp
        src/modules/ram.cpp
        src/utils.h
        src/print.h
        src/print.cpp
)
