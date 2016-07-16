/*
* @brief   Individual unit tests
* @author: Michal H.
* @email:  MHlous@gmail.com
*
**/
#ifndef TEST_SORTING_H
#define TEST_SORTING_H
#include <stdbool.h>
#include "test.h"

bool less(void *a, void *b);
bool sorted(void *const base, size_t const size, size_t const base_size);

TEST_CASE(master);
TEST_CASE(selection_sort);

#endif // TEST_SORTING_H