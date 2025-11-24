
// Write a program to input a year and check whether it is a leap year or not using conditional statements.


#include<stdio.h>
int main(){
    int year; //  taking year as a variable 
    printf("Enter the year : ");
    scanf("%d",&year); // year input from user 

    // Conditions to calculate leap year
    // here 100 and 400 are used because earth takes 365.25 days in total to complete 1 revolution of sun 
    // using 4 only will add many leap years 


    if(year%400==0){
        printf("%d is a leap year ",year);
    }
    else if (year%100==0){
        printf("%d is not a leap year ",year);
    }
    else if(year%4==0){
         printf("%d is a leap year ",year);
    }
    else{
         printf("%d is not a leap year ",year);
    }

    return 0;
}