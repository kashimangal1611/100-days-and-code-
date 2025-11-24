// Q30: Write a program to reverse a given number.

#include <stdio.h>

int main() {
    int n, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        reverse = reverse * 10 + n % 10;  // take last digit and add to reverse
        n = n / 10;               // remove last digit
    }

    printf("Reversed number = %d", reverse);
    return 0;
}


     




/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/