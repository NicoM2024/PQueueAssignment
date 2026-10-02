//
// Created by Kentd on 10/2/2026.
//
#include "pqueue.kschne11-nlmilazz.h"
#include <stdio.h>
#include <stdlib.h>

int comparePQueueEntry(const PQueueEntry *e1, const PQueueEntry *e2) {
    if (e1->priority < e2->priority)
        return -1;
    if (e1->priority > e2->priority)
        return 1;
    return 0;
}

int enqueue(PQueueNode **pqueue, int priority, void *data) {
    PQueueEntry *entry = malloc(sizeof(PQueueEntry));
    entry->priority = priority;
    entry->data = data;
    return insertItem(pqueue, entry, (ComparisonFunction) comparePQueueEntry);
}

void *dequeue(PQueueNode **pqueue) {
    if (*pqueue == NULL) {
        return NULL;
    }
    PQueueNode *head = *pqueue;
    PQueueNode *new_head = (*pqueue)->next;
    *pqueue = new_head;
    return ((PQueueEntry *)head->data)->data;
}


void *peek(PQueueNode *pqueue) {
    if (pqueue == NULL) {
        return NULL;
    }
    return ((PQueueEntry *)pqueue->data)->data;
}


void printQueue(PQueueNode *pqueue, void (printFunction)(void*)) {
    PQueueNode *curr = pqueue;
    while (curr != NULL) {
        printFunction(((PQueueEntry *)pqueue->data)->data);
        curr = curr->next;
    }
}

int getMinPriority(PQueueNode *pqueue) {
    if (pqueue == NULL) {
        return -1;
    }
    return ((PQueueEntry *)pqueue->data)->priority;
}

int queueLength(PQueueNode *pqueue) {
    int length = 0;
    PQueueNode *curr = pqueue;
    while (curr != NULL) {
        length++;
        curr = curr->next;
    }
    return length;
}
