cmake_minimum_required(VERSION 3.30)
project(bonderEngine)

set(CMAKE_CXX_STANDARD 20)

file(GLOB_RECURSE MY_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

# Add subdirectories for modules
add_subdirectory(Bonder-Graphics)
add_subdirectory(Bonder-Core)

# Add subdir for graphics.
add_subdirectory("${CMAKE_SOURCE_DIR}/vendor/glfw-3.3.2")
target_include_directories(Bonder-Graphics PRIVATE vendor/glfw-3.3.2/include)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME}
 glfw
 opengl32.lib
 winmm.lib
 gdi32.lib
 Bonder-Graphics
 Bonder-Core)