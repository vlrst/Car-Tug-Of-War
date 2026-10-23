
cmake_minimum_required(VERSION 3.20)

project(CarTugOfWar LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(SDL3 REQUIRED CONFIG)

#add_executable(CarTugOfWar main.cpp)

file(GLOB SOURCES CONFIGURE_DEPENDS "src/*.cpp")
add_executable(CarTugOfWar ${SOURCES})

target_include_directories(CarTugOfWar PRIVATE include)

target_link_libraries(CarTugOfWar PRIVATE SDL3::SDL3)
