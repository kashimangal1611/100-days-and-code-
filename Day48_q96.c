// Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, start = 0;

    gets(str);

    for (i = 0; i <= strlen(str); i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            int end = i - 1;

            // reverse the word
            while (start < end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }

            start = i + 1; // move to next word
        }
    }

    printf("%s", str);
    return 0;
}


/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/