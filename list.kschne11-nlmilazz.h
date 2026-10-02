//
// Created by Kentd on 9/23/2026.
//

#ifndef OS_HW_2_LIST_KSCHNE11_NLMILAZZ_H
#define OS_HW_2_LIST_KSCHNE11_NLMILAZZ_H

typedef struct ListNodeStruct {
    void *data;
    struct ListNodeStruct *next;
} ListNode;

typedef int (* ComparisonFunction)(void *, void *, void *);
typedef void (* PrintFunction)(void *);


int insertItem(ListNode **theList, void *data, ComparisonFunction compare);
void *findItem(ListNode *theList, void *item, ComparisonFunction compare);
void *removeItem(ListNode **theList, void *item, ComparisonFunction compare);
void *removeNthItem(ListNode **theList, int pos);
void *findNthItem(ListNode *theList, int pos);
int printList(ListNode *theList, PrintFunction print);


#endif //OS_HW_2_LIST_KSCHNE11_NLMILAZZ_H
