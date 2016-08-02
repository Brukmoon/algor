#include <stdlib.h>
#include "common.h"
#include "slist_node.h"

struct slist_node *slist_new_node(slist_node_data data)
{
	struct slist_node *node = malloc(sizeof(*node));
	if (node == NULL)
		alloc_err();
	node->next = NULL;
	node->data = data;
	return node;
}

void slist_free_node(struct slist_node *node)
{
	free(node);
}