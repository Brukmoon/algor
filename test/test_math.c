#include "test_math.h"
#include "horners_scheme.h"

TEST_CASE(is_root)
{
	int coefficients[] = { 4, 9, 2, 3, 1 };
	REQUIRE(is_root(2, coefficients, 5));
}