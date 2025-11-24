//Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, n = 0, temp;
    int result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count digits
    temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    // Calculate sum of digits^n
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        int power = 1;

        // compute remainder^n using loop (no pow function)
        for (int i = 0; i < n; i++) {
            power *= remainder;
        }

        result += power;
        temp /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}


/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/