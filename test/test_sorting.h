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

TEST_CASE(selection_sort);
TEST_CASE(insertion_sort);

// \brief Integer less function for sorting algors - is a < b?
bool lessi(int *const a, int *const b);

#endif // TEST_SORTING_H