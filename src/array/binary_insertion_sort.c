#include <math.h>
#include <string.h>
#include "binary_search.h"
#include "simple_sorts.h"

static size_t approx_binary_search(void *value, void *const base, size_t const base_size, size_t const set_size,
	int(*compare)(const void *const first, const void *const second));
static void shift_right(void *const base, size_t const base_size, size_t const shift_count);

void binary_insertion_sort(void *const base, size_t const base_size, size_t const set_size,
	int(*compare)(const void *const first, const void *const second))
{
	if (base == NULL || compare == NULL || base_size == 0)
		return;
	void *temp = malloc(base_size);
	if (temp == NULL)
		alloc_err();
	for (size_t i = 1; i < set_size; ++i)
	{
		// search for arr[i]'s place in arr[0]:arr[i]
		int k = approx_binary_search(ELEMENT(i, base, base_size), base, base_size, i+1, compare);
		// temp = arr[i] -- backup
		memcpy(temp, ELEMENT(i, base, base_size), base_size);
		// shift values right from arr[k] to arr[i]
		shift_right(ELEMENT(k, base, base_size), base_size, i-k);
		// copy backup value where it belongs
		memcpy(ELEMENT(k, base, base_size), temp, base_size);
	}
	free(temp);
}

static size_t approx_binary_search(void *value, void *const base, size_t const base_size, size_t const set_size,
	int(*compare)(const void *const first, const void *const second))
{
	// low:high, k in between
	size_t L = 0, H = set_size - 1, k = 0;
	
	// reduce the interval searched
	size_t hop = 1;
	do
	{
		k = H - hop;
		hop *= 2;
		// if value < arr[k]
		if (compare(value, ELEMENT(k, base, base_size)) == LESS)
			H = k;
		else
			L = k + 1;
	} while (L + hop <= H);
	// if L == H before the actual binary sort is entered, we found our value
	while (L != H)
	{
		k = (L + H) / 2;
		if (compare(value, ELEMENT(k, base, base_size)) == LESS)
		{
			if (k - 1 > H) // integer overflow
				break;
			H = k - 1;
		}
		else
			L = k + 1;
	}
	return L;
}

static void shift_right(void *const base, size_t const base_size, size_t const shift_count)
{
	for (size_t i = shift_count; i > 0; --i)
		memcpy(ELEMENT(i, base, base_size), ELEMENT(i - 1, base, base_size), base_size);
}
