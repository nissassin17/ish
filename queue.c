#include "queue.h"
#include <stdlib.h>

queue_t *queue_create(){
	queue_t *queue = malloc(sizeof(queue_t));
	queue->front = queue->back = NULL;
	queue->data_destroy_cb = NULL;
	return queue;
}

queue_node_t *queue_node_create(void *data){
	queue_node_t *node = malloc(sizeof(queue_node_t));
	node->data = data;
	return node;
}

void queue_node_destroy(queue_node_t *node){
	free(node);
}

void queue_push_back(queue_t *queue, void *data){
	queue_node_t *node = queue_node_create(data);
	if (queue->front == NULL){
		queue->front = queue->back = node;
	}else{
		queue->back->next = node;
		queue->back = node;
	}
}

//return NULL if queue is empty
void *queue_pop_front(queue_t *queue){
	if (queue->front == NULL)
		return NULL;
	queue_node_t *node = queue->front;
	queue->front = queue->front->next;
	void *data = node->data;
	queue_node_destroy(node);
	return data;
}

void queue_destroy(queue_t *queue){
	while (!queue_is_empty(queue))
		if (queue->data_destroy_cb != NULL)
			queue->data_destroy_cb(queue_pop_front(queue));
}

int queue_is_empty(queue_t *queue){
	return queue->front == NULL;
}

void queue_set_data_destroy_cb(queue_t *queue, void (*data_destroy_cb)(void*)){
	queue->data_destroy_cb = data_destroy_cb;
}
