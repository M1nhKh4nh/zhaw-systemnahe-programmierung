//
// Created by Minh Khanh Nguyen on 27.02.2024.
//
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int currentCharacter;
    int lastCharacter;
    int characterCount = 0;
    int wordCount = 0;
    printf("Enter a text: ");
    while((currentCharacter = getchar()) != '\n') {
        if(currentCharacter != '\t' && currentCharacter != ' ') {
            characterCount++;
        } else if(lastCharacter != '\t' && lastCharacter != ' ') {
            wordCount++;
        }
        lastCharacter = currentCharacter;
    }

    if(lastCharacter != '\t' && lastCharacter != ' ') {
        wordCount++;
    }

    printf("Character count: %i\n", characterCount);
    printf("Word count: %i", wordCount);

    return EXIT_SUCCESS;
}