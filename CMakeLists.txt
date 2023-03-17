cmake_minimum_required(VERSION 3.14...3.25)
project(
  Algorithm
  VERSION 0.1
  DESCRIPTION "A repo for practicing algorithm"
  LANGUAGES CXX
)

enable_testing()  # You have to add this
find_package(Doxygen)
find_package(Boost REQUIRED)
find_package(GTest REQUIRED)
find_package(pybind11 REQUIRED CONFIG)
include_directories(${pybind11_INCLUDE_DIRS})

add_library(compiler_flags INTERFACE)
target_compile_features(compiler_flags INTERFACE cxx_std_17)

add_subdirectory(docs)
add_subdirectory(${Algorithm_SOURCE_DIR}/src/leetcode)
add_subdirectory(${Algorithm_SOURCE_DIR}/src/uva)
add_subdirectory(${Algorithm_SOURCE_DIR}/src/tests)
