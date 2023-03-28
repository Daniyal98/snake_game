cmake_minimum_required(VERSION 3.12)
project(snake_game)

include_directories("include")
file(GLOB SOURCES "src/*.cpp")
add_executable(snake_game ${SOURCES})