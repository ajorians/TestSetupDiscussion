cmake_minimum_required(VERSION 3.10)

project(TestSetupDiscussion)

set(CMAKE_CXX_STANDARD 20)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
add_subdirectory(googletest)
add_subdirectory(ExampleLibrary)
add_subdirectory(TestExampleLibrary)