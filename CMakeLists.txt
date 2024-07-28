cmake_minimum_required(VERSION 3.28)
project(intermediate_cpp)

set(CMAKE_CXX_STANDARD 23)

add_executable(intermediate_cpp main.cpp
        utils/extract_string.cpp
        utils/is_valid.cpp
        utils/movie_exercises.cpp
        utils/enum_exercise.cpp
        utils/basic_stream.cpp
        utils/file_streams.cpp)
