/*
 * Individual unit tests of search routines.
 * \author Michal H.
 * \email  MHlous@gmail.com
 *
 **/
#ifndef TEST_SEARCH_H
#define TEST_SEARCH_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#include "test.h"

/*
 * Test cases declarations.
 * To have them run, simply add them to the TEST_RUN macro.
 *
 **/
TEST_CASE(binary_search);
TEST_CASE(linear_search);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // TEST_SEARCH_H
