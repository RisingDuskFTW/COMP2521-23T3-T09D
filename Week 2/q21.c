// Program that takes a string and returns if its a palindrome or not

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char *s);

int main(int argc, char **argv) {
    if (argc == 2) {
        if (isPalindrome(argv[2])) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}

// Time Complexity: O(n)
bool isPalindrome(char *s) {
    int start = 0;
    int end = strlen(s) - 1;
    while (start < end) {           // O(n/2)
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
