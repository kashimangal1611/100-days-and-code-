
//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.



#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character : ");    // User input 
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') // condition for uppercase
    {
        printf("Uppercase alphabet");
    }
    else if (ch >= 'a' && ch <= 'z') // condition for lowercase
    {
        printf("Lowercase alphabet");
    }
    else if (ch >= '0' && ch <= '9') // condition for digits
    {
        printf("Digit");
    }
    else
    {
        printf("Special character"); // above cover all character's other than special case 
    }
    return 0;
}