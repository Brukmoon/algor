#include "common.h"
#include "simple_sorts.h"

void bubble_sort(void *const base, size_t const base_size, size_t const set_size,
	bool(*less)(const void *const first, const void *const second))
{
	bool sorted = false;
	// swap values until sorted
	while (!sorted)
	{
		sorted = true;
		for (size_t i = 1; i < set_size; ++i)
			if (less(ELEMENT(i, base, base_size), ELEMENT(i-1, base, base_size)))
			{
				sorted = false;
				swap(ELEMENT(i, base, base_size), ELEMENT(i-1, base, base_size), base_size);
			}
	}
}