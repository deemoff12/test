cmake_minimum_required(VERSION 3.13)
project(26_03)

set(CMAKE_CXX_STANDARD 14)

add_executable(26_03 main.cpp)
set(SFML_DIR "D:/Pobrane/SFML-2.5.1/lib/cmake/SFML")
find_package(SFML 2.5 COMPONENTS graphics window system)
target_link_libraries(26_03 sfml-graphics sfml-window sfml-system)