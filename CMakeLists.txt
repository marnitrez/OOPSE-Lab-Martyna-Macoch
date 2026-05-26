cmake_minimum_required(VERSION 3.14)
project(AdcChannelProject)

# GoogleTest requires at least C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable testing framework in CMake
enable_testing()

# Find the GoogleTest package we installed on your Mac via Homebrew
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Define the executable using your newly renamed ChannelTest.cpp
add_executable(
    ChannelTest
    ChannelTest.cpp
)

# Link your test executable to the GoogleTest libraries
target_link_libraries(
    ChannelTest
    GTest::gtest
    GTest::gtest_main
)

# Automatically discover tests written inside ChannelTest.cpp
include(GoogleTest)
gtest_discover_tests(ChannelTest)