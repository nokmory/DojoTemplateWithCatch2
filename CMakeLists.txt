cmake_minimum_required(VERSION 3.12)
project(ChangeMyName CXX)

add_compile_options(-Wall -Wextra -pedantic -Werror)

include(FetchContent)
FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.0.1 # or a later release
)

FetchContent_MakeAvailable(Catch2)

add_executable(sample_test src/testZero.cpp src/sampleTests.cpp)
target_include_directories(sample_test PUBLIC include)
target_link_libraries(sample_test PUBLIC Catch2::Catch2WithMain)
target_compile_features(sample_test PUBLIC cxx_std_20)


add_custom_target(run_tests
                  COMMAND sample_test
                  DEPENDS sample_test)

enable_testing()
add_test(tests sample_test)