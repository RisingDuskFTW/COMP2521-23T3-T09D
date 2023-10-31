// Interface to the Set ADT

#ifndef SET_H
#define SET_H

#include <stdbool.h>
#include <stdio.h>

typedef int Item;

typedef struct set *Set;

/**
 * Creates a new empty set
 * Complexity: O(1)
 */
Set SetNew(void);

/**
 * Frees all resources associated with the given set
 * Complexity: O(n)
 */
void SetFree(Set s);

/**
 * Adds an item to the set
 * Complexity: O(1)
 */
void SetAdd(Set s, Item it);

/**
 * Removes an item from the set and returns it
 * Assumes that the set is not empty
 * Complexity: O(1)
 */
Item SetRemove(Set s, Item it);

/**
 * Returns true if the set contains a given item, and false otherwise
 * Complexity: O(n)
 */
bool SetContains(Set s, Item it);

/**
 * Gets the size of the given set
 * Complexity: O(1)
 */
int SetSize(Set s);

/**
 * Returns true if the set is empty, and false otherwise
 * Complexity: O(1)
 */
bool SetIsEmpty(Set s);

/**
 * Prints the set to the given file with items space-separated
 * Complexity: O(n)
 */
void SetDump(Set s, FILE *fp);

#endif
