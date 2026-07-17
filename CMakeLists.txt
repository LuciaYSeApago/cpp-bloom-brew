cmake_minimum_required(VERSION 3.20)

project(BloomBrew)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME}
    src/main.cpp
    src/coffee.cpp
    src/ui.cpp
    src/coffee-manager.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE include)