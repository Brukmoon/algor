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
struct slist
{
	struct slist_node *tail;
	struct slist_node *head;
	unsigned length;
};

// Allocate new empty singly linked list.
struct slist *slist_new();
// Deallocate a singly linked list.
void slist_free(struct slist *list, void (*free_data)(node_data data));
/*
 * Push in a new node and set its data.
 * \return Returns pointer to the new node.
 *
 **/
struct slist_node *slist_push(struct slist *list, node_data data);
// Remove the head node from the list.
// WIP
void slist_pull(struct slist *list);
// Is the list empty?
bool slist_empty(struct slist const *list);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // LIST_H