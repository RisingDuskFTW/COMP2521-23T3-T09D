// Count the number of internal (non-leaf) nodes in a BSTree

#include <stdio.h>

struct node {
	int value;
	struct node *left;
	struct node *right;
};

int BSTreeCountInternal(struct node *t) {
    if (t == NULL) {
        return 0;
    }

    // Is a leaf node
    if ((t->left == NULL) && (t->right == NULL)) {
        return 0;
    }

    // Not a leaf node
    return 1 + BSTreeCountInternal(t->left) + BSTreeCountInternal(t->right);
}
