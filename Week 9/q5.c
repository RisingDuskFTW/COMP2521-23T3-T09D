#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "HashTable.h"

// Check if an array contains 3 integers that sum to S
bool threeSum(int arr[], int size, int sum) {
	HashTable ht = HashTableNew();

	for (int i = 0; i < size; i++) {
		if (HashTableContains(ht, sum - arr[i])) {
			HashTableFree(ht);
			return true;
		}

		for (int j = 0; j < i; j++) {
			HashTableInsert(ht, arr[i] + arr[j], 0);
		}
	}

	HashTableFree(ht);
	return false;
}
