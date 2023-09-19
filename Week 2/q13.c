// Iterative and recursive function to check if a linked list is sorted

#include <stdio.h>
#include <stdbool.h>

typedef struct node {
	int data;
	struct node *next;
} Node;

typedef Node *List;

// Solution 1: Iterative Solution
bool listIsSorted(List l) {
	if (l == NULL) {
		return true;
	}

	for (Node *curr = l; curr->next != NULL; curr = curr->next) {
		if (curr->data > curr->next->data) {
			return false;
		}
	}
	return true;
}

// Solution 2: Recursive Solution
bool listIsSorted(List l) {
	// base case 1: an empty list is sorted
	if (l == NULL) {
		return true;

	// base case 2: a list with one item is sorted
	} else if (l->next == NULL) {
		return true;

	// if first item is greater than second item, list is not sorted
	} else if (l->data > l->next->data) {
		return false;

	// recursive case: check whether rest of the list is sorted
	} else {
		return listIsSorted(l->next);
	}
}
