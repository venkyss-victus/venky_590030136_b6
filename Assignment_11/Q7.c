/*
7. Register Storage Class

Write a C program using the register storage class to
calculate the sum of the elements of an array.
*/

#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int sum = 0;

    register int i;

    for (i = 0; i < 5; i++) {
        sum = sum + arr[i];
    }

    printf("Sum = %d\n", sum);

    return 0;
}