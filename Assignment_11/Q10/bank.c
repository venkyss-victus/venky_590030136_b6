/*
10. Modular Program Using static and extern

Create a two-file C program for managing a bank balance.
The balance must be accessible only through functions,
using static and extern appropriately.

File 1: Contains the static bank balance and functions.
*/

#include <stdio.h>

static float balance = 1000.0;

void deposit(float amount) {
    balance = balance + amount;
}

void withdraw(float amount) {
    balance = balance - amount;
}

void displayBalance() {
    printf("Bank Balance = %.2f\n", balance);
}