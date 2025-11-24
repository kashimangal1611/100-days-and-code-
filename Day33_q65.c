// Q65: Search in a sorted array using binary search.

#include <stdio.h>
int main() {
    int n, a[100], i, x;
    int low, high, mid, found=0;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter %d sorted elements: ",n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d",&x);

    low=0;
    high=n-1;

    while(low<=high) {
        mid = (low+high)/2;

        if(a[mid]==x) {
            printf("Element %d found at position %d\n",x,mid+1);
            found=1;
            break;
        }
        else if(x<a[mid]) {
            high=mid-1;
        }
        else {
            low=mid+1;
        }
    }

    if(!found) {
        printf("Element not found\n");
    }

    return 0;
}


/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/