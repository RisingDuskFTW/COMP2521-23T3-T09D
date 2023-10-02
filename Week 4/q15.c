// Find the level that a given value is in the tree

#include <stdio.h>

struct node {
	int value;
	struct node *left;
	struct node *right;
};

int BSTNodeLevel(struct node *t, int key) {
    if (t == NULL) {
        return -1;
    }
    if (t->value == key) {
        return 0;
    }
    if (t->value < key) {
        int level = BSTNodeLevel(t->left, key);
        return (level == -1) ? -1 : level + 1;
    }
    int level = BSTNodeLevel(t->right, key);
    return (level == -1) ? -1 : level + 1;
}
