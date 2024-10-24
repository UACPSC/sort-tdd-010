# @file CMakeLists.txt
# 
# CMake files for sort

cmake_minimum_required(VERSION 3.29)

project(sort)

# Executable testSort
add_executable(testSort testSort.cpp sort.cpp)
target_compile_features(testSort PRIVATE cxx_std_17)

# Turn on all warnings, and make warnings errors
target_compile_options(testSort PRIVATE
    $<$<CXX_COMPILER_ID:MSVC>:/W4;/WX>
    $<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-Wall;-Wextra;-pedantic;-Werror>
)

# Run test
add_custom_target(test COMMENT "Test sort function"
                       COMMAND $<TARGET_FILE:testSort>
                       DEPENDS testSort)
