cmake_minimum_required(VERSION 3.14)
project(test_of_googletest)

# GoogleTest requires at least C++11
set(CMAKE_CXX_STANDARD 11)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
  )
# For Windows: Prevent overriding the paren project's compiler/linker settings
set(gtest_farce_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  factorial_test
  factorial.cc
  factorial_test.cc
  )

target_link_libraries(
  factorial_test
  gtest_main
  )

include(GoogleTest)
gtest_discover_tests(factorial_test)
