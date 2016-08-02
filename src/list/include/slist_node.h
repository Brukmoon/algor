/*
 * A node in singly linked list.
 * \author Michal H.
 * \email  MHlous@gmail.com
 *
 **/
#ifndef SLIST_NODE_H
#define SLIST_NODE_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

// What data does the node keep?
typedef void* slist_node_data;
// Node in a singly linked list.
struct slist_node
{
	struct slist_node *next;
	slist_node_data data;
};

struct slist_node *slist_new_node(slist_node_data data);
void slist_free_node(struct slist_node *node);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // SLIST_NODE_H