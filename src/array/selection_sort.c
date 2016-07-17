#include "simple_sorts.h"

void selection_sort(void *const base, size_t const base_size, size_t const set_size, compare less)
{
	if (base == NULL || less == NULL || base_size == 0)
		return;
	for (size_t i = 0; i < set_size; ++i)
	{
		// select last arr element as min
		void *min = ELEMENT((set_size - 1), base, base_size);
		// find the actual smallest value to put it at the end of the sorted part of the array
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