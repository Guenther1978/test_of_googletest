# Cmake example

This is the instruction how to use Googletest with [CMake] (https://google.github.io/googletest/quickstart-cmake.html)

The file *hello_test.cc* should be tested, so the file *CMakeLists.txt* has to be creadet.
After that, enter the following commands:

    cmake -S . -B build
    cmake --build build
    cd build && ctest