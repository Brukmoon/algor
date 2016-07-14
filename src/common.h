/*
* @brief: Common definitions
* @author: Michal H.
* @email: MHlous@gmail.com
*
**/
#ifndef COMMON_H
#define COMMON_H
#include <stdlib.h>
#include <stdbool.h>
// access element of generic array
#define ELEMENT(index, base, base_size) \
	((char *)(base) + (index) * (base_size))
// for each element in set of length
#define FOR_EACH(set, length) \
	for(size_t i = 0; i < length; ++i)

// compare function pointer
typedef bool(*compare)(void *const first, void *const second);

// swaps first and second value
void swap(void *first, void *second, size_t const object_size);
// allocation error handle
void alloc_err(void);

#endif // COMMON_H