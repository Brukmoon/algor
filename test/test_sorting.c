#include "test_sorting.h"
#include "simple_sorts.h"

TEST_CASE(selection_sort)
{
	REQUIRE_LESS(5, 1);
	REQUIRE_MORE(5, 1);
	REQUIRE_TRUE(false);
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