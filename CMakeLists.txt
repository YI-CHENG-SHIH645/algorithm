cmake_minimum_required(VERSION 3.14...3.25)
project(
  Algorithm
  VERSION 0.1
  DESCRIPTION "A repo for practicing algorithm"
  LANGUAGES CXX
)

find_package(Doxygen)
find_package(Boost REQUIRED)
find_package(pybind11 REQUIRED CONFIG)
include_directories(${pybind11_INCLUDE_DIRS})

enable_testing()

if(Doxygen_FOUND)
  add_subdirectory(docs)
else()
  message(STATUS "Doxygen not found, not building docs")
endif()

include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
FetchContent_MakeAvailable(googletest)

add_subdirectory(${Algorithm_SOURCE_DIR}/src/leetcode)
add_subdirectory(${Algorithm_SOURCE_DIR}/src/uva)
add_subdirectory(${Algorithm_SOURCE_DIR}/src/tests)
