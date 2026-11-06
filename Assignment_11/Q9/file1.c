/*
9. Modifying a Global Variable Using extern

Write a C program using two source files in which one
source file defines a global variable and another source
file modifies it using extern.

File 1: Defines the global variable.
*/

#include <stdio.h>

int number = 10;

void modify();

int main() {
    printf("Before modification = %d\n", number);

    modify();

    printf("After modification = %d\n", number);

    return 0;
}