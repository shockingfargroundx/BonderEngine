add_library(Bonder-Graphics src/Graphics.cpp)

set(GLFW_DIR "${CMAKE_SOURCE_DIR}/vendor/GLFW")
target_include_directories(Bonder-Graphics PUBLIC "${GLFW_DIR}/include" "${CMAKE_CURRENT_SOURCE_DIR}/include")

target_link_libraries(Bonder-Graphics "${GLFW_DIR}/lib/glfw3.lib" opengl32.lib winmm.lib gdi32.lib)


