/*
* @brief   Individual unit tests of sorting routines.
* @author: Michal H.
* @email:  MHlous@gmail.com
*
**/
#ifndef TEST_SORTING_H
#define TEST_SORTING_H

#include <stdbool.h>
#include "test.h"

// \brief Less function accepting integers - is a < b?
bool less(const int *const a, const int *const b);

/*
 * Test cases declarations.
 * To have them run, add them to the TEST_RUN macro.
 *
 **/
TEST_CASE(selection_sort);
TEST_CASE(insertion_sort);

#endif // TEST_SORTING_H