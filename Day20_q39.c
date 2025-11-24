// Q39: Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int n, digit;
    int product = 1;
    int hasOdd = 0;  // flag to check if odd digit exists

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("The number has no odd digits.\n");
        return 0;
    }

    while (n > 0) {
        digit = n % 10;   // extract last digit
        if (digit % 2 != 0) {   // check if digit is odd
            product *= digit;
            hasOdd = 1;
        }
        n /= 10;   // remove last digit
    }

    if (hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("The number has no odd digits.\n");

    return 0;
}



/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/