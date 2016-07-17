/*
* \brief   Common definitions
* \author: Michal H.
* \email:  MHlous@gmail.com
*
**/
#ifndef COMMON_H
#define COMMON_H

#include <stdbool.h>
#include <stdlib.h>

// \brief Access element i of any array with base of size base_size.
#define ELEMENT(index, base, base_size) \
	((char *)(base) + (index) * (base_size))

// \brief Pointer to a function that should compare two values.
typedef bool(*compare)(const void *const first, const void *const second);

// \brief Swap first and second values.
void swap(void *const first, void *const second, size_t object_size);
// \brief Handle allocation error and possibly cleanup.
void alloc_err(void);

#endif // COMMON_H