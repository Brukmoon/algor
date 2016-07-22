/*
 * Functions that compare values, needed for testing of certain algorithms.
 * \author Michal H.
 * \email  MHlous@gmail.com
 *
 **/
#ifndef COMPARE_H
#define COMPARE_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#include <stdbool.h>

/*
 * Compare two values.
 * \return LESS, EQUAL, MORE, -1 on error
 *
 **/
int compare(int const *const a, int const *const b);
// Are values equal?
bool equal(int const *const a, int const *const b);
// Is a less than b?
bool less(int const *const a, int const *const b);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif /* COMPARE_H */
