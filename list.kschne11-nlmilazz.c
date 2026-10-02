//
// Created by Kentd on 9/23/2026.
//
#include "list.kschne11-nlmilazz.h"

#include <stdio.h>
#include <stdlib.h>

int insertItem(ListNode **theList, void *data, ComparisonFunction compare) {
    ListNode *newNode = malloc(sizeof(ListNode));

    newNode->data = data;
	newNode->next = NULL;

    ListNode *currNode = *theList;
    ListNode *prevNode = NULL;
	if (*theList == NULL) {
		*theList = newNode;
		return 0;
	}

    while (currNode != NULL) {
    	int result = 0;
    	compare(newNode->data, currNode->data, &result);

    	if (result != 1 || result != 0) {
    		break;
    	}

        prevNode = currNode;
        currNode = currNode->next;
    }

	if (prevNode == NULL) {
		newNode->next = *theList;
		*theList = newNode;
	} else {
		prevNode->next = newNode;
		newNode->next = currNode;
	}

    return 0;
};


void *findItem(ListNode *theList, void *item, ComparisonFunction compare) {
	ListNode *curr = theList;
	while (curr != NULL) {
		int comparison_result = 0;
		compare(curr->data, item, &comparison_result);
		if (comparison_result == 0) {
			return curr->data;
		}
		if (curr->next == NULL) {
			break;
		}
		curr = curr->next;
	}
	return NULL;
}


void *removeItem(ListNode **theList, void *item, ComparisonFunction compare) {
	if (findItem(*theList, item, compare) == NULL) {
		return NULL;
	}
	ListNode *prevNode = *theList;
	int result = 0;
	for (ListNode *currNode = *theList; currNode != NULL; currNode = currNode->next) {
		compare(currNode->data, item, &result);
		if (result == 0) {
			prevNode->next = currNode->next;
			return currNode->data;
		}
		prevNode = currNode;
	}
	return NULL;
}

void *removeNthItem(ListNode **theList, int pos) {
	int index = 0;
	ListNode *prevNode = *theList;
	for (ListNode *currNode = *theList; currNode != NULL; currNode = currNode->next) {
		if (pos == index) {
			prevNode->next = currNode->next;
			return currNode->data;
		}
		prevNode = currNode;
		index++;
	}
	return NULL;
}

void *findNthItem(ListNode *theList, int pos) {
	ListNode *curr = theList;

	for (int i = 0; i < pos; i++) {
		if (curr == NULL) {
			return NULL;
		}
		curr = curr->next;
	}
	if (curr == NULL) {
		return NULL;
	}
	return curr->data;
}

int printList(ListNode *theList, PrintFunction print) {
	for (ListNode *currNode = theList; currNode != NULL; currNode = currNode->next) {
		print(currNode->data);
	}
	return 0;
}
