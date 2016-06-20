#include "queue.h"
#include <stdlib.h>

queue_t *queue_create(){
	queue_t *queue = malloc(sizeof(queue_t));
	queue->front = queue->back = NULL;
	queue->data_destroy_cb = NULL;
	pthread_mutex_init(&queue->lock, NULL);
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

void queue_lock(queue_t *queue){
	pthread_mutex_lock(&queue->lock);
}

void queue_unlock(queue_t *queue){
	pthread_mutex_unlock(&queue->lock);
}

void queue_push_back(queue_t *queue, void *data){
	queue_lock(queue);
	queue_node_t *node = queue_node_create(data);
	if (queue->front == NULL){
		queue->front = queue->back = node;
	}else{
		queue->back->next = node;
		queue->back = node;
	}
	queue_unlock(queue);
}

//return NULL if queue is empty
void *queue_pop_front(queue_t *queue){
	queue_lock(queue);
	void *data;
	if (queue->front == NULL)
		data = NULL;
	else{
		queue_node_t *node = queue->front;
		queue->front = queue->front->next;
		data = node->data;
		queue_node_destroy(node);
	}
	queue_unlock(queue);
	return data;
}

void queue_destroy(queue_t *queue){
	queue_lock(queue);
	while (!queue_is_empty(queue))
		if (queue->data_destroy_cb != NULL)
			queue->data_destroy_cb(queue_pop_front(queue));
	queue_unlock(queue);
	free(queue);
}

int queue_is_empty(queue_t *queue){
	queue_lock(queue);
	int ret = queue->front == NULL;
	queue_unlock(queue);
	return ret;
}

void queue_set_data_destroy_cb(queue_t *queue, void (*data_destroy_cb)(void*)){
	queue_lock(queue);
	queue->data_destroy_cb = data_destroy_cb;
	queue_unlock(queue);
}

void *queue_filter(queue_t *queue, int (*asserter)(void*)){
	queue_lock(queue);
	queue_node_t *node;
	void *data = NULL;
	for(node = queue->front; node != NULL; node = node->next)
		if (asserter(node->data)){
			data = node->data;
			break;
		}
	queue_unlock(queue);
	return data;
}
