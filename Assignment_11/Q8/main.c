/*
8. Extern Storage Class

Write a C program using two source files to demonstrate
the use of extern for accessing a global variable.
*/

#include <stdio.h>

extern int number;

int main() {
    printf("Global variable = %d\n", number);

    return 0;
}