/*
* Test list data structure and algorithms.
* \author Michal H.
* \email  MHlous@gmail.com
*
**/
#ifndef TEST_LIST_H
#define TEST_LIST_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#include "test.h"

TEST_CASE(slist_push);
TEST_CASE(slist_pull);
// testing language features
TEST_CASE(language);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // TEST_LIST_H