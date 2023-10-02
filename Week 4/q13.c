// Count the number of odd values in a BST

#include <stdio.h>

struct node {
	int value;
	struct node *left;
	struct node *right;
};

int BSTreeCountOdds(struct node *t) {
    if (t == NULL) {
        return 0;
    }

    // Using if condition
    if (t->value % 2 != 0) {
        return 1 + BSTreeCountOdds(t->left) + BSTreeCountOdds(t->right);
    } else {
        return BSTreeCountOdds(t->left) + BSTreeCountOdds(t->right);
    }

    // using modulus
    return (t->value % 0) + BSTreeCountOdds(t->left) + BSTreeCountOdds(t->right);
}
