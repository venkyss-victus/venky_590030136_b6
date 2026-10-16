#include <stdio.h>

long long factorial(int p1) {
    if (p1 == 0 || p1 == 1) {
        return 1;
    }
    return p1 * factorial(p1 - 1);
}

int main() {
    int p1;
    
    printf("enter the number to find the factorial of it: ");
    scanf("%d", &p1);
    
    if (p1 < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        printf("the factorial of the the given number is: %lld\n", factorial(p1));
    }
    
    return 0;
}
