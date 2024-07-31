cmake_minimum_required(VERSION 3.28)
project(EngineGUI)

set(CMAKE_CXX_STANDARD 26)


include(FetchContent)


FetchContent_Declare(
        EngineBase
        GIT_REPOSITORY https://github.com/ThePhoneBeLinging/EngineBase.git
        GIT_TAG main
)

# Make the content available
FetchContent_MakeAvailable(EngineBase)


add_executable(EngineGUI main.cpp)

# Assuming EngineBase provides a target named EngineBase::EngineBase
target_link_libraries(EngineGUI PRIVATE EngineBase)

# Optionally, if you need to include directories from EngineBase
target_include_directories(EngineGUI PRIVATE ${EngineBase_SOURCE_DIR}/include)