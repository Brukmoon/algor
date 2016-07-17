#include "binary_search.h"
#include "test_search.h"

TEST_CASE(binary_search)
{
	int data[] = { 1, 1, 2, 5, 6, 8, 9, 10 };
	int i = binary_search(&data[5], data, sizeof(int), sizeof(data) / sizeof(int), comp);
	REQUIRE_EQ(data[5], data[i]);
}

int comp(int *const first, int *const second)
{
	if (first == NULL || second == NULL)
		return -1;
	if (*first < *second)
		return 0;
	else if (*first > *second)
		return 1;
	else
		return 2;
}