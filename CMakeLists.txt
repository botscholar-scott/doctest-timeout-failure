cmake_minimum_required(VERSION 3.20...3.21)
project(doctest_timeout_failure
        VERSION 0.0.1
        LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set(CMAKE_CXX_VISIBILITY_PRESET hidden)
set(CMAKE_VISIBILITY_INLINES_HIDDEN YES)

include(FetchContent)
FetchContent_Declare(doctest
    GIT_REPOSITORY https://github.com/onqtam/doctest
    GIT_TAG f0ab4e793fa863d4a5929ff263ddd3bebec8767e # 2.4.5
    GIT_SHALLOW ON
)
FetchContent_MakeAvailable(doctest)


add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} doctest)