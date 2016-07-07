#include <string.h>
#include "common.h"

void swap(generic first, generic second, size_t const object_size)
{
	void *temp = malloc(object_size);
	memcpy(temp, first, object_size);
	memcpy(first, second, object_size);
	memcpy(second, temp, object_size);
	free(temp);
}