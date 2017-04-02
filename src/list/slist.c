#include <stdlib.h>
#include "common.h"
#include "slist.h"

struct slist *slist_new()
{
	struct slist *list = malloc(sizeof(*list));
	if (list == NULL)
		alloc_err();
	list->length = 0;
	list->head = list->tail = NULL;
	return list;
}

void slist_free(struct slist *list, void(*free_data)(slist_node_data data))
{
	assert(list);
	if (slist_empty(list))
		return;
	struct slist_node *iter = list->tail;
	// Maybe rely on branch prediction to simplify the code.
	if (free_data != NULL)
		while (list->tail != NULL)
		{
			iter = list->tail->next;
			free_data(list->tail->data);
			slist_free_node(list->tail);
			list->tail = iter;
		}
	else
		while (list->tail != NULL)
		{
			iter = list->tail->next;
			slist_free_node(list->tail);
			list->tail = iter;
		}
	free(list);
}

struct slist_node *slist_push(struct slist *list, slist_node_data data)
{
	assert(list);
	struct slist_node *node = slist_new_node(data);
	if (slist_empty(list))
		list->tail = node;
	else
		list->head->next = node;
	list->head = node;
	++list->length;
	return node;
}

void slist_pull(struct slist *list, void(*free_data)(slist_node_data data))
{
	assert(list);
	if (slist_empty(list))
		return;
	struct slist_node *iter = list->tail, *prev = NULL;
	do
	{
		prev = iter;
		iter = iter->next;
	} while (iter != NULL && iter->next != NULL);
	if (iter != list->tail)
		prev->next = NULL;
	else
		list->tail = NULL;
	list->head = prev;
	if(free_data != NULL)
		free_data(iter->data);
	slist_free_node(iter);
	--list->length;
}

bool slist_empty(struct slist const *list)
{
	assert(list);
	if (list->tail == NULL)
		return true;
	return false;
}
