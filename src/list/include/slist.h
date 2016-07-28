/*
 * Singly linked list and its operations.
 * \author Michal H.
 * \email  MHlous@gmail.com
 *
 **/
#ifndef SLIST_H
#define SLIST_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus
	
#include <stdbool.h>
#include "slist_node.h"

// Singly linked list.
typedef struct slist
{
	slist_node *tail;
	slist_node *head;
	unsigned length;
} slist;

// Allocate new empty singly linked list.
slist *slist_new();
// Deallocate a singly linked list.
void slist_free(slist *list, void (*free_data)(node_data *data));
/*
 * Push in a new node and set its data.
 * \return Returns pointer to the new node.
 *
 **/
slist_node *slist_push(slist *list, node_data *data);
// Remove the head node from the list.
void slist_pull(slist *list);
// Is the list empty?
bool slist_empty(const slist *list);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // LIST_H