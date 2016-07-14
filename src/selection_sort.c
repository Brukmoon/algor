#include <stdio.h>
#include "simple_sorts.h"

void selection_sort(void const* base, size_t const base_size, size_t const set_size, compare less)
{
	for (size_t i = 0; i < set_size; ++i)
	{
		void *min = ELEMENT((set_size - 1), base, base_size);
		for (size_t j = i; j < set_size; ++j)
		{
			void *curr = ELEMENT(j, base, base_size);
			// is curr smaller than min?
			if (less(curr, min))
				min = curr;
		}
		// swap base[i] with min
		swap(ELEMENT(i, base, base_size), min, base_size);
	}
}