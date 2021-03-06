/*
 * Binary search implementation
 * \author: Michal H.
 * \email:  MHlous@gmail.com
 *
 **/
#ifndef BINARY_SEARCH
#define BINARY_SEARCH

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#include "common.h"

/*
 * Binary search
 * \param value    Value searched for.
 * \param base     Pointer to array base (array[0]).
 * \param set_size Length of the array (sizeof(arr)/sizeof(arr_t)).
 * \param compare  Compare used for set halving.
 *                 return: 0 if less
 *						   1 if equal
 *						   2 if more
 *						  -1 on error
 * \return Index of the $value found, -1 if $value is not found.
 *
 **/
int binary_search(void const *const value, 
	const void *const base, size_t const base_size, size_t const set_size, 
	int(*compare)(void const *const first, void const *const second));

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // BINARY_SEARCH
