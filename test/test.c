#include "test_sorting.h"
#include "test_search.h"
#include "test_list.h"
#include "test_math.h"

void run_tests(void)
{
	// Add test functions here, comment out those that should be ignored.
	// algora tests
	TEST_CASE_RUN(selection_sort);
	TEST_CASE_RUN(insertion_sort);
	TEST_CASE_RUN(binary_insertion_sort);
	TEST_CASE_RUN(binary_search);
	TEST_CASE_RUN(linear_search);
	// slist tests
	TEST_CASE_RUN(slist_push);
	TEST_CASE_RUN(slist_pull);
	// language
	TEST_CASE_RUN(language);
	// math
	TEST_CASE_RUN(is_root);
	TEST_CASE_RUN(bubble_sort);
}

void final_statistics(void)
{
	TEST_LOG("========== Test: %d succeeded, %d failed, %d total ==========\n", test_count - test_count_failed, test_count_failed, test_count);
}

bool sorted(const void *const base, size_t const base_size, size_t const set_size,
	bool(*less)(const void *const first, const void *const second))
{
	assert(less != NULL);
	for (size_t i = 0; i < set_size - 1; ++i)
		if (less(ELEMENT(i + 1, base, base_size), ELEMENT(i, base, base_size)))
			return false;
	return true;
}
