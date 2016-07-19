#include "binary_search.h"
#include "compare.h"
#include "linear_search.h"
#include "test_search.h"

TEST_CASE(binary_search)
{
	int const data[] = { 1, 1, 2, 5, 6, 8, 9, 10 };
	size_t const size = sizeof(data) / sizeof(int);

	REQUIRE_EQ(data[5], data[binary_search(&data[5], data, sizeof(int), size, compare)]);
	// Test boundaries.
	REQUIRE_EQ(data[7], data[binary_search(&data[size - 1], data, sizeof(int), size, compare)]);
	REQUIRE_EQ(data[0], data[binary_search(&data[0], data, sizeof(int), size, compare)]);
	// Not found.
	int *n = malloc(sizeof(int));
	*n = 255;
	REQUIRE_EQ(binary_search(n, data, sizeof(int), size, compare), -1);
	free(n);

}

TEST_CASE(linear_search)
{
	int const data[] = { 1, 1, 2, 5, 6, 8, 9, 10 };
	size_t const size = sizeof(data) / sizeof(int);

	REQUIRE_EQ(data[5], data[linear_search(&data[5], data, sizeof(int), size, equal)]);
	// Test boundaries.
	REQUIRE_EQ(data[7], data[linear_search(&data[size - 1], data, sizeof(int), size, equal)]);
	REQUIRE_EQ(data[0], data[linear_search(&data[0], data, sizeof(int), size, equal)]);
	// Not found.
	int *n = malloc(sizeof(int));
	*n = 255;
	REQUIRE_EQ(linear_search(n, data, sizeof(int), size, equal), -1);
	free(n);
}
