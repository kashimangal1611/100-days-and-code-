// Q95: Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];

    gets(str1);
    gets(str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Not rotation");
        return 0;
    }

    // join str1 with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // check if str2 is inside temp
    if (strstr(temp, str2))
        printf("Rotation");
    else
        printf("Not rotation");

    return 0;
}


/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/