#include <stdlib.h>
#include "common.h"
#include "slist.h"

slist *slist_new()
{
	slist *list = malloc(sizeof(*list));
	if (list == NULL)
		alloc_err();
	list->length = 0;
	list->head = list->tail = NULL;
	return list;
}

void slist_free(slist *list, void(*free_data)(node_data *data))
{
	if (list == NULL)
		return;
	if (slist_empty(list))
		return;
	slist_node *iter = list->tail;
	// Maybe rely on branch prediction to simplify the code.
	if (free_data != NULL)
	{
		while (list->tail != NULL)
		{
			iter = list->tail->next;
			free_data(list->tail->data);
			free(list->tail);
			list->tail = iter;
		}
	}
	else
	{
		while (list->tail != NULL)
		{
			iter = list->tail->next;
			free(list->tail);
			list->tail = iter;
		}
	}
	free(list);
}

slist_node *slist_push(slist *list, node_data *data)
{
	if (list == NULL)
		return NULL;
	slist_node *node = slist_new_node(data);
	if (slist_empty(list))
	{
		list->tail = node;
	}
	else
	{
		list->head->next = node;
	}
	list->head = node;
	++list->length;
	return node;
}

void slist_pull(slist *list)
{
	if (slist_empty(list))
		return;
	slist_node *iter = list->tail, *prev = list->tail;
	while (iter != NULL)
	{
	}
}

bool slist_empty(const slist *list)
{
	if (list == NULL || list->tail == NULL)
		return true;
	return false;
}
