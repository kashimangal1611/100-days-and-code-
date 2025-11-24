// Q94: Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin); // read full line

    for (i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] != ' ' && sentence[i] != '\n') {
            word[j++] = sentence[i];
        } else {
            word[j] = '\0'; // end of a word
            if (strlen(word) > maxLen) {
                maxLen = strlen(word);
                strcpy(longest, word);
            }
            j = 0; // reset for next word
        }
    }

    // check last word
    word[j] = '\0';
    if (strlen(word) > maxLen)
        strcpy(longest, word);

    printf("Longest word: %s\n", longest);

    return 0;
}


/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/