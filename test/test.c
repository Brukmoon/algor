#include "test_sorting.h"

void run_tests()
{
	// Add test functions you want to run here, comment out those you want ignored
	TEST_CASE_RUN(selection_sort);
}

void final_statistics()
{
	TEST_LOG ("\n========== Test: %d succeeded, %d failed, %d total ==========\n", test_count - test_count_failed, test_count_failed, test_count);
}