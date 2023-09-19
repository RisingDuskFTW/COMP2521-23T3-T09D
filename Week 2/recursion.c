#include <stdio.h>
#include <assert.h>

int factorial(int num);

int main(void) {

    printf("%d\n", factorial(5));
    printf("%d\n", factorial(8));
    printf("%d\n", factorial(12));
    printf("%d\n", factorial(0));
    printf("%d\n", factorial(1));

    return 0;
}

// recursive function to calculate the factorial of a number
int factorial(int num) {
    assert(num >= 0);

    // Base case
    if ((num == 0) || (num == 1)) {
        return 1;
    }

    // Recursive case
    return num * factorial(num - 1);
}
