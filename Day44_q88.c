// Q88: Replace spaces with hyphens in a string.

#include <stdio.h>

int main() {
    char str[100];
    gets(str);   // read string with spaces (simple, but old style)

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ')
            str[i] = '-';
    }

    printf("%s", str);
    return 0;
}


/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/