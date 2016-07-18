#include "compare.h"
#include "simple_sorts.h"
#include "test_sorting.h"

TEST_CASE(selection_sort)
{
	int data[] = { 1, 1, 3, 2, 0 };
	selection_sort(data, sizeof(int), sizeof(data) / sizeof(int), less);
	REQUIRE_SORTED(data, sizeof(int), sizeof(data) / sizeof(int), less);
}

TEST_CASE(insertion_sort)
{
	int data[] = { 1, 1, 3, 2, 0 };
	insertion_sort(data, sizeof(int), sizeof(data) / sizeof(int), less);
	REQUIRE_SORTED(data, sizeof(int), sizeof(data) / sizeof(int), less);
}

TEST_CASE(binary_insertion_sort)
{
	int data[] = { 1, 1, 3, 2, 0 };
	binary_insertion_sort(data, sizeof(int), sizeof(data) / sizeof(int), compare);
	REQUIRE_SORTED(data, sizeof(int), sizeof(data) / sizeof(int), less);
}
