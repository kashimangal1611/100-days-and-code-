// Write a program to print the sum of the first n odd numbers.


#include<stdio.h>
int main(){


    int n ;  // n as a variable 
    printf("Enter a number : "); // taking user input of n variable 
    scanf("%d",&n);

    for(int i = 1 ; i<=n ;){   // for loops condition to printf odd numbers till n 
        printf("%d\n",i);
        i = i + 2 ;
    }
    return 0;
}