#include "simple_sorts.h"

void insertion_sort(generic base, size_t base_size, size_t set_size, compare less)
{
	for (size_t i = 0; i < set_size - 1; ++i)
	{
		generic min = (char *)base + (set_size - 1)*base_size;
		for (size_t j = i; j < set_size - 1; ++j)
		{
			generic curr = (char *)base + base_size*j;
			// is curr smaller than min?
			if (less(curr, min))
				min = curr;
		}
		// swap base[i] with min
		swap((char *)base + base_size*i, min, base_size);
	}
}