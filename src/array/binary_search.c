#include "binary_search.h"

int binary_search(void const *const value, 
	const void *const base, size_t const base_size, size_t const set_size, 
	int(*compare)(void const *const first, void const *const second))
{
	if (value == NULL || base == NULL || base_size == 0 || set_size == 0 || compare == NULL)
		return -1;
	// low:high, k is approximate middle
	size_t L = 0, H = set_size - 1, k = 0;
	int status = 0;
	do
	{
		// compute middle
		k = (L + H) / 2;
		// compare the value we are searching for with the middle
		status = compare(value, ELEMENT(k, base, base_size));
		if (status == LESS) // value < arr[k]
			H = k - 1;
		else if(status == MORE) // value > arr[k]
			L = k + 1; 
		else if (status == EQUAL)
			return k; // found it
	} while ((status != EQUAL) && L <= H);
	// equal not found
	return -1;
}
