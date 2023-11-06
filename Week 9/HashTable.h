// Interface file for a Hash Table ADT

#include <stdbool.h>

typedef struct hashTable *HashTable;

HashTable HashTableNew(void);

void HashTableFree(HashTable ht);

void HashTableInsert(HashTable ht, int key, int value);

bool HashTableContains(HashTable ht, int key);

int  HashTableGet(HashTable ht, int key);

void HashTableDelete(HashTable ht, int key);

int  HashTableSize(HashTable ht);
