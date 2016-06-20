#ifndef QUEUE_H
#define QUEUE_H

typedef struct queue_node_t_ {
	struct queue_node_t_ *next;
	void *data;
} queue_node_t;

typedef struct {
	queue_node_t *front, *back;
	void (*data_destroy_cb)(void*);
} queue_t;

queue_t *queue_create();
void queue_push_back(queue_t*, void *);

//return NULL if queue is empty
void *queue_pop_front(queue_t*);

void queue_destroy(queue_t*);

void queue_set_data_destroy_cb(queue_t*, void (*)(void*));

int queue_is_empty(queue_t*);
#endif
