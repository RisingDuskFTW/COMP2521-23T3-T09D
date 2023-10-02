// Count the number of nodes greater than a given value in a BSTree

#include <stdio.h>

struct node {
	int value;
	struct node *left;
	struct node *right;
};

int BSTreeCountGreater(struct node *t, int val) {
    if (t == NULL) {
        return 0;
    }

    if (t->value > val) {
        return 1 + BSTreeCountGreater(t->left, val) + BSTreeCountGreater(t->right, val);
    }
    return BSTreeCountGreater(t->right, val);
}
