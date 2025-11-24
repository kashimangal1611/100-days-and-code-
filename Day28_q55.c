// Q55: Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d: ", n);

    for (i = 2; i <= n; i++) {       // check each number from 2 to n
        int a = 0;                 // assume i is prime
        for (j = 2; j < i; j++) {    // check divisibility
            if (i % j == 0) {        // divisible → not prime
                a = 1;
                break;
            }
        }
        if (a == 0)                // if not divisible by any → prime
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}


/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/