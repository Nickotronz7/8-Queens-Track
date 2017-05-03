cmake_minimum_required(VERSION 3.7)
project(8_Queens_Track)

set(CMAKE_CXX_STANDARD 11)

include_directories(/usr/include/allegro5)
link_directories(/usr/include/allegro5)

set(SOURCE_FILES main.cpp)
add_executable(8_Queens_Track ${SOURCE_FILES})

target_link_libraries(8_Queens_Track liballegro.so)