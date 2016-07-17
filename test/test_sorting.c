#include "simple_sorts.h"
#include "test_sorting.h"

// Less function accepting integers - is a < b?
static bool less(const int *const a, const int *const b);

TEST_CASE(selection_sort)
{
	int data[] = { 1, 1, 3, 2, 1 };
	selection_sort(data, sizeof(int), sizeof(data) / sizeof(int), less);
	REQUIRE_SORTED(data, sizeof(int), sizeof(data) / sizeof(int), less);
}

TEST_CASE(insertion_sort)
{
	int data[] = { 1, 1, 3, 2, 1 };
	insertion_sort(data, sizeof(int), sizeof(data) / sizeof(int), less);
	REQUIRE_SORTED(data, sizeof(int), sizeof(data) / sizeof(int), less);
}

bool less(const int *const a, const int *const b)
{
	if (*a < *b)
		return true;
	return false;
}