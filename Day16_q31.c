// Q31: Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int n, binary = 0, place = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("0");
        return 0;
    }

    // convert to binary in reverse order
    while (n > 0) {
        binary = binary + (n % 2) * place;
        n = n / 2;
        place = place * 10;
    }

    printf("Binary = %d", binary);

    return 0;
}

    


/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/