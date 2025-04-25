file(GLOB_RECURSE MY_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
add_library(Bonder-Core ${MY_SOURCES})

target_include_directories(Bonder-Core PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/headers")
add_executable(bonderTestingCore ${MY_SOURCES})
target_link_libraries(bonderTestingCore Bonder-Core)
