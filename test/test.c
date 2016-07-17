#include "test_sorting.h"
#include "test_search.h"

void run_tests(void)
{
	// Add test functions you want to run here, comment out those you want ignored
	TEST_CASE_RUN(selection_sort);
	TEST_CASE_RUN(insertion_sort);
	//TEST_CASE_RUN(binary_search);
}

void final_statistics(void)
{
	TEST_LOG("========== Test: %d succeeded, %d failed, %d total ==========\n", test_count - test_count_failed, test_count_failed, test_count);
}

bool sorted(const void *const base, size_t const base_size, size_t const set_size, compare less)
{
	for (size_t i = 0; i < set_size - 1; ++i)
		if (less(ELEMENT(i + 1, base, base_size), ELEMENT(i, base, base_size)))
			return false;
	return true;
}