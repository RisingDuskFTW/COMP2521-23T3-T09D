// Different tree traversals

#include <stdio.h>

typedef struct BSTNode {
	int value;
	struct BSTNode *left;
	struct BSTNode *right;
} BSTNode;

typedef struct BSTNode *BSTree;

// Traverse and print the BST In-Order (LNR)
void BSTreeInOrder(BSTree t) {
    if (t != NULL) {
        return;
    }
    BSTreeInOrder(t->left);
    printf("%d\n", t->value);
    BSTreeInOrder(t->right);
}

// Traverse and print the BST Pre-Order (NLR)
void BSTreePreOrder(BSTree t) {
    if (t != NULL) {
        return;
    }
    printf("%d\n", t->value);
    BSTreePreOrder(t->left);
    BSTreePreOrder(t->right);
}

// Traverse and print the BST In-Order (LRN)
void BSTreePostOrder(BSTree t) {
    if (t != NULL) {
        return;
    }
    BSTreePostOrder(t->left);
    BSTreePostOrder(t->right);
    printf("%d\n", t->value);
}

// BSTreeLevelOrder is a lab exercise
