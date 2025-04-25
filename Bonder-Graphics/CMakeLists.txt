file(GLOB_RECURSE MY_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp" "${CMAKE_CURRENT_SOURCE_DIR}/include/*.h")
add_library(Bonder-Graphics ${MY_SOURCES})
target_include_directories(Bonder-Graphics PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")



add_executable (bonderGraphicsTest ${MY_SOURCES})
target_link_libraries(bonderGraphicsTest
        glfw
        opengl32.lib
        winmm.lib
        gdi32.lib)
#TODO: Struggle making Graphics.h link glfw so we can build the test project.
#TODO: Struggle making Graphics.cpp link with Graphics.h