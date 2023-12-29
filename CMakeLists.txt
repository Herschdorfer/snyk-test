cmake_minimum_required(VERSION 3.18)
project (factor LANGUAGES C CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# add_subdirectory ()
# add_subdirectory ()
# add_subdirectory ()
# add_subdirectory ()
# add_subdirectory ()
# add_subdirectory ()
# add_subdirectory ()
# add_subdirectory ()

add_executable(
    App 
    buffer_overflow.c
    command_injection.cpp
    cpp_catastrophes.cpp
    format_string.cpp
    information_leakage.cpp
    integer_overflow.c
    privileges.cpp
    race_condition.cpp
    update.cpp
    app.cpp)

