#include "binary_search.h"
#include "test_search.h"

TEST_CASE(binary_search)
{
	int data[] = { 1, 1, 2, 5, 6, 8, 9, 10 };
	int const size = sizeof(data) / sizeof(int);
	int i1 = binary_search(&data[5], data, sizeof(int), size, comp);
	REQUIRE_EQ(data[5], data[i1]);
	int i2 = binary_search(&data[size-1], data, sizeof(int), size, comp);
	REQUIRE_EQ(data[7], data[i2]);
}

int comp(int *const first, int *const second)
{
	if (first == NULL || second == NULL)
		return -1;
	if (*first < *second)
		return LESS;
	else if (*first > *second)
		return MORE;
	else
		return EQUAL;
}