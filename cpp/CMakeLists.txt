cmake_minimum_required(VERSION 3.13)
project(gilded-rose-refactoring-kata-cpp)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

# uncomment this line to enable coverage measurements using gcov
# set(CMAKE_CXX_FLAGS "--coverage")

set(CMAKE_CXX_STANDARD 20) # Request C++20
set(CMAKE_CXX_STANDARD_REQUIRED ON) # Enforce it strictly
set(CMAKE_CXX_EXTENSIONS OFF) # Disable compiler-specific extensions

option(BUILD_APPROVAL_TESTS_WITH_GTEST "Use GoogleTest for approval testing" ON)

option(BUILD_UNIT_TESTS_WITH_GTEST "Use GoogleTest for unit testing" ON)

enable_testing()
add_subdirectory(src)
add_subdirectory(test)
