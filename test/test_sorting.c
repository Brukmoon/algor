#include "test_sorting.h"
#include "simple_sorts.h"
#include <stdio.h>

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

bool lessi(int *const a, int *const b)
{
	if (*a < *b)
		return true;
	return false;
}

bool sorted(void *const base, size_t const size, size_t const base_size, compare less)
{
	for (size_t i = 0; i < size - 1; ++i)
		if (less(ELEMENT(i + 1, base, base_size), ELEMENT(i, base, base_size)))
			return false;
	return true;
}