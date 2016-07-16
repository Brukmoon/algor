#include <stdio.h>
#include <string.h>
#include "simple_sorts.h"

// WIP
void insertion_sort(void const* base, size_t const base_size, size_t const set_size, compare less)
{
	if (base == NULL || less == NULL || base_size == 0)
		return;
	void *temp = malloc(base_size);
	for (size_t i = 1; i < set_size; ++i)
	{
		// temp = arr[i]
		memcpy(temp, ELEMENT(i, base, base_size), base_size);
		size_t j = i - 1;
		while((j <= set_size) && less(temp, ELEMENT(j, base, base_size)))
		{
			memcpy(ELEMENT(j + 1, base, base_size), (ELEMENT(j, base, base_size)), base_size);
			--j;
		}
		memcpy(ELEMENT(j + 1, base, base_size), temp, base_size);
	}
	free(temp);
}