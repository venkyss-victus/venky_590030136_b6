/*
5. Unique ID Generator Using static

Write a C program using a static variable to generate a
unique identification number every time a function is called.
*/

#include <stdio.h>

void generateID() {
    static int id = 1000;

    id++;
    printf("Unique ID = %d\n", id);
}

int main() {
    generateID();
    generateID();
    generateID();
    generateID();

    return 0;
}