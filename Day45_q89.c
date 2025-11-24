// Q89: Count frequency of a given character in a string.

#include <stdio.h>

int main() {
    char str[100], ch;
    int i, count = 0;

    printf("Enter any string: ");
    gets(str); // taking string input

    printf("Enter the character whose frequency you want to find: ");
    scanf("%c", &ch); // taking character input

    // loop through the string and count the given character
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ch) {
            count++;
        }
    }

    printf("The character '%c' appears %d times in the string.\n", ch, count);

    return 0;
}


/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/