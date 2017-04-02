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

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>

// Access element $index of any array with $base of size $base_size.
#define ELEMENT(index, base, base_size) \
	((char *)(base) + (index) * (base_size))	

// Result of compare function for sorting algorituhs.
enum compare_result
{
	LESS = 0,
	EQUAL = 1,
	MORE = 2,
};

// Handle allocation error and possibly cleanup.
void alloc_err(void);
// Swap first and second values.
void swap(void *const first, void *const second, size_t object_size);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // COMMON_H
