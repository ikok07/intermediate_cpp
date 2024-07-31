cmake_minimum_required(VERSION 3.28)
project(intermediate_cpp)

set(CMAKE_CXX_STANDARD 23)

add_executable(intermediate_cpp main.cpp
        utils/extract_string.cpp
        utils/is_valid.cpp
        utils/movie_exercises.cpp
        utils/enum_exercise.cpp
        utils/basic_stream.cpp
        utils/file_streams.cpp
        utils/classes/Rectangle.cpp
        utils/classes/Rectangle.h
        utils/classes/Length.cpp
        utils/classes/Length.h
        utils/classes/Array.cpp
        utils/classes/Array.h
        templates/SmartPointer.cpp
        templates/SmartPointer.h
        utils/classes/inheritance/Widget.cpp
        utils/classes/inheritance/Widget.h
        utils/classes/inheritance/TextBox.cpp
        utils/classes/inheritance/TextBox.h
        shapes/Shape.cpp
        shapes/Shape.h
        shapes/Square.cpp
        shapes/Square.h
        utils/classes/inheritance/Checkbox.cpp
        utils/classes/inheritance/Checkbox.h
        utils/classes/date_time/Date.cpp
        utils/classes/date_time/Date.h
        utils/classes/date_time/Time.cpp
        utils/classes/date_time/Time.h
        utils/classes/date_time/DateTime.cpp
        utils/classes/date_time/DateTime.h
        utils/classes/exceptions/AccountLocked.cpp
        utils/classes/exceptions/AccountLocked.h
        templates/Pair.cpp
        templates/Pair.h
)
