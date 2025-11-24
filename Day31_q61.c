//Q61: Search for an element in an array using linear search.

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


    int found = 0;
    int search = 0;
    printf("enter the element to be searched : ");
    scanf("%d",&search);


    for(int i = 0 ; i < n ; i++){
        if(arr[i]==found){
            int a = i + 1 ;
            printf("Found in index %d",a);
            found = 1 ;
            break;
        }
    }

    if(!found){
        printf("-1");
    }
    return 0;
}



/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/