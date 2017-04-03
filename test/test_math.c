#include "test_math.h"
#include "horners_scheme.h"

TEST_CASE(is_root)
{
	int coefficients1[] = { 1, -1 };
	REQUIRE(is_root(1, coefficients1, 2));
	int coefficients2[] = { 4, 9, 2, 3, 1 };
	REQUIRE(!is_root(2, coefficients2, 5));
}