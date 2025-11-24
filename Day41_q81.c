// Q81: Count characters in a string without using built-in length functions.

#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    scanf("%[^\n]", str); // read string including spaces

    // count characters manually
    while(str[count] != '\0') {
        count++;
    }

    printf("%d", count);

    return 0;
}


/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/