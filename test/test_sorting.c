#include "simple_sorts.h"
#include "test_sorting.h"

TEST_CASE(selection_sort)
{
	int arr[] = { 8, 2, 1, 3, 0 };
	selection_sort(arr, sizeof(int), sizeof(arr) / sizeof(int), lessi);
	REQUIRE_SORTED(arr, sizeof(arr) / sizeof(int), sizeof(int), lessi);
}

TEST_CASE(insertion_sort)
{
	int arr[] = { 5, 4, 3, 2, 1 };
	insertion_sort(arr, sizeof(int), sizeof(arr) / sizeof(int), lessi);
	REQUIRE_SORTED(arr, sizeof(arr) / sizeof(int), sizeof(int), lessi);
}

bool lessi(const int *const a, const int *const b)
{
	if (*a < *b)
		return true;
	return false;
}