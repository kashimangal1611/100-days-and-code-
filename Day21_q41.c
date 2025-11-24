// Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int num, n, first, last, pow = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    n = num;
    last = n % 10;           // get last digit

    while (n >= 10) {        // loop to get first digit
        n = n / 10;
        pow = pow * 10;      // keep track of place value
    }
    first = n;               // first digit

    // remove first and last digit, then rebuild
    int middle = num % pow;  
    middle = middle / 10;    

    int swapped = last * pow + middle * 10 + first;

    printf("After swapping: %d\n", swapped);

    return 0;
}


/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/