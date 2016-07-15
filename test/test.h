/*
* \brief  Lightweight unit testing API.
* \author Michal H.
* \email  MHlous@gmail.com
*
**/
#ifndef TEST_H
#define TEST_H
#include <stdio.h>
#include "common.h"

/*
 * \brief   Registers a test case handle.
 * \details Declares a testing routine.
 *
 **/
#define TEST_CASE(name) void TEST_CASE_PREFIX()##name##()
/*
 * \brief   Runs a test case, should be called in the run_tests routine.
 * \warning The test case must be first defined with TEST_CASE.
 *
 **/
#define TEST_CASE_RUN(name) TEST_CASE_PREFIX()##name##()

#define CASE_INFO() TEST_LOG("\n-- CASE %s --\n", __FUNCTION__)
#define SECTION(id) TEST_LOG(": SECTION %s\n", id);
#define REQUIRE(expr) if(expr) { TEST_PASS(":: TEST PASSED ::\n"); } else { TEST_FAIL("xx TEST FAILED xx\n\t#%d on line %d\n\tin file %s\n", test_count + 1, __LINE__, __FILE__); } test_count++

// \brief Target stream for logging.
#define TEST_OUT_TARGET stderr
// \brief Logging.
#define TEST_LOG(format, ...) fprintf(TEST_OUT_TARGET, format, __VA_ARGS__)

// \brief Inform system the test passed.
#define TEST_PASS(format, ...) TEST_LOG(format, __VA_ARGS__)
// \brief Inform system the test failed.
#define TEST_FAIL(format, ...) test_count_failed++; TEST_LOG(format, __VA_ARGS__)

// selects main implementation file
#define TEST_CONFIG_MAIN int main(int argc, char** argv) { for(int i = 0; i < argc; ++i) TEST_LOG("%s \n", argv[i]); TEST_RUN_IT(); final_statistics(); return test_count_failed; }
// Tests the main runs
#define TEST_RUN_IT() run_tests()
// function name prefix to prevent clashes
#define TEST_CASE_PREFIX() test_

/*
 * \brief   Used for global statistics.
 * \warning Not thread-safe.
 *
 **/
// \brief Total number of tests.
unsigned test_count;
// \brief Number of failed tests.
unsigned test_count_failed;

void final_statistics();
// \brief Test register.
void run_tests();

#endif // TEST_H