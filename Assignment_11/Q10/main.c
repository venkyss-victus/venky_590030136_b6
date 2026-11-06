/*
10. Modular Program Using static and extern

File 2: Accesses the bank balance only through functions
using extern.
*/

#include <stdio.h>

extern void deposit(float amount);
extern void withdraw(float amount);
extern void displayBalance();

int main() {
    displayBalance();

    deposit(500);
    printf("After deposit:\n");
    displayBalance();

    withdraw(200);
    printf("After withdrawal:\n");
    displayBalance();

    return 0;
}