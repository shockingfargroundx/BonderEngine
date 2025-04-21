add_library(Bonder-Core src/input.cpp)

target_include_directories(Bonder-Core PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/headers")
add_executable(bonderTestingCore headers/input.h src/input.cpp)
target_link_libraries(bonderTestingCore Bonder-Core)
