#include <stdio.h>
#include <string.h>
#include "common.h"

void alloc_err(void)
{
	fprintf(stderr, "Error: Allocation failure in function %s.", __FUNCTION__);
	abort();
}

void swap(void *const first, void *const second, size_t object_size)
{
	if (first == NULL || second == NULL || object_size == 0)
		return;
	void *temp = malloc(object_size);
	if (temp == NULL)
		alloc_err();
	memcpy(temp, first, object_size);
	memcpy(first, second, object_size);
	memcpy(second, temp, object_size);
	free(temp);
}
