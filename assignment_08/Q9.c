/*Write a C program to input a sentence and a word. Use strstr() to determine whether 
the word occurs in the sentence. If found, display the starting position of its first occurrence*/
#include <stdio.h>
#include <string.h>
int main() {
    char sentence[100], word[50];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    printf("Enter a word to search for: ");
    fgets(word, sizeof(word), stdin);
    // Remove newline characters from the end of the strings
    sentence[strcspn(sentence, "\n")] = '\0';
    word[strcspn(word, "\n")] = '\0';
    char *ptr = strstr(sentence, word);
    if (ptr != NULL) {
        int position = ptr - sentence; // Calculate the position of the word
        printf("Word '%s' found at position: %d\n", word, position);
    } else {
        printf("Word '%s' not found in the sentence.\n", word);
    }
    return 0;
}