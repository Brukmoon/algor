#include <stdlib.h>
#include "common.h"
#include "slist_node.h"

slist_node *slist_new_node(void *data)
{
	slist_node *node = malloc(sizeof(*node));
	if (node == NULL)
		alloc_err();
	node->next = NULL;
	node->data = data;
	return node;
}