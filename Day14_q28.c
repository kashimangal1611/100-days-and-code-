// Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i;
    long long product = 1; // large range for big products
    int found = 0;         // to check if any even number exists

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2) {  // loop only over even numbers
        product *= i;
        found = 1;
    }

    if (found == 0) {
        printf("No even numbers between 1 and %d.\n", n);
    } else {
        printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    }

    return 0;
}
