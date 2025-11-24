// Q90: Toggle case of each character in a string.

#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter a string: ");
    gets(str); // taking string input

    // loop through each character
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  // convert uppercase to lowercase
        }
        else if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // convert lowercase to uppercase
        }
    }

    printf("Toggled string: %s\n", str);

    return 0;
}


/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
