/*
3. Number Operations
Using pass-by-value functions, find the sum of digits,
count the digits, and reverse an integer.
Also determine whether the number is a palindrome.
*/

#include <stdio.h>

int sumDigits(int n)
{
    int sum = 0;

    if (n < 0)
        n = -n;

    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int countDigits(int n)
{
    int count = 0;

    if (n == 0)
        return 1;

    if (n < 0)
        n = -n;

    while (n != 0)
    {
        count++;
        n /= 10;
    }

    return count;
}

int reverse(int n)
{
    int rev = 0, digit;

    while (n != 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    return rev;
}

int palindrome(int n)
{
    return n == reverse(n);
}

int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Sum of digits = %d\n", sumDigits(n));
    printf("Number of digits = %d\n", countDigits(n));
    printf("Reverse = %d\n", reverse(n));

    if (palindrome(n))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}