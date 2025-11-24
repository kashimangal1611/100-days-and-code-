// Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>
int main() {
    int n, i, x, pos;
    int a[100];

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter %d elements (sorted): ", n);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &x);

    // find position
    pos = n;
    for(i=0;i<n;i++) {
        if(x < a[i]) {
            pos = i;
            break;
        }
    }

    // shift right
    for(i=n;i>pos;i--) {
        a[i] = a[i-1];
    }
    a[pos] = x;
    n++;

    printf("Array after insertion:\n");
    for(i=0;i<n;i++) {
        printf("%d ", a[i]);
    }

    return 0;
}


/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/