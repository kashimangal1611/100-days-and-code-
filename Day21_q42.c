// Q42: Write a program to check if a number is a perfect number.

#include<stdio.h>
int main(){
    int n , sum = 0;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(int i = 1 ; i < n ; i++){
        if(n%i==0){
            sum = sum + i;
        }
    }

    // check if the number is perfect or not
    if(sum==n){
        printf("perfect number");
    } 
    else{
        printf("Not a perfect number");
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/