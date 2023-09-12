// Representation 1
struct node {
    int value;
    struct node *next;
};

int listLengthNode(struct node *list);

// Function prototype to insert a number into a list at a given position
struct node *insertNode(struct node *list, int num, int pos);
// replace `struct node *` with `List `



// Representation 2
struct node2 {
    int value;
    struct node2 *next;
};

struct list {
    struct node2 *head;
};

int listLengthList(struct list *list);

// Function prototype to insert a number into a list at a given position
void insertList(struct list *list, int num, int pos);
