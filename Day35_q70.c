// Q70: Rotate an array to the right by k positions.

#include <stdio.h>

int main() {
    int arr[100], n, k, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (no. of rotations): ");
    scanf("%d", &k);

    // To handle k > n
    k = k % n;

    // Rotate k times
    for(j = 0; j < k; j++) {
        temp = arr[n-1];
        for(i = n-1; i > 0; i--) {
            arr[i] = arr[i-1];
        }
        arr[0] = temp;
    }

    printf("Array after rotation: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/