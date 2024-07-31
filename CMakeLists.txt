cmake_minimum_required(VERSION 3.28)
project(EngineGUI)

set(CMAKE_CXX_STANDARD 26)

add_executable(EngineGUI main.cpp)

include_directories(Dependencies/EngineBase/include)

add_subdirectory(Dependencies/EngineBase)

target_link_libraries(EngineGUI PRIVATE EngineBase)