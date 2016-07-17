#ifndef LINEAR_SEARCH_H
#define LINEAR_SEARCH_H

#include "common.h"

/*
* \brief          Naive implementation of sequential search, O(n).
* \param value    Value searched for.
* \param base     Pointer to array base.
* \param set_size Length of the array.
* \param equal    Are two values of base type equal?
* \return         Index of the value found, -1 if value is not found.
*
**/
int linear_search(void const *const value, 
	void const *const base, size_t const base_size, size_t const set_size,
	compare equal);

#endif /* LINEAR_SEARCH_H */