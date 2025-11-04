cmake_minimum_required(VERSION 3.30)
project("TestingGraphics")

file(GLOB_RECURSE MY_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

#file(GLOB_RECURSE MY_HEADERS CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/headers/*.h")

add_library(Bonder-Graphics ${MY_SOURCES})
target_include_directories(Bonder-Graphics PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/headers/" PRIVATE vendor/glfw-3.3.2/include)

#add_subdirectory("${CMAKE_SOURCE_DIR}/vendor/glfw-3.3.2")

add_executable (${PROJECT_NAME} ${MY_SOURCES})
include(../ModuleCommon.cmake)
target_link_libraries(${PROJECT_NAME}
        glfw
        opengl32.lib
        winmm.lib
        gdi32.lib)