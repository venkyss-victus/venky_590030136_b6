/*
6. Static Global Variable

Write a C program to demonstrate that a global variable
declared with static can be accessed only within the
same source file.
*/

#include <stdio.h>

static int number = 50;

void display() {
    printf("Static global variable = %d\n", number);
}

int main() {
    printf("Value in main = %d\n", number);

    display();

    return 0;
}