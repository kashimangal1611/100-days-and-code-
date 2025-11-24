// Q97: Print the initials of a name.

#include <stdio.h>

int main() {
    char name[50];
    int i;

    printf("Enter your name: ");
    gets(name);

    printf("%c.", name[0]);  

    for(i = 0; name[i] != '\0'; i++) {
        if(name[i] == ' ')           
            printf("%c.", name[i+1]); 
    }

    return 0;
}


/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/