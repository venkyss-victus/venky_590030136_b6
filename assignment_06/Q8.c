/*Series Evaluation
Write a C program to input x and n and evaluate the following series:
 S = x − (x^2)/2! + (x^3)/3! − (x^4)/4! +⋯+(−1)^(n+1) (x^n)/n!.
Calculate powers and factorials using loops without using pow() or a separate user-defined function.
*/
#include <stdio.h>
int main()
{
    int x, n, i, j;
    double S = 0.0, term, factorial, power;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        // Calculate power x^i
        power = 1;
        for(j = 1; j <= i; j++) {
            power *= x;
        }
        // Calculate factorial i!
        factorial = 1;
        for(j = 1; j <= i; j++) {
            factorial *= j;
        }
        // Calculate term and add to sum
        term = (i % 2 == 0 ? -1 : 1) * (power / factorial);
        S += term;
    }
    printf("The value of the series S is: %.6lf\n", S);
    return 0;
}