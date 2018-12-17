cmake_minimum_required(VERSION 3.10.3)
project(baseAlgorithm)
set(CMAKE_CXX_STANDARD 11)

add_subdirectory(select_sort)
add_subdirectory(insert_sort)
<<<<<<< HEAD
add_subdirectory(binary_search)
=======
add_subdirectory(bst)
>>>>>>> 0dcb048b9ea27040d34fd13e4ed73cc5fcfa7184


INCLUDE_DIRECTORIES(
        select_sort
        insert_sort
<<<<<<< HEAD
        binary_search
=======
        bst
>>>>>>> 0dcb048b9ea27040d34fd13e4ed73cc5fcfa7184
)

#ADD_EXECUTABLE(main main.cpp)

