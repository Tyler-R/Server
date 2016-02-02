

enable_testing()

add_executable(runAllTests
        sampleTest.cpp
        )

target_link_libraries(runAllTests gtest gtest_main)
target_link_libraries(runAllTests serverLibrary)

add_test(NAME AllTests COMMAND runAllTests)