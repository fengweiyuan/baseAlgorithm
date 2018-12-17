cmake_minimum_required(VERSION 3.10.3)
project(baseAlgorithm)
set(CMAKE_CXX_STANDARD 11)

add_subdirectory(select_sort)
add_subdirectory(insert_sort)
add_subdirectory(binary_search)
add_subdirectory(bst)



INCLUDE_DIRECTORIES(
        select_sort
        insert_sort
        binary_search
        bst
)

#ADD_EXECUTABLE(main main.cpp)

