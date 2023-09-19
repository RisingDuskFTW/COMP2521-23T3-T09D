#include <stdio.h>

#define SIZE 100

// Time Complexity: O(n)
void loop1() {
    for (int i = 1; i <= SIZE; i++) {
        printf("%d\n", i);
        printf("j\n");
    }
}

// Time Complexity: O(log(n))
void loop2() {
    for (int i = 1; i <= SIZE; i *= 2) {
        printf("%d\n", i);
    }
}

int main() {
    loop1();
    printf("==========\n");
    loop2();
}
