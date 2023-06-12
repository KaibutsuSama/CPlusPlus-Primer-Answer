cmake_minimum_required(VERSION 3.25)
project(C__Primer)

set(CMAKE_CXX_STANDARD 11)

add_executable(C__Primer main.cpp)

set(CHAPTER1
        1.2
        1.3
        1.7
        1.9
        1.10
        1.11
        1.13
        1.16
        1.18
        1.19
        1.20
        1.21
        1.22
        1.23)

set(CHAPTER2
        2.4
        2.8
        2.18
        2.34
        2.40
        2.41)

set(CHAPTER3
        3.2
        3.4
        3.5
        3.6
        3.7
        3.8
        3.10
        3.14
        3.15
        3.16
        3.17
        3.20
        3.21
        3.22
        3.23
        3.24
        3.25
        3.31
        3.32
        3.35
        3.39
        3.40
        3.41
        3.42
        3.43
        3.44
        3.45)

set(CHAPTER4
        4.1
        4.2
        4.4
        4.5
        4.6
        4.7
        4.10
        4.11
        4.13
        4.21
        4.22
        4.28
        )

foreach (Q IN LISTS CHAPTER1)
    add_executable(Question${Q} Chapter1/${Q}.cpp)
endforeach ()

foreach (Q IN LISTS CHAPTER2)
    add_executable(Question${Q} Chapter2/${Q}.cpp)
endforeach ()

foreach (Q IN LISTS CHAPTER3)
    add_executable(Question${Q} Chapter3/${Q}.cpp)
endforeach ()

foreach (Q IN LISTS CHAPTER4)
    add_executable(Question${Q} Chapter4/${Q}.cpp)
endforeach ()
