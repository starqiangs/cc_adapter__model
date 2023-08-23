cmake_minimum_required(VERSION 3.0)
project(Adapter)

set(CMAKE_BUILD_TYPE "Debug")

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

include_directories(${PROJECT_SOURCE_DIR}/src/include)

add_subdirectory(src) 
