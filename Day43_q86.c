// Q86: Check if a string is a palindrome.

#include <stdio.h>

int main() {
    char str[100];
    int len = 0, i, isPalindrome = 1;

    scanf("%s", str);   // input string (no spaces)

    // find length
    while(str[len] != '\0') {
        len++;
    }

    // check palindrome
    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}


/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/