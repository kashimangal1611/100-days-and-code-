// Q37: Write a program to find the LCM of two numbers.


#include <stdio.h>

int main() {
    int num1, num2, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Start from the bigger number
    lcm = (num1 > num2) ? num1 : num2;

    // Keep increasing until divisible by both
    while (1) {
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
            break;
        }
        lcm++;
    }

    return 0;
}


/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/