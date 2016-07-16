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
#define SECTION(id) TEST_LOG(": SECTION %s\n", id)
// \brief Standard message REQUIRE parameters
#define FLF __FILE__, __LINE__, __FUNCTION__
#define REQUIRE(expr, err_format, ...) if (!(expr)) { TEST_LOG(err_format, __VA_ARGS__); test_count_failed++; } test_count++
#define REQUIRE_SORTED(arr, size, object_size) REQUIRE(sorted(arr, size, object_size), "%s(%d): error in %s: \"array sorted\" failed", FLF))
#define REQUIRE_EQ(first, second) REQUIRE((first) == (second), "%s(%d): error in %s: \"%d == %d\" failed", FLF, first, second)
#define REQUIRE_LESS(less, more) REQUIRE((less) < (more), "%s(%d): error in %s: \"%d < %d\" failed", FLF, less, more)
#define REQUIRE_MORE(more, less) REQUIRE((more) > (less), "%s(%d): error in %s: \"%d > %d\" failed", FLF, more, less)
#define REQUIRE_TRUE(expr) REQUIRE(expr, "%s(%d): error in %s: \"expression true\" failed", FLF)
#define REQUIRE_FALSE(expr) REQUIRE(expr, "%s(%d): error in %s: \"expression false\" failed", FLF)

#define CRASH()

// \brief Target stream for logging.
#define TEST_OUT_TARGET stderr
// \brief Logging.
#define TEST_LOG(format, ...) fprintf(TEST_OUT_TARGET, format, __VA_ARGS__)

// \brief Inform system the test passed.
#define TEST_PASS(format, ...) TEST_LOG(format, __VA_ARGS__)
// \brief Inform system the test failed.
#define TEST_FAIL(format, ...) test_count_failed++; TEST_LOG(format, __VA_ARGS__)

// selects main implementation file
#define TEST_CONFIG_MAIN int main(void) { TEST_LOG("%s %s\n", __DATE__, __TIME__); TEST_RUN_IT(); final_statistics(); return test_count_failed; }
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