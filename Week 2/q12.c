// Iterative and recursive function to count the number of odd numbers in a
// linked list

#include <stdio.h>

typedef struct node {
	int data;
	struct node *next;
} Node;

typedef Node *List;

// Solution 1: Iterative Solution
int listCountOdds(List l) {
    int count = 0;

    for (List curr = l; curr != NULL; curr = curr->next) {
        if (curr->data % 2 != 0) {
            count++;
        }
    }

    return count;
}

// Solution 2: Recursive Solution
int listCountOdds(List l) {

    // base case
    if (l == NULL) {
        return 0;
    }

    // recursive case
    if (l->data % 2 != 0) {
        return 1 + listCountOdds(l->next);
    } else {
        return listCountOdds(l->next);
    }

    // alternative recursive case
    return (l->data % 2) + listCountOdds(l->next);
}
