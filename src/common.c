#include <stdio.h>
#include <string.h>
#include "common.h"

void alloc_err(void)
{
	fprintf(stderr, "Error: Allocation failure in function %s.", __FUNCTION__);
}

void swap(void *first, void *second, size_t const object_size)
{
	void *temp = malloc(object_size);
	memcpy(temp, first, object_size);
	memcpy(first, second, object_size);
	memcpy(second, temp, object_size);
	free(temp);
}