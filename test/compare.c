#include "common.h"
#include "compare.h"

int compare(int const *const a, int const *const b)
{
	if (a == NULL || b == NULL)
		return -1;
	if (*a < *b)
		return LESS;
	else if (*a > *b)
		return MORE;
	else
		return EQUAL;
}

bool equal(const int *const a, const int *const b)
{
	if (*a == *b)
		return true;
	return false;
}

bool less(const int *const a, const int *const b)
{
	if (*a < *b)
		return true;
	return false;
}