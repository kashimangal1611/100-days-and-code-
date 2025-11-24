// Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>

int main() {
    char name[100];
    int i, lastSpace = -1;

    printf("Enter your name: ");
    gets(name);

    // find last space (before surname)
    for(i = 0; name[i] != '\0'; i++) {
        if(name[i] == ' ')
            lastSpace = i;
    }

    // print initials
    printf("%c.", name[0]);
    for(i = 0; i < lastSpace; i++) {
        if(name[i] == ' ')
            printf("%c.", name[i+1]);
    }

    // print surname
    printf(" %s", &name[lastSpace + 1]);

    return 0;
}


/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/