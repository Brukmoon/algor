/*
* Common definitions
* \author Michal H.
* \email  MHlous@gmail.com
*
**/
#ifndef COMMON_H
#define COMMON_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#include <stdbool.h>
#include <stdlib.h>

// Access element i of any array with base of size base_size.
#define ELEMENT(index, base, base_size) \
	((char *)(base) + (index) * (base_size))	

enum compare_result
{
	LESS = 0,
	EQUAL = 1,
	MORE = 2,
};

// Swap first and second values.
void swap(void *const first, void *const second, size_t object_size);
// Handle allocation error and possibly cleanup.
void alloc_err(void);

#ifdef __cplusplus
 }
#endif // __cplusplus

#endif // COMMON_H
