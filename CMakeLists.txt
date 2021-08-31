cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(lab_02)
add_definitions(-lgtest)
set(CMAKE_CXX_STANDARD 14)

include(FetchContent)

FetchContent_Declare(
googletest
GIT_REPOSITORY https://github.com/google/googletest.git
GIT_TAG release-1.8.0
)

FetchContent_MakeAvailable(googletest)

add_executable(${PROJECT_NAME}  "data_time.cpp" "data_time.h"
                                "new_integer.cpp" "new_integer.h"
                                "Adam_time.cpp" "Adam_time.h"
                                "spare_matrix.cpp" "spare_matrix.h"
                                "dycont.cpp" "dycont.h"
                                "stack.cpp" "stack.h"
                                "list.cpp" "list.h"
                                "queue.cpp" "queue.h"
                                "tree.cpp" "tree.h"
                                "main_lab2.cpp"
                                )
target_link_libraries(${PROJECT_NAME} gtest)

