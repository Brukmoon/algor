#include "binary_search.h"
#include "linear_search.h"
#include "test_search.h"

/*
* \brief  Compare two integers.
* \return compare::LESS, compare::EQUAL, compare::MORE, -1 on error
*
**/
static int measure(int const *const first, int const *const second);
// \brief Are values equal?
static bool equal(const int *const a, const int *const b);

TEST_CASE(binary_search)
{
	// Data shouldn't change.
	int const data[] = { 1, 1, 2, 5, 6, 8, 9, 10 };
	size_t const size = sizeof(data) / sizeof(int);

	int i1 = binary_search(&data[5], data, sizeof(int), size, measure);
	REQUIRE_EQ(data[5], data[i1]);
	// Test boundaries.
	int i2 = binary_search(&data[size-1], data, sizeof(int), size, measure);
	REQUIRE_EQ(data[7], data[i2]);
	int i3 = binary_search(&data[0], data, sizeof(int), size, measure);
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

int measure(int const *const first, int const *const second)
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

bool equal(const int *const a, const int *const b)
{
	if (*a == *b)
		return true;
	return false;
}