#include "simple_sorts.h"

// WIP
void insertion_sort(void const* base, size_t const base_size, size_t const set_size, compare less)
{
	for (size_t i = 1; i < set_size - 1; ++i)
	{
		for (size_t j = i; j >= 1; --j)
		{
			if (less(ELEMENT(j, base, base_size), ELEMENT(j - 1, base, base_size)))
				swap(ELEMENT(j, base, base_size), ELEMENT(j - 1, base, base_size), base_size);
			else break;
		}
	}
}