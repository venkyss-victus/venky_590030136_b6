/*
8.	Search for a Character
Write a C program to input a string and a character. Use strchr() to find the first occurrence of the character. If found, display its position; otherwise, display an appropriate message
*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[100], ch;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a character to search for: ");
    scanf(" %c", &ch); // Note the space before %c to consume any
    // leftover newline character from previous input
    char *ptr = strchr(str, ch);
    if (ptr != NULL) {
        int position = ptr - str; // Calculate the position of the character
        printf("Character '%c' found at position: %d\n", ch, position);
    } else {
        printf("Character '%c' not found in the string.\n", ch);
    }
    return 0;
}