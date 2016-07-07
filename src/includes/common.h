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
	(char *)base + base_size*index
// for each element in set of length
#define FOR_EACH(set, length) \
	for(unsigned i = 0; i < length; ++i)

// generic ptr type
typedef void* generic;
// compare function pointer
typedef bool(*compare)(generic const first, generic const second);
// swaps first and second value
void swap(generic first, generic second, size_t const object_size);

#endif // COMMON_H