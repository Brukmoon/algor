/*
 * Singly linked list.
 *
 **/
#ifndef SLIST_H
#define SLIST_H

typedef struct
{
	slist_node *next;
} slist_node;

typedef struct
{
	slist_node *tail;
	slist_node *head;
	
	void *data;
} slist;

slist *slist_new();
void slist_free(slist *);

#endif // LIST_H