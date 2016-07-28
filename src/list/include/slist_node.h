/*
 *
 *
 **/
#ifndef SLIST_NODE_H
#define SLIST_NODE_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

typedef void node_data;
typedef struct slist_node
{
	struct slist_node *next;
	node_data *data;
} slist_node;

slist_node *slist_new_node(void *data);

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // SLIST_NODE_H