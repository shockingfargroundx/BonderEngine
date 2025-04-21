add_library(Bonder-Graphics src/Graphics.cpp)
# TODO: change SRC/graphics to file_recourse,   
set(GLFW_DIR "${CMAKE_SOURCE_DIR}/vendor/GLFW")
target_include_directories(Bonder-Graphics PUBLIC "${GLFW_DIR}/include" "${CMAKE_CURRENT_SOURCE_DIR}/include")



# add_executable (bonderGraphicsTest SRC/testGraphics.cpp - link to mysources) 
#TODO: fix this code above to make it actively do something. Also, add Bonder-GraphicsTest in link libs FIRST

target_link_libraries(Bonder-Graphics "${GLFW_DIR}/lib/glfw3.lib" opengl32.lib winmm.lib gdi32.lib)

