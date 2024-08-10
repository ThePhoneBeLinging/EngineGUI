cmake_minimum_required(VERSION 3.28)
project(EngineGUI)

set(CMAKE_CXX_STANDARD 26)


include(FetchContent)


FetchContent_Declare(
        EngineBase
        GIT_REPOSITORY https://github.com/ThePhoneBeLinging/EngineBase.git
        GIT_TAG main
)
FetchContent_Declare(
        Utility
        GIT_REPOSITORY https://github.com/ThePhoneBeLinging/Utility.git
        GIT_TAG main
)

# Make the content available
FetchContent_MakeAvailable(EngineBase)
FetchContent_MakeAvailable(Utility)

add_executable(EngineGUI main.cpp
        EngineGUI.cpp
        EngineGUI.h)

target_link_libraries(EngineGUI PRIVATE
        EngineBase
        Utility
)

# Optionally, if you need to include directories from EngineBase
target_include_directories(EngineGUI PRIVATE
        ${EngineBase_SOURCE_DIR}/include
        ${Utility_SOURCE_DIR}/include

)
