/*10.	Split a Sentence into Words
Write a C program to input a sentence and separate it into individual words using strtok(). Display each word on a separate line and count the total number of words.
*/
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[100];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    // Remove newline character from the end of the sentence
    sentence[strcspn(sentence, "\n")] = '\0';
    
    // Split the sentence into words
    char *word = strtok(sentence, " ");
    int count = 0;
    
    while (word != NULL) {
        printf("Word %d: %s\n", ++count, word);
        word = strtok(NULL, " ");
    }
    
    printf("Total number of words: %d\n", count);
    return 0;
}