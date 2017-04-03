#include "compare.h"
#include "simple_sorts.h"
#include "test_sorting.h"

TEST_CASE(selection_sort)
{
	int data1[] = { 1, 1, 3, 2, 0 };
	selection_sort(data1, sizeof(int), sizeof(data1) / sizeof(int), less);
	REQUIRE_SORTED(data1, sizeof(int), sizeof(data1) / sizeof(int), less);
	int data2[] = { 0 };
	selection_sort(data2, sizeof(int), sizeof(data2) / sizeof(int), less);
	REQUIRE_SORTED(data2, sizeof(int), sizeof(data2) / sizeof(int), less);
	int data3[] = { 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	selection_sort(data3, sizeof(int), sizeof(data3) / sizeof(int), less);
	REQUIRE_SORTED(data3, sizeof(int), sizeof(data3) / sizeof(int), less);
	int data4[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	selection_sort(data4, sizeof(int), sizeof(data4) / sizeof(int), less);
	REQUIRE_SORTED(data4, sizeof(int), sizeof(data4) / sizeof(int), less);
}

TEST_CASE(insertion_sort)
{
	int data1[] = { 1, 1, 3, 2, 0 };
	insertion_sort(data1, sizeof(int), sizeof(data1) / sizeof(int), less);
	REQUIRE_SORTED(data1, sizeof(int), sizeof(data1) / sizeof(int), less);
	int data2[] = { 0 };
	insertion_sort(data2, sizeof(int), sizeof(data2) / sizeof(int), less);
	REQUIRE_SORTED(data2, sizeof(int), sizeof(data2) / sizeof(int), less);
	int data3[] = { 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	insertion_sort(data3, sizeof(int), sizeof(data3) / sizeof(int), less);
	REQUIRE_SORTED(data3, sizeof(int), sizeof(data3) / sizeof(int), less);
	int data4[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	insertion_sort(data4, sizeof(int), sizeof(data4) / sizeof(int), less);
	REQUIRE_SORTED(data4, sizeof(int), sizeof(data4) / sizeof(int), less);
}

TEST_CASE(binary_insertion_sort)
{
	int data1[] = { 1, 1, 3, 2, 0 };
	binary_insertion_sort(data1, sizeof(int), sizeof(data1) / sizeof(int), compare);
	REQUIRE_SORTED(data1, sizeof(int), sizeof(data1) / sizeof(int), less);
	int data2[] = { 0 };
	binary_insertion_sort(data2, sizeof(int), sizeof(data2) / sizeof(int), compare);
	REQUIRE_SORTED(data2, sizeof(int), sizeof(data2) / sizeof(int), less);
	int data3[] = { 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
	binary_insertion_sort(data3, sizeof(int), sizeof(data3) / sizeof(int), compare);
	REQUIRE_SORTED(data3, sizeof(int), sizeof(data3) / sizeof(int), less);
	int data4[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
	binary_insertion_sort(data4, sizeof(int), sizeof(data4) / sizeof(int), compare);
	REQUIRE_SORTED(data4, sizeof(int), sizeof(data4) / sizeof(int), less);
}

TEST_CASE(bubble_sort)
{
	int data1[] = { 1, 1, 3, 2, 0 };
	bubble_sort(data1, sizeof(int), sizeof(data1) / sizeof(int), less);
	REQUIRE_SORTED(data1, sizeof(int), sizeof(data1) / sizeof(int), less);
}