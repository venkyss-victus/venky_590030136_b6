/*5.	Character-Frequency Analysis
Write a C program to count the frequency of every character in a string. Treat uppercase and lowercase forms of a letter as the same character, and do not display the same character more than once.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int freq[256] = {0}; // Array to store frequency of each character

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Convert all characters to lowercase and count frequencies
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
        freq[(unsigned char)str[i]]++;
    }

    // Display frequencies of each character
    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("'%c': %d\n", i, freq[i]);
        }
    }

    return 0;
}