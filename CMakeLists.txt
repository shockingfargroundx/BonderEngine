﻿cmake_minimum_required(VERSION 3.30)
project(bonderEngine)

set(CMAKE_CXX_STANDARD 20)
set(GLFW_DIR "${CMAKE_SOURCE_DIR}/vendor/GLFW")

file(GLOB_RECURSE MY_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

include_directories("${GLFW_DIR}/include")

# Add subdirectories for modules
add_subdirectory(Bonder-Graphics)
add_subdirectory(Bonder-Core)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME}
"${GLFW_DIR}/lib/glfw3.lib"
 opengl32.lib
 winmm.lib
 gdi32.lib
 Bonder-Graphics
 Bonder-Core)