add_library(Bonder-Core src/input.cpp)


target_include_directories(Bonder-Core PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/headers")

target_link_libraries(Bonder-Core)
