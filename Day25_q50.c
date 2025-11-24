/* Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
*/

#include <stdio.h>
int main() {
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j < i)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}


/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/