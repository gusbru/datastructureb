cmake_minimum_required(VERSION 3.9)
project(Programs)

set(CMAKE_CXX_STANDARD 11)

add_executable(Programs main.cpp 
lib/Array/Array.cpp 
lib/Bubble/Bubble.cpp 
lib/Quick/Quick.cpp 
lib/Selection/Selection.cpp
lib/Insertion/Insertion.cpp)