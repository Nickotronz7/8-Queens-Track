cmake_minimum_required(VERSION 3.7)
project(8_Queens_Track)

set(CMAKE_CXX_STANDARD 11)

include_directories(/usr/include/allegro5)
link_directories(/usr/include/allegro5)

set(SOURCE_FILES main.cpp NQueenBacktrack.cpp NQueenBacktrack.h)
add_executable(8_Queens_Track ${SOURCE_FILES})

target_link_libraries(8_Queens_Track  liballegro.so liballegro_image.so liballegro_audio.so liballegro_acodec.so
        liballegro_primitives.so liballegro_font.so liballegro_ttf.so allegro_dialog)