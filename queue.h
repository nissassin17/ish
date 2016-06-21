#ifndef QUEUE_H
#define QUEUE_H

#include <pthread.h>
typedef struct queue_node_t_ {
	struct queue_node_t_ *next;
	void *data;
} queue_node_t;

typedef struct {
	queue_node_t *front, *back;
	pthread_mutex_t lock;
} queue_t;

queue_t *queue_create();
void queue_push_back(queue_t*, void *);

//return NULL if queue is empty
void *queue_pop_front(queue_t*);

void queue_destroy(queue_t*);


int queue_is_empty(queue_t*);

//return NULL unless found
void *queue_filter(queue_t *queue, int (*asserter)(void*));

void queue_remove_by_data(queue_t *queue, void *data);
#endif
