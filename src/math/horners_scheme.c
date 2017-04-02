#include <stdio.h>

#include "horners_scheme.h"

bool is_root(int x, int* coefficients, int level)
{
	if (coefficients == NULL)
	{
		fprintf(stderr, "Coeffs can't be NULL.");
		return false;
	}
	int p = 0;
	for (int i = 0; i < level; ++i)
		p = p*x + coefficients[i];
	return (p == 0);
}