/*
2. Number Classification
Write pass-by-value functions to check whether a number is even or odd,
positive, negative or zero, prime, and perfect.
Display a complete classification report.
*/

#include <stdio.h>

int evenOdd(int n)
{
    return n % 2 == 0;
}

int sign(int n)
{
    if (n > 0)
        return 1;
    else if (n < 0)
        return -1;
    else
        return 0;
}

int prime(int n)
{
    int i;

    if (n <= 1)
        return 0;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int perfect(int n)
{
    int i, sum = 0;

    if (n <= 0)
        return 0;

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }

    return sum == n;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\n--- Classification Report ---\n");

    if (evenOdd(n))
        printf("Even\n");
    else
        printf("Odd\n");

    if (sign(n) == 1)
        printf("Positive\n");
    else if (sign(n) == -1)
        printf("Negative\n");
    else
        printf("Zero\n");

    if (prime(n))
        printf("Prime\n");
    else
        printf("Not Prime\n");

    if (perfect(n))
        printf("Perfect Number\n");
    else
        printf("Not a Perfect Number\n");

    return 0;
}