//
// Created by Kentd on 10/2/2026.
//
#include "pqueue.kschne11-nlmilazz.h"

int comparePQueueEntry(const PQueueEntry *e1, const PQueueEntry *e2) {
    if (e1->priority < e2->priority)
        return -1;
    if (e1->priority > e2->priority)
        return 1;
    return 0;
}

int enqueue(PQueueNode **pqueue, int priority, void *data) {

    return 0;
}
