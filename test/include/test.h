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

// \brief REQUIRE fprintf parameters.
#define FLF __FILE__, __LINE__, __FUNCTION__
// \brief Assertions.
#define REQUIRE(expr, err_format, ...) do { if (!(expr)) { TEST_LOG(err_format, __VA_ARGS__); test_count_failed++; } test_count++; } while(0)
#define REQUIRE_SORTED(arr, base_size, set_size, less) REQUIRE(sorted(arr, base_size, set_size, less), "%s(%d): error in %s: \"array sorted\" failed\n", FLF)
#define REQUIRE_EQ(first, second) REQUIRE((first) == (second), "%s(%d): error in %s: \"%d == %d\" failed\n", FLF, first, second)
#define REQUIRE_LESS(less, more) REQUIRE((less) < (more), "%s(%d): error in %s: \"%d < %d\" failed\n", FLF, less, more)
#define REQUIRE_MORE(more, less) REQUIRE((more) > (less), "%s(%d): error in %s: \"%d > %d\" failed\n", FLF, more, less)
#define REQUIRE_TRUE(expr) REQUIRE(expr, "%s(%d): error in %s: \"expression true\" failed\n", FLF)
#define REQUIRE_FALSE(expr) REQUIRE(expr, "%s(%d): error in %s: \"expression false\" failed\n", FLF)

// \brief Target stream for logging.
#define TEST_OUT_TARGET stderr
// \brief Logging.
#define TEST_LOG(format, ...) fprintf(TEST_OUT_TARGET, format, __VA_ARGS__)

// \brief Select main implementation file.
#define TEST_CONFIG_MAIN int main(void) { TEST_LOG("%s %s\n\n", __DATE__, __TIME__); TEST_RUN(); final_statistics(); return test_count_failed; }
// \brief Run the tests.
#define TEST_RUN() run_tests()
// \brief Function name prefix to prevent clashes.
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

// \brief Print test statistics.
void final_statistics(void);
// \brief Is the array sorted?
bool sorted(void const *const base, size_t const base_size, size_t const set_size,
	bool(*less)(void const *const first, void const *const second));
// \brief Test registrar.
void run_tests(void);

#endif // TEST_H