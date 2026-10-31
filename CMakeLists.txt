
cmake_minimum_required(VERSION 3.20)

project(Plinko LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(SDL3 REQUIRED CONFIG)

#add_executable(Plinko main.cpp)

file(GLOB SOURCES CONFIGURE_DEPENDS "src/*.cpp")
add_executable(Plinko ${SOURCES})

target_include_directories(Plinko PRIVATE include)

target_link_libraries(Plinko PRIVATE SDL3::SDL3)
