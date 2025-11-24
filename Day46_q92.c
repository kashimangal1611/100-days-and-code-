// Q92: Find the first repeating lowercase alphabet in a string.

// Q92: Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    char str[100];
    int i, j, found = 0;

    printf("Enter a string: ");
    gets(str);  // taking string input

    // check each character
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {   // only lowercase letters
            for(j = i + 1; str[j] != '\0'; j++) {
                if(str[i] == str[j]) {
                    printf("First repeating lowercase alphabet: %c\n", str[i]);
                    found = 1;
                    break;
                }
            }
        }
        if(found)
            break;
    }

    if(!found)
        printf("No repeating lowercase alphabet found.\n");

    return 0;
}


/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/