cmake_minimum_required(VERSION 2.6)
project(FirstRPG)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIR})

add_executable(${PROJECT_NAME} src/main.cpp src/graphics.cpp src/mouse.cpp src/keyboard.cpp)
target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARIES})
