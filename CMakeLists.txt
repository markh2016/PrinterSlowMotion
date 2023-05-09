
# This is always your first line of text 
cmake_minimum_required(VERSION 3.5)
#Next we give this a project name 
project(PrintWriter)


# Check for g++ compiler you can run many such checks but for ours we  simply want to check existance of 
#g++  compiler  amd message if not found 
find_program(CMAKE_CXX_COMPILER g++)
if(CMAKE_CXX_COMPILER)
    message(STATUS "Found g++: ${CMAKE_CXX_COMPILER}")
else()
    message(FATAL_ERROR "g++ not found!")
endif()


# collect the header and source file  

file(GLOB MY_SOURCES "src/*.cpp" "src/*.c" "include/*.hpp" "include/*.h")


# Set C++ standard and compiler flags
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -g")


# Set output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/dist)


# Add executable target
add_executable("${PROJECT_NAME}" ${MY_SOURCES})

