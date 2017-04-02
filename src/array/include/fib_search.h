/*
 * Fibonaccian search implementation
 * \author Michal H.
 * \email  MHlous@gmail.com
 *
 **/
#ifndef FIB_SEARCH_H
#define FIB_SEARCH_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#include "common.h"

int fib_search(void const *const value,
	const void *const base, size_t const base_size, size_t const set_size,
	int(*compare)(void const *const first, void const *const second));

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // FIB_SEARCH_H