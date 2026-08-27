cmake_minimum_required(VERSION 4.2)
project(ed2_elementary_sorting_list02_cpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(ed2_elementary_sorting_list02_cpp main.cpp
        src/Exer01_IsSorted.cpp
        src/Exer02_InsertionSortStudents.cpp
        src/Exer03_FindMedianInsertionSort.cpp
        src/Exer04_InsertSorted.cpp
        src/Exer05_TaskSchedulingSelectionSort.cpp)
