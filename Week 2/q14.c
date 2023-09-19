// Recursive function to delete the first instance of a given value
// from a linked list, if it exists

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
} Node;

typedef Node *List;

// Recursive Solution
List listDelete(List l, int value) {

    // base case
    if (l == NULL) {
        return NULL;
    }

    List restOfList = l->next;
    // recursive case
    if (l->data == value) {
        free(l);
        return restOfList;
    }
    // talk about doing `return listDelete(restOfList, value);` instead of below two lines
    l->next = listDelete(restOfList, value);
    return l;
}
