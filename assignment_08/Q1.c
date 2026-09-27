/*1.	Manual String Length
Write a C program to find the length of a string manually by traversing it until the null character '\0' is encountered. Do not use strlen().
*/
#include <stdio.h>
int main() {
    char str[100];
    int length = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read string input from user  
    // Traverse the string until the null character is encountered
    for (int i = 0; str[i] != '\0'; i++) {
        length++;
    }
    printf("Length of the string: %d\n", length);
    return 0;
}