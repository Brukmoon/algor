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
void insertion_sort(void *const base, size_t const base_size, size_t const set_size, compare less);
/*
* \brief          Insertion sort implemented with binary search.
* \param base     Pointer to array base.
* \param set_size Length of the array.
* \param less     Is first value smaller than the second?
*
**/
void binary_insertion_sort(void *const base, size_t const base_size, size_t const set_size, compare less);
/*
* \brief          Selection sort implementation.
* \param base     Pointer to array base.
* \param set_size Length of the array.
* \param less     Is first value smaller than the second?
*
**/
void selection_sort(void *const base, size_t const base_size, size_t const set_size, compare less);

#endif // SIMPLE_SORTS_H