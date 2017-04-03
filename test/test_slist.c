#include "slist.h"
#include "test_list.h"

TEST_CASE(slist_push)
{
	int a = 1, b = 2, c = 3;
	struct slist *list = slist_new();
	REQUIRE_EQUAL(list->length, 0);
	slist_push(list, &a);
	slist_push(list, &b);
	REQUIRE_EQUAL(list->length, 2);
	slist_push(list, &c);
	REQUIRE_EQUAL(list->length, 3);
	slist_free(list, NULL);
}

TEST_CASE(slist_pull)
{
	int a = 1, b = 2, c = 3;
	struct slist *list = slist_new();
	slist_pull(list, NULL);
	slist_push(list, &a);
	REQUIRE_EQUAL(list->length, 1);
	slist_pull(list, NULL);
	REQUIRE_EQUAL(list->length, 0);
	slist_push(list, &a);
	slist_push(list, &b);
	slist_push(list, &c);
	slist_pull(list, NULL);
	REQUIRE_EQUAL(list->length, 2);
	slist_free(list, NULL);
}

TEST_CASE(language)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int *p = arr;
	//printf("%p == %p, %p", arr, &arr[0], p);
}