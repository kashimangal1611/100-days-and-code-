// Write a program to assign grades based on a percentage input.

#include<stdio.h>
int main(){
    int percentage;
    printf("Enter the percentage : "); // percentage input  
    scanf("%d",&percentage); 

    //Grading system 

    if(percentage>=90 && percentage<=100){
        printf("Grade A");                // Grade A
    }
    else if(percentage>=80 && percentage<=90){
        printf("Grade B");               // Grade B
    }
    else if(percentage>=70 && percentage<=80){
        printf("Grade C");               // Grade C
    }
    else if(percentage>=60 && percentage<=70){
        printf("Grade D");               // Grade D
    }
    else if (percentage>=50 && percentage<=60){
        printf("Grade E");               // Grade E
    }
    else if (percentage<=50) {
        printf("Grade F");               // Grade F
    }
        return 0;
}