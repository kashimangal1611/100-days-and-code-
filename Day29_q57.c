// Q57: Find the sum of array elements.

#include<stdio.h>
int main(){
    int n ;
    printf("Enter the no. of elements to be stored : ");
    scanf("%d",&n);

    //filling array 

    int arr[n];
    int sum = 0;  // decalring sum variable 

    for(int i = 0 ; i < n ; i++){
        int a = i + 1 ;     // using variable to not print 0 element 
        printf("Enter %d elements : ",a);
        scanf("%d",&arr[i]);

        sum = sum + arr[i];    // adding every value 
    }

    printf( "The sum of all elements : %d",sum); // printing sum 
    return 0;
}

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/