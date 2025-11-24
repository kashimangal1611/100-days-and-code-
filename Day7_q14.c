// Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include<stdio.h>
int main(){
    int x; // user input character as x
    char a,e,i,o,u; // Vowels
    printf("Enter a character : ");
    scanf("%d",&x);

    // Veirfy process of Vowels and consonant

    if(x==a || x==e || x==i || x==o || x==u){ // checking 
        printf("the character is a vowel");
    }
    else{
        printf("The character is a consonant");
    }
    return 0;
}