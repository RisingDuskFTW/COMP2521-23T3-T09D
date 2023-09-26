#include <stdio.h>
#include <stdlib.h>

// Time Complexity: O(n)
int f1(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += i % 3;
    }
    return sum;
}

// Time Complexity: O(log(n))
int f2(int n) {
    if (n <= 0) {
        return 0;
    }
    return n + f2(n / 3);
}

// Time Complexity: O(n * log(n))
int f3(int n) {
    int count = 0;
    int sum = 0;
    while (count < (n / 2)) {   // O(n)
        sum += f2(count);       // O(log(n))
        count++;
    }
    return sum;
}

// f1 = O(n)
// f2 = O(log(n))
// f3 = O(n * log(n))
void f4(int n) {
    // Time Complexity: O(n)
    int sum = f1(n) + f2(n);

    // Time Complexity: O(n * log(n))
    for (int i = 0; i < n; i++) {
        f2(i);
    }

    // Time Complexity: O((log(n))^2)
    for (int i = 0; i < n; i *= 2) {
        f2(i);
    }

    // Time Complexity: O(n^2 * log(n))
    for (int i = 0; i < n; i++) {       // O(n)
        f1(i);                          // O(n)
        for (int j = 0; j < n; j++) {   // O(n)
            f2(j);                      // O(log(n))
        }
    }

    // Time Complexity: O(n^2)
    for (int i = 0; i < n; i++) {           // O(n)
        f1(i);                              // O(n)
        for (int j = 0; j < n; j *= 2) {    // O(log(n))
            f2(j);                          // O(log(n))
        }
    }

    // Time Complexity: o(n^2 * (log(n))^2)
    for (int i = 0; i < n; i++) {           // O(n)
        f1(i);                              // O(n)
        for (int j = 0; j < n; j *= 2) {    // O(log(n))
            f3(j);                          // O(n * log(n))
        }
    }
}
