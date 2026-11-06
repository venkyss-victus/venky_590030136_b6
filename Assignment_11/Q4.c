/*
4. Function Call Counter Using static

Write a C program using a static local variable to count
how many times a function has been called.
*/

#include <stdio.h>

void counter() {
    static int count = 0;

    count++;
    printf("Function called %d times\n", count);
}

int main() {
    counter();
    counter();
    counter();
    counter();

    return 0;
}