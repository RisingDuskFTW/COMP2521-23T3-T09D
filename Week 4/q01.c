// Using a Set ADT

#include <stdio.h>
#include "Set.h"

// a) Find the number of integers in arr that occur an odd number of times
int numOddOccurrences(int arr[], int size) {
    Set s = SetNew();

    for (int i = 0; i < size; i++) {
        if (SetContains(s, arr[i])) {
            SetDelete(s, arr[i]);
        } else {
            SetInsert(s, arr[i]);
        }
    }
    int count = SetSize(s);
    SetFree(s);
    return count;
}

// b) Find the number of integers in arr that occur exactly once
int numSingleOccurrences(int arr[], int size) {
    Set once = SetNew();
    Set moreThanOnce = SetNew();

    for (int i = 0; i < size; i++) {
        if (SetContains(once, arr[i])) {
            SetDelete(once, arr[i]);
            SetInsert(moreThanOnce, arr[i]);
        } else if (!SetContains(moreThanOnce, arr[i])) {
            SetInsert(once, arr[i]);
        }
    }
    int count = SetSize(once);
    SetFree(once);
    SetFree(moreThanOnce);
    return count;
}
