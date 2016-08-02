#include "slist.h"
#include "test_list.h"

TEST_CASE(slist)
{
	int a = 1, b = 2, c = 3, d = 4;
	struct slist *list = slist_new();
	slist_push(list, &a);
	slist_push(list, &b);
	slist_push(list, &c);
	slist_push(list, &d);
	slist_pull(list, NULL);
	REQUIRE_EQ(list->length, 3);
	slist_free(list, NULL);
}