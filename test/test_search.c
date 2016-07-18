#include "binary_search.h"
#include "compare.h"
#include "linear_search.h"
#include "test_search.h"

TEST_CASE(binary_search)
{
	// Data shouldn't change.
	int const data[] = { 1, 1, 2, 5, 6, 8, 9, 10 };
	size_t const size = sizeof(data) / sizeof(int);

	int i1 = binary_search(&data[5], data, sizeof(int), size, compare);
	REQUIRE_EQ(data[5], data[i1]);
	// Test boundaries.
	int i2 = binary_search(&data[size-1], data, sizeof(int), size, compare);
	REQUIRE_EQ(data[7], data[i2]);
	int i3 = binary_search(&data[0], data, sizeof(int), size, compare);
	REQUIRE_EQ(data[0], data[i3]);
}

TEST_CASE(linear_search)
{
	int const data[] = { 1, 1, 2, 5, 6, 8, 9, 10 };
	size_t const size = sizeof(data) / sizeof(int);

	int i1 = linear_search(&data[5], data, sizeof(int), size, equal);
	REQUIRE_EQ(data[5], data[i1]);
	// Test boundaries.
	int i2 = linear_search(&data[size - 1], data, sizeof(int), size, equal);
	REQUIRE_EQ(data[7], data[i2]);
	int i3 = linear_search(&data[0], data, sizeof(int), size, equal);
	REQUIRE_EQ(data[0], data[i3]);
}
