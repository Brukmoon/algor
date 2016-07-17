/*
* @brief   Individual unit tests of search routines.
* @author: Michal H.
* @email:  MHlous@gmail.com
*
**/
#ifndef TEST_SEARCH_H
#define TEST_SEARCH_H

#include "test.h"

/* 
 * \brief  Compare two integers.
 * \return compare::LESS, compare::EQUAL, compare::MORE, -1 on error
 *
 **/
int comp(int *const first, int *const second);

/*
* Test cases declarations.
* To have them run, add them to the TEST_RUN macro.
*
**/
TEST_CASE(binary_search);

#endif // TEST_SEARCH_H