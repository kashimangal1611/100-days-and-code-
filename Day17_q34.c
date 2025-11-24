// Q34: Write a program to check if a number is prime.

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    int a =0;
    for(int i = 2 ; i<=n-1 ; i++){
        if(n%2==0){
            a = 1;
            break;
        }
    }
    if(n==1){
        printf("1 is neither Prime nor Composite\n");
    }
    else if(a==0){
        printf("Prime\n");
    }
    else{
        printf("Not Prime ");
    }
    return 0;
}
/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/