cmake_minimum_required(VERSION 3.8.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(TestProject)
add_executable(TestProject
Source/Engine/main.cpp
Source/Engine/Window.cpp
Source/Engine/Window.hpp
)
set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT TestProject)

target_include_directories(TestProject
PUBLIC Source/External/GLFW/include
PUBLIC Source
)

target_link_libraries(TestProject
PUBLIC glfw
PUBLIC opengl32
)

set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
add_subdirectory(Source/External/GLFW)