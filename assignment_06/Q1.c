/*Write a C program that accepts an integer from the user and displays
 its multiplication table from 1 to 10 using a for loop.*/
#include <stdio.h>

int main() {
    int n, i;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}