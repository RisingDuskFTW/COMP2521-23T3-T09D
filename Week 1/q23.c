// Function to delete the first instance of a given value
// from a linked list, if it exists

#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node *next;
};

struct list {
    struct node *head;
};

// Solution:
void listDelete(struct list *l, int value) {
    // Empty list
    if (l->head == NULL) {
        return;
    }

    // Delete the first element
    if (l->head->value == value) {
        struct node *temp = l->head;
        l->head = l->head->next;
        free(temp);
        return;
    }

    // General Case
    struct node *curr = l->head;
    struct node *prev = NULL;
    while (curr != NULL) {
        if (curr->value == value) {
            prev->next = curr->next;
            free(curr);
            return;
        }
        prev = curr;
        curr = curr->next;
    }
}
