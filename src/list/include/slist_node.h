/*
 *
 *
 **/
#ifndef SLIST_NODE_H
#define SLIST_NODE_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

typedef void* node_data;
struct slist_node
{
	struct slist_node *next;
	node_data data;
};

struct slist_node *slist_new_node(node_data data);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // SLIST_NODE_H