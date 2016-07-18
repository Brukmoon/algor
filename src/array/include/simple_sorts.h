/*
 * \brief   Algorithms effective on small sets only
 * \author: Michal H.
 * \email:  MHlous@gmail.com
 *
 **/
#ifndef SIMPLE_SORTS_H
#define SIMPLE_SORTS_H

#include "common.h"

 /*
 * \brief          Naive insertion sort implementation.
 * \param base     Pointer to array base.
 * \param set_size Length of the array.
 * \param less     Is first value smaller than the second?
 *
 **/
void insertion_sort(void *const base, size_t const base_size, size_t const set_size, 
	bool(*less)(const void *const first, const void *const second));
/*
* \brief          Insertion sort implemented with binary search.
* \param base     Pointer to array base.
* \param set_size Length of the array.
* \param compare  Compare used for set halving.
*                 return: 0 if less
*						   1 if equal
*						   2 if more
*						  -1 on error
*
**/
void binary_insertion_sort(void *const base, size_t const base_size, size_t const set_size,
	int(*compare)(const void *const first, const void *const second));
/*
* \brief          Selection sort implementation.
* \param base     Pointer to array base.
* \param set_size Length of the array.
* \param less     Is first value smaller than the second?
*
**/
void selection_sort(void *const base, size_t const base_size, size_t const set_size,
	bool(*less)(const void *const first, const void *const second));

#endif // SIMPLE_SORTS_H