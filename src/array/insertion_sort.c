#include <string.h>
#include "simple_sorts.h"

void insertion_sort(void *const base, size_t const base_size, size_t const set_size,
	bool(*less)(const void *const first, const void *const second))
{
	if (base == NULL || less == NULL || base_size == 0)
		return;
	void *temp = malloc(base_size);
	if (temp == NULL)
		alloc_err();
	for (size_t i = 1; i < set_size; ++i)
	{
		// temp = arr[i]
		memcpy(temp, ELEMENT(i, base, base_size), base_size);
		size_t j = i - 1;
		// find arr[i]'s place
		while((j < set_size) && less(temp, ELEMENT(j, base, base_size)))
		{
			// if arr[i] is smaller than arr[j] and the array is not out of bounds, we can shift arr[j] to arr[j+1]
			memcpy(ELEMENT(j + 1, base, base_size), (ELEMENT(j, base, base_size)), base_size);
			--j;
		}
		// put arr[i] to arr[j+1] (which has been shifted to j+2), arr[i] is NOT less than arr[j]
		memcpy(ELEMENT(j + 1, base, base_size), temp, base_size);
	}
	free(temp);
}
