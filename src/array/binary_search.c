#include "binary_search.h"

int binary_search(void const *const value, 
	const void *const base, size_t const base_size, size_t const set_size, 
	int(*compare)(void const *const first, void const *const second))
{
	// NULL protection
	assert(value && base && compare);
	// array element type has to have positive size
	assert(base_size > 0);
	// if set size is empty
	if (set_size <= 0)
		return -1;

	// low:high, k <- middle index, status <- compare result
	size_t L = 0, H = set_size - 1, k = 0;
	int status = 0;
	do
	{
		// compute middle
		k = (L + H) / 2;
		// compare the value we are searching for with the middle
		status = compare(value, ELEMENT(k, base, base_size));
		if (status == LESS) // value < arr[k]
			H = k - 1; // k - 1 becomes :high
		else if(status == MORE) // value > arr[k]
			L = k + 1; // k + 1 becomes low: 
		else if (status == EQUAL)
			return k; // found it
	} while ((status != EQUAL) && L <= H);
	// equal not found
	return -1;
}
