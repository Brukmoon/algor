#include "binary_search.h"

int binary_search(void const *const value, 
	const void *const base, size_t const base_size, size_t const set_size, 
	int(*compare)(void const *const first, void const *const second))
{
	if (value == NULL || base == NULL || base_size == 0 || set_size == 0 || compare == NULL)
		return -1;
	size_t L = 0, H = set_size - 1, k = 0;
	int status = 0;
	do
	{
		k = (L + H) / 2;
		status = compare(value, ELEMENT(k, base, base_size));
		if (status == LESS)
			H = k - 1;
		else if(status == MORE)
			L = k + 1;
	} while ((status != EQUAL) && L <= H);

	if (compare(ELEMENT(k, base, base_size), value) == EQUAL)
		return k;
	else
		return 0;
}