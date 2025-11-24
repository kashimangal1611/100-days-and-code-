// Write a program to print numbers from 1 to n.

#include<stdio.h>
int main(){
    int n ;   //  n as a variable 
    printf("Enter a number : ");  // Taking user input 
    scanf("%d",&n);


    for(int i = 1 ; i<=n ;){     // using for loops to print from 1 to n 
        printf("%d\n",i);
        i++ ;                   // condition of increment
    }
    return 0;
}