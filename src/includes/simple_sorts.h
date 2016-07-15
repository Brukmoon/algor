/*
 * \brief   Algorithms effective on small sets only
 * \author: Michal H.
 * \email:  MHlous@gmail.com
 *
 **/
#ifndef SIMPLE_SORTS_H
#define SIMPLE_SORTS_H
#include "common.h"

void insertion_sort(void const* base, size_t const base_size, size_t const set_size, compare less);
void selection_sort(void const* base, size_t const base_size, size_t const set_size, compare less);

#endif // SIMPLE_SORTS_H