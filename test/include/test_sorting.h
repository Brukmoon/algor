/*
 * Individual unit tests of sorting routines.
 * \author Michal H.
 * \email  MHlous@gmail.com
 *
 **/
#ifndef TEST_SORTING_H
#define TEST_SORTING_H

#include <stdbool.h>
#include "test.h"

/*
 * Test cases declarations.
 * To have them run, simply add them to the TEST_RUN macro.
 *
 **/
TEST_CASE(selection_sort);
TEST_CASE(insertion_sort);
TEST_CASE(binary_insertion_sort);

#endif // TEST_SORTING_H