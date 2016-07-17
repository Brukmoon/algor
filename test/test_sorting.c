#include "simple_sorts.h"
#include "test_sorting.h"

TEST_CASE(selection_sort)
{
	int data[] = { 1.3, 1.327, 3.86, 2.0, 1.48 };
	selection_sort(data, sizeof(int), sizeof(data) / sizeof(int), less);
	REQUIRE_SORTED(data, sizeof(int), sizeof(data) / sizeof(int), less);
}

TEST_CASE(insertion_sort)
{
	int data[] = { 1.328, 1.327, 3.86, 2.0, 1.48 };
	insertion_sort(data, sizeof(int), sizeof(data) / sizeof(int), less);
	REQUIRE_SORTED(data, sizeof(int), sizeof(data) / sizeof(int), less);
}

bool less(const int *const a, const int *const b)
{
	if (*a < *b)
		return true;
	return false;
}