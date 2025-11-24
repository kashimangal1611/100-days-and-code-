/* Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

*/

#include <stdio.h>

int main() {
    // Group 1
    printf("*\n\n");

    // Group 2
    for(int i = 0; i < 4; i++)
        printf("*\n");
    printf("\n");

    // Group 3
    for(int i = 0; i < 5; i++)
        printf("*\n");
    printf("\n");

    // Group 4
    for(int i = 0; i < 3; i++)
    printf("*\n");

    return 0;
}


/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/