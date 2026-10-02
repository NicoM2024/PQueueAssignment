//
// Created by Kentd on 10/2/2026.
//

#ifndef PQUEUEASSIGNMENT_KSCHNE11_H
#define PQUEUEASSIGNMENT_KSCHNE11_H

#include "list.kschne11-nlmilazz.h"

typedef ListNode PQueueNode;

typedef struct {
    int priority;
    void *data;
} PQueueEntry;

int comparePQueueEntry(const PQueueEntry *e1, const PQueueEntry *e2, int *result);

int enqueue(PQueueNode **pqueue, int priority, void *data);

void *dequeue(PQueueNode **pqueue);

void *peek(PQueueNode *pqueue);

void printQueue(PQueueNode *pqueue, void (printFunction)(void*));

int getMinPriority(PQueueNode *pqueue);

int queueLength(PQueueNode *pqueue);

#endif //PQUEUEASSIGNMENT_KSCHNE11_H
