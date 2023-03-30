cmake_minimum_required(VERSION 3.12)
project(snake_game)

set (CMAKE_CXX_STANDARD 17)

include_directories("include")
file(GLOB SOURCES "src/*.cpp")
add_executable(snake_game ${SOURCES})

find_package( Curses REQUIRED )
include_directories( ${CURSES_INCLUDE_DIRS} )
target_link_libraries( snake_game ${CURSES_LIBRARIES} )