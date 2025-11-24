// Q85: Reverse a string.

#include <stdio.h>

int main() {
    char str[100];
    int len = 0;

    scanf("%s", str);   // input string (no spaces)

    // find length
    while(str[len] != '\0') {
        len++;
    }

    // print in reverse
    for(int i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}


/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/