// Q56: Read and print elements of a one-dimensional array.

#include<stdio.h>
int main(){

    // user input for elements in array
    int n;
    printf("Enter the no. of elements to be stored : ");
    scanf("%d",&n);


    int arr[n];

      // filling array
      
    for(int i = 0 ; i < n ; i++){
        int a = i+1;
        printf("enter %d element : ",a);
        scanf("%d",&arr[i]);
    }

     // printing array
     for(int i = 0 ; i < n ; i++){
        printf("%d ",arr[i]);
     }

     return 0;

}


/*
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

*/