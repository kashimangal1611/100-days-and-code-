// Q69: Find the second largest element in an array.

#include <stdio.h>

int main() {
    int arr[100], n, i;
    int first, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if(n < 2) {
        printf("Second largest does not exist.\n");
        return 0;
    }

    first = second = -99999; // very small numbers

    for(i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first; 
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if(second == -99999)
        printf("All elements are equal, no second largest.\n");
    else
        printf("Second largest element = %d\n", second);

    return 0;
}


/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/