// Write a program to input three numbers and find the largest among them using if–else.

#include<stdio.h>
int main(){
    int a,b,c; // three number from input user
    
    printf("Enter first number : "); // first number input 
    scanf("%d",&a);
    printf("Enter second number : "); // second number input
    scanf("%d",&b);
    printf("Enter third number : "); // third number input 
    scanf("%d",&c);

    // condition to check the largest number among three  

    if(a >= b && a >= c){
        printf("%d is the largest number",a);
    }
    else if(b >= a && c >= a){
        printf("%d is the largest number",b);
    }
    else{
        printf("%d is the largest number",c);
    }
    return 0;
}