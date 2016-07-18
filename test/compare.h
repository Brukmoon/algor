#ifndef COMPARE_H
#define COMPARE_H

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

#endif /* COMPARE_H */
