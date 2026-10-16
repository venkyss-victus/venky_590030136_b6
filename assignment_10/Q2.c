/*2. Fibonacci Series
Write a C program using recursion to print the first n terms of the Fibonacci series
*/
#include <stdio.h>

int fibonacci(int n) {

    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 0;
    }

    printf("Fibonacci Series up to %d terms:\n", n);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
