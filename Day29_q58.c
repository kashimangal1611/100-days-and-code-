// Q58: Find the maximum and minimum element in an array.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the no. of elements : ");
    scanf("%d",&n);

    int arr[n];
    for(int i = 0 ; i < n ; i++){
        int a = i + 1 ;
        printf("Enter %d element : ",a);
        scanf("%d",&arr[i]);
    }


    int max = arr[0],min = arr[0]; // assume first element is both max and min 

    for(int i = 0 ; i < n ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("Max = %d\nMin = %d",max,min);
    return 0;
}

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/