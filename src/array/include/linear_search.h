#ifndef LINEAR_SEARCH_H
#define LINEAR_SEARCH_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#include "common.h"

/*
 * Naive implementation of sequential search, O(n).
 * \param value    Value searched for.
 * \param base     Pointer to array base.
 * \param set_size Length of the array.
 * \param equal    Are two values of base type equal?
 * \return         Index of the value found, -1 if value is not found.
 *
 **/
int linear_search(void const *const value, 
	void const *const base, size_t const base_size, size_t const set_size,
	bool(*equal)(const void *const first, const void *const second));

#ifdef __cplusplus
 }
#endif // __cplusplus

#endif /* LINEAR_SEARCH_H */
