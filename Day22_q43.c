// Q43: Write a program to check if a number is a strong number.

#include <stdio.h>

// function to calculate factorial of a digit
int factorial(int d) {
    int fact = 1;
    for (int i = 1; i <= d; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n, temp, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (temp > 0) {
        int digit = temp % 10;         // extract last digit
        sum = sum + factorial(digit);  // add factorial of digit
        temp = temp / 10;
    }

    if (sum == n)
        printf("%d is a Strong Number\n", n);
    else
        printf("%d is NOT a Strong Number\n", n);

    return 0;
}


/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/