//
// Created by Kentd on 10/2/2026.
//
#include "pqueue.kschne11-nlmilazz.h"

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
    insertItem(pqueue, &entry, (ComparisonFunction) comparePQueueEntry);
    /*
    *This will create a node pointing to the supplied data and will put the new node into the priority queue
    in the correct place (i.e., sorted by priority in ascending order). If there are already one or more nodes
    in the list having the same priority as the data that you are enqueueing, then put the new node after all
    of the existing nodes having that priority. It might be necessary to modify your insertItem() function
    to obtain this behavior. You can also get and use my list.jhibbele.c file from the course gitlab
    This function will call insertItem(), using your comparison function for PQueueNode instances.
    Return zero from this function.
     */
    return 0;
}
