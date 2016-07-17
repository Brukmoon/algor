#include "linear_search.h"

int linear_search(void const *const value, void const *const base, size_t const base_size, size_t const set_size, compare equal)
{
	for (size_t i = 0; i < set_size; ++i)
		if (equal(value, ELEMENT(i, base, base_size)))
			return i;
	return -1;
}