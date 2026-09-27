/*3.	Manual String Concatenation
Write a C program to concatenate two strings manually. Ensure that the destination array has enough space to hold the combined string. Do not use strcat().
*/
#include <stdio.h>
int main() {
    char str1[100], str2[100], result[200];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Concatenate the strings manually
    int i, j;
    for (i = 0; str1[i] != '\0'; i++) {
        result[i] = str1[i];
    }
    for (j = 0; str2[j] != '\0'; j++) {
        result[i + j] = str2[j];
    }
    result[i + j] = '\0'; // Null-terminate the concatenated string

    printf("Concatenated string: %s", result);
    return 0;
}