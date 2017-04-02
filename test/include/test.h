/*
 * Lightweight unit testing API.
 * \author Michal H.
 * \email  MHlous@gmail.com
 *
 **/
#ifndef TEST_H
#define TEST_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#include <stdio.h>
#include "common.h"

/*
 * Registers a test case handle.
 * \details Declares a testing routine.
 *
 **/
#define TEST_CASE(name) void TEST_CASE_PREFIX()##name##()
/*
 * Runs a test case, should be called in the run_tests routine.
 * \warning The test case must be first defined with TEST_CASE.
 *
 **/
#define TEST_CASE_RUN(name) TEST_CASE_PREFIX()##name##()

// Assertions.
#define REQUIRE(condition) do { if (!(condition)) { TEST_LOG("%s(%d): error in %s: \"%s\" failed\n", __FILE__, __LINE__, __FUNCTION__, #condition); test_count_failed++; } test_count++; } while(0)
#define REQUIRE_SORTED(arr, base_size, set_size, less) REQUIRE(sorted(arr, base_size, set_size, less))
#define REQUIRE_EQUAL(first, second) REQUIRE((first) == (second))
#define REQUIRE_LESS(less, more) REQUIRE((less) < (more))
#define REQUIRE_MORE(more, less) REQUIRE((more) > (less))

// Target stream for logging.
#define TEST_OUT_TARGET stderr
// Logging.
#define TEST_LOG(format, ...) fprintf(TEST_OUT_TARGET, format, __VA_ARGS__)

// Sample main definition.
#define TEST_CONFIG_MAIN int main(void) { TEST_LOG("%s %s\n\n", __DATE__, __TIME__); TEST_RUN(); final_statistics(); return test_count_failed; }
// Run the tests.
#define TEST_RUN() run_tests()
// Function name prefix to prevent clashes.
#define TEST_CASE_PREFIX() test_

/*
 * Used for global statistics.
 * \warning Not thread-safe.
 *
 **/
// Total number of tests.
unsigned test_count;
// Number of failed tests.
unsigned test_count_failed;

// Print test statistics.
void final_statistics(void);
// Is the array sorted?
bool sorted(void const *const base, size_t const base_size, size_t const set_size,
	bool(*less)(void const *const first, void const *const second));
// Test registrar.
void run_tests(void);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // TEST_H
