add_library(Bonder-Graphics src/Graphics.cpp)
target_include_directories(Bonder-Graphics PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include/BonderGraphics")
file(GLOB_RECURSE MY_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")



add_executable (bonderGraphicsTest ${MY_SOURCES})
target_link_libraries(bonderGraphicsTest
        glfw
        opengl32.lib
        winmm.lib
        gdi32.lib)
#TODO: Struggle making Graphics.h link glfw so we can build the test project.