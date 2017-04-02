/*
* Polynomial computation
* \author: Michal H.
* \email:  MHlous@gmail.com
*
**/
#ifndef HORNERS_SCHEME
#define HORNERS_SCHEME

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#include <stdbool.h>

	bool is_root(int x, int* coefficients, int level);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // HORNERS_SCHEME
