cmake_minimum_required(VERSION 3.29)
project(Prosit1)

set(CMAKE_CXX_STANDARD 20)

add_executable(Prosit1 final/main.cpp
        final/Point2.cpp
        final/Segment2.cpp
        final/Vector2.cpp)
