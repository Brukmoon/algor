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

// \brief Generic less function for sorting algors - is a < b?
bool less(void *a, void *b);

#endif // TEST_SORTING_H