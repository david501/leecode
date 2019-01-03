cmake_minimum_required(VERSION 3.0)

project(leecode)

enable_testing()
find_package(GTest REQUIRED)

include_directories(include)
file(GLOB_RECURSE sources      src/*.cpp include/*.hpp)
file(GLOB_RECURSE sources_test test/*.cpp)

add_executable(leecode ${sources_test})
target_link_libraries(leecode GTest::GTest GTest::Main)
add_test(NAME leecode_test COMMAND leecode)


