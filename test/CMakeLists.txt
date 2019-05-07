#cmake for test 
#include directories for googletest
include_directories(${PROJECT_SOURCE_DIR}/googletest/googletest/include)

#adding the testcase
add_executable(
    unit_tests
    test.cpp )

target_link_libraries(
    unit_tests gtest 
    gtest_main)
	
add_test(unit_tests COMMAND unit_tests )


INSTALL(TARGETS unit_tests DESTINATION ${PROJECT_SOURCE_DIR}/install/bin_test)