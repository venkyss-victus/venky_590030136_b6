/*Palindrome Number
Write a C program to input a positive integer and determine 
whether it is a palindrome using a loop.

*/
#include <stdio.h>
int main() 
{
    int n, m,r = 0, remainder;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    m = n;
    while (n != 0) {
        remainder = n % 10;
        r = r * 10 + remainder;
        n /= 10;
    }
    if (r == m) {
        printf("%d is a palindrome number.\n", m);
    } else {
        printf("%d is not a palindrome number.\n", m);
    }
    return 0;
}
