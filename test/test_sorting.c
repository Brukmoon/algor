#include "test_sorting.h"
#include "simple_sorts.h"

TEST_CASE(selection_sort)
{
	CASE_INFO();
	SECTION("Basic sorting")
	{
		int data1[] = { 9, 6, 7, 8, 4, 1, 2, 3, 0 };
		selection_sort(data1, sizeof(int), sizeof(data1) / sizeof(int), less);
		REQUIRE_SORTED(data1, sizeof(data1) / sizeof(int), sizeof(int));
		REQUIRE_SORTED(data1, sizeof(data1) / sizeof(int), sizeof(int));
		REQUIRE_SORTED(data1, sizeof(data1) / sizeof(int), sizeof(int));
		REQUIRE_SORTED(data1, sizeof(data1) / sizeof(int), sizeof(int));
		REQUIRE_SORTED(data1, sizeof(data1) / sizeof(int), sizeof(int));
	}
	SECTION("Null errors")
	{
		REQUIRE(true);
		REQUIRE(true);
		REQUIRE(false);
		REQUIRE(true);
	}
}

TEST_CASE(master)
{
	CASE_INFO();
	SECTION("You are my bitch")
	{
		REQUIRE(true);
		REQUIRE(true);
		REQUIRE(false);
		REQUIRE(true);
		REQUIRE(true);
	}
	SECTION("yes master")
	{
		REQUIRE(true);
		REQUIRE(true);
		REQUIRE(false);
		REQUIRE(true);
	}
}

bool less(void *a, void *b)
{
	if (a < b)
		return true;
	return false;
}

bool sorted(void *const base, size_t const size, size_t const base_size)
{
	for (size_t i = 0; i < size - 1; ++i)
		if (less(ELEMENT(i + 1, base, base_size), ELEMENT(i, base, base_size)))
			return false;
	return true;
}