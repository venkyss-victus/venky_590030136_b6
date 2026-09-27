/*2.	Manual String Copy
Write a C program to copy one string into another character array manually. 
Display both the original and copied strings. Do not use strcpy().
*/
#include <stdio.h>
int main() {
    char source[100], destination[100];
    printf("Enter a string to copy: ");
    fgets(source, sizeof(source), stdin); // Read string input from user

    // Copy the string manually
    int i;
    for (i = 0; source[i] != '\0'; i++) {
        destination[i] = source[i];
    }
    destination[i] = '\0'; // Null-terminate the copied string

    printf("Original string: %s", source);
    printf("Copied string: %s", destination);
    
    return 0;
}