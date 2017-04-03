/*
 * Individual unit tests of sorting routines.
 * \author Michal H.
 * \email  MHlous@gmail.com
 *
 **/
#ifndef TEST_SORTING_H
#define TEST_SORTING_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

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
TEST_CASE(bubble_sort);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // TEST_SORTING_H
