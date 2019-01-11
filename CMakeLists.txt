cmake_minimum_required(VERSION 3.0)

project(leecode)

enable_testing()

#####################################################################
# Download and unpack googletest at configure time
configure_file(CMakeLists.txt.in googletest-download/CMakeLists.txt)
execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" .
  RESULT_VARIABLE result
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download )
if(result)
  message(FATAL_ERROR "CMake step for googletest failed: ${result}")
endif()
execute_process(COMMAND ${CMAKE_COMMAND} --build .
  RESULT_VARIABLE result
  WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/googletest-download )
if(result)
  message(FATAL_ERROR "Build step for googletest failed: ${result}")
endif()

# Prevent overriding the parent project's compiler/linker
# settings on Windows
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# Add googletest directly to our build. This defines
# the gtest and gtest_main targets.
add_subdirectory(${CMAKE_CURRENT_BINARY_DIR}/googletest-src
                 ${CMAKE_CURRENT_BINARY_DIR}/googletest-build
                 EXCLUDE_FROM_ALL)

# The gtest/gtest_main targets carry header search path
# dependencies automatically when using CMake 2.8.11 or
# later. Otherwise we have to add them here ourselves.
if (CMAKE_VERSION VERSION_LESS 2.8.11)
  include_directories("${gtest_SOURCE_DIR}/include")
endif()
include_directories("${gmock_SOURCE_DIR}/include")
#####################################################################

include_directories(include)
set(sources_test 
  # test/1_test.cpp
  # test/7_test.cpp
  # test/9_test.cpp
  # test/13_test.cpp
  # test/14_test.cpp
  # test/20_test.cpp
  # test/21_test.cpp
  # test/26_test.cpp
  # test/27_test.cpp
  # test/28_test.cpp
  # test/35_test.cpp
  # test/38_test.cpp
  # test/53_test.cpp
  # test/58_test.cpp
  # test/66_test.cpp
  # test/67_test.cpp
  # test/69_test.cpp
  # test/70_test.cpp
  # test/83_test.cpp
  # test/88_test.cpp
  # test/121_test.cpp
  # test/122_test.cpp
  # test/125_test.cpp
  # test/136_test.cpp
  # test/167_test.cpp 
  # test/168_test.cpp
  # test/169_test.cpp
  # test/171_test.cpp
  # test/172_test.cpp
  # test/189_test.cpp
  # test/190_test.cpp
  # test/191_test.cpp
  # test/198_test.cpp
  # test/202_test.cpp
  # test/204_test.cpp
  # test/205_test.cpp
  # test/217_test.cpp
  # test/219_test.cpp
  # test/225_test.cpp
  # test/232_test.cpp
  test/234_test.cpp
  
)

add_executable(leecode ${sources_test})
target_link_libraries(leecode gtest_main)
add_test(NAME leecode_test COMMAND leecode)
